void AllDecaysAndTrackReco_AEDM_vs_p_overlay_acceptedInterpolatedMomBins()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 21 21:29:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-370.8786,-0.08001138,3337.907,0.4274637);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AEDM_vs_p_thetaY_fx1001[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1001[12] = {
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
   Double_t AEDM_vs_p_thetaY_fex1001[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1001[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1001,AEDM_vs_p_thetaY_fy1001,AEDM_vs_p_thetaY_fex1001,AEDM_vs_p_thetaY_fey1001);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle("Momentum binned acceptance weighting with interpolation");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AEDM_vs_p_thetaY1001 = new TH1F("Graph_AEDM_vs_p_thetaY1001","Momentum binned acceptance weighting with interpolation",100,0,3123.188);
   Graph_AEDM_vs_p_thetaY1001->SetMinimum(-0.02926387);
   Graph_AEDM_vs_p_thetaY1001->SetMaximum(0.3767162);
   Graph_AEDM_vs_p_thetaY1001->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1001->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetRange(1,95);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1001);
   
   gre->Draw("apl");
   
   Double_t AEDM_vs_p_thetaY_fx1002[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1002[12] = {
   0.292553,
   0.1686717,
   0.05747598,
   0.09313998,
   0.1225126,
   0.1212402,
   0.1246983,
   0.1203932,
   0.09765207,
   0.1029559,
   0.07941586,
   0.04335982};
   Double_t AEDM_vs_p_thetaY_fex1002[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1002[12] = {
   0.05630415,
   0.01839155,
   0.008109653,
   0.007763898,
   0.007113975,
   0.006664941,
   0.006278858,
   0.005956282,
   0.005707733,
   0.005656056,
   0.006270572,
   0.007434294};
   gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1002,AEDM_vs_p_thetaY_fy1002,AEDM_vs_p_thetaY_fex1002,AEDM_vs_p_thetaY_fey1002);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_AEDM_vs_p_thetaY1002 = new TH1F("Graph_AEDM_vs_p_thetaY1002","",100,0,3123.031);
   Graph_AEDM_vs_p_thetaY1002->SetMinimum(-0.01026958);
   Graph_AEDM_vs_p_thetaY1002->SetMaximum(0.4846945);
   Graph_AEDM_vs_p_thetaY1002->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1002->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetRange(1,101);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1002);
   
   gre->Draw("pl ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1003[11] = {
   451.8765,
   653.3173,
   880.3261,
   1123.092,
   1371.063,
   1620.182,
   1866.969,
   2115.425,
   2363.004,
   2613.718,
   2788.119};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1003[11] = {
   0.01297942,
   0.1156022,
   0.1133606,
   0.1125647,
   0.1333892,
   0.1434306,
   0.1229871,
   0.1046694,
   0.07444635,
   0.08756457,
   0.001149568};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1003[11] = {
   0.06505698,
   0.05491734,
   0.03977274,
   0.03885247,
   0.04148684,
   0.04589044,
   0.05356283,
   0.06665541,
   0.08634886,
   0.1056343,
   0.128527};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1003[11] = {
   0.0796819,
   0.02664107,
   0.01530765,
   0.01257311,
   0.01152949,
   0.01097593,
   0.01102901,
   0.01159891,
   0.01240721,
   0.01227726,
   0.02803425};
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1003,S0S12S18_AEDM_vs_p_thetaY_fy1003,S0S12S18_AEDM_vs_p_thetaY_fex1003,S0S12S18_AEDM_vs_p_thetaY_fey1003);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1003 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1003","S0S12S18_",100,218.1678,3021.891);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetMinimum(-0.2145366);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetMaximum(0.172108);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1003);
   
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
