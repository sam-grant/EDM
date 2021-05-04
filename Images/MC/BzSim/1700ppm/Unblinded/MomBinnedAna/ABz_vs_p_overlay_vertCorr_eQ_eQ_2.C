void ABz_vs_p_overlay_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 00:10:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,-2.5,1712,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1125[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0_ABz_vs_p_fy1125[8] = {
   0.218688,
   0.2004022,
   0.2129523,
   0.1866144,
   0.1774694,
   0.1192586,
   0.1394172,
   0.1580928};
   Double_t S0_ABz_vs_p_fex1125[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_ABz_vs_p_fey1125[8] = {
   0.05555179,
   0.05160342,
   0.04875867,
   0.04632276,
   0.04426443,
   0.04237316,
   0.04077639,
   0.0392966};
   TGraphErrors *gre = new TGraphErrors(8,S0_ABz_vs_p_fx1125,S0_ABz_vs_p_fy1125,S0_ABz_vs_p_fex1125,S0_ABz_vs_p_fey1125);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1125 = new TH1F("Graph_S0_ABz_vs_p1125","",100,620,1580);
   Graph_S0_ABz_vs_p1125->SetMinimum(-2);
   Graph_S0_ABz_vs_p1125->SetMaximum(2);
   Graph_S0_ABz_vs_p1125->SetDirectory(0);
   Graph_S0_ABz_vs_p1125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1125->SetLineColor(ci);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetRange(0,101);
   Graph_S0_ABz_vs_p1125->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1125->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1125->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1125->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1125);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1126[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S12_ABz_vs_p_fy1126[8] = {
   0.112346,
   0.2284641,
   0.2298705,
   0.1491088,
   0.1083007,
   0.2520815,
   0.233808,
   0.2055879};
   Double_t S12_ABz_vs_p_fex1126[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_ABz_vs_p_fey1126[8] = {
   0.05558188,
   0.05190077,
   0.04901675,
   0.04657556,
   0.0444191,
   0.0425187,
   0.04085047,
   0.03960779};
   gre = new TGraphErrors(8,S12_ABz_vs_p_fx1126,S12_ABz_vs_p_fy1126,S12_ABz_vs_p_fex1126,S12_ABz_vs_p_fey1126);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1126 = new TH1F("Graph_S12_ABz_vs_p1126","S12",100,620,1580);
   Graph_S12_ABz_vs_p1126->SetMinimum(0.03298046);
   Graph_S12_ABz_vs_p1126->SetMaximum(0.3183838);
   Graph_S12_ABz_vs_p1126->SetDirectory(0);
   Graph_S12_ABz_vs_p1126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1126->SetLineColor(ci);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetRange(0,101);
   Graph_S12_ABz_vs_p1126->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1126->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1126->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1126->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1126);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1127[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S18_ABz_vs_p_fy1127[8] = {
   0.1942837,
   0.1192923,
   0.2455541,
   0.1871625,
   0.1576012,
   0.181529,
   0.1418884,
   0.1344271};
   Double_t S18_ABz_vs_p_fex1127[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_ABz_vs_p_fey1127[8] = {
   0.0556377,
   0.05206688,
   0.0490294,
   0.04675169,
   0.04471807,
   0.04260699,
   0.04131463,
   0.03974514};
   gre = new TGraphErrors(8,S18_ABz_vs_p_fx1127,S18_ABz_vs_p_fy1127,S18_ABz_vs_p_fex1127,S18_ABz_vs_p_fey1127);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1127 = new TH1F("Graph_S18_ABz_vs_p1127","S18",100,620,1580);
   Graph_S18_ABz_vs_p1127->SetMinimum(0.0444896);
   Graph_S18_ABz_vs_p1127->SetMaximum(0.3173194);
   Graph_S18_ABz_vs_p1127->SetDirectory(0);
   Graph_S18_ABz_vs_p1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1127->SetLineColor(ci);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetRange(0,101);
   Graph_S18_ABz_vs_p1127->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1127->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1127->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1127->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1127);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_fx1128[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0S12S18_ABz_vs_p_fy1128[8] = {
   0.1750259,
   0.182694,
   0.2291287,
   0.1742689,
   0.1481371,
   0.1838931,
   0.1717037,
   0.166441};
   Double_t S0S12S18_ABz_vs_p_fex1128[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0S12S18_ABz_vs_p_fey1128[8] = {
   0.0321032,
   0.0299465,
   0.02825858,
   0.02688159,
   0.02567975,
   0.02454362,
   0.02366569,
   0.02284121};
   gre = new TGraphErrors(8,S0S12S18_ABz_vs_p_fx1128,S0S12S18_ABz_vs_p_fy1128,S0S12S18_ABz_vs_p_fex1128,S0S12S18_ABz_vs_p_fey1128);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1128 = new TH1F("Graph_S0S12S18_ABz_vs_p1128","S0S12S18",100,620,1580);
   Graph_S0S12S18_ABz_vs_p1128->SetMinimum(0.1089644);
   Graph_S0S12S18_ABz_vs_p1128->SetMaximum(0.2708803);
   Graph_S0S12S18_ABz_vs_p1128->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p1128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p1128->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p1128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p1128);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
