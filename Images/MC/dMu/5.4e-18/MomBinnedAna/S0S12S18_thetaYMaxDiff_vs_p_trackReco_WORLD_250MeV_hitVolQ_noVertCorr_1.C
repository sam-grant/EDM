void S0S12S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4284,172.3827,3405.856,186.6492);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1227[12] = {
   184.5396,
   431.4896,
   629.4626,
   873.9653,
   1122.547,
   1372.117,
   1620.879,
   1869.288,
   2117.216,
   2364.558,
   2614.887,
   2825.064};
   Double_t Graph0_fy1227[12] = {
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.0142,
   182.6459,
   183.7507,
   180.4365,
   181.173,
   175.2812};
   Double_t Graph0_fex1227[12] = {
   0.1775194,
   0.02718726,
   0.02363225,
   0.02322172,
   0.02433921,
   0.02587656,
   0.02805353,
   0.03152848,
   0.03685818,
   0.04604195,
   0.05834598,
   0.07008294};
   Double_t Graph0_fey1227[12] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1227,Graph0_fy1227,Graph0_fex1227,Graph0_fey1227);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01227 = new TH1F("Graph_Graph01227","S0S12S18_",100,0,3089.212);
   Graph_Graph01227->SetMinimum(173.8093);
   Graph_Graph01227->SetMaximum(185.2225);
   Graph_Graph01227->SetDirectory(0);
   Graph_Graph01227->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01227->SetLineColor(ci);
   Graph_Graph01227->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01227->GetXaxis()->SetRange(1,98);
   Graph_Graph01227->GetXaxis()->CenterTitle(true);
   Graph_Graph01227->GetXaxis()->SetLabelFont(42);
   Graph_Graph01227->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01227->GetXaxis()->SetTitleFont(42);
   Graph_Graph01227->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01227->GetYaxis()->CenterTitle(true);
   Graph_Graph01227->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01227->GetYaxis()->SetLabelFont(42);
   Graph_Graph01227->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01227->GetYaxis()->SetTitleFont(42);
   Graph_Graph01227->GetZaxis()->SetLabelFont(42);
   Graph_Graph01227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01227);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
