void S12_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 19:00:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-107.0226,3125,59.29979);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1213[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1213[9] = {
   -65.18494,
   -38.34314,
   -34.34079,
   -43.19405,
   -47.07396,
   -42.87718,
   -40.24433,
   -38.78004,
   -34.70329};
   Double_t Graph0_fex1213[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1213[9] = {
   7.12732,
   3.597072,
   2.73986,
   2.36883,
   2.263283,
   2.303067,
   2.425827,
   2.654164,
   3.046647};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1213,Graph0_fy1213,Graph0_fex1213,Graph0_fey1213);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01213 = new TH1F("Graph_Graph01213","S12",100,425,2825);
   Graph_Graph01213->SetMinimum(-90.39032);
   Graph_Graph01213->SetMaximum(42.66755);
   Graph_Graph01213->SetDirectory(0);
   Graph_Graph01213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01213->SetLineColor(ci);
   Graph_Graph01213->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01213->GetXaxis()->CenterTitle(true);
   Graph_Graph01213->GetXaxis()->SetLabelFont(42);
   Graph_Graph01213->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01213->GetXaxis()->SetTitleFont(42);
   Graph_Graph01213->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01213->GetYaxis()->CenterTitle(true);
   Graph_Graph01213->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01213->GetYaxis()->SetLabelFont(42);
   Graph_Graph01213->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01213->GetYaxis()->SetTitleFont(42);
   Graph_Graph01213->GetZaxis()->SetLabelFont(42);
   Graph_Graph01213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01213);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1214[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1214[9] = {
   31.11712,
   29.36093,
   20.43334,
   17.3989,
   17.72483,
   12.41488,
   9.587887,
   8.553757,
   5.864865};
   Double_t Graph1_fex1214[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1214[9] = {
   3.016918,
   1.514526,
   1.145071,
   0.976286,
   0.9248304,
   0.9332419,
   0.9825937,
   1.072865,
   1.236601};
   gre = new TGraphErrors(9,Graph1_fx1214,Graph1_fy1214,Graph1_fex1214,Graph1_fey1214);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11214 = new TH1F("Graph_Graph11214","Graph",100,425,2825);
   Graph_Graph11214->SetMinimum(1.677686);
   Graph_Graph11214->SetMaximum(37.08462);
   Graph_Graph11214->SetDirectory(0);
   Graph_Graph11214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11214->SetLineColor(ci);
   Graph_Graph11214->GetXaxis()->SetLabelFont(42);
   Graph_Graph11214->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11214->GetXaxis()->SetTitleFont(42);
   Graph_Graph11214->GetYaxis()->SetLabelFont(42);
   Graph_Graph11214->GetYaxis()->SetTitleFont(42);
   Graph_Graph11214->GetZaxis()->SetLabelFont(42);
   Graph_Graph11214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11214);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1215[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1215[9] = {
   0.2719851,
   -0.06056539,
   -0.6277992,
   -0.6433578,
   -0.2577652,
   -0.08508077,
   -0.05613087,
   -0.006687415,
   0.1555378};
   Double_t Graph2_fex1215[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1215[9] = {
   0.0423229,
   0.02148298,
   0.01644734,
   0.01431138,
   0.01372965,
   0.01404224,
   0.01482817,
   0.01629055,
   0.01871529};
   gre = new TGraphErrors(9,Graph2_fx1215,Graph2_fy1215,Graph2_fex1215,Graph2_fey1215);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21215 = new TH1F("Graph_Graph21215","Graph",100,425,2825);
   Graph_Graph21215->SetMinimum(-0.7548669);
   Graph_Graph21215->SetMaximum(0.4115058);
   Graph_Graph21215->SetDirectory(0);
   Graph_Graph21215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21215->SetLineColor(ci);
   Graph_Graph21215->GetXaxis()->SetLabelFont(42);
   Graph_Graph21215->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21215->GetXaxis()->SetTitleFont(42);
   Graph_Graph21215->GetYaxis()->SetLabelFont(42);
   Graph_Graph21215->GetYaxis()->SetTitleFont(42);
   Graph_Graph21215->GetZaxis()->SetLabelFont(42);
   Graph_Graph21215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21215);
   
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
