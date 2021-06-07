void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.7125,3550,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1564[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S0_c_vs_p_fy1564[12] = {
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06};
   Double_t S0_c_vs_p_fex1564[12] = {
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
   Double_t S0_c_vs_p_fey1564[12] = {
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07};
   TGraphErrors *gre = new TGraphErrors(12,S0_c_vs_p_fx1564,S0_c_vs_p_fy1564,S0_c_vs_p_fex1564,S0_c_vs_p_fey1564);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1564 = new TH1F("Graph_S0_c_vs_p1564","",100,580,3220);
   Graph_S0_c_vs_p1564->SetMinimum(-0.6);
   Graph_S0_c_vs_p1564->SetMaximum(0.3);
   Graph_S0_c_vs_p1564->SetDirectory(0);
   Graph_S0_c_vs_p1564->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1564->SetLineColor(ci);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0_c_vs_p1564->GetXaxis()->SetRange(1,100);
   Graph_S0_c_vs_p1564->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1564->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1564->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1564->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1564->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1564->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1564->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1564);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1565[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S12_c_vs_p_fy1565[12] = {
   -0.0393307,
   -0.04108876,
   -0.04446422,
   -0.04471525,
   -0.03690668,
   -0.02517228,
   -0.001374638,
   0.05296489,
   0.1703757,
   0.3872945,
   0.6202293,
   0.4248039};
   Double_t S12_c_vs_p_fex1565[12] = {
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
   Double_t S12_c_vs_p_fey1565[12] = {
   0.005315024,
   0.005337817,
   0.005426247,
   0.005575714,
   0.005837222,
   0.006222332,
   0.006794115,
   0.007661138,
   0.008995552,
   0.01114545,
   0.01495139,
   0.02407882};
   gre = new TGraphErrors(12,S12_c_vs_p_fx1565,S12_c_vs_p_fy1565,S12_c_vs_p_fex1565,S12_c_vs_p_fey1565);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1565 = new TH1F("Graph_S12_c_vs_p1565","S12",100,580,3220);
   Graph_S12_c_vs_p1565->SetMinimum(-0.1188381);
   Graph_S12_c_vs_p1565->SetMaximum(0.7037279);
   Graph_S12_c_vs_p1565->SetDirectory(0);
   Graph_S12_c_vs_p1565->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1565->SetLineColor(ci);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S12_c_vs_p1565->GetXaxis()->SetRange(1,100);
   Graph_S12_c_vs_p1565->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1565->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1565->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1565->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1565->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1565->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1565->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1565);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1566[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S18_c_vs_p_fy1566[12] = {
   0.08834958,
   0.08942849,
   0.091509,
   0.09575128,
   0.1009177,
   0.1164297,
   0.1413542,
   0.1894991,
   0.2741582,
   0.4573968,
   0.7093785,
   0.5899622};
   Double_t S18_c_vs_p_fex1566[12] = {
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
   Double_t S18_c_vs_p_fey1566[12] = {
   0.00549349,
   0.005515904,
   0.005602471,
   0.005740295,
   0.005982614,
   0.006349928,
   0.006905946,
   0.007761967,
   0.009077149,
   0.01120932,
   0.01501701,
   0.02414818};
   gre = new TGraphErrors(12,S18_c_vs_p_fx1566,S18_c_vs_p_fy1566,S18_c_vs_p_fex1566,S18_c_vs_p_fey1566);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1566 = new TH1F("Graph_S18_c_vs_p1566","S18",100,580,3220);
   Graph_S18_c_vs_p1566->SetMinimum(0.01870216);
   Graph_S18_c_vs_p1566->SetMaximum(0.7885494);
   Graph_S18_c_vs_p1566->SetDirectory(0);
   Graph_S18_c_vs_p1566->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1566->SetLineColor(ci);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S18_c_vs_p1566->GetXaxis()->SetRange(1,100);
   Graph_S18_c_vs_p1566->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1566->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1566->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1566->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1566->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1566->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1566->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1566);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
