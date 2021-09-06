void S0S12S18_full_Y_RMS_vs_p_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Aug 30 07:30:54 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,12.70955,3456.75,13.82561);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1082[6] = {
   13.62666,
   13.04918,
   12.90139,
   13.01307,
   13.0976,
   13.18129};
   Double_t Graph0_fex1082[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1082[6] = {
   0.01294145,
   0.005319283,
   0.005824478,
   0.007176687,
   0.01026749,
   0.018655};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","",100,0,3300);
   Graph_Graph01082->SetMinimum(12.82116);
   Graph_Graph01082->SetMaximum(13.71401);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01082->GetXaxis()->SetRange(0,93);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("#sigma_{y} [mm]");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
