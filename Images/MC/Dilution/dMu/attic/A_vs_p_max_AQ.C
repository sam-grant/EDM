void A_vs_p_max_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 12:59:09 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.128125,3550,0.346875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1010[12] = {
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
   Double_t A_vs_p_fy1010[12] = {
   0.2415006,
   0.2447706,
   0.2480137,
   0.2537917,
   0.2583556,
   0.2621531,
   0.2647472,
   0.268381,
   0.2726582,
   0.2701391,
   0.2717232,
   0.2731334};
   Double_t A_vs_p_fex1010[12] = {
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
   Double_t A_vs_p_fey1010[12] = {
   0.005559241,
   0.005637498,
   0.005803944,
   0.006068765,
   0.00645143,
   0.00698446,
   0.007720361,
   0.008737274,
   0.01016121,
   0.01231189,
   0.01607075,
   0.02468329};
   TGraphErrors *gre = new TGraphErrors(12,A_vs_p_fx1010,A_vs_p_fy1010,A_vs_p_fex1010,A_vs_p_fey1010);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1010 = new TH1F("Graph_A_vs_p1010","",100,580,3220);
   Graph_A_vs_p1010->SetMinimum(0.15);
   Graph_A_vs_p1010->SetMaximum(0.325);
   Graph_A_vs_p1010->SetDirectory(0);
   Graph_A_vs_p1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1010->SetLineColor(ci);
   Graph_A_vs_p1010->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_A_vs_p1010->GetXaxis()->SetRange(1,100);
   Graph_A_vs_p1010->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1010->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1010->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1010->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1010->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1010->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1010->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1010->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1010->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1010->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1010->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1010->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1010->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1010);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1011[12] = {
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
   Double_t S0S12S18_A_vs_p_fy1011[12] = {
   -0.1937724,
   -0.1956978,
   -0.1952311,
   -0.1903621,
   -0.1900224,
   -0.1928318,
   -0.1937383,
   -0.1975744,
   -0.1932085,
   -0.2306487,
   -0.3045736,
   -0.3138523};
   Double_t S0S12S18_A_vs_p_fex1011[12] = {
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
   Double_t S0S12S18_A_vs_p_fey1011[12] = {
   0.01867564,
   0.01882209,
   0.01922947,
   0.01972514,
   0.02036198,
   0.02126145,
   0.02260708,
   0.02460626,
   0.0276334,
   0.03240378,
   0.04088236,
   0.06083943};
   gre = new TGraphErrors(12,S0S12S18_A_vs_p_fx1011,S0S12S18_A_vs_p_fy1011,S0S12S18_A_vs_p_fex1011,S0S12S18_A_vs_p_fey1011);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1011 = new TH1F("Graph_S0S12S18_A_vs_p1011","S0S12S18",100,580,3220);
   Graph_S0S12S18_A_vs_p1011->SetMinimum(-0.3956034);
   Graph_S0S12S18_A_vs_p1011->SetMaximum(-0.1446635);
   Graph_S0S12S18_A_vs_p1011->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1011->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1011->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0S12S18_A_vs_p1011->GetXaxis()->SetRange(1,100);
   Graph_S0S12S18_A_vs_p1011->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1011->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1011->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1011->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1011->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1011->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1011->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1011->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1011->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1011->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1011->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1011->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1011->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1011);
   
   gre->Draw("p ");
   
   Double_t A_vs_p_fx1012[12] = {
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
   Double_t A_vs_p_fy1012[12] = {
   0.2621002,
   0.2654801,
   0.2684541,
   0.2712656,
   0.2706622,
   0.275311,
   0.2719914,
   0.2562198,
   0.2468878,
   0.2572561,
   0.2387291,
   0.1816931};
   Double_t A_vs_p_fex1012[12] = {
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
   Double_t A_vs_p_fey1012[12] = {
   0.01073394,
   0.01086794,
   0.0111401,
   0.0115627,
   0.01216125,
   0.0129769,
   0.01408223,
   0.01560247,
   0.01776014,
   0.02103934,
   0.0266365,
   0.03925767};
   gre = new TGraphErrors(12,A_vs_p_fx1012,A_vs_p_fy1012,A_vs_p_fex1012,A_vs_p_fey1012);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1012 = new TH1F("Graph_A_vs_p1012","",100,580,3220);
   Graph_A_vs_p1012->SetMinimum(0.1278501);
   Graph_A_vs_p1012->SetMaximum(0.3028732);
   Graph_A_vs_p1012->SetDirectory(0);
   Graph_A_vs_p1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1012->SetLineColor(ci);
   Graph_A_vs_p1012->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_A_vs_p1012->GetXaxis()->SetRange(1,100);
   Graph_A_vs_p1012->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1012->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1012->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1012->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1012->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1012->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1012->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1012->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1012->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1012->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1012->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1012->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1012);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","Reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth (all decays)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
