void A_vs_p_slice_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 12:59:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-193.875,-0.23125,3394.875,0.58125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1001[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t A_vs_p_fy1001[15] = {
   -0.1150366,
   0.071089,
   0.05152884,
   0.2731334,
   0.2702926,
   0.2671301,
   0.2803524,
   0.2508603,
   0.2452593,
   0.245229,
   0.224048,
   0.1975096,
   0.1434953,
   0.1522826,
   0.03567277};
   Double_t A_vs_p_fex1001[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t A_vs_p_fey1001[15] = {
   0.05493409,
   0.03764299,
   0.0296408,
   0.02468329,
   0.02093697,
   0.01856057,
   0.01696091,
   0.01552712,
   0.01429854,
   0.01360082,
   0.01311665,
   0.01283265,
   0.0129967,
   0.01399969,
   0.01793833};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1001,A_vs_p_fy1001,A_vs_p_fex1001,A_vs_p_fey1001);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1001 = new TH1F("Graph_A_vs_p1001","",100,0,3300);
   Graph_A_vs_p1001->SetMinimum(-0.15);
   Graph_A_vs_p1001->SetMaximum(0.5);
   Graph_A_vs_p1001->SetDirectory(0);
   Graph_A_vs_p1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1001->SetLineColor(ci);
   Graph_A_vs_p1001->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1001->GetXaxis()->SetRange(6,92);
   Graph_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1002[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0S12S18_A_vs_p_fy1002[15] = {
   3.359773,
   -0.1093438,
   -0.1198291,
   -0.3138523,
   -0.2957033,
   -0.07285139,
   -0.06718161,
   -0.2179902,
   -0.1681903,
   -0.1852008,
   -0.1601577,
   -0.1952654,
   -0.3205319,
   -0.2168978,
   0.05557397};
   Double_t S0S12S18_A_vs_p_fex1002[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_A_vs_p_fey1002[15] = {
   1.150618,
   0.2235201,
   0.07831818,
   0.06083943,
   0.05458853,
   0.05188587,
   0.05142998,
   0.05289485,
   0.05665139,
   0.06226778,
   0.0706711,
   0.07925043,
   0.08198828,
   0.0661952,
   0.06901914};
   gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1002,S0S12S18_A_vs_p_fy1002,S0S12S18_A_vs_p_fex1002,S0S12S18_A_vs_p_fey1002);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1002 = new TH1F("Graph_S0S12S18_A_vs_p1002","S0S12S18",100,0,3300);
   Graph_S0S12S18_A_vs_p1002->SetMinimum(-0.8938113);
   Graph_S0S12S18_A_vs_p1002->SetMaximum(5.001683);
   Graph_S0S12S18_A_vs_p1002->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1002->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1002->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_A_vs_p1002->GetXaxis()->SetRange(6,92);
   Graph_S0S12S18_A_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1002->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1002);
   
   gre->Draw("p ");
   
   Double_t A_vs_p_fx1003[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t A_vs_p_fy1003[15] = {
   -0.01439526,
   -0.03962696,
   0.07943373,
   0.1816931,
   0.2942023,
   0.2942599,
   0.2139887,
   0.2986335,
   0.367693,
   0.3024255,
   0.2224936,
   0.2823873,
   0.2109696,
   0.1708205,
   0.0306341};
   Double_t A_vs_p_fex1003[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t A_vs_p_fey1003[15] = {
   0.06883283,
   0.05032011,
   0.04344148,
   0.03925767,
   0.03611907,
   0.03385393,
   0.0322448,
   0.03125692,
   0.03065439,
   0.03051586,
   0.03082963,
   0.03169069,
   0.03326919,
   0.03643422,
   0.04390247};
   gre = new TGraphErrors(15,A_vs_p_fx1003,A_vs_p_fy1003,A_vs_p_fex1003,A_vs_p_fey1003);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1003 = new TH1F("Graph_A_vs_p1003","",100,0,3300);
   Graph_A_vs_p1003->SetMinimum(-0.1387765);
   Graph_A_vs_p1003->SetMaximum(0.4471769);
   Graph_A_vs_p1003->SetDirectory(0);
   Graph_A_vs_p1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1003->SetLineColor(ci);
   Graph_A_vs_p1003->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1003->GetXaxis()->SetRange(0,93);
   Graph_A_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1003->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1003);
   
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
