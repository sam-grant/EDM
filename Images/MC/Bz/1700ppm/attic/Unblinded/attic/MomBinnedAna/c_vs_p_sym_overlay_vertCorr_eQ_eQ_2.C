void c_vs_p_sym_overlay_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:58 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-2.5,7.25,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_sym_fx1517[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0_c_vs_p_sym_fy1517[6] = {
   0.1035479,
   0.1319335,
   0.1836696,
   0.2157767,
   0.2553243,
   0.2936461};
   Double_t S0_c_vs_p_sym_fex1517[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_sym_fey1517[6] = {
   0.03255748,
   0.0326873,
   0.034191,
   0.03791482,
   0.04671662,
   0.07860877};
   TGraphErrors *gre = new TGraphErrors(6,S0_c_vs_p_sym_fx1517,S0_c_vs_p_sym_fy1517,S0_c_vs_p_sym_fex1517,S0_c_vs_p_sym_fey1517);
   gre->SetName("S0_c_vs_p_sym");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_sym1517 = new TH1F("Graph_S0_c_vs_p_sym1517","",100,0.5,6.5);
   Graph_S0_c_vs_p_sym1517->SetMinimum(-2);
   Graph_S0_c_vs_p_sym1517->SetMaximum(2);
   Graph_S0_c_vs_p_sym1517->SetDirectory(0);
   Graph_S0_c_vs_p_sym1517->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_sym1517->SetLineColor(ci);
   Graph_S0_c_vs_p_sym1517->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0_c_vs_p_sym1517->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_sym1517->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_sym1517->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_sym1517->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_sym1517->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_sym1517->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_sym1517->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_sym1517->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_sym1517->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_sym1517->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_sym1517->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_sym1517->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_sym1517->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_sym1517->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_sym1517->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_sym1517);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_sym_fx1518[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12_c_vs_p_sym_fy1518[6] = {
   0.1373324,
   0.3558303,
   0.5109764,
   0.6833042,
   0.7569654,
   0.788173};
   Double_t S12_c_vs_p_sym_fex1518[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_sym_fey1518[6] = {
   0.0327715,
   0.03297651,
   0.03453132,
   0.03835196,
   0.0472803,
   0.07981902};
   gre = new TGraphErrors(6,S12_c_vs_p_sym_fx1518,S12_c_vs_p_sym_fy1518,S12_c_vs_p_sym_fex1518,S12_c_vs_p_sym_fey1518);
   gre->SetName("S12_c_vs_p_sym");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_sym1518 = new TH1F("Graph_S12_c_vs_p_sym1518","S12",100,0.5,6.5);
   Graph_S12_c_vs_p_sym1518->SetMinimum(0.02821774);
   Graph_S12_c_vs_p_sym1518->SetMaximum(0.9443351);
   Graph_S12_c_vs_p_sym1518->SetDirectory(0);
   Graph_S12_c_vs_p_sym1518->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_sym1518->SetLineColor(ci);
   Graph_S12_c_vs_p_sym1518->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12_c_vs_p_sym1518->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_sym1518->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_sym1518->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_sym1518->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_sym1518->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_sym1518->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_sym1518->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_sym1518->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_sym1518->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_sym1518->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_sym1518->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_sym1518->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_sym1518->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_sym1518->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_sym1518->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_sym1518);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_sym_fx1519[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S18_c_vs_p_sym_fy1519[6] = {
   0.1264404,
   0.2883078,
   0.3965835,
   0.5113403,
   0.6331977,
   0.7896659};
   Double_t S18_c_vs_p_sym_fex1519[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_sym_fey1519[6] = {
   0.03307634,
   0.03328673,
   0.03476511,
   0.03843227,
   0.04738915,
   0.08010649};
   gre = new TGraphErrors(6,S18_c_vs_p_sym_fx1519,S18_c_vs_p_sym_fy1519,S18_c_vs_p_sym_fex1519,S18_c_vs_p_sym_fey1519);
   gre->SetName("S18_c_vs_p_sym");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_sym1519 = new TH1F("Graph_S18_c_vs_p_sym1519","S18",100,0.5,6.5);
   Graph_S18_c_vs_p_sym1519->SetMinimum(0.0157232);
   Graph_S18_c_vs_p_sym1519->SetMaximum(0.9474132);
   Graph_S18_c_vs_p_sym1519->SetDirectory(0);
   Graph_S18_c_vs_p_sym1519->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_sym1519->SetLineColor(ci);
   Graph_S18_c_vs_p_sym1519->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S18_c_vs_p_sym1519->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_sym1519->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_sym1519->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_sym1519->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_sym1519->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_sym1519->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_sym1519->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_sym1519->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_sym1519->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_sym1519->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_sym1519->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_sym1519->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_sym1519->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_sym1519->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_sym1519->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_sym1519);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_sym_fx1520[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12S18_c_vs_p_sym_fy1520[6] = {
   0.1316671,
   0.3221827,
   0.4547238,
   0.5997433,
   0.6987817,
   0.7911205};
   Double_t S12S18_c_vs_p_sym_fex1520[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_c_vs_p_sym_fey1520[6] = {
   0.02328466,
   0.02343215,
   0.0245075,
   0.02716249,
   0.03349499,
   0.0566489};
   gre = new TGraphErrors(6,S12S18_c_vs_p_sym_fx1520,S12S18_c_vs_p_sym_fy1520,S12S18_c_vs_p_sym_fex1520,S12S18_c_vs_p_sym_fey1520);
   gre->SetName("S12S18_c_vs_p_sym");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_sym1520 = new TH1F("Graph_S12S18_c_vs_p_sym1520","S12S18",100,0.5,6.5);
   Graph_S12S18_c_vs_p_sym1520->SetMinimum(0.03444379);
   Graph_S12S18_c_vs_p_sym1520->SetMaximum(0.921708);
   Graph_S12S18_c_vs_p_sym1520->SetDirectory(0);
   Graph_S12S18_c_vs_p_sym1520->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_sym1520->SetLineColor(ci);
   Graph_S12S18_c_vs_p_sym1520->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12S18_c_vs_p_sym1520->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_sym1520->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_sym1520->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_sym1520->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_sym1520->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_sym1520->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_sym1520->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_sym1520->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_sym1520->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_sym1520->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_sym1520->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_sym1520->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_sym1520->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_sym1520->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_sym1520->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_sym1520);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_sym_fx1521[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0S12S18_c_vs_p_sym_fy1521[6] = {
   0.1225173,
   0.257931,
   0.3633043,
   0.4696841,
   0.5497672,
   0.6236556};
   Double_t S0S12S18_c_vs_p_sym_fex1521[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_c_vs_p_sym_fey1521[6] = {
   0.01894265,
   0.01904825,
   0.01992407,
   0.02208928,
   0.02723977,
   0.04603846};
   gre = new TGraphErrors(6,S0S12S18_c_vs_p_sym_fx1521,S0S12S18_c_vs_p_sym_fy1521,S0S12S18_c_vs_p_sym_fex1521,S0S12S18_c_vs_p_sym_fey1521);
   gre->SetName("S0S12S18_c_vs_p_sym");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_sym1521 = new TH1F("Graph_S0S12S18_c_vs_p_sym1521","S0S12S18",100,0.5,6.5);
   Graph_S0S12S18_c_vs_p_sym1521->SetMinimum(0.04696266);
   Graph_S0S12S18_c_vs_p_sym1521->SetMaximum(0.726306);
   Graph_S0S12S18_c_vs_p_sym1521->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_sym1521->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_sym1521->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_sym1521->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0S12S18_c_vs_p_sym1521->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_sym1521->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_sym1521->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_sym1521->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_sym1521->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_sym1521->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_sym1521->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_sym1521->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_sym1521->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_sym1521->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_sym1521->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_sym1521->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_sym1521->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_sym1521->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_sym1521->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_sym1521);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_sym","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_sym","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_sym","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p_sym","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p_sym","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
