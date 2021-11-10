void S18_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-6.632341,2727,1.541902);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[22] = {
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
   Double_t Graph0_fy1029[22] = {
   -2.604811,
   -0.007243412,
   0.01166959,
   -0.0684765,
   -0.0557587,
   0.05314297,
   -0.01705064,
   -0.02948443,
   0.001796612,
   -0.003782874,
   0.007310432,
   0.01685735,
   -0.02379274,
   -0.01849849,
   -0.03226864,
   0.002097542,
   0.00633463,
   -0.05475133,
   0.0670303,
   -0.006620093,
   -0.07669503,
   -3.682956};
   Double_t Graph0_fex1029[22] = {
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
   Double_t Graph0_fey1029[22] = {
   1.95279,
   0.1867718,
   0.09116515,
   0.0555107,
   0.03886217,
   0.03203353,
   0.02825444,
   0.02557084,
   0.02413485,
   0.02301494,
   0.02294698,
   0.02243195,
   0.02343753,
   0.02388484,
   0.02531924,
   0.02591798,
   0.02741762,
   0.03000754,
   0.03201648,
   0.03558499,
   0.09141918,
   1.587011};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S18",100,49.5,3199.5);
   Graph_Graph01029->SetMinimum(-5.814916);
   Graph_Graph01029->SetMaximum(0.7244779);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(23,78);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
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
