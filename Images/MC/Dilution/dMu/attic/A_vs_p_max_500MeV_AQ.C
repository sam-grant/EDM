void A_vs_p_max_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,0.128125,3500,0.346875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1010[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t A_vs_p_fy1010[5] = {
   0.2415006,
   0.2506701,
   0.2621531,
   0.2719989,
   0.2717232};
   Double_t A_vs_p_fex1010[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1010[5] = {
   0.005559241,
   0.005923402,
   0.00698446,
   0.009384791,
   0.01607075};
   TGraphErrors *gre = new TGraphErrors(5,A_vs_p_fx1010,A_vs_p_fy1010,A_vs_p_fex1010,A_vs_p_fey1010);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1010 = new TH1F("Graph_A_vs_p1010","",100,800,3200);
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
   
   Double_t S0S12S18_A_vs_p_fx1011[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t S0S12S18_A_vs_p_fy1011[5] = {
   0.1937721,
   0.1923149,
   0.1928307,
   0.1877018,
   0.3045714};
   Double_t S0S12S18_A_vs_p_fex1011[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_A_vs_p_fey1011[5] = {
   0.01867564,
   0.01946985,
   0.02126145,
   0.02595758,
   0.04088236};
   gre = new TGraphErrors(5,S0S12S18_A_vs_p_fx1011,S0S12S18_A_vs_p_fy1011,S0S12S18_A_vs_p_fex1011,S0S12S18_A_vs_p_fey1011);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1011 = new TH1F("Graph_S0S12S18_A_vs_p1011","S0S12S18",100,800,3200);
   Graph_S0S12S18_A_vs_p1011->SetMinimum(0.1433732);
   Graph_S0S12S18_A_vs_p1011->SetMaximum(0.3638247);
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
   
   Double_t A_vs_p_fx1012[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t A_vs_p_fy1012[5] = {
   0.2621002,
   0.2714187,
   0.275311,
   0.2559853,
   0.2387291};
   Double_t A_vs_p_fex1012[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1012[5] = {
   0.01073394,
   0.01133114,
   0.0129769,
   0.01658277,
   0.0266365};
   gre = new TGraphErrors(5,A_vs_p_fx1012,A_vs_p_fy1012,A_vs_p_fex1012,A_vs_p_fey1012);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1012 = new TH1F("Graph_A_vs_p1012","",100,800,3200);
   Graph_A_vs_p1012->SetMinimum(0.2044731);
   Graph_A_vs_p1012->SetMaximum(0.2959074);
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
