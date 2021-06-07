void A_vs_p_slice_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:25:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-193.875,-0.10625,3394.875,0.45625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1013[15] = {
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
   Double_t A_vs_p_fy1013[15] = {
   -0.1570879,
   0.03189334,
   0.1217241,
   0.2380542,
   0.3036053,
   0.2531105,
   0.2222457,
   0.2788239,
   0.2202988,
   0.2334343,
   0.1760248,
   0.1509778,
   0.1248151,
   0.1147123,
   0.03962513};
   Double_t A_vs_p_fex1013[15] = {
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
   Double_t A_vs_p_fey1013[15] = {
   0.1032253,
   0.07905357,
   0.06746887,
   0.05932799,
   0.05070269,
   0.04403402,
   0.03852729,
   0.03391202,
   0.029857,
   0.02637588,
   0.02299417,
   0.01970477,
   0.01646035,
   0.01309139,
   0.009301961};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1013,A_vs_p_fy1013,A_vs_p_fex1013,A_vs_p_fey1013);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1013 = new TH1F("Graph_A_vs_p1013","",100,0,3300);
   Graph_A_vs_p1013->SetMinimum(-0.05);
   Graph_A_vs_p1013->SetMaximum(0.4);
   Graph_A_vs_p1013->SetDirectory(0);
   Graph_A_vs_p1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1013->SetLineColor(ci);
   Graph_A_vs_p1013->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1013->GetXaxis()->SetRange(6,92);
   Graph_A_vs_p1013->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1013->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1013->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1013->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1013->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1013->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1013->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1013->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1013->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1013->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1013->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1013->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1013);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1014[7] = {
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700};
   Double_t S0S12S18_A_vs_p_fy1014[7] = {
   0.02237918,
   0.150578,
   0.1930331,
   0.1196579,
   0.1242513,
   0.201175,
   0.1389333};
   Double_t S0S12S18_A_vs_p_fex1014[7] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_A_vs_p_fey1014[7] = {
   0.05933901,
   0.05206346,
   0.04527198,
   0.03958114,
   0.03483895,
   0.03072513,
   0.02714007};
   gre = new TGraphErrors(7,S0S12S18_A_vs_p_fx1014,S0S12S18_A_vs_p_fy1014,S0S12S18_A_vs_p_fex1014,S0S12S18_A_vs_p_fey1014);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1014 = new TH1F("Graph_S0S12S18_A_vs_p1014","S0S12S18",100,260,1940);
   Graph_S0S12S18_A_vs_p1014->SetMinimum(-0.06448632);
   Graph_S0S12S18_A_vs_p1014->SetMaximum(0.2658316);
   Graph_S0S12S18_A_vs_p1014->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1014->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1014->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_A_vs_p1014->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_A_vs_p1014->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1014->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1014->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1014->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1014->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1014->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1014->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1014->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1014->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1014->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1014->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1014->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1014->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1014);
   
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
