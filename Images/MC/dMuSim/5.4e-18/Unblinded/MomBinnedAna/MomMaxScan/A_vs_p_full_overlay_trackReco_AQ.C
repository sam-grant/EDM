void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:33 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.31875,3550,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1567[12] = {
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
   Double_t S0_A_vs_p_fy1567[12] = {
   0.1793138,
   0.1797219,
   0.1822922,
   0.185238,
   0.1865951,
   0.189244,
   0.1951693,
   0.2048308,
   0.2155278,
   0.2120865,
   0.2227624,
   0.1788319};
   Double_t S0_A_vs_p_fex1567[12] = {
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
   Double_t S0_A_vs_p_fey1567[12] = {
   0.01745347,
   0.01756633,
   0.01787347,
   0.0183522,
   0.01910699,
   0.02020719,
   0.02177476,
   0.024008,
   0.02725673,
   0.03224113,
   0.04091411,
   0.06105938};
   TGraphErrors *gre = new TGraphErrors(12,S0_A_vs_p_fx1567,S0_A_vs_p_fy1567,S0_A_vs_p_fex1567,S0_A_vs_p_fey1567);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1567 = new TH1F("Graph_S0_A_vs_p1567","",100,580,3220);
   Graph_S0_A_vs_p1567->SetMinimum(-0.25);
   Graph_S0_A_vs_p1567->SetMaximum(0.3);
   Graph_S0_A_vs_p1567->SetDirectory(0);
   Graph_S0_A_vs_p1567->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1567->SetLineColor(ci);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0_A_vs_p1567->GetXaxis()->SetRange(1,100);
   Graph_S0_A_vs_p1567->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1567->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1567->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1567->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1567->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1567->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1567->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1567->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1567);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1568[12] = {
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
   Double_t S12_A_vs_p_fy1568[12] = {
   0.189222,
   0.1903633,
   0.1917596,
   0.1928251,
   0.196532,
   0.2008924,
   0.2054236,
   0.2110321,
   0.208839,
   0.2422862,
   0.3105926,
   0.3071903};
   Double_t S12_A_vs_p_fex1568[12] = {
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
   Double_t S12_A_vs_p_fey1568[12] = {
   0.01769741,
   0.01779058,
   0.01806384,
   0.01848354,
   0.01916549,
   0.02020592,
   0.02174128,
   0.02396394,
   0.02721375,
   0.03218328,
   0.04085469,
   0.06097562};
   gre = new TGraphErrors(12,S12_A_vs_p_fx1568,S12_A_vs_p_fy1568,S12_A_vs_p_fex1568,S12_A_vs_p_fey1568);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1568 = new TH1F("Graph_S12_A_vs_p1568","S12",100,580,3220);
   Graph_S12_A_vs_p1568->SetMinimum(0.1518605);
   Graph_S12_A_vs_p1568->SetMaximum(0.38783);
   Graph_S12_A_vs_p1568->SetDirectory(0);
   Graph_S12_A_vs_p1568->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1568->SetLineColor(ci);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S12_A_vs_p1568->GetXaxis()->SetRange(1,100);
   Graph_S12_A_vs_p1568->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1568->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1568->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1568->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1568->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1568->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1568->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1568->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1568);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1569[12] = {
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
   Double_t S18_A_vs_p_fy1569[12] = {
   0.1440968,
   0.1449177,
   0.1453375,
   0.1457888,
   0.1475475,
   0.1480774,
   0.1455336,
   0.1453618,
   0.1380704,
   0.1249489,
   0.133531,
   0.1301274};
   Double_t S18_A_vs_p_fex1569[12] = {
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
   Double_t S18_A_vs_p_fey1569[12] = {
   0.01788594,
   0.01797383,
   0.01824241,
   0.01864569,
   0.01928944,
   0.02029484,
   0.02178416,
   0.02399324,
   0.02723083,
   0.03219222,
   0.04080715,
   0.06103286};
   gre = new TGraphErrors(12,S18_A_vs_p_fx1569,S18_A_vs_p_fy1569,S18_A_vs_p_fex1569,S18_A_vs_p_fey1569);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1569 = new TH1F("Graph_S18_A_vs_p1569","S18",100,580,3220);
   Graph_S18_A_vs_p1569->SetMinimum(0.05688799);
   Graph_S18_A_vs_p1569->SetMaximum(0.2033669);
   Graph_S18_A_vs_p1569->SetDirectory(0);
   Graph_S18_A_vs_p1569->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1569->SetLineColor(ci);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S18_A_vs_p1569->GetXaxis()->SetRange(1,100);
   Graph_S18_A_vs_p1569->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1569->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1569->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1569->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1569->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1569->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1569->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1569->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1569);
   
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
