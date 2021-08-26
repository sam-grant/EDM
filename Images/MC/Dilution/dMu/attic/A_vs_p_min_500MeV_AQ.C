void A_vs_p_min_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(106.5625,-0.065625,2890.938,0.340625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1007[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t A_vs_p_fy1007[6] = {
   0.2109808,
   0.2351513,
   0.2324935,
   0.2095243,
   0.1763855,
   0.1182186};
   Double_t A_vs_p_fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1007[6] = {
   0.005664806,
   0.005588891,
   0.005436148,
   0.00562537,
   0.006516476,
   0.009532788};
   TGraphErrors *gre = new TGraphErrors(6,A_vs_p_fx1007,A_vs_p_fy1007,A_vs_p_fex1007,A_vs_p_fey1007);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1007 = new TH1F("Graph_A_vs_p1007","",100,0,2750);
   Graph_A_vs_p1007->SetMinimum(-0.025);
   Graph_A_vs_p1007->SetMaximum(0.3);
   Graph_A_vs_p1007->SetDirectory(0);
   Graph_A_vs_p1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1007->SetLineColor(ci);
   Graph_A_vs_p1007->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1007->GetXaxis()->SetRange(15,95);
   Graph_A_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1007);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1008[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t S0S12S18_A_vs_p_fy1008[6] = {
   0.1854606,
   0.1889253,
   0.152359,
   0.2003197,
   0.1970792,
   0.2180594};
   Double_t S0S12S18_A_vs_p_fex1008[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_A_vs_p_fey1008[6] = {
   0.01840529,
   0.01850007,
   0.02064442,
   0.02655563,
   0.03832786,
   0.05129582};
   gre = new TGraphErrors(6,S0S12S18_A_vs_p_fx1008,S0S12S18_A_vs_p_fy1008,S0S12S18_A_vs_p_fex1008,S0S12S18_A_vs_p_fey1008);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1008 = new TH1F("Graph_S0S12S18_A_vs_p1008","S0S12S18",100,0,2750);
   Graph_S0S12S18_A_vs_p1008->SetMinimum(0.1179505);
   Graph_S0S12S18_A_vs_p1008->SetMaximum(0.2831193);
   Graph_S0S12S18_A_vs_p1008->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1008->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetRange(15,95);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1008);
   
   gre->Draw("p ");
   
   Double_t A_vs_p_fx1009[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t A_vs_p_fy1009[6] = {
   0.2171226,
   0.2571147,
   0.2700593,
   0.2696337,
   0.2154923,
   0.1278927};
   Double_t A_vs_p_fex1009[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1009[6] = {
   0.01033129,
   0.0106291,
   0.01123526,
   0.01268491,
   0.01586848,
   0.02416773};
   gre = new TGraphErrors(6,A_vs_p_fx1009,A_vs_p_fy1009,A_vs_p_fex1009,A_vs_p_fey1009);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1009 = new TH1F("Graph_A_vs_p1009","",100,0,2750);
   Graph_A_vs_p1009->SetMinimum(0.08586563);
   Graph_A_vs_p1009->SetMaximum(0.300178);
   Graph_A_vs_p1009->SetDirectory(0);
   Graph_A_vs_p1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1009->SetLineColor(ci);
   Graph_A_vs_p1009->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1009->GetXaxis()->SetRange(0,96);
   Graph_A_vs_p1009->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1009->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1009->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1009->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1009->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1009->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1009->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1009->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1009->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1009->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1009->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1009->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1009);
   
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
