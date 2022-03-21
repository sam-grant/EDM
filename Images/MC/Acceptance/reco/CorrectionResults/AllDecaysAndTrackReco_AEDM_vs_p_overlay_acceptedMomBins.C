void AllDecaysAndTrackReco_AEDM_vs_p_overlay_acceptedMomBins()
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
   
   Double_t AEDM_vs_p_thetaY_fx1008[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1008[12] = {
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
   Double_t AEDM_vs_p_thetaY_fex1008[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1008[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1008,AEDM_vs_p_thetaY_fy1008,AEDM_vs_p_thetaY_fex1008,AEDM_vs_p_thetaY_fey1008);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle("Momentum binned acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_AEDM_vs_p_thetaY10061008 = new TH1F("Graph_Graph_AEDM_vs_p_thetaY10061008","Momentum binned acceptance weighting",100,0,3123.188);
   Graph_Graph_AEDM_vs_p_thetaY10061008->SetMinimum(-0.02926387);
   Graph_Graph_AEDM_vs_p_thetaY10061008->SetMaximum(0.3767162);
   Graph_Graph_AEDM_vs_p_thetaY10061008->SetDirectory(0);
   Graph_Graph_AEDM_vs_p_thetaY10061008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_AEDM_vs_p_thetaY10061008->SetLineColor(ci);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetXaxis()->SetRange(1,95);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetXaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetYaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_AEDM_vs_p_thetaY10061008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_AEDM_vs_p_thetaY10061008);
   
   gre->Draw("apl");
   
   Double_t AEDM_vs_p_thetaY_fx1009[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1009[12] = {
   0.2925545,
   0.03537696,
   0.07070609,
   0.09592449,
   0.1291118,
   0.1264552,
   0.1380402,
   0.1275309,
   0.09779204,
   0.1151729,
   0.08890358,
   0.03906618};
   Double_t AEDM_vs_p_thetaY_fex1009[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1009[12] = {
   0.05630441,
   0.00790754,
   0.008674258,
   0.007965044,
   0.007241439,
   0.006669644,
   0.006430548,
   0.006132698,
   0.005890542,
   0.006286811,
   0.006730411,
   0.006676424};
   gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1009,AEDM_vs_p_thetaY_fy1009,AEDM_vs_p_thetaY_fex1009,AEDM_vs_p_thetaY_fey1009);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_AEDM_vs_p_thetaY10071009 = new TH1F("Graph_Graph_AEDM_vs_p_thetaY10071009","",100,0,3123.031);
   Graph_Graph_AEDM_vs_p_thetaY10071009->SetMinimum(-0.03088815);
   Graph_Graph_AEDM_vs_p_thetaY10071009->SetMaximum(0.6284836);
   Graph_Graph_AEDM_vs_p_thetaY10071009->SetDirectory(0);
   Graph_Graph_AEDM_vs_p_thetaY10071009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_AEDM_vs_p_thetaY10071009->SetLineColor(ci);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetXaxis()->SetRange(1,101);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetXaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetYaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_AEDM_vs_p_thetaY10071009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_AEDM_vs_p_thetaY10071009);
   
   gre->Draw("pl ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1010[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1010[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1010[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1010[11] = {
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
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1010,S0S12S18_AEDM_vs_p_thetaY_fy1010,S0S12S18_AEDM_vs_p_thetaY_fex1010,S0S12S18_AEDM_vs_p_thetaY_fey1010);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1010 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1010","S0S12S18_",100,218.0143,3022.323);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetMinimum(-0.3805953);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetMaximum(0.1843834);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1010);
   
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
   TText *pt_LaTex = pt->AddText("Momentum binned acceptance weighting");
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
