void S12_ExtrapDistvsMomFitsData()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Apr 17 23:21:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.2364,507.5168,2977.453,3466.191);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_gr_extrapDist_vs_p_fx1043[7] = {
   1127.34,
   1373.07,
   1619.546,
   1866.689,
   2115.975,
   2359.684,
   2607.206};
   Double_t S18_gr_extrapDist_vs_p_fy1043[7] = {
   1000.731,
   1191.748,
   1403.753,
   1650.909,
   1954.616,
   2359.692,
   2971.961};
   Double_t S18_gr_extrapDist_vs_p_fex1043[7] = {
   0.06792331,
   0.06754774,
   0.07503825,
   0.09225359,
   0.1164629,
   0.1541941,
   0.210611};
   Double_t S18_gr_extrapDist_vs_p_fey1043[7] = {
   0.1019976,
   0.1188043,
   0.1587418,
   0.2332428,
   0.338474,
   0.5770848,
   1.117588};
   TGraphErrors *gre = new TGraphErrors(7,S18_gr_extrapDist_vs_p_fx1043,S18_gr_extrapDist_vs_p_fy1043,S18_gr_extrapDist_vs_p_fex1043,S18_gr_extrapDist_vs_p_fey1043);
   gre->SetName("S18_gr_extrapDist_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_extrapDist_vs_p1043 = new TH1F("Graph_S18_gr_extrapDist_vs_p1043","S18",100,979.2581,2755.431);
   Graph_S18_gr_extrapDist_vs_p1043->SetMinimum(803.3842);
   Graph_S18_gr_extrapDist_vs_p1043->SetMaximum(3170.323);
   Graph_S18_gr_extrapDist_vs_p1043->SetDirectory(0);
   Graph_S18_gr_extrapDist_vs_p1043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_extrapDist_vs_p1043->SetLineColor(ci);
   Graph_S18_gr_extrapDist_vs_p1043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_extrapDist_vs_p1043->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_extrapDist_vs_p1043->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1043->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_extrapDist_vs_p1043->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_extrapDist_vs_p1043->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1043->GetYaxis()->SetTitle("Decay extrapolated distance [mm] / 250 MeV");
   Graph_S18_gr_extrapDist_vs_p1043->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_extrapDist_vs_p1043->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_extrapDist_vs_p1043->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1043->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_extrapDist_vs_p1043->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_extrapDist_vs_p1043->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1043->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1043->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_extrapDist_vs_p1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_extrapDist_vs_p1043);
   
   gre->Draw("apl");
   
   Double_t S18_gr_extrapDist_vs_p_fx1044[7] = {
   1127.172,
   1372.862,
   1619.551,
   1866.461,
   2116.155,
   2359.263,
   2607.247};
   Double_t S18_gr_extrapDist_vs_p_fy1044[7] = {
   997.3167,
   1188.141,
   1399.968,
   1645.755,
   1948.455,
   2350.785,
   2966.709};
   Double_t S18_gr_extrapDist_vs_p_fex1044[7] = {
   0.05779642,
   0.05748754,
   0.06386294,
   0.07853929,
   0.09949952,
   0.1316754,
   0.1793424};
   Double_t S18_gr_extrapDist_vs_p_fey1044[7] = {
   0.08596755,
   0.1003423,
   0.134035,
   0.1962331,
   0.2842626,
   0.4863294,
   0.9465744};
   gre = new TGraphErrors(7,S18_gr_extrapDist_vs_p_fx1044,S18_gr_extrapDist_vs_p_fy1044,S18_gr_extrapDist_vs_p_fex1044,S18_gr_extrapDist_vs_p_fey1044);
   gre->SetName("S18_gr_extrapDist_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_extrapDist_vs_p1044 = new TH1F("Graph_S18_gr_extrapDist_vs_p1044","",100,979.0826,2755.457);
   Graph_S18_gr_extrapDist_vs_p1044->SetMinimum(800.1883);
   Graph_S18_gr_extrapDist_vs_p1044->SetMaximum(3164.698);
   Graph_S18_gr_extrapDist_vs_p1044->SetDirectory(0);
   Graph_S18_gr_extrapDist_vs_p1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_extrapDist_vs_p1044->SetLineColor(ci);
   Graph_S18_gr_extrapDist_vs_p1044->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1044->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_extrapDist_vs_p1044->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1044->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1044->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1044->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1044->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_extrapDist_vs_p1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_extrapDist_vs_p1044);
   
   gre->Draw("pl ");
   
   Double_t S18_gr_extrapDist_vs_p_fx1045[7] = {
   1127.304,
   1372.915,
   1619.587,
   1866.591,
   2115.808,
   2359.487,
   2606.43};
   Double_t S18_gr_extrapDist_vs_p_fy1045[7] = {
   1002.752,
   1194.115,
   1406.413,
   1654.257,
   1958.877,
   2363.956,
   2973.964};
   Double_t S18_gr_extrapDist_vs_p_fex1045[7] = {
   0.0477222,
   0.047559,
   0.05301859,
   0.0653003,
   0.08286297,
   0.1099903,
   0.1514961};
   Double_t S18_gr_extrapDist_vs_p_fey1045[7] = {
   0.07157235,
   0.08339358,
   0.1120223,
   0.1651313,
   0.2405235,
   0.4113622,
   0.802338};
   gre = new TGraphErrors(7,S18_gr_extrapDist_vs_p_fx1045,S18_gr_extrapDist_vs_p_fy1045,S18_gr_extrapDist_vs_p_fex1045,S18_gr_extrapDist_vs_p_fey1045);
   gre->SetName("S18_gr_extrapDist_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_extrapDist_vs_p1045 = new TH1F("Graph_S18_gr_extrapDist_vs_p1045","",100,979.3234,2754.514);
   Graph_S18_gr_extrapDist_vs_p1045->SetMinimum(805.4723);
   Graph_S18_gr_extrapDist_vs_p1045->SetMaximum(3171.975);
   Graph_S18_gr_extrapDist_vs_p1045->SetDirectory(0);
   Graph_S18_gr_extrapDist_vs_p1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_extrapDist_vs_p1045->SetLineColor(ci);
   Graph_S18_gr_extrapDist_vs_p1045->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1045->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_extrapDist_vs_p1045->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1045->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1045->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1045->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1045->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_extrapDist_vs_p1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_extrapDist_vs_p1045);
   
   gre->Draw("pl ");
   
   Double_t S18_gr_extrapDist_vs_p_fx1046[7] = {
   1127.239,
   1372.896,
   1619.455,
   1866.55,
   2115.746,
   2359.198,
   2606.767};
   Double_t S18_gr_extrapDist_vs_p_fy1046[7] = {
   1003.212,
   1194.691,
   1406.923,
   1654.302,
   1958.339,
   2362.649,
   2974.856};
   Double_t S18_gr_extrapDist_vs_p_fex1046[7] = {
   0.03504799,
   0.03491518,
   0.03891889,
   0.04811988,
   0.06102013,
   0.08111828,
   0.1114284};
   Double_t S18_gr_extrapDist_vs_p_fey1046[7] = {
   0.05199042,
   0.06061913,
   0.08146856,
   0.1202719,
   0.1748502,
   0.2996419,
   0.5859982};
   gre = new TGraphErrors(7,S18_gr_extrapDist_vs_p_fx1046,S18_gr_extrapDist_vs_p_fy1046,S18_gr_extrapDist_vs_p_fex1046,S18_gr_extrapDist_vs_p_fey1046);
   gre->SetName("S18_gr_extrapDist_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_extrapDist_vs_p1046 = new TH1F("Graph_S18_gr_extrapDist_vs_p1046","",100,979.237,2754.846);
   Graph_S18_gr_extrapDist_vs_p1046->SetMinimum(805.9318);
   Graph_S18_gr_extrapDist_vs_p1046->SetMaximum(3172.67);
   Graph_S18_gr_extrapDist_vs_p1046->SetDirectory(0);
   Graph_S18_gr_extrapDist_vs_p1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_extrapDist_vs_p1046->SetLineColor(ci);
   Graph_S18_gr_extrapDist_vs_p1046->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1046->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_extrapDist_vs_p1046->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1046->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1046->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_extrapDist_vs_p1046->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_extrapDist_vs_p1046->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_extrapDist_vs_p1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_extrapDist_vs_p1046);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.11,0.6,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_gr_extrapDist_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_gr_extrapDist_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_gr_extrapDist_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_gr_extrapDist_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
