void c_vs_p_overlay_vertCorr_noQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 21:33:47 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-2.5,2850.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1017[17] = {
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
   Double_t S0_c_vs_p_fy1017[17] = {
   0.05194175,
   0.03779687,
   0.02522584,
   -0.01150396,
   -0.009481444,
   -0.02519237,
   -0.02766551,
   -0.008571889,
   -0.03811098,
   -0.04756167,
   -0.03521723,
   -0.02057895,
   -0.03006337,
   -0.0202641,
   -0.02227775,
   -0.01938872,
   0.01044483};
   Double_t S0_c_vs_p_fex1017[17] = {
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
   Double_t S0_c_vs_p_fey1017[17] = {
   0.03897895,
   0.03639839,
   0.03437959,
   0.0325863,
   0.03111598,
   0.02976104,
   0.02858344,
   0.02759693,
   0.02677524,
   0.02595367,
   0.02530801,
   0.02473708,
   0.02440507,
   0.02408254,
   0.02383677,
   0.02364767,
   0.0234981};
   TGraphErrors *gre = new TGraphErrors(17,S0_c_vs_p_fx1017,S0_c_vs_p_fy1017,S0_c_vs_p_fex1017,S0_c_vs_p_fey1017);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1017 = new TH1F("Graph_S0_c_vs_p1017","",100,530,2570);
   Graph_S0_c_vs_p1017->SetMinimum(-2);
   Graph_S0_c_vs_p1017->SetMaximum(2);
   Graph_S0_c_vs_p1017->SetDirectory(0);
   Graph_S0_c_vs_p1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1017->SetLineColor(ci);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1017->GetXaxis()->SetRange(0,101);
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
   
   Double_t S12_c_vs_p_fx1018[17] = {
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
   Double_t S12_c_vs_p_fy1018[17] = {
   -0.02650236,
   0.00716955,
   -0.009991207,
   0.03150419,
   0.02578742,
   -0.01946821,
   -0.04051501,
   -0.02359998,
   -0.030149,
   -0.07704944,
   -0.02864218,
   -0.006134832,
   -0.007199911,
   -0.0354445,
   0.002968616,
   -0.009743021,
   0.00809694};
   Double_t S12_c_vs_p_fex1018[17] = {
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
   Double_t S12_c_vs_p_fey1018[17] = {
   0.03892577,
   0.03645647,
   0.0344293,
   0.03269469,
   0.03131608,
   0.02998454,
   0.02875103,
   0.02770998,
   0.02681155,
   0.02608496,
   0.02546571,
   0.02487135,
   0.02453461,
   0.02427513,
   0.02400526,
   0.0238487,
   0.02387196};
   gre = new TGraphErrors(17,S12_c_vs_p_fx1018,S12_c_vs_p_fy1018,S12_c_vs_p_fex1018,S12_c_vs_p_fey1018);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1018 = new TH1F("Graph_S12_c_vs_p1018","S12",100,530,2570);
   Graph_S12_c_vs_p1018->SetMinimum(-0.1198677);
   Graph_S12_c_vs_p1018->SetMaximum(0.0809322);
   Graph_S12_c_vs_p1018->SetDirectory(0);
   Graph_S12_c_vs_p1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1018->SetLineColor(ci);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1018->GetXaxis()->SetRange(0,101);
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
   
   Double_t S18_c_vs_p_fx1019[17] = {
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
   Double_t S18_c_vs_p_fy1019[17] = {
   -0.01459436,
   0.05117677,
   0.04188224,
   -0.02426352,
   0.04439469,
   -0.006745746,
   0.006418223,
   -0.01814133,
   -0.02767297,
   -0.04685309,
   -0.03942965,
   -0.032949,
   -0.01467616,
   0.0002974562,
   -0.01371412,
   -0.01247636,
   0.01815553};
   Double_t S18_c_vs_p_fex1019[17] = {
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
   Double_t S18_c_vs_p_fey1019[17] = {
   0.03904326,
   0.03663228,
   0.03448879,
   0.03287442,
   0.03144149,
   0.03003868,
   0.02892245,
   0.027912,
   0.02707168,
   0.02620162,
   0.02561091,
   0.02512907,
   0.02473535,
   0.02456649,
   0.02420851,
   0.02405578,
   0.02399893};
   gre = new TGraphErrors(17,S18_c_vs_p_fx1019,S18_c_vs_p_fy1019,S18_c_vs_p_fex1019,S18_c_vs_p_fey1019);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1019 = new TH1F("Graph_S18_c_vs_p1019","S18",100,530,2570);
   Graph_S18_c_vs_p1019->SetMinimum(-0.08914109);
   Graph_S18_c_vs_p1019->SetMaximum(0.1038954);
   Graph_S18_c_vs_p1019->SetDirectory(0);
   Graph_S18_c_vs_p1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1019->SetLineColor(ci);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1019->GetXaxis()->SetRange(0,101);
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
