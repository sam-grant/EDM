void S12S18_c_vs_p_Run-1c_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 12 23:21:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1679,-0.006663643,2703.758,0.01434351);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1105[11] = {
   456.1787,
   654.5548,
   883.9908,
   1127.416,
   1373.269,
   1619.964,
   1866.889,
   2116.048,
   2359.597,
   2607.034,
   2781.495};
   Double_t Graph0_fy1105[11] = {
   -0.4630903,
   0.018988,
   0.0006133369,
   0.00473486,
   0.004085072,
   0.002491953,
   0.001846002,
   0.006387575,
   0.01023018,
   -0.006881699,
   -0.03941395};
   Double_t Graph0_fex1105[11] = {
   0.07805049,
   0.05494874,
   0.03668373,
   0.03331817,
   0.03291707,
   0.0364692,
   0.04438784,
   0.05594664,
   0.07339069,
   0.102103,
   0.1693809};
   Double_t Graph0_fey1105[11] = {
   0.07768198,
   0.01975753,
   0.01010238,
   0.007685763,
   0.006710448,
   0.006464211,
   0.00665904,
   0.007132215,
   0.007976686,
   0.009519731,
   0.03635821};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1105,Graph0_fy1105,Graph0_fex1105,Graph0_fey1105);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01105 = new TH1F("Graph_Graph01105","S12S18",100,223.5443,3014.22);
   Graph_Graph01105->SetMinimum(-0.004562928);
   Graph_Graph01105->SetMaximum(0.01224279);
   Graph_Graph01105->SetDirectory(0);
   Graph_Graph01105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01105->SetLineColor(ci);
   Graph_Graph01105->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01105->GetXaxis()->SetRange(28,82);
   Graph_Graph01105->GetXaxis()->CenterTitle(true);
   Graph_Graph01105->GetXaxis()->SetLabelFont(42);
   Graph_Graph01105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01105->GetXaxis()->SetTitleFont(42);
   Graph_Graph01105->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01105->GetYaxis()->CenterTitle(true);
   Graph_Graph01105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01105->GetYaxis()->SetLabelFont(42);
   Graph_Graph01105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01105->GetYaxis()->SetTitleFont(42);
   Graph_Graph01105->GetZaxis()->SetLabelFont(42);
   Graph_Graph01105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01105);
   
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
