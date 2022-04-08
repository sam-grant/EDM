void S12_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:35:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-66.5104,3125,81.92347);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1120[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1120[9] = {
   -33.42597,
   -15.44614,
   -15.80862,
   -19.38984,
   -16.9112,
   -21.22611,
   -12.2159,
   -14.65762,
   -12.57435};
   Double_t Graph0_fex1120[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1120[9] = {
   7.907642,
   3.956689,
   2.997146,
   2.577327,
   2.454938,
   2.487962,
   2.606935,
   2.837634,
   3.250186};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1120,Graph0_fy1120,Graph0_fex1120,Graph0_fey1120);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01120 = new TH1F("Graph_Graph01120","S12",100,425,2825);
   Graph_Graph01120->SetMinimum(-51.66701);
   Graph_Graph01120->SetMaximum(67.08008);
   Graph_Graph01120->SetDirectory(0);
   Graph_Graph01120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01120->SetLineColor(ci);
   Graph_Graph01120->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01120->GetXaxis()->CenterTitle(true);
   Graph_Graph01120->GetXaxis()->SetLabelFont(42);
   Graph_Graph01120->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01120->GetXaxis()->SetTitleFont(42);
   Graph_Graph01120->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01120->GetYaxis()->CenterTitle(true);
   Graph_Graph01120->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01120->GetYaxis()->SetLabelFont(42);
   Graph_Graph01120->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01120->GetYaxis()->SetTitleFont(42);
   Graph_Graph01120->GetZaxis()->SetLabelFont(42);
   Graph_Graph01120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01120);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1121[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1121[9] = {
   47.61441,
   36.63947,
   31.37635,
   25.00366,
   17.52906,
   17.78109,
   11.26473,
   10.74632,
   5.321736};
   Double_t Graph1_fex1121[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1121[9] = {
   6.049661,
   2.97773,
   2.238096,
   1.904448,
   1.803147,
   1.817566,
   1.912948,
   2.069439,
   2.39936};
   gre = new TGraphErrors(9,Graph1_fx1121,Graph1_fy1121,Graph1_fex1121,Graph1_fey1121);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11121 = new TH1F("Graph_Graph11121","Graph",100,425,2825);
   Graph_Graph11121->SetMinimum(2.630138);
   Graph_Graph11121->SetMaximum(58.73824);
   Graph_Graph11121->SetDirectory(0);
   Graph_Graph11121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11121->SetLineColor(ci);
   Graph_Graph11121->GetXaxis()->SetLabelFont(42);
   Graph_Graph11121->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11121->GetXaxis()->SetTitleFont(42);
   Graph_Graph11121->GetYaxis()->SetLabelFont(42);
   Graph_Graph11121->GetYaxis()->SetTitleFont(42);
   Graph_Graph11121->GetZaxis()->SetLabelFont(42);
   Graph_Graph11121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11121);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1122[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1122[9] = {
   0.8682333,
   0.4333208,
   -0.2500834,
   -0.3987116,
   -0.099378,
   0.05049358,
   -0.008915863,
   0.05506315,
   0.1257652};
   Double_t Graph2_fex1122[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1122[9] = {
   0.05410054,
   0.0273461,
   0.02084781,
   0.01806892,
   0.0172999,
   0.01762642,
   0.01851189,
   0.02023977,
   0.02308216};
   gre = new TGraphErrors(9,Graph2_fx1122,Graph2_fy1122,Graph2_fex1122,Graph2_fey1122);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21122 = new TH1F("Graph_Graph21122","Graph",100,425,2825);
   Graph_Graph21122->SetMinimum(-0.550692);
   Graph_Graph21122->SetMaximum(1.056245);
   Graph_Graph21122->SetDirectory(0);
   Graph_Graph21122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21122->SetLineColor(ci);
   Graph_Graph21122->GetXaxis()->SetLabelFont(42);
   Graph_Graph21122->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21122->GetXaxis()->SetTitleFont(42);
   Graph_Graph21122->GetYaxis()->SetLabelFont(42);
   Graph_Graph21122->GetYaxis()->SetTitleFont(42);
   Graph_Graph21122->GetZaxis()->SetLabelFont(42);
   Graph_Graph21122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21122);
   
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
