void S12_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:35:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-127.9975,3125,95.1479);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1027[9] = {
   -73.30502,
   -18.31362,
   -18.89615,
   -16.16889,
   -17.84701,
   -25.54853,
   -17.04837,
   -26.6465,
   -15.74292};
   Double_t Graph0_fex1027[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1027[9] = {
   11.24138,
   5.647049,
   4.280134,
   3.685047,
   3.511227,
   3.553091,
   3.723301,
   4.05022,
   4.649705};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S12",100,425,2825);
   Graph_Graph01027->SetMinimum(-105.683);
   Graph_Graph01027->SetMaximum(72.83335);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1028[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1028[9] = {
   51.85467,
   29.17627,
   27.12728,
   18.67814,
   16.90178,
   14.62691,
   12.023,
   12.51486,
   7.778067};
   Double_t Graph1_fex1028[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1028[9] = {
   6.412018,
   3.21623,
   2.423564,
   2.068671,
   1.952535,
   1.96573,
   2.070891,
   2.236549,
   2.595684};
   gre = new TGraphErrors(9,Graph1_fx1028,Graph1_fy1028,Graph1_fex1028,Graph1_fey1028);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11028 = new TH1F("Graph_Graph11028","Graph",100,425,2825);
   Graph_Graph11028->SetMinimum(4.664144);
   Graph_Graph11028->SetMaximum(63.57511);
   Graph_Graph11028->SetDirectory(0);
   Graph_Graph11028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11028->SetLineColor(ci);
   Graph_Graph11028->GetXaxis()->SetLabelFont(42);
   Graph_Graph11028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetXaxis()->SetTitleFont(42);
   Graph_Graph11028->GetYaxis()->SetLabelFont(42);
   Graph_Graph11028->GetYaxis()->SetTitleFont(42);
   Graph_Graph11028->GetZaxis()->SetLabelFont(42);
   Graph_Graph11028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11028);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1029[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1029[9] = {
   1.055479,
   0.4142433,
   -0.2716108,
   -0.4480641,
   -0.147299,
   0.06352767,
   0.004129889,
   0.09382171,
   0.1122903};
   Double_t Graph2_fex1029[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1029[9] = {
   0.07230818,
   0.03659992,
   0.0278867,
   0.02415491,
   0.0231546,
   0.0235023,
   0.02469856,
   0.02693432,
   0.03087351};
   gre = new TGraphErrors(9,Graph2_fx1029,Graph2_fy1029,Graph2_fex1029,Graph2_fey1029);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21029 = new TH1F("Graph_Graph21029","Graph",100,425,2825);
   Graph_Graph21029->SetMinimum(-0.6322197);
   Graph_Graph21029->SetMaximum(1.287788);
   Graph_Graph21029->SetDirectory(0);
   Graph_Graph21029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21029->SetLineColor(ci);
   Graph_Graph21029->GetXaxis()->SetLabelFont(42);
   Graph_Graph21029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetXaxis()->SetTitleFont(42);
   Graph_Graph21029->GetYaxis()->SetLabelFont(42);
   Graph_Graph21029->GetYaxis()->SetTitleFont(42);
   Graph_Graph21029->GetZaxis()->SetLabelFont(42);
   Graph_Graph21029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21029);
   
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
