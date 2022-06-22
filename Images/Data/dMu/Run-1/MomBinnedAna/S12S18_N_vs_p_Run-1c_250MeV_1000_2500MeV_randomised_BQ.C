void S12S18_N_vs_p_Run-1c_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 21:17:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1679,-276585.3,2703.758,6303371);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1112[11] = {
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
   Double_t Graph0_fy1112[11] = {
   162378,
   1539882,
   3723326,
   4704508,
   4701774,
   3819467,
   2606643,
   1643462,
   930198,
   443239,
   23448};
   Double_t Graph0_fex1112[11] = {
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
   Double_t Graph0_fey1112[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1112,Graph0_fy1112,Graph0_fex1112,Graph0_fey1112);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01112 = new TH1F("Graph_Graph01112","S12S18",100,223.5443,3014.22);
   Graph_Graph01112->SetMinimum(381410.3);
   Graph_Graph01112->SetMaximum(5645375);
   Graph_Graph01112->SetDirectory(0);
   Graph_Graph01112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01112->SetLineColor(ci);
   Graph_Graph01112->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01112->GetXaxis()->SetRange(28,82);
   Graph_Graph01112->GetXaxis()->CenterTitle(true);
   Graph_Graph01112->GetXaxis()->SetLabelFont(42);
   Graph_Graph01112->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01112->GetXaxis()->SetTitleFont(42);
   Graph_Graph01112->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01112->GetYaxis()->CenterTitle(true);
   Graph_Graph01112->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01112->GetYaxis()->SetLabelFont(42);
   Graph_Graph01112->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01112->GetYaxis()->SetTitleFont(42);
   Graph_Graph01112->GetZaxis()->SetLabelFont(42);
   Graph_Graph01112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01112);
   
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
