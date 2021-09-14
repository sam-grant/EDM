void S0S12S18_full_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 13 15:26:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,3.739683,3254.625,26.53765);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1143[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1143[12] = {
   7.590169,
   14.50562,
   17.3885,
   19.92104,
   21.58809,
   22.46369,
   22.7275,
   22.43659,
   21.63527,
   20.08425,
   17.32514,
   13.55985};
   Double_t Graph0_fex1143[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1143[12] = {
   0.05082525,
   0.008663072,
   0.006284389,
   0.007182517,
   0.008335753,
   0.00939412,
   0.01048972,
   0.011853,
   0.01361695,
   0.01601526,
   0.01806858,
   0.02327131};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1143,Graph0_fy1143,Graph0_fex1143,Graph0_fey1143);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125 MeV;#sigma_{p_{y}} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01143 = new TH1F("Graph_Graph01143","",100,0,3300);
   Graph_Graph01143->SetMinimum(6.01948);
   Graph_Graph01143->SetMaximum(24.25785);
   Graph_Graph01143->SetDirectory(0);
   Graph_Graph01143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01143->SetLineColor(ci);
   Graph_Graph01143->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01143->GetXaxis()->SetRange(4,88);
   Graph_Graph01143->GetXaxis()->CenterTitle(true);
   Graph_Graph01143->GetXaxis()->SetLabelFont(42);
   Graph_Graph01143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01143->GetXaxis()->SetTitleFont(42);
   Graph_Graph01143->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV]");
   Graph_Graph01143->GetYaxis()->CenterTitle(true);
   Graph_Graph01143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01143->GetYaxis()->SetLabelFont(42);
   Graph_Graph01143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01143->GetYaxis()->SetTitleFont(42);
   Graph_Graph01143->GetZaxis()->SetLabelFont(42);
   Graph_Graph01143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01143);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
