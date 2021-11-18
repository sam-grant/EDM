void S18_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:34:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-93.75,3218.25,93.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[18] = {
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
   Double_t Graph0_fy1023[18] = {
   -21.4688,
   3.28045,
   1.866102,
   -9.41862,
   -10.03666,
   -9.880421,
   -13.85802,
   -16.24958,
   -3.250295,
   -13.52402,
   -10.55033,
   -14.39713,
   -12.08231,
   -7.885165,
   -16.21652,
   -7.802387,
   -25.8839,
   -21.67807};
   Double_t Graph0_fex1023[18] = {
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
   Double_t Graph0_fey1023[18] = {
   16.71022,
   10.20441,
   7.151238,
   5.908445,
   5.20616,
   4.703714,
   4.44227,
   4.229932,
   4.217256,
   4.116683,
   4.282339,
   4.345243,
   4.581631,
   4.644708,
   4.858926,
   5.254704,
   5.503228,
   5.93025};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","S18",100,349.5,2899.5);
   Graph_Graph01023->SetMinimum(-75);
   Graph_Graph01023->SetMaximum(75);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1024[18] = {
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
   Double_t Graph1_fy1024[18] = {
   53.61359,
   10.90153,
   9.957548,
   40.58417,
   24.05883,
   17.76046,
   21.99932,
   18.19681,
   12.93657,
   17.55439,
   18.71047,
   15.17751,
   11.82655,
   12.30598,
   13.40283,
   12.38998,
   24.33303,
   14.56859};
   Double_t Graph1_fex1024[18] = {
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
   Double_t Graph1_fey1024[18] = {
   21.93744,
   13.3846,
   9.369122,
   7.724329,
   6.805752,
   6.121742,
   5.755413,
   5.497496,
   5.439935,
   5.338787,
   5.507694,
   5.592687,
   5.869747,
   5.963855,
   6.244596,
   6.696158,
   7.02547,
   7.829782};
   gre = new TGraphErrors(18,Graph1_fx1024,Graph1_fy1024,Graph1_fex1024,Graph1_fey1024);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11024 = new TH1F("Graph_Graph11024","Graph",100,349.5,2899.5);
   Graph_Graph11024->SetMinimum(-10.28648);
   Graph_Graph11024->SetMaximum(83.35445);
   Graph_Graph11024->SetDirectory(0);
   Graph_Graph11024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11024->SetLineColor(ci);
   Graph_Graph11024->GetXaxis()->SetLabelFont(42);
   Graph_Graph11024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11024->GetXaxis()->SetTitleFont(42);
   Graph_Graph11024->GetYaxis()->SetLabelFont(42);
   Graph_Graph11024->GetYaxis()->SetTitleFont(42);
   Graph_Graph11024->GetZaxis()->SetLabelFont(42);
   Graph_Graph11024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11024);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1025[18] = {
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
   Double_t Graph2_fy1025[18] = {
   2.473696,
   -0.1835108,
   0.1057151,
   0.3858991,
   -0.3917645,
   -0.3611912,
   -0.4192955,
   -0.2896726,
   -0.2710457,
   -0.1444993,
   -0.09331304,
   -0.01745167,
   -0.02788192,
   -0.007100517,
   0.04457176,
   -0.07889415,
   0.08585931,
   0.08367985};
   Double_t Graph2_fex1025[18] = {
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
   Double_t Graph2_fey1025[18] = {
   0.1051012,
   0.06427141,
   0.04506125,
   0.03732503,
   0.03292591,
   0.02980219,
   0.02820466,
   0.02691516,
   0.02687931,
   0.0261985,
   0.02732141,
   0.02785127,
   0.02937772,
   0.02988866,
   0.03122829,
   0.03386205,
   0.03542137,
   0.0380393};
   gre = new TGraphErrors(18,Graph2_fx1025,Graph2_fy1025,Graph2_fex1025,Graph2_fey1025);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21025 = new TH1F("Graph_Graph21025","Graph",100,349.5,2899.5);
   Graph_Graph21025->SetMinimum(-0.7501298);
   Graph_Graph21025->SetMaximum(2.881427);
   Graph_Graph21025->SetDirectory(0);
   Graph_Graph21025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21025->SetLineColor(ci);
   Graph_Graph21025->GetXaxis()->SetLabelFont(42);
   Graph_Graph21025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21025->GetXaxis()->SetTitleFont(42);
   Graph_Graph21025->GetYaxis()->SetLabelFont(42);
   Graph_Graph21025->GetYaxis()->SetTitleFont(42);
   Graph_Graph21025->GetZaxis()->SetLabelFont(42);
   Graph_Graph21025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21025);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Run-1b","h");
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

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ff00");
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
