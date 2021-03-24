void c_vs_p_overlay_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:27:09 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.5,3378.375,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1017[30] = {
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
   Double_t S0_c_vs_p_fy1017[30] = {
   3.082912,
   0.2814888,
   2.210961,
   -0.9154876,
   -1.259858,
   -0.6857262,
   -0.1562355,
   -0.09458965,
   -0.04636788,
   -0.01201239,
   0.03804803,
   -0.01751339,
   0.0272911,
   -0.002084333,
   0.04317548,
   0.06969815,
   0.03989108,
   0.05231605,
   -0.006196081,
   0.02437875,
   0.005261318,
   0.03385155,
   -0.008850922,
   0.002116718,
   -0.0256937,
   0.01359812,
   -0.03265587,
   0.00489004,
   -0.04234366,
   0.2098048};
   Double_t S0_c_vs_p_fex1017[30] = {
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
   Double_t S0_c_vs_p_fey1017[30] = {
   0.93762,
   0.6275113,
   0.2751198,
   0.09770919,
   0.05358088,
   0.04101868,
   0.03586703,
   0.03277401,
   0.03025391,
   0.02835053,
   0.02670444,
   0.0252874,
   0.02400791,
   0.02293125,
   0.02196578,
   0.02116595,
   0.0204914,
   0.01988239,
   0.01942922,
   0.01914559,
   0.01886438,
   0.01864449,
   0.01854474,
   0.01857663,
   0.01871429,
   0.01886798,
   0.01923957,
   0.02008385,
   0.0225041,
   0.05078761};
   TGraphErrors *gre = new TGraphErrors(30,S0_c_vs_p_fx1017,S0_c_vs_p_fy1017,S0_c_vs_p_fex1017,S0_c_vs_p_fey1017);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1017 = new TH1F("Graph_S0_c_vs_p1017","",100,0,3300);
   Graph_S0_c_vs_p1017->SetMinimum(-2);
   Graph_S0_c_vs_p1017->SetMaximum(2);
   Graph_S0_c_vs_p1017->SetDirectory(0);
   Graph_S0_c_vs_p1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1017->SetLineColor(ci);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1017->GetXaxis()->SetRange(1,91);
   Graph_S0_c_vs_p1017->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1017->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1017->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1017->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1017->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1017->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1017->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1017);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1018[30] = {
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
   Double_t S12_c_vs_p_fy1018[30] = {
   -8.456255,
   -0.07758791,
   1.607752,
   -1.716832,
   -1.643635,
   -0.9647686,
   -0.6092857,
   -0.5137691,
   -0.4557,
   -0.3596436,
   -0.3049177,
   -0.2473318,
   -0.1872475,
   -0.1887827,
   -0.1954939,
   -0.1418646,
   -0.1637243,
   -0.1031486,
   -0.1526022,
   -0.1330572,
   -0.0892824,
   -0.1135966,
   -0.09160853,
   -0.1267233,
   -0.08445304,
   -0.0784765,
   -0.09845971,
   -0.1204854,
   -0.08486815,
   0.1196109};
   Double_t S12_c_vs_p_fex1018[30] = {
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
   Double_t S12_c_vs_p_fey1018[30] = {
   0.6147035,
   0.5893584,
   0.2690785,
   0.09535768,
   0.05386551,
   0.04119803,
   0.03588351,
   0.03277044,
   0.03033945,
   0.0283647,
   0.0267698,
   0.02540897,
   0.02416179,
   0.02304199,
   0.02208184,
   0.021253,
   0.02057912,
   0.02004352,
   0.01954842,
   0.01923831,
   0.01897052,
   0.01887209,
   0.01883852,
   0.01888794,
   0.01903508,
   0.01932211,
   0.01975027,
   0.02047993,
   0.02350508,
   0.0543949};
   gre = new TGraphErrors(30,S12_c_vs_p_fx1018,S12_c_vs_p_fy1018,S12_c_vs_p_fex1018,S12_c_vs_p_fey1018);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1018 = new TH1F("Graph_S12_c_vs_p1018","S12",100,0,3300);
   Graph_S12_c_vs_p1018->SetMinimum(-10.16574);
   Graph_S12_c_vs_p1018->SetMaximum(2.97161);
   Graph_S12_c_vs_p1018->SetDirectory(0);
   Graph_S12_c_vs_p1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1018->SetLineColor(ci);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1018->GetXaxis()->SetRange(1,91);
   Graph_S12_c_vs_p1018->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1018->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1018->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1018->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1018->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1018->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1018->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1018);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1019[30] = {
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
   Double_t S18_c_vs_p_fy1019[30] = {
   -6.55235,
   -0.317934,
   1.052638,
   -1.432059,
   -1.651086,
   -0.8770793,
   -0.369037,
   -0.3234073,
   -0.2229551,
   -0.2397398,
   -0.2591257,
   -0.2404725,
   -0.1324605,
   -0.1346269,
   -0.1071334,
   -0.08517016,
   -0.09273233,
   -0.1050949,
   -0.08993058,
   -0.07613018,
   -0.06896138,
   -0.07872948,
   -0.08155961,
   -0.1037733,
   -0.09619444,
   -0.06374487,
   -0.09680946,
   -0.1028592,
   -0.08232102,
   0.03970055};
   Double_t S18_c_vs_p_fex1019[30] = {
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
   Double_t S18_c_vs_p_fey1019[30] = {
   0.675099,
   0.5967542,
   0.2664642,
   0.09663012,
   0.05414208,
   0.04127719,
   0.03592836,
   0.03280511,
   0.03047582,
   0.02843769,
   0.02691005,
   0.0255344,
   0.02421568,
   0.02315432,
   0.02220205,
   0.02142322,
   0.02067514,
   0.02015315,
   0.01976508,
   0.01939904,
   0.01925306,
   0.01903465,
   0.0190097,
   0.01907461,
   0.01924994,
   0.01962243,
   0.02000619,
   0.02087506,
   0.02421289,
   0.05821314};
   gre = new TGraphErrors(30,S18_c_vs_p_fx1019,S18_c_vs_p_fy1019,S18_c_vs_p_fex1019,S18_c_vs_p_fey1019);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1019 = new TH1F("Graph_S18_c_vs_p1019","S18",100,0,3300);
   Graph_S18_c_vs_p1019->SetMinimum(-8.082104);
   Graph_S18_c_vs_p1019->SetMaximum(2.173757);
   Graph_S18_c_vs_p1019->SetDirectory(0);
   Graph_S18_c_vs_p1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1019->SetLineColor(ci);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1019->GetXaxis()->SetRange(1,91);
   Graph_S18_c_vs_p1019->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1019->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1019->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1019->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1019->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1019->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1019->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1019);
   
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
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
