void A_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.31875,3500,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1277[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t S0_A_vs_p_fy1277[5] = {
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11};
   Double_t S0_A_vs_p_fex1277[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1277[5] = {
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12};
   TGraphErrors *gre = new TGraphErrors(5,S0_A_vs_p_fx1277,S0_A_vs_p_fy1277,S0_A_vs_p_fex1277,S0_A_vs_p_fey1277);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1277 = new TH1F("Graph_S0_A_vs_p1277","",100,800,3200);
   Graph_S0_A_vs_p1277->SetMinimum(-0.25);
   Graph_S0_A_vs_p1277->SetMaximum(0.3);
   Graph_S0_A_vs_p1277->SetDirectory(0);
   Graph_S0_A_vs_p1277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1277->SetLineColor(ci);
   Graph_S0_A_vs_p1277->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0_A_vs_p1277->GetXaxis()->SetRange(1,100);
   Graph_S0_A_vs_p1277->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1277->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1277->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1277->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1277->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1277->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1277->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1277->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1277->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1277->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1277->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1277->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1277->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1277->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1277);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1278[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t S12_A_vs_p_fy1278[5] = {
   0.1903539,
   0.193231,
   0.2015051,
   0.2141404,
   0.3097068};
   Double_t S12_A_vs_p_fex1278[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1278[5] = {
   0.01775928,
   0.01830948,
   0.02025898,
   0.02547662,
   0.04091188};
   gre = new TGraphErrors(5,S12_A_vs_p_fx1278,S12_A_vs_p_fy1278,S12_A_vs_p_fex1278,S12_A_vs_p_fey1278);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1278 = new TH1F("Graph_S12_A_vs_p1278","S12",100,800,3200);
   Graph_S12_A_vs_p1278->SetMinimum(0.1547922);
   Graph_S12_A_vs_p1278->SetMaximum(0.3684211);
   Graph_S12_A_vs_p1278->SetDirectory(0);
   Graph_S12_A_vs_p1278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1278->SetLineColor(ci);
   Graph_S12_A_vs_p1278->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S12_A_vs_p1278->GetXaxis()->SetRange(1,100);
   Graph_S12_A_vs_p1278->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1278->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1278->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1278->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1278->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1278->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1278->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1278->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1278->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1278->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1278->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1278->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1278->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1278->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1278);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1279[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t S18_A_vs_p_fy1279[5] = {
   0.208219,
   0.1900859,
   0.139417,
   -0.09403844,
   0.1708095};
   Double_t S18_A_vs_p_fex1279[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1279[5] = {
   0.06156447,
   0.06888386,
   0.08790811,
   0.1341874,
   0.2679344};
   gre = new TGraphErrors(5,S18_A_vs_p_fx1279,S18_A_vs_p_fy1279,S18_A_vs_p_fex1279,S18_A_vs_p_fey1279);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1279 = new TH1F("Graph_S18_A_vs_p1279","S18",100,800,3200);
   Graph_S18_A_vs_p1279->SetMinimum(-0.2949228);
   Graph_S18_A_vs_p1279->SetMaximum(0.5054408);
   Graph_S18_A_vs_p1279->SetDirectory(0);
   Graph_S18_A_vs_p1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1279->SetLineColor(ci);
   Graph_S18_A_vs_p1279->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S18_A_vs_p1279->GetXaxis()->SetRange(1,100);
   Graph_S18_A_vs_p1279->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1279->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1279->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1279->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1279->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1279->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1279->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1279->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1279->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1279->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1279->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1279->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1279->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1279->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1279);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
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
