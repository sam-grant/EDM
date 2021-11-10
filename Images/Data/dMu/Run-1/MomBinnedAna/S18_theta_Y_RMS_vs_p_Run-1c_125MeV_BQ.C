void S18_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-3.722364,2727,43.97205);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1030[22] = {
   35.19925,
   31.132,
   26.52358,
   23.2608,
   20.29375,
   18.64358,
   17.23422,
   16.02826,
   14.99761,
   14.00966,
   13.09582,
   11.97035,
   11.07344,
   10.17181,
   9.339158,
   8.563523,
   7.727721,
   6.883503,
   6.126287,
   5.442113,
   4.95523,
   4.766392};
   Double_t Graph0_fex1030[22] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1030[22] = {
   0.8237265,
   0.07713885,
   0.03724994,
   0.02287768,
   0.01601025,
   0.01322689,
   0.01163973,
   0.01052485,
   0.009971746,
   0.009505289,
   0.009525401,
   0.009281712,
   0.00970114,
   0.009836978,
   0.01033271,
   0.01055595,
   0.01106928,
   0.01193256,
   0.01255345,
   0.01378842,
   0.03535304,
   0.5396876};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","S18",100,49.5,3199.5);
   Graph_Graph01030->SetMinimum(1.047077);
   Graph_Graph01030->SetMaximum(39.2026);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01030->GetXaxis()->SetRange(23,78);
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01030->GetYaxis()->CenterTitle(true);
   Graph_Graph01030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01030->GetYaxis()->SetLabelFont(42);
   Graph_Graph01030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01030->GetYaxis()->SetTitleFont(42);
   Graph_Graph01030->GetZaxis()->SetLabelFont(42);
   Graph_Graph01030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01030);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
