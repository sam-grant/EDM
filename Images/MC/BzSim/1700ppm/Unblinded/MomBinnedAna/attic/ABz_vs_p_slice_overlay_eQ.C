void ABz_vs_p_slice_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 19:13:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-4.625,3712.5,1.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_slice_fx1178[15] = {
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
   Double_t S0_ABz_vs_p_slice_fy1178[15] = {
   -1.977783,
   -0.03875757,
   0.1157743,
   0.1820338,
   0.2069925,
   0.1818178,
   0.1291915,
   0.1608393,
   0.2259594,
   0.1768458,
   0.1578268,
   0.1304434,
   0.1259068,
   0.06382684,
   0.06487191};
   Double_t S0_ABz_vs_p_slice_fex1178[15] = {
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
   Double_t S0_ABz_vs_p_slice_fey1178[15] = {
   0.9783457,
   0.1578215,
   0.0543841,
   0.04088663,
   0.03552585,
   0.03207261,
   0.02943996,
   0.02740067,
   0.02585349,
   0.0250344,
   0.02470924,
   0.02482369,
   0.02550468,
   0.02755306,
   0.04193698};
   TGraphErrors *gre = new TGraphErrors(15,S0_ABz_vs_p_slice_fx1178,S0_ABz_vs_p_slice_fy1178,S0_ABz_vs_p_slice_fex1178,S0_ABz_vs_p_slice_fey1178);
   gre->SetName("S0_ABz_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_slice1178 = new TH1F("Graph_S0_ABz_vs_p_slice1178","",100,0,3300);
   Graph_S0_ABz_vs_p_slice1178->SetMinimum(-4);
   Graph_S0_ABz_vs_p_slice1178->SetMaximum(1);
   Graph_S0_ABz_vs_p_slice1178->SetDirectory(0);
   Graph_S0_ABz_vs_p_slice1178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_slice1178->SetLineColor(ci);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_slice1178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_slice1178);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_slice_fx1179[15] = {
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
   Double_t S12_ABz_vs_p_slice_fy1179[15] = {
   -2.641477,
   -0.3250569,
   0.05588574,
   0.05184409,
   0.2280776,
   0.127662,
   0.2428022,
   0.1851844,
   0.1456081,
   0.1517329,
   0.07499413,
   0.1238875,
   0.08228347,
   0.1342836,
   -0.002534944};
   Double_t S12_ABz_vs_p_slice_fex1179[15] = {
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
   Double_t S12_ABz_vs_p_slice_fey1179[15] = {
   1.115154,
   0.152391,
   0.05466109,
   0.04099021,
   0.03572169,
   0.03222538,
   0.02951627,
   0.02760024,
   0.02601821,
   0.02525174,
   0.02495622,
   0.02508984,
   0.02594579,
   0.02812134,
   0.04302401};
   gre = new TGraphErrors(15,S12_ABz_vs_p_slice_fx1179,S12_ABz_vs_p_slice_fy1179,S12_ABz_vs_p_slice_fex1179,S12_ABz_vs_p_slice_fey1179);
   gre->SetName("S12_ABz_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_slice1179 = new TH1F("Graph_S12_ABz_vs_p_slice1179","S12",100,0,3300);
   Graph_S12_ABz_vs_p_slice1179->SetMinimum(-4.159526);
   Graph_S12_ABz_vs_p_slice1179->SetMaximum(0.6752134);
   Graph_S12_ABz_vs_p_slice1179->SetDirectory(0);
   Graph_S12_ABz_vs_p_slice1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_slice1179->SetLineColor(ci);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_slice1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_slice1179);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_slice_fx1180[15] = {
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
   Double_t S18_ABz_vs_p_slice_fy1180[15] = {
   -0.508411,
   -0.08330857,
   0.09665071,
   0.1427044,
   0.1826238,
   0.1721104,
   0.1601871,
   0.1435396,
   0.1401244,
   0.1326819,
   0.1147415,
   0.1365712,
   0.1093486,
   0.04944431,
   -0.002009603};
   Double_t S18_ABz_vs_p_slice_fex1180[15] = {
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
   Double_t S18_ABz_vs_p_slice_fey1180[15] = {
   1.078879,
   0.156687,
   0.0547745,
   0.04097975,
   0.03578551,
   0.03238783,
   0.02971537,
   0.02772917,
   0.02626089,
   0.02550852,
   0.0251446,
   0.02533482,
   0.02620349,
   0.02858159,
   0.04402022};
   gre = new TGraphErrors(15,S18_ABz_vs_p_slice_fx1180,S18_ABz_vs_p_slice_fy1180,S18_ABz_vs_p_slice_fex1180,S18_ABz_vs_p_slice_fey1180);
   gre->SetName("S18_ABz_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_slice1180 = new TH1F("Graph_S18_ABz_vs_p_slice1180","S18",100,0,3300);
   Graph_S18_ABz_vs_p_slice1180->SetMinimum(-1.803066);
   Graph_S18_ABz_vs_p_slice1180->SetMaximum(0.7862439);
   Graph_S18_ABz_vs_p_slice1180->SetDirectory(0);
   Graph_S18_ABz_vs_p_slice1180->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_slice1180->SetLineColor(ci);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_slice1180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_slice1180);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p_slice","S18","lpf");
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
