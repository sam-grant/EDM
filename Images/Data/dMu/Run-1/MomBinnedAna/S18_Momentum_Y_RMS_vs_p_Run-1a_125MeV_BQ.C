void S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0181,9.243399,3028.101,26.12499);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1122[22] = {
   366.5718,
   457.0815,
   570.2768,
   694.4958,
   815.6467,
   938.5005,
   1062.783,
   1188.162,
   1312.628,
   1435.781,
   1561.988,
   1685.031,
   1810.405,
   1935.059,
   2060.338,
   2184.726,
   2309.137,
   2433.452,
   2559.776,
   2678.028,
   2781.271,
   2884.595};
   Double_t Graph0_fy1122[22] = {
   12.74031,
   14.21753,
   15.11663,
   16.12859,
   16.54273,
   17.4918,
   18.26136,
   18.99897,
   19.62713,
   20.04567,
   20.36912,
   20.07671,
   19.96846,
   19.60513,
   19.23658,
   18.68441,
   17.84517,
   16.75629,
   15.7139,
   14.51233,
   13.65388,
   14.81707};
   Double_t Graph0_fex1122[22] = {
   0.3072112,
   0.1507727,
   0.09980393,
   0.06933791,
   0.05635711,
   0.05117529,
   0.04849768,
   0.04705172,
   0.04807911,
   0.04855352,
   0.05210895,
   0.05537262,
   0.06271132,
   0.06865787,
   0.0791007,
   0.08736164,
   0.1013737,
   0.1229507,
   0.144539,
   0.1658783,
   0.3496264,
   1.155309};
   Double_t Graph0_fey1122[22] = {
   0.4395823,
   0.04980368,
   0.03010945,
   0.02238239,
   0.0184024,
   0.0175099,
   0.01743715,
   0.0176088,
   0.01840948,
   0.01915259,
   0.02082153,
   0.02188741,
   0.02452561,
   0.02653746,
   0.0297685,
   0.03214063,
   0.03564617,
   0.04043568,
   0.04461621,
   0.05035302,
   0.1317019,
   2.09545};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1122,Graph0_fy1122,Graph0_fex1122,Graph0_fey1122);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01122 = new TH1F("Graph_Graph01122","S18",100,114.316,3137.699);
   Graph_Graph01122->SetMinimum(10.93156);
   Graph_Graph01122->SetMaximum(24.43683);
   Graph_Graph01122->SetDirectory(0);
   Graph_Graph01122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01122->SetLineColor(ci);
   Graph_Graph01122->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01122->GetXaxis()->SetRange(22,88);
   Graph_Graph01122->GetXaxis()->CenterTitle(true);
   Graph_Graph01122->GetXaxis()->SetLabelFont(42);
   Graph_Graph01122->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01122->GetXaxis()->SetTitleFont(42);
   Graph_Graph01122->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01122->GetYaxis()->CenterTitle(true);
   Graph_Graph01122->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01122->GetYaxis()->SetLabelFont(42);
   Graph_Graph01122->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01122->GetYaxis()->SetTitleFont(42);
   Graph_Graph01122->GetZaxis()->SetLabelFont(42);
   Graph_Graph01122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01122);
   
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
