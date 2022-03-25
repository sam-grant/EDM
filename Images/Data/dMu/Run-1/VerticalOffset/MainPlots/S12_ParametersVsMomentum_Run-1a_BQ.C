void S12_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-244.1284,3218.25,151.9799);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[18] = {
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
   Double_t Graph0_fy1003[18] = {
   -141.8977,
   -41.91099,
   -17.41641,
   -19.06109,
   -22.74103,
   -13.84781,
   -15.09016,
   -18.44893,
   -22.61811,
   -12.28507,
   -54.68096,
   -28.67622,
   -16.74674,
   -17.4448,
   -30.19511,
   -16.5157,
   -16.9038,
   7.984484};
   Double_t Graph0_fex1003[18] = {
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
   Double_t Graph0_fey1003[18] = {
   21.71638,
   12.97049,
   8.886934,
   7.261961,
   6.381503,
   5.735906,
   5.352968,
   5.049268,
   5.041687,
   4.850018,
   4.972342,
   4.965211,
   5.204279,
   5.27778,
   5.504356,
   5.89653,
   6.290706,
   6.680718};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","S12",100,349.5,2899.5);
   Graph_Graph01003->SetMinimum(-204.5176);
   Graph_Graph01003->SetMaximum(112.3691);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01003->SetLineColor(ci);
   Graph_Graph01003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01003->GetXaxis()->CenterTitle(true);
   Graph_Graph01003->GetXaxis()->SetLabelFont(42);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetXaxis()->SetTitleFont(42);
   Graph_Graph01003->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01003->GetYaxis()->CenterTitle(true);
   Graph_Graph01003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01003->GetYaxis()->SetLabelFont(42);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01003->GetYaxis()->SetTitleFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelFont(42);
   Graph_Graph01003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01003);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1004[18] = {
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
   Double_t Graph1_fy1004[18] = {
   77.37662,
   40.89115,
   33.71596,
   25.59302,
   29.2382,
   24.74297,
   21.46512,
   16.16151,
   21.71482,
   11.47956,
   22.33589,
   15.82425,
   12.89155,
   10.98604,
   15.19033,
   7.250851,
   6.911811,
   2.953309};
   Double_t Graph1_fex1004[18] = {
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
   Double_t Graph1_fey1004[18] = {
   12.51863,
   7.380617,
   5.078121,
   4.129679,
   3.615506,
   3.250672,
   3.009029,
   2.834961,
   2.799916,
   2.702845,
   2.76278,
   2.764355,
   2.908086,
   2.924787,
   3.026644,
   3.275353,
   3.502375,
   3.807765};
   gre = new TGraphErrors(18,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11004 = new TH1F("Graph_Graph11004","Graph",100,349.5,2899.5);
   Graph_Graph11004->SetMinimum(-9.929426);
   Graph_Graph11004->SetMaximum(98.97022);
   Graph_Graph11004->SetDirectory(0);
   Graph_Graph11004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11004->SetLineColor(ci);
   Graph_Graph11004->GetXaxis()->SetLabelFont(42);
   Graph_Graph11004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11004->GetXaxis()->SetTitleFont(42);
   Graph_Graph11004->GetYaxis()->SetLabelFont(42);
   Graph_Graph11004->GetYaxis()->SetTitleFont(42);
   Graph_Graph11004->GetZaxis()->SetLabelFont(42);
   Graph_Graph11004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11004);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1005[18] = {
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
   Double_t Graph2_fy1005[18] = {
   3.167049,
   0.0941098,
   0.220668,
   0.567092,
   -0.2385911,
   -0.3135117,
   -0.4923913,
   -0.3936582,
   -0.2030311,
   -0.08787597,
   0.2637128,
   0.1163543,
   -0.007164689,
   0.01785664,
   0.08663253,
   0.06577639,
   0.1091069,
   -0.05260843};
   Double_t Graph2_fex1005[18] = {
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
   Double_t Graph2_fey1005[18] = {
   0.138574,
   0.08360239,
   0.05744134,
   0.04713615,
   0.04145942,
   0.03744348,
   0.03504514,
   0.03311319,
   0.03322003,
   0.03199232,
   0.03279796,
   0.03277141,
   0.03454844,
   0.03494285,
   0.03660896,
   0.03920318,
   0.04177656,
   0.0440334};
   gre = new TGraphErrors(18,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21005 = new TH1F("Graph_Graph21005","Graph",100,349.5,2899.5);
   Graph_Graph21005->SetMinimum(-0.9107424);
   Graph_Graph21005->SetMaximum(3.688929);
   Graph_Graph21005->SetDirectory(0);
   Graph_Graph21005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21005->SetLineColor(ci);
   Graph_Graph21005->GetXaxis()->SetLabelFont(42);
   Graph_Graph21005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetXaxis()->SetTitleFont(42);
   Graph_Graph21005->GetYaxis()->SetLabelFont(42);
   Graph_Graph21005->GetYaxis()->SetTitleFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelFont(42);
   Graph_Graph21005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21005);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1a","h");
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
