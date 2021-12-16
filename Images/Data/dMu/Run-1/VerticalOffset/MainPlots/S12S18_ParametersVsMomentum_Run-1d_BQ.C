void S12S18_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:36:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-119.6347,3218.25,71.32344);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1080[18] = {
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
   2687};
   Double_t Graph0_fy1080[18] = {
   -69.14212,
   -62.22475,
   -40.16999,
   -34.79128,
   -30.10732,
   -35.89222,
   -41.13794,
   -33.97601,
   -35.26772,
   -39.19439,
   -37.91801,
   -34.67491,
   -32.87437,
   -31.21624,
   -31.50538,
   -29.52074,
   -31.10758,
   -29.05463};
   Double_t Graph0_fex1080[18] = {
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
   Double_t Graph0_fey1080[18] = {
   11.28901,
   6.821956,
   4.730589,
   3.895042,
   3.429243,
   3.097304,
   2.917747,
   2.7642,
   2.768421,
   2.683684,
   2.791348,
   2.815593,
   2.953418,
   2.99377,
   3.146344,
   3.392808,
   3.592912,
   3.876804};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1080,Graph0_fy1080,Graph0_fex1080,Graph0_fey1080);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01080 = new TH1F("Graph_Graph01080","S12S18",100,349.5,2899.5);
   Graph_Graph01080->SetMinimum(-100.5389);
   Graph_Graph01080->SetMaximum(52.22762);
   Graph_Graph01080->SetDirectory(0);
   Graph_Graph01080->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01080->SetLineColor(ci);
   Graph_Graph01080->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01080->GetXaxis()->CenterTitle(true);
   Graph_Graph01080->GetXaxis()->SetLabelFont(42);
   Graph_Graph01080->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01080->GetXaxis()->SetTitleFont(42);
   Graph_Graph01080->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01080->GetYaxis()->CenterTitle(true);
   Graph_Graph01080->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01080->GetYaxis()->SetLabelFont(42);
   Graph_Graph01080->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01080->GetYaxis()->SetTitleFont(42);
   Graph_Graph01080->GetZaxis()->SetLabelFont(42);
   Graph_Graph01080->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01080);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1081[18] = {
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
   2687};
   Double_t Graph1_fy1081[18] = {
   34.54732,
   34.44923,
   26.87103,
   25.04477,
   15.68286,
   19.38741,
   18.74208,
   10.10888,
   11.52819,
   11.45355,
   11.57968,
   6.344264,
   8.620209,
   7.01305,
   5.756295,
   5.243272,
   5.799633,
   -4.902187};
   Double_t Graph1_fex1081[18] = {
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
   Double_t Graph1_fey1081[18] = {
   7.234779,
   4.326164,
   2.975958,
   2.442503,
   2.141456,
   1.922851,
   1.803043,
   1.702054,
   1.698841,
   1.644718,
   1.701671,
   1.714134,
   1.791515,
   1.80954,
   1.894881,
   2.045298,
   2.17286,
   2.370274};
   gre = new TGraphErrors(18,Graph1_fx1081,Graph1_fy1081,Graph1_fex1081,Graph1_fey1081);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11081 = new TH1F("Graph_Graph11081","Graph",100,349.5,2899.5);
   Graph_Graph11081->SetMinimum(-12.17792);
   Graph_Graph11081->SetMaximum(46.68755);
   Graph_Graph11081->SetDirectory(0);
   Graph_Graph11081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11081->SetLineColor(ci);
   Graph_Graph11081->GetXaxis()->SetLabelFont(42);
   Graph_Graph11081->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11081->GetXaxis()->SetTitleFont(42);
   Graph_Graph11081->GetYaxis()->SetLabelFont(42);
   Graph_Graph11081->GetYaxis()->SetTitleFont(42);
   Graph_Graph11081->GetZaxis()->SetLabelFont(42);
   Graph_Graph11081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11081);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1082[18] = {
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
   2687};
   Double_t Graph2_fy1082[18] = {
   1.915793,
   -0.5208571,
   -0.323131,
   0.02335551,
   -0.7267143,
   -0.6464217,
   -0.7002507,
   -0.6007418,
   -0.3989592,
   -0.2406793,
   -0.1816324,
   -0.1051864,
   -0.1295123,
   -0.07780688,
   -0.06196953,
   -0.06174105,
   0.04156585,
   0.104081};
   Double_t Graph2_fex1082[18] = {
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
   Double_t Graph2_fey1082[18] = {
   0.06199841,
   0.03767573,
   0.02619068,
   0.02158169,
   0.01904713,
   0.01724384,
   0.01628677,
   0.01545386,
   0.01549838,
   0.01504195,
   0.01568958,
   0.01584604,
   0.01664887,
   0.01690339,
   0.01780857,
   0.0192148,
   0.02034963,
   0.02192205};
   gre = new TGraphErrors(18,Graph2_fx1082,Graph2_fy1082,Graph2_fex1082,Graph2_fey1082);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21082 = new TH1F("Graph_Graph21082","Graph",100,349.5,2899.5);
   Graph_Graph21082->SetMinimum(-1.018117);
   Graph_Graph21082->SetMaximum(2.250147);
   Graph_Graph21082->SetDirectory(0);
   Graph_Graph21082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21082->SetLineColor(ci);
   Graph_Graph21082->GetXaxis()->SetLabelFont(42);
   Graph_Graph21082->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21082->GetXaxis()->SetTitleFont(42);
   Graph_Graph21082->GetYaxis()->SetLabelFont(42);
   Graph_Graph21082->GetYaxis()->SetTitleFont(42);
   Graph_Graph21082->GetZaxis()->SetLabelFont(42);
   Graph_Graph21082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21082);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1d","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
