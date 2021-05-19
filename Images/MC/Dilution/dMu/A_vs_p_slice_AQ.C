void A_vs_p_slice_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May 15 17:54:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-193.875,-0.2125,3394.875,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_A_vs_p_fx1001[15] = {
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
   Double_t S0S12S18_A_vs_p_fy1001[15] = {
   -1.999338,
   0.03692148,
   0.02794267,
   0.2047883,
   0.238776,
   0.1277553,
   0.1663687,
   0.1846554,
   0.1438126,
   0.1506655,
   0.1375625,
   0.1202226,
   0.11755,
   0.08389143,
   0.03075927};
   Double_t S0S12S18_A_vs_p_fex1001[15] = {
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
   Double_t S0S12S18_A_vs_p_fey1001[15] = {
   0.7884766,
   0.1326692,
   0.04527091,
   0.0352395,
   0.03123443,
   0.02883773,
   0.02700003,
   0.02551729,
   0.02460045,
   0.02433859,
   0.02463582,
   0.02547448,
   0.02675295,
   0.02611421,
   0.0334587};
   TGraphErrors *gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1001,S0S12S18_A_vs_p_fy1001,S0S12S18_A_vs_p_fex1001,S0S12S18_A_vs_p_fey1001);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1001 = new TH1F("Graph_S0S12S18_A_vs_p1001","",100,0,3300);
   Graph_S0S12S18_A_vs_p1001->SetMinimum(-0.15);
   Graph_S0S12S18_A_vs_p1001->SetMaximum(0.35);
   Graph_S0S12S18_A_vs_p1001->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1001->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_A_vs_p1001->GetXaxis()->SetRange(6,92);
   Graph_S0S12S18_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1001->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t A_vs_p_fx1002[15] = {
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
   Double_t A_vs_p_fy1002[15] = {
   -0.06752075,
   0.02854064,
   0.1150357,
   0.2341804,
   0.2667648,
   0.2578456,
   0.2669507,
   0.2427073,
   0.2237744,
   0.2148873,
   0.1881774,
   0.1653431,
   0.1236724,
   0.1035602,
   0.04346448};
   Double_t A_vs_p_fex1002[15] = {
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
   Double_t A_vs_p_fey1002[15] = {
   0.03307286,
   0.02125911,
   0.01629939,
   0.0134056,
   0.01103841,
   0.009486095,
   0.008445031,
   0.007628902,
   0.006999139,
   0.006560071,
   0.006232725,
   0.005999949,
   0.00580281,
   0.005697103,
   0.005857476};
   gre = new TGraphErrors(15,A_vs_p_fx1002,A_vs_p_fy1002,A_vs_p_fex1002,A_vs_p_fey1002);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1002 = new TH1F("Graph_A_vs_p1002","",100,0,3300);
   Graph_A_vs_p1002->SetMinimum(-0.1384333);
   Graph_A_vs_p1002->SetMaximum(0.3156429);
   Graph_A_vs_p1002->SetDirectory(0);
   Graph_A_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1002->SetLineColor(ci);
   Graph_A_vs_p1002->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1002->GetXaxis()->SetRange(0,93);
   Graph_A_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1002);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
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
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
