void AllDecaysAndTrackReco_AEDM_vs_p_overlay_acceptedInterpolatedMomBins()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 17 02:57:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-370.8786,-0.08001138,3337.907,0.4274637);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AEDM_vs_p_thetaY_fx1013[12] = {
   124.2539,
   373.7923,
   623.4572,
   873.0274,
   1122.67,
   1372.178,
   1621.49,
   1870.756,
   2119.553,
   2367.462,
   2613.359,
   2850.479};
   Double_t AEDM_vs_p_thetaY_fy1013[12] = {
   0.2964107,
   0.3141074,
   0.3069784,
   0.2732134,
   0.2822038,
   0.2512716,
   0.2322109,
   0.2079808,
   0.1675254,
   0.1579271,
   0.1028512,
   0.04835136};
   Double_t AEDM_vs_p_thetaY_fex1013[12] = {
   0.02299459,
   0.02360158,
   0.02437509,
   0.02543063,
   0.02676917,
   0.02849841,
   0.03070777,
   0.03358955,
   0.03763698,
   0.04372902,
   0.05423158,
   0.07692297};
   Double_t AEDM_vs_p_thetaY_fey1013[12] = {
   0.05640746,
   0.02257019,
   0.0165984,
   0.01352441,
   0.01160639,
   0.01029872,
   0.009374379,
   0.008706632,
   0.008227386,
   0.007911081,
   0.007759439,
   0.008008876};
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1013,AEDM_vs_p_thetaY_fy1013,AEDM_vs_p_thetaY_fex1013,AEDM_vs_p_thetaY_fey1013);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle("Momentum binned acceptance weighting with interpolation");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_AEDM_vs_p_thetaY10111013 = new TH1F("Graph_Graph_AEDM_vs_p_thetaY10111013","Momentum binned acceptance weighting with interpolation",100,0,3123.188);
   Graph_Graph_AEDM_vs_p_thetaY10111013->SetMinimum(-0.02926387);
   Graph_Graph_AEDM_vs_p_thetaY10111013->SetMaximum(0.3767162);
   Graph_Graph_AEDM_vs_p_thetaY10111013->SetDirectory(0);
   Graph_Graph_AEDM_vs_p_thetaY10111013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_AEDM_vs_p_thetaY10111013->SetLineColor(ci);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetXaxis()->SetRange(1,95);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetXaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetYaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_AEDM_vs_p_thetaY10111013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_AEDM_vs_p_thetaY10111013);
   
   gre->Draw("apl");
   
   Double_t AEDM_vs_p_thetaY_fx1014[12] = {
   124.3911,
   374.0145,
   623.706,
   873.2453,
   1122.825,
   1372.234,
   1621.448,
   1870.625,
   2119.352,
   2367.231,
   2613.18,
   2850.349};
   Double_t AEDM_vs_p_thetaY_fy1014[12] = {
   0.292553,
   0.1665971,
   0.05374821,
   0.09820935,
   0.116144,
   0.1282463,
   0.1287644,
   0.1222148,
   0.1023889,
   0.09837273,
   0.07298812,
   0.04245888};
   Double_t AEDM_vs_p_thetaY_fex1014[12] = {
   0.022956,
   0.02346665,
   0.02411141,
   0.02499881,
   0.02620537,
   0.02782515,
   0.02997202,
   0.03285355,
   0.03696012,
   0.0431715,
   0.05382126,
   0.07665942};
   Double_t AEDM_vs_p_thetaY_fey1014[12] = {
   0.05630415,
   0.01839212,
   0.008109777,
   0.00777334,
   0.007107778,
   0.006662323,
   0.006279165,
   0.005964361,
   0.005708126,
   0.00565457,
   0.006271621,
   0.007420497};
   gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1014,AEDM_vs_p_thetaY_fy1014,AEDM_vs_p_thetaY_fex1014,AEDM_vs_p_thetaY_fey1014);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_AEDM_vs_p_thetaY10121014 = new TH1F("Graph_Graph_AEDM_vs_p_thetaY10121014","",100,0,3123.031);
   Graph_Graph_AEDM_vs_p_thetaY10121014->SetMinimum(-0.00409908);
   Graph_Graph_AEDM_vs_p_thetaY10121014->SetMaximum(0.4869324);
   Graph_Graph_AEDM_vs_p_thetaY10121014->SetDirectory(0);
   Graph_Graph_AEDM_vs_p_thetaY10121014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_AEDM_vs_p_thetaY10121014->SetLineColor(ci);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetXaxis()->SetRange(1,101);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetXaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetYaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_AEDM_vs_p_thetaY10121014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_AEDM_vs_p_thetaY10121014);
   
   gre->Draw("pl ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1015[11] = {
   451.7878,
   653.2973,
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023,
   2788.472};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1015[11] = {
   -0.01468402,
   0.1536923,
   0.1239521,
   0.1381271,
   0.1378592,
   0.1536674,
   0.1339238,
   0.1027149,
   0.06530452,
   0.09227117,
   -0.006765787};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1015[11] = {
   0.08119292,
   0.06850517,
   0.04968577,
   0.04853003,
   0.05180005,
   0.05728402,
   0.06665481,
   0.0826074,
   0.106243,
   0.1304439,
   0.1582888};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1015[11] = {
   0.1083876,
   0.03628205,
   0.02085273,
   0.0171317,
   0.01570263,
   0.01494665,
   0.01497984,
   0.01568636,
   0.01666708,
   0.01653551,
   0.03740565};
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1015,S0S12S18_AEDM_vs_p_thetaY_fy1015,S0S12S18_AEDM_vs_p_thetaY_fex1015,S0S12S18_AEDM_vs_p_thetaY_fey1015);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1015 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1015","S0S12S18_",100,218.0143,3022.323);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->SetMinimum(-0.3805953);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->SetMaximum(0.1843834);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1015);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (unweighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (weighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_AEDM_vs_p_thetaY","Reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9341608,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Momentum binned acceptance weighting with interpolation");
   pt->Draw();
   
   leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (unweighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (weighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_AEDM_vs_p_thetaY","Reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
