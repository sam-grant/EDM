void S18_theta_Y_RMS_vs_p_Run-1d_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.5962,2.488401,2704.716,25.37049);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[11] = {
   456.5628,
   653.6411,
   883.7251,
   1127.393,
   1373.027,
   1619.423,
   1866.66,
   2115.925,
   2359.333,
   2606.731,
   2782.349};
   Double_t Graph0_fy1076[11] = {
   31.03707,
   24.43079,
   19.42212,
   16.62398,
   14.52667,
   12.59094,
   10.67075,
   9.008294,
   7.401046,
   5.86702,
   5.156792};
   Double_t Graph0_fex1076[11] = {
   0.1245924,
   0.08810142,
   0.05947394,
   0.0540199,
   0.05363776,
   0.05962779,
   0.07357191,
   0.09289278,
   0.1232276,
   0.1690699,
   0.2942079};
   Double_t Graph0_fey1076[11] = {
   0.08701337,
   0.0222444,
   0.01153238,
   0.008790647,
   0.007728085,
   0.007468127,
   0.007747828,
   0.008257293,
   0.009103398,
   0.01036075,
   0.040097};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18",100,223.8177,3015.264);
   Graph_Graph01076->SetMinimum(4.77661);
   Graph_Graph01076->SetMaximum(23.08228);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->SetRange(28,82);
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
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
