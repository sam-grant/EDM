void S12_theta_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:58:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.6994,-4.261495,2730.075,46.80777);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[22] = {
   366.9979,
   456.7467,
   570.2452,
   695.0474,
   815.9733,
   938.7135,
   1062.734,
   1188.27,
   1312.739,
   1435.93,
   1561.976,
   1685.237,
   1810.655,
   1935.236,
   2060.303,
   2185.135,
   2309.226,
   2432.987,
   2559.503,
   2679.174,
   2780.715,
   2888.448};
   Double_t Graph0_fy1020[22] = {
   37.1455,
   31.578,
   26.80161,
   23.47892,
   20.49288,
   18.80326,
   17.36099,
   16.16578,
   15.09701,
   14.0974,
   13.20958,
   12.06463,
   11.17483,
   10.21405,
   9.380732,
   8.595062,
   7.789758,
   6.960178,
   6.195475,
   5.489724,
   4.953951,
   4.919509};
   Double_t Graph0_fex1020[22] = {
   0.2632858,
   0.1313502,
   0.0889277,
   0.05996606,
   0.04796851,
   0.04307472,
   0.04092389,
   0.03946989,
   0.03984111,
   0.03998827,
   0.04282143,
   0.04494925,
   0.05029794,
   0.05500769,
   0.06267773,
   0.06901985,
   0.07946472,
   0.09532527,
   0.1141395,
   0.1308164,
   0.261301,
   1.874823};
   Double_t Graph0_fey1020[22] = {
   1.150727,
   0.09720771,
   0.0475878,
   0.02824778,
   0.01938384,
   0.01586095,
   0.01396995,
   0.01257692,
   0.01175015,
   0.01109905,
   0.01107929,
   0.01068208,
   0.01101416,
   0.01106379,
   0.01150684,
   0.01166355,
   0.01213278,
   0.01306072,
   0.01389567,
   0.01497155,
   0.03611312,
   0.6694604};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","S12",100,114.3759,3142.681);
   Graph_Graph01020->SetMinimum(0.8454314);
   Graph_Graph01020->SetMaximum(41.70084);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01020->GetXaxis()->SetRange(21,79);
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
