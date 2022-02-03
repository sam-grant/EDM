void meanA_trial()
{
//=========Macro generated from canvas: c2/
//=========  (Tue Jan 18 12:40:10 2022) by ROOT version 6.24/06
   TCanvas *c2 = new TCanvas("c2", "",0,0,800,600);
   c2->Range(-100,-7.255135e-07,1100,1.682861e-06);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[9] = {
   100,
   200,
   300,
   400,
   500,
   600,
   700,
   800,
   900};
   Double_t Graph0_fy1001[9] = {
   6.962093e-07,
   1.216102e-07,
   1.921675e-07,
   5.600502e-08,
   1.259e-07,
   -6.08451e-08,
   6.092269e-08,
   -1.300779e-07,
   -2.43325e-08};
   Double_t Graph0_fex1001[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[9] = {
   5.852556e-07,
   3.921014e-07,
   3.161104e-07,
   2.738796e-07,
   2.446124e-07,
   2.226679e-07,
   2.06835e-07,
   1.9404e-07,
   1.822661e-07};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("; trial; <A> #pm #sigma_{A}");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,20,980);
   Graph_Graph01001->SetMinimum(-4.846761e-07);
   Graph_Graph01001->SetMaximum(1.442023e-06);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle(" trial");
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle(" <A> #pm #sigma_{A}");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1002[9] = {
   100,
   200,
   300,
   400,
   500,
   600,
   700,
   800,
   900};
   Double_t Graph1_fy1002[9] = {
   7.152001e-07,
   1.893988e-07,
   -5.026837e-08,
   -3.458903e-07,
   -2.83458e-07,
   -1.539764e-07,
   -2.604994e-07,
   -2.3028e-07,
   -3.251876e-07};
   Double_t Graph1_fex1002[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[9] = {
   5.908003e-07,
   3.959517e-07,
   3.241964e-07,
   2.810974e-07,
   2.574648e-07,
   2.365859e-07,
   2.17916e-07,
   2.0033e-07,
   1.888273e-07};
   gre = new TGraphErrors(9,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("; trial; Average #pm #sigma");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","",100,20,980);
   Graph_Graph11002->SetMinimum(-8.202866e-07);
   Graph_Graph11002->SetMaximum(1.499299e-06);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11002->SetLineColor(ci);
   Graph_Graph11002->GetXaxis()->SetTitle(" trial");
   Graph_Graph11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph11002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph11002->GetYaxis()->SetTitle(" Average #pm #sigma");
   Graph_Graph11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph11002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1003[9] = {
   100,
   200,
   300,
   400,
   500,
   600,
   700,
   800,
   900};
   Double_t Graph2_fy1003[9] = {
   -5.264125e-07,
   -1.831075e-07,
   -4.133194e-07,
   -2.161327e-07,
   -4.210135e-08,
   6.31654e-08,
   1.329861e-07,
   1.58152e-07,
   1.686193e-07};
   Double_t Graph2_fex1003[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[9] = {
   4.19661e-07,
   2.973975e-07,
   2.481379e-07,
   2.100685e-07,
   1.890955e-07,
   1.714742e-07,
   1.553579e-07,
   1.436718e-07,
   1.345921e-07};
   gre = new TGraphErrors(9,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("; trial; <A> #pm #sigma_{A}");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph21003 = new TH1F("Graph_Graph21003","",100,20,980);
   Graph_Graph21003->SetMinimum(-1.071002e-06);
   Graph_Graph21003->SetMaximum(4.281399e-07);
   Graph_Graph21003->SetDirectory(0);
   Graph_Graph21003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21003->SetLineColor(ci);
   Graph_Graph21003->GetXaxis()->SetTitle(" trial");
   Graph_Graph21003->GetXaxis()->SetLabelFont(42);
   Graph_Graph21003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21003->GetXaxis()->SetTitleFont(42);
   Graph_Graph21003->GetYaxis()->SetTitle(" <A> #pm #sigma_{A}");
   Graph_Graph21003->GetYaxis()->SetLabelFont(42);
   Graph_Graph21003->GetYaxis()->SetTitleFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelFont(42);
   Graph_Graph21003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21003);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.8,0.8,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","A","PL");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","PL");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","C","PL");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
