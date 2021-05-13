void AEDM_vs_p_overlay_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:39 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.5,3378.375,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1200[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t S0_AEDM_vs_p_fy1200[30] = {
   0.3856238,
   -0.9099532,
   -0.4675315,
   0.203904,
   -0.167289,
   0.1508865,
   0.1471637,
   0.1663952,
   0.1976378,
   0.2211135,
   0.1541205,
   0.1571147,
   0.1264281,
   0.2257035,
   0.1607465,
   0.1778346,
   0.1425368,
   0.1589054,
   0.1761501,
   0.2067777,
   0.1494684,
   0.1288783,
   0.1758387,
   0.156987,
   0.1080999,
   0.1096496,
   0.05963739,
   0.04824491,
   0.04352566,
   -0.007582705};
   Double_t S0_AEDM_vs_p_fex1200[30] = {
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
   Double_t S0_AEDM_vs_p_fey1200[30] = {
   1.214399,
   0.8909465,
   0.391125,
   0.1387844,
   0.07616369,
   0.05838911,
   0.0510142,
   0.04660164,
   0.04302446,
   0.04030541,
   0.03794426,
   0.03592564,
   0.03411848,
   0.03256544,
   0.03118163,
   0.03004009,
   0.0291321,
   0.02818194,
   0.02754665,
   0.02719711,
   0.02680379,
   0.02647517,
   0.02636858,
   0.02634855,
   0.02659779,
   0.02679685,
   0.02719116,
   0.02850689,
   0.03195086,
   0.07137481};
   TGraphErrors *gre = new TGraphErrors(30,S0_AEDM_vs_p_fx1200,S0_AEDM_vs_p_fy1200,S0_AEDM_vs_p_fex1200,S0_AEDM_vs_p_fey1200);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1200 = new TH1F("Graph_S0_AEDM_vs_p1200","",100,0,3300);
   Graph_S0_AEDM_vs_p1200->SetMinimum(-2);
   Graph_S0_AEDM_vs_p1200->SetMaximum(2);
   Graph_S0_AEDM_vs_p1200->SetDirectory(0);
   Graph_S0_AEDM_vs_p1200->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1200->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1200->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_AEDM_vs_p1200->GetXaxis()->SetRange(1,91);
   Graph_S0_AEDM_vs_p1200->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1200->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1200->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1200->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1200->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1200->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1200->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1200->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1200->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1200->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1200->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1200->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1200->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1200->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1200->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1200);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1201[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t S12_AEDM_vs_p_fy1201[30] = {
   -5.846684,
   -0.9286312,
   0.9391711,
   -0.01597883,
   0.0478632,
   0.04720134,
   0.1409416,
   0.2390269,
   0.2613486,
   0.1536724,
   0.1512382,
   0.1381812,
   0.1038422,
   0.2199506,
   0.1996634,
   0.1837091,
   0.173976,
   0.1191935,
   0.1647369,
   0.106329,
   0.1240742,
   0.1343781,
   0.1584404,
   0.1219029,
   0.09279127,
   0.09923467,
   0.1329685,
   0.1076428,
   0.06905105,
   -0.0542154};
   Double_t S12_AEDM_vs_p_fex1201[30] = {
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
   Double_t S12_AEDM_vs_p_fey1201[30] = {
   1.575303,
   0.8212355,
   0.3824641,
   0.1354002,
   0.07650489,
   0.0584744,
   0.05094135,
   0.04654988,
   0.0431113,
   0.04027827,
   0.03796747,
   0.03609951,
   0.03433312,
   0.03274525,
   0.03134886,
   0.0302348,
   0.02923959,
   0.02841445,
   0.02776218,
   0.02730433,
   0.02696591,
   0.02686555,
   0.02675376,
   0.02682064,
   0.02699577,
   0.02748022,
   0.02809065,
   0.02918507,
   0.03329703,
   0.07751001};
   gre = new TGraphErrors(30,S12_AEDM_vs_p_fx1201,S12_AEDM_vs_p_fy1201,S12_AEDM_vs_p_fex1201,S12_AEDM_vs_p_fey1201);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1201 = new TH1F("Graph_S12_AEDM_vs_p1201","S12",100,0,3300);
   Graph_S12_AEDM_vs_p1201->SetMinimum(-8.29635);
   Graph_S12_AEDM_vs_p1201->SetMaximum(2.195997);
   Graph_S12_AEDM_vs_p1201->SetDirectory(0);
   Graph_S12_AEDM_vs_p1201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1201->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1201->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_AEDM_vs_p1201->GetXaxis()->SetRange(1,91);
   Graph_S12_AEDM_vs_p1201->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1201->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1201->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1201->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1201->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1201->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1201->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1201->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1201->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1201->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1201->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1201->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1201->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1201->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1201);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1202[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t S18_AEDM_vs_p_fy1202[30] = {
   -13.83486,
   -0.2837521,
   0.1119842,
   0.3633807,
   0.03324112,
   0.1181987,
   0.1654105,
   0.181972,
   0.1360343,
   0.248451,
   0.08576411,
   0.1580336,
   0.222627,
   0.1688917,
   0.1689515,
   0.2035268,
   0.1525698,
   0.2021451,
   0.1320741,
   0.1530394,
   0.1785469,
   0.1613094,
   0.114795,
   0.1442168,
   0.09190743,
   0.1363224,
   0.07909906,
   0.0468704,
   0.03835676,
   -0.08100487};
   Double_t S18_AEDM_vs_p_fex1202[30] = {
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
   Double_t S18_AEDM_vs_p_fey1202[30] = {
   1.137085,
   0.8645036,
   0.3795192,
   0.1377376,
   0.07695231,
   0.05853263,
   0.05097032,
   0.04660648,
   0.04322797,
   0.0404034,
   0.03819419,
   0.03627039,
   0.03446105,
   0.03287703,
   0.0315204,
   0.03043155,
   0.02934715,
   0.02861762,
   0.02808187,
   0.02752253,
   0.02733794,
   0.02702509,
   0.02690321,
   0.02709054,
   0.02736704,
   0.0279467,
   0.02843561,
   0.02969898,
   0.03467186,
   0.08009655};
   gre = new TGraphErrors(30,S18_AEDM_vs_p_fx1202,S18_AEDM_vs_p_fy1202,S18_AEDM_vs_p_fex1202,S18_AEDM_vs_p_fey1202);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1202 = new TH1F("Graph_S18_AEDM_vs_p1202","S18",100,0,3300);
   Graph_S18_AEDM_vs_p1202->SetMinimum(-16.52721);
   Graph_S18_AEDM_vs_p1202->SetMaximum(2.136021);
   Graph_S18_AEDM_vs_p1202->SetDirectory(0);
   Graph_S18_AEDM_vs_p1202->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1202->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1202->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_AEDM_vs_p1202->GetXaxis()->SetRange(1,91);
   Graph_S18_AEDM_vs_p1202->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1202->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1202->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1202->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1202->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1202->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1202->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1202->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1202->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1202->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1202->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1202->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1202->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1202->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1202->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1202);
   
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
