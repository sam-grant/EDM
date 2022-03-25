void S12_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-95.05399,3218.25,95.30573);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1024[18] = {
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
   Double_t Graph0_fy1024[18] = {
   -45.52011,
   -34.88243,
   -19.84419,
   -12.35509,
   -14.65015,
   -16.73753,
   -17.19903,
   -21.95895,
   -21.56226,
   -11.87787,
   -24.54995,
   -20.23621,
   -11.73649,
   -13.33507,
   -15.08972,
   -15.24391,
   -22.64593,
   2.24547};
   Double_t Graph0_fex1024[18] = {
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
   Double_t Graph0_fey1024[18] = {
   15.29431,
   9.09694,
   6.22421,
   5.09099,
   4.475337,
   4.01531,
   3.746607,
   3.533814,
   3.523877,
   3.393535,
   3.496251,
   3.506572,
   3.644175,
   3.696605,
   3.847253,
   4.117872,
   4.394372,
   4.695219};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","S12",100,349.5,2899.5);
   Graph_Graph01024->SetMinimum(-76.01801);
   Graph_Graph01024->SetMaximum(76.26976);
   Graph_Graph01024->SetDirectory(0);
   Graph_Graph01024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01024->SetLineColor(ci);
   Graph_Graph01024->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01024->GetXaxis()->CenterTitle(true);
   Graph_Graph01024->GetXaxis()->SetLabelFont(42);
   Graph_Graph01024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01024->GetXaxis()->SetTitleFont(42);
   Graph_Graph01024->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01024->GetYaxis()->CenterTitle(true);
   Graph_Graph01024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01024->GetYaxis()->SetLabelFont(42);
   Graph_Graph01024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01024->GetYaxis()->SetTitleFont(42);
   Graph_Graph01024->GetZaxis()->SetLabelFont(42);
   Graph_Graph01024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01024);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1025[18] = {
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
   Double_t Graph1_fy1025[18] = {
   49.12705,
   50.91874,
   40.66036,
   33.611,
   31.66778,
   31.08078,
   26.49134,
   23.62418,
   21.58319,
   13.08599,
   19.55872,
   16.81065,
   13.11529,
   9.241112,
   11.65767,
   9.885673,
   10.41557,
   -2.231967};
   Double_t Graph1_fex1025[18] = {
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
   Double_t Graph1_fey1025[18] = {
   11.88876,
   6.943105,
   4.686927,
   3.832611,
   3.350565,
   2.99386,
   2.770714,
   2.610594,
   2.587756,
   2.494456,
   2.553293,
   2.567522,
   2.686252,
   2.70074,
   2.802543,
   3.023525,
   3.233578,
   3.527669};
   gre = new TGraphErrors(18,Graph1_fx1025,Graph1_fy1025,Graph1_fex1025,Graph1_fey1025);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11025 = new TH1F("Graph_Graph11025","Graph",100,349.5,2899.5);
   Graph_Graph11025->SetMinimum(-12.43718);
   Graph_Graph11025->SetMaximum(67.69335);
   Graph_Graph11025->SetDirectory(0);
   Graph_Graph11025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11025->SetLineColor(ci);
   Graph_Graph11025->GetXaxis()->SetLabelFont(42);
   Graph_Graph11025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11025->GetXaxis()->SetTitleFont(42);
   Graph_Graph11025->GetYaxis()->SetLabelFont(42);
   Graph_Graph11025->GetYaxis()->SetTitleFont(42);
   Graph_Graph11025->GetZaxis()->SetLabelFont(42);
   Graph_Graph11025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11025);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1026[18] = {
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
   Double_t Graph2_fy1026[18] = {
   2.748798,
   0.07403883,
   0.2858476,
   0.5534404,
   -0.2277198,
   -0.2721764,
   -0.4341191,
   -0.3597517,
   -0.1308288,
   -0.06355375,
   0.03995442,
   0.08884847,
   -0.01302896,
   0.0006699281,
   0.05911362,
   0.05967981,
   0.1754099,
   0.05309012};
   Double_t Graph2_fex1026[18] = {
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
   Double_t Graph2_fey1026[18] = {
   0.1033794,
   0.06238963,
   0.04293999,
   0.03521875,
   0.03104279,
   0.02799011,
   0.02624117,
   0.02479034,
   0.02480357,
   0.02393309,
   0.0247481,
   0.02482918,
   0.02585209,
   0.02625633,
   0.02741678,
   0.02930263,
   0.03112098,
   0.03317463};
   gre = new TGraphErrors(18,Graph2_fx1026,Graph2_fy1026,Graph2_fex1026,Graph2_fey1026);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21026 = new TH1F("Graph_Graph21026","Graph",100,349.5,2899.5);
   Graph_Graph21026->SetMinimum(-0.7916141);
   Graph_Graph21026->SetMaximum(3.183432);
   Graph_Graph21026->SetDirectory(0);
   Graph_Graph21026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21026->SetLineColor(ci);
   Graph_Graph21026->GetXaxis()->SetLabelFont(42);
   Graph_Graph21026->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21026->GetXaxis()->SetTitleFont(42);
   Graph_Graph21026->GetYaxis()->SetLabelFont(42);
   Graph_Graph21026->GetYaxis()->SetTitleFont(42);
   Graph_Graph21026->GetZaxis()->SetLabelFont(42);
   Graph_Graph21026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21026);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1b","h");
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
