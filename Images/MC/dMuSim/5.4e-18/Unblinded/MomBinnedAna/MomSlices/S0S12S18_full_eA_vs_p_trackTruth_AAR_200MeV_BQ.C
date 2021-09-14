void S0S12S18_full_eA_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.03550358,3411.2,0.467867);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1165[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1165[14] = {
   0.381071,
   0.0662765,
   0.03214136,
   0.02250663,
   0.01926818,
   0.01780274,
   0.01699247,
   0.01648165,
   0.01670737,
   0.01734772,
   0.01809981,
   0.01875746,
   0.01911548,
   0.05744133};
   Double_t Graph0_fex1165[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1165[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1165,Graph0_fy1165,Graph0_fex1165,Graph0_fey1165);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#deltaA_{EDM}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01165 = new TH1F("Graph_Graph01165","",100,0,3280);
   Graph_Graph01165->SetMinimum(0.01483348);
   Graph_Graph01165->SetMaximum(0.41753);
   Graph_Graph01165->SetDirectory(0);
   Graph_Graph01165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01165->SetLineColor(ci);
   Graph_Graph01165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01165->GetXaxis()->SetRange(6,93);
   Graph_Graph01165->GetXaxis()->CenterTitle(true);
   Graph_Graph01165->GetXaxis()->SetLabelFont(42);
   Graph_Graph01165->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01165->GetXaxis()->SetTitleFont(42);
   Graph_Graph01165->GetYaxis()->SetTitle("#deltaA_{EDM}");
   Graph_Graph01165->GetYaxis()->CenterTitle(true);
   Graph_Graph01165->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01165->GetYaxis()->SetLabelFont(42);
   Graph_Graph01165->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01165->GetYaxis()->SetTitleFont(42);
   Graph_Graph01165->GetZaxis()->SetLabelFont(42);
   Graph_Graph01165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01165);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
