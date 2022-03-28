void S12S18_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:10:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-119.5442,3218.25,66.54083);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1680[18] = {
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
   Double_t Graph0_fy1680[18] = {
   -70.66443,
   -61.84483,
   -42.64228,
   -36.76534,
   -34.91427,
   -35.68878,
   -40.82873,
   -37.46323,
   -39.89619,
   -41.81158,
   -37.20536,
   -39.2668,
   -33.8393,
   -31.32776,
   -33.65777,
   -30.22118,
   -32.33759,
   -33.97078};
   Double_t Graph0_fex1680[18] = {
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
   Double_t Graph0_fey1680[18] = {
   10.08411,
   6.089149,
   4.223542,
   3.477416,
   3.060866,
   2.763615,
   2.60254,
   2.465806,
   2.468914,
   2.39296,
   2.487695,
   2.50975,
   2.631791,
   2.669136,
   2.803823,
   3.023311,
   3.200461,
   3.449687};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1680,Graph0_fy1680,Graph0_fex1680,Graph0_fey1680);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01680 = new TH1F("Graph_Graph01680","S12S18",100,349.5,2899.5);
   Graph_Graph01680->SetMinimum(-100.9357);
   Graph_Graph01680->SetMaximum(47.93233);
   Graph_Graph01680->SetDirectory(0);
   Graph_Graph01680->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01680->SetLineColor(ci);
   Graph_Graph01680->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01680->GetXaxis()->CenterTitle(true);
   Graph_Graph01680->GetXaxis()->SetLabelFont(42);
   Graph_Graph01680->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01680->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01680->GetXaxis()->SetTitleFont(42);
   Graph_Graph01680->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01680->GetYaxis()->CenterTitle(true);
   Graph_Graph01680->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01680->GetYaxis()->SetLabelFont(42);
   Graph_Graph01680->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01680->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01680->GetYaxis()->SetTitleFont(42);
   Graph_Graph01680->GetZaxis()->SetLabelFont(42);
   Graph_Graph01680->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01680->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01680);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1681[18] = {
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
   Double_t Graph1_fy1681[18] = {
   34.47943,
   35.64619,
   29.54124,
   26.81658,
   21.44768,
   19.53751,
   19.44059,
   14.42279,
   16.85623,
   14.27981,
   12.04488,
   11.6235,
   9.305655,
   7.213,
   8.496423,
   5.912677,
   7.232496,
   2.063587};
   Double_t Graph1_fex1681[18] = {
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
   Double_t Graph1_fey1681[18] = {
   3.866434,
   2.307163,
   1.59314,
   1.308343,
   1.147377,
   1.030103,
   0.9640117,
   0.9115032,
   0.9077714,
   0.879805,
   0.9086517,
   0.9136943,
   0.957677,
   0.9705665,
   1.015338,
   1.100495,
   1.163447,
   1.271647};
   gre = new TGraphErrors(18,Graph1_fx1681,Graph1_fy1681,Graph1_fex1681,Graph1_fey1681);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11681 = new TH1F("Graph_Graph11681","Graph",100,349.5,2899.5);
   Graph_Graph11681->SetMinimum(0.7127453);
   Graph_Graph11681->SetMaximum(42.10126);
   Graph_Graph11681->SetDirectory(0);
   Graph_Graph11681->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11681->SetLineColor(ci);
   Graph_Graph11681->GetXaxis()->SetLabelFont(42);
   Graph_Graph11681->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11681->GetXaxis()->SetTitleFont(42);
   Graph_Graph11681->GetYaxis()->SetLabelFont(42);
   Graph_Graph11681->GetYaxis()->SetTitleFont(42);
   Graph_Graph11681->GetZaxis()->SetLabelFont(42);
   Graph_Graph11681->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11681->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11681);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1682[18] = {
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
   Double_t Graph2_fy1682[18] = {
   1.926517,
   -0.5265555,
   -0.3127749,
   0.03258862,
   -0.7080592,
   -0.6482345,
   -0.7042742,
   -0.587655,
   -0.3805892,
   -0.2297906,
   -0.1879283,
   -0.08698571,
   -0.1245881,
   -0.07756483,
   -0.05415543,
   -0.05859552,
   0.04640507,
   0.1203225};
   Double_t Graph2_fex1682[18] = {
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
   Double_t Graph2_fey1682[18] = {
   0.05799863,
   0.03524749,
   0.02450731,
   0.02019582,
   0.01782165,
   0.0161314,
   0.01523731,
   0.01445982,
   0.01450231,
   0.01407093,
   0.01467286,
   0.01482808,
   0.01556944,
   0.01581312,
   0.01664816,
   0.01796273,
   0.0190156,
   0.0204447};
   gre = new TGraphErrors(18,Graph2_fx1682,Graph2_fy1682,Graph2_fex1682,Graph2_fey1682);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21682 = new TH1F("Graph_Graph21682","Graph",100,349.5,2899.5);
   Graph_Graph21682->SetMinimum(-0.9969204);
   Graph_Graph21682->SetMaximum(2.255555);
   Graph_Graph21682->SetDirectory(0);
   Graph_Graph21682->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21682->SetLineColor(ci);
   Graph_Graph21682->GetXaxis()->SetLabelFont(42);
   Graph_Graph21682->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21682->GetXaxis()->SetTitleFont(42);
   Graph_Graph21682->GetYaxis()->SetLabelFont(42);
   Graph_Graph21682->GetYaxis()->SetTitleFont(42);
   Graph_Graph21682->GetZaxis()->SetLabelFont(42);
   Graph_Graph21682->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21682->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21682);
   
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
