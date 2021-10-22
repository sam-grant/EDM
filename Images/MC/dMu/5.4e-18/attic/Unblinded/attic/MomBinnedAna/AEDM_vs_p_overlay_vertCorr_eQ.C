void AEDM_vs_p_overlay_vertCorr_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 18:40:10 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.04375,2850.5,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1020[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S0_AEDM_vs_p_fy1020[17] = {
   0.1256543,
   0.2165245,
   0.2265227,
   0.1758856,
   0.1789891,
   0.1726937,
   0.2266557,
   0.1318499,
   0.2182324,
   0.1096073,
   0.1692194,
   0.1724963,
   0.1954531,
   0.1602148,
   0.1357812,
   0.18616,
   0.1260396};
   Double_t S0_AEDM_vs_p_fex1020[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_AEDM_vs_p_fey1020[17] = {
   0.05517423,
   0.05155102,
   0.04864483,
   0.04611292,
   0.04398916,
   0.04211643,
   0.04042839,
   0.03901742,
   0.0378512,
   0.03675408,
   0.03568239,
   0.03491342,
   0.03451178,
   0.03410931,
   0.03370139,
   0.03347877,
   0.03318506};
   TGraphErrors *gre = new TGraphErrors(17,S0_AEDM_vs_p_fx1020,S0_AEDM_vs_p_fy1020,S0_AEDM_vs_p_fex1020,S0_AEDM_vs_p_fey1020);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1020 = new TH1F("Graph_S0_AEDM_vs_p1020","",100,530,2570);
   Graph_S0_AEDM_vs_p1020->SetMinimum(0);
   Graph_S0_AEDM_vs_p1020->SetMaximum(0.35);
   Graph_S0_AEDM_vs_p1020->SetDirectory(0);
   Graph_S0_AEDM_vs_p1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1020->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetRange(0,101);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1020->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1020);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1021[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S12_AEDM_vs_p_fy1021[17] = {
   0.2834396,
   0.2733484,
   0.1426328,
   0.1711843,
   0.1966466,
   0.06822582,
   0.241635,
   0.221393,
   0.1776788,
   0.1756222,
   0.1014401,
   0.1872885,
   0.1117172,
   0.08699976,
   0.128786,
   0.1474701,
   0.1026329};
   Double_t S12_AEDM_vs_p_fex1021[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_AEDM_vs_p_fey1021[17] = {
   0.05507399,
   0.05157399,
   0.04866082,
   0.04613237,
   0.04427737,
   0.04241379,
   0.04066775,
   0.03914442,
   0.03794247,
   0.03689111,
   0.03590051,
   0.03515092,
   0.03470218,
   0.03435097,
   0.03396166,
   0.03378691,
   0.03374888};
   gre = new TGraphErrors(17,S12_AEDM_vs_p_fx1021,S12_AEDM_vs_p_fy1021,S12_AEDM_vs_p_fex1021,S12_AEDM_vs_p_fey1021);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1021 = new TH1F("Graph_S12_AEDM_vs_p1021","S12",100,530,2570);
   Graph_S12_AEDM_vs_p1021->SetMinimum(0.02323082);
   Graph_S12_AEDM_vs_p1021->SetMaximum(0.3697838);
   Graph_S12_AEDM_vs_p1021->SetDirectory(0);
   Graph_S12_AEDM_vs_p1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1021->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetRange(0,101);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1021->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1021);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1022[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S18_AEDM_vs_p_fy1022[17] = {
   0.1942279,
   0.06432312,
   0.1933431,
   0.06645155,
   0.1638835,
   0.2238177,
   0.1456309,
   0.1319363,
   0.2478328,
   0.1444185,
   0.1980032,
   0.1387672,
   0.1245236,
   0.1812461,
   0.1488666,
   0.1094984,
   0.1398781};
   Double_t S18_AEDM_vs_p_fex1022[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_AEDM_vs_p_fey1022[17] = {
   0.05516473,
   0.05169757,
   0.04871561,
   0.04645077,
   0.04445634,
   0.04259765,
   0.04089639,
   0.03943432,
   0.03826467,
   0.03695873,
   0.03617847,
   0.03556452,
   0.03489361,
   0.03476381,
   0.03426647,
   0.03387128,
   0.03392578};
   gre = new TGraphErrors(17,S18_AEDM_vs_p_fx1022,S18_AEDM_vs_p_fy1022,S18_AEDM_vs_p_fex1022,S18_AEDM_vs_p_fey1022);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1022 = new TH1F("Graph_S18_AEDM_vs_p1022","S18",100,530,2570);
   Graph_S18_AEDM_vs_p1022->SetMinimum(0.01136299);
   Graph_S18_AEDM_vs_p1022->SetMaximum(0.3134446);
   Graph_S18_AEDM_vs_p1022->SetDirectory(0);
   Graph_S18_AEDM_vs_p1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1022->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetRange(0,101);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1022->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1022);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_AEDM_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_AEDM_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_AEDM_vs_p","S18","lpf");
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
