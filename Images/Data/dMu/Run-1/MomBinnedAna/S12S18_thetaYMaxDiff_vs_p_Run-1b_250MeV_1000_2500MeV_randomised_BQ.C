void S12S18_thetaYMaxDiff_vs_p_Run-1b_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 20:30:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.7944,27.80265,2703.518,241.6209);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1114[11] = {
   455.7985,
   654.7632,
   883.9817,
   1127.405,
   1373.258,
   1619.937,
   1866.797,
   2116.311,
   2359.524,
   2607.533,
   2781.231};
   Double_t Graph0_fy1114[11] = {
   181.9095,
   182.2777,
   183.7507,
   180.4365,
   173.0718,
   155.3963,
   117.0996,
   107.8937,
   80.64408,
   60.02276,
   50.44858};
   Double_t Graph0_fex1114[11] = {
   0.09410448,
   0.06648851,
   0.04456473,
   0.04050131,
   0.03992327,
   0.04410354,
   0.05363542,
   0.06745703,
   0.08830943,
   0.1220118,
   0.1984693};
   Double_t Graph0_fey1114[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1114,Graph0_fy1114,Graph0_fex1114,Graph0_fey1114);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01114 = new TH1F("Graph_Graph01114","S12S18",100,223.1319,3014.002);
   Graph_Graph01114->SetMinimum(49.18448);
   Graph_Graph01114->SetMaximum(220.2391);
   Graph_Graph01114->SetDirectory(0);
   Graph_Graph01114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01114->SetLineColor(ci);
   Graph_Graph01114->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01114->GetXaxis()->SetRange(28,82);
   Graph_Graph01114->GetXaxis()->CenterTitle(true);
   Graph_Graph01114->GetXaxis()->SetLabelFont(42);
   Graph_Graph01114->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01114->GetXaxis()->SetTitleFont(42);
   Graph_Graph01114->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01114->GetYaxis()->CenterTitle(true);
   Graph_Graph01114->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01114->GetYaxis()->SetLabelFont(42);
   Graph_Graph01114->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01114->GetYaxis()->SetTitleFont(42);
   Graph_Graph01114->GetZaxis()->SetLabelFont(42);
   Graph_Graph01114->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01114);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
