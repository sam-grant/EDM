void c_vs_p_overlay_gQ_coarse()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  3 22:24:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,-2.5,2877,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1162[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0_c_vs_p_fy1162[9] = {
   -0.074086,
   -0.03103589,
   -0.05174423,
   0.01675914,
   -0.0120223,
   -0.01606869,
   -0.03259155,
   0.01561821,
   0.01068386};
   Double_t S0_c_vs_p_fex1162[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1162[9] = {
   0.04963307,
   0.03172816,
   0.02870371,
   0.02630402,
   0.02451562,
   0.02314832,
   0.02236281,
   0.02203877,
   0.02213332};
   TGraphErrors *gre = new TGraphErrors(9,S0_c_vs_p_fx1162,S0_c_vs_p_fy1162,S0_c_vs_p_fex1162,S0_c_vs_p_fey1162);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1162 = new TH1F("Graph_S0_c_vs_p1162","",100,420,2580);
   Graph_S0_c_vs_p1162->SetMinimum(-2);
   Graph_S0_c_vs_p1162->SetMaximum(2);
   Graph_S0_c_vs_p1162->SetDirectory(0);
   Graph_S0_c_vs_p1162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1162->SetLineColor(ci);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1162->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1162->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1162->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1162->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1162->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1162->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1162->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1162);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1163[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12_c_vs_p_fy1163[9] = {
   -0.5537235,
   -0.3666184,
   -0.3081029,
   -0.2343635,
   -0.2194544,
   -0.1436439,
   -0.1457829,
   -0.0804652,
   -0.0850613};
   Double_t S12_c_vs_p_fex1163[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1163[9] = {
   0.04975604,
   0.03189787,
   0.02883594,
   0.02642465,
   0.02469412,
   0.02328249,
   0.02258839,
   0.02230231,
   0.02234026};
   gre = new TGraphErrors(9,S12_c_vs_p_fx1163,S12_c_vs_p_fy1163,S12_c_vs_p_fex1163,S12_c_vs_p_fey1163);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1163 = new TH1F("Graph_S12_c_vs_p1163","S12",100,420,2580);
   Graph_S12_c_vs_p1163->SetMinimum(-0.6580112);
   Graph_S12_c_vs_p1163->SetMaximum(-0.003631221);
   Graph_S12_c_vs_p1163->SetDirectory(0);
   Graph_S12_c_vs_p1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1163->SetLineColor(ci);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1163->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1163->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1163->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1163->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1163->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1163->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1163->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1163);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1164[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S18_c_vs_p_fy1164[9] = {
   -0.4265053,
   -0.340015,
   -0.2403993,
   -0.2115282,
   -0.1732965,
   -0.1121459,
   -0.1083666,
   -0.1149273,
   -0.06263548};
   Double_t S18_c_vs_p_fex1164[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1164[9] = {
   0.04974193,
   0.03202114,
   0.02890562,
   0.02661579,
   0.02479381,
   0.02347693,
   0.02272445,
   0.02246183,
   0.02256718};
   gre = new TGraphErrors(9,S18_c_vs_p_fx1164,S18_c_vs_p_fy1164,S18_c_vs_p_fex1164,S18_c_vs_p_fey1164);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1164 = new TH1F("Graph_S18_c_vs_p1164","S18",100,420,2580);
   Graph_S18_c_vs_p1164->SetMinimum(-0.5198651);
   Graph_S18_c_vs_p1164->SetMaximum(0.003549589);
   Graph_S18_c_vs_p1164->SetDirectory(0);
   Graph_S18_c_vs_p1164->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1164->SetLineColor(ci);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1164->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1164->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1164->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1164->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1164->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1164->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1164->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1164->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1164);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_fx1165[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12S18_c_vs_p_fy1165[9] = {
   -0.4903338,
   -0.3533764,
   -0.2748095,
   -0.2226214,
   -0.1966274,
   -0.1286033,
   -0.127042,
   -0.09781919,
   -0.07348098};
   Double_t S12S18_c_vs_p_fex1165[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_c_vs_p_fey1165[9] = {
   0.03518693,
   0.02260174,
   0.02041741,
   0.01875519,
   0.01750014,
   0.0165352,
   0.01602494,
   0.01583167,
   0.01588401};
   gre = new TGraphErrors(9,S12S18_c_vs_p_fx1165,S12S18_c_vs_p_fy1165,S12S18_c_vs_p_fex1165,S12S18_c_vs_p_fey1165);
   gre->SetName("S12S18_c_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p1165 = new TH1F("Graph_S12S18_c_vs_p1165","S12S18",100,420,2580);
   Graph_S12S18_c_vs_p1165->SetMinimum(-0.5723132);
   Graph_S12S18_c_vs_p1165->SetMaximum(-0.01080459);
   Graph_S12S18_c_vs_p1165->SetDirectory(0);
   Graph_S12S18_c_vs_p1165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p1165->SetLineColor(ci);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetRange(0,101);
   Graph_S12S18_c_vs_p1165->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p1165->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p1165);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1166[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0S12S18_c_vs_p_fy1166[9] = {
   -0.3501572,
   -0.2448962,
   -0.1997802,
   -0.1417933,
   -0.1340373,
   -0.09042087,
   -0.09485638,
   -0.05925434,
   -0.04465293};
   Double_t S0S12S18_c_vs_p_fex1166[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_c_vs_p_fey1166[9] = {
   0.02871116,
   0.01841088,
   0.01663971,
   0.01527294,
   0.01424542,
   0.01345707,
   0.01302817,
   0.01286047,
   0.01290911};
   gre = new TGraphErrors(9,S0S12S18_c_vs_p_fx1166,S0S12S18_c_vs_p_fy1166,S0S12S18_c_vs_p_fex1166,S0S12S18_c_vs_p_fey1166);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1166 = new TH1F("Graph_S0S12S18_c_vs_p1166","S0S12S18",100,420,2580);
   Graph_S0S12S18_c_vs_p1166->SetMinimum(-0.4135808);
   Graph_S0S12S18_c_vs_p1166->SetMaximum(0.002968635);
   Graph_S0S12S18_c_vs_p1166->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1166->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1166->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1166);
   
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
   entry=leg->AddEntry("S12S18_c_vs_p","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p","S0S12S18","lpf");
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
