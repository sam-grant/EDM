void S12_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4075,-0.06294835,3406.812,0.7618523);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1104[11] = {
   451.7667,
   653.3547,
   880.3777,
   1123.143,
   1371.135,
   1620.307,
   1866.82,
   2114.998,
   2362.65,
   2614.215,
   2787.527};
   Double_t Graph0_fy1104[11] = {
   0.20504,
   0.07311076,
   0.04410087,
   0.03618295,
   0.03150341,
   0.02723204,
   0.02514157,
   0.02492218,
   0.02547928,
   0.02439652,
   0.05487307};
   Double_t Graph0_fex1104[11] = {
   0.1100576,
   0.09282409,
   0.0672385,
   0.06570408,
   0.06990616,
   0.07732607,
   0.09012758,
   0.1129304,
   0.1472822,
   0.1813709,
   0.2204759};
   Double_t Graph0_fey1104[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1104,Graph0_fy1104,Graph0_fex1104,Graph0_fey1104);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01104 = new TH1F("Graph_Graph01104","S12_",100,218.0475,3021.357);
   Graph_Graph01104->SetMinimum(0.01953173);
   Graph_Graph01104->SetMaximum(0.6793723);
   Graph_Graph01104->SetDirectory(0);
   Graph_Graph01104->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01104->SetLineColor(ci);
   Graph_Graph01104->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01104->GetXaxis()->SetRange(0,101);
   Graph_Graph01104->GetXaxis()->CenterTitle(true);
   Graph_Graph01104->GetXaxis()->SetLabelFont(42);
   Graph_Graph01104->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01104->GetXaxis()->SetTitleFont(42);
   Graph_Graph01104->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01104->GetYaxis()->CenterTitle(true);
   Graph_Graph01104->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01104->GetYaxis()->SetLabelFont(42);
   Graph_Graph01104->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01104->GetYaxis()->SetTitleFont(42);
   Graph_Graph01104->GetZaxis()->SetLabelFont(42);
   Graph_Graph01104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01104);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
