void S18_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 22:33:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-65.4941,3218.25,112.2091);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[18] = {
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
   Double_t Graph0_fy1031[18] = {
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
   Double_t Graph0_fex1031[18] = {
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
   Double_t Graph0_fey1031[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","S18",100,349.5,2899.5);
   Graph_Graph01031->SetMinimum(-47.72378);
   Graph_Graph01031->SetMaximum(94.43879);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1032[18] = {
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
   Double_t Graph1_fy1032[18] = {
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
   Double_t Graph1_fex1032[18] = {
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
   Double_t Graph1_fey1032[18] = {
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
   gre = new TGraphErrors(18,Graph1_fx1032,Graph1_fy1032,Graph1_fex1032,Graph1_fey1032);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11032 = new TH1F("Graph_Graph11032","Graph",100,349.5,2899.5);
   Graph_Graph11032->SetMinimum(-10.28648);
   Graph_Graph11032->SetMaximum(83.35445);
   Graph_Graph11032->SetDirectory(0);
   Graph_Graph11032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11032->SetLineColor(ci);
   Graph_Graph11032->GetXaxis()->SetLabelFont(42);
   Graph_Graph11032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11032->GetXaxis()->SetTitleFont(42);
   Graph_Graph11032->GetYaxis()->SetLabelFont(42);
   Graph_Graph11032->GetYaxis()->SetTitleFont(42);
   Graph_Graph11032->GetZaxis()->SetLabelFont(42);
   Graph_Graph11032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11032);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1033[18] = {
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
   Double_t Graph2_fy1033[18] = {
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
   Double_t Graph2_fex1033[18] = {
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
   Double_t Graph2_fey1033[18] = {
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
   gre = new TGraphErrors(18,Graph2_fx1033,Graph2_fy1033,Graph2_fex1033,Graph2_fey1033);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21033 = new TH1F("Graph_Graph21033","Graph",100,349.5,2899.5);
   Graph_Graph21033->SetMinimum(-0.7501298);
   Graph_Graph21033->SetMaximum(2.881427);
   Graph_Graph21033->SetDirectory(0);
   Graph_Graph21033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21033->SetLineColor(ci);
   Graph_Graph21033->GetXaxis()->SetLabelFont(42);
   Graph_Graph21033->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21033->GetXaxis()->SetTitleFont(42);
   Graph_Graph21033->GetYaxis()->SetLabelFont(42);
   Graph_Graph21033->GetYaxis()->SetTitleFont(42);
   Graph_Graph21033->GetZaxis()->SetLabelFont(42);
   Graph_Graph21033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21033);
   
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
