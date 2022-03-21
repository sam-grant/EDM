void AllDecays_AEDM_vs_p_overlay_acceptedInterpolatedMomBins()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar  1 12:25:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-370.8786,-0.08001138,3337.907,0.4274637);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AEDM_vs_p_thetaY_fx1011[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1011[12] = {
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
   Double_t AEDM_vs_p_thetaY_fex1011[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1011[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1011,AEDM_vs_p_thetaY_fy1011,AEDM_vs_p_thetaY_fex1011,AEDM_vs_p_thetaY_fey1011);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle("All decays");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AEDM_vs_p_thetaY1011 = new TH1F("Graph_AEDM_vs_p_thetaY1011","All decays",100,0,3123.188);
   Graph_AEDM_vs_p_thetaY1011->SetMinimum(-0.02926387);
   Graph_AEDM_vs_p_thetaY1011->SetMaximum(0.3767162);
   Graph_AEDM_vs_p_thetaY1011->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1011->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1011->GetXaxis()->SetRange(1,95);
   Graph_AEDM_vs_p_thetaY1011->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1011->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1011->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1011->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1011->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1011->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1011->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1011->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1011->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1011->GetYaxis()->SetTitleOffset(1.2);
   Graph_AEDM_vs_p_thetaY1011->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1011->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1011->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1011);
   
   gre->Draw("apl");
   
   Double_t AEDM_vs_p_thetaY_fx1012[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1012[12] = {
   0.2925545,
   0.168063,
   0.06884823,
   0.09957994,
   0.1332358,
   0.1283,
   0.1418632,
   0.1269849,
   0.09938009,
   0.1155076,
   0.08926247,
   0.04031057};
   Double_t AEDM_vs_p_thetaY_fex1012[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1012[12] = {
   0.05630441,
   0.0184371,
   0.008322675,
   0.00798493,
   0.007295769,
   0.006762293,
   0.006575323,
   0.006109027,
   0.005961441,
   0.006279114,
   0.006715399,
   0.006796831};
   gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1012,AEDM_vs_p_thetaY_fy1012,AEDM_vs_p_thetaY_fex1012,AEDM_vs_p_thetaY_fey1012);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_AEDM_vs_p_thetaY1012 = new TH1F("Graph_AEDM_vs_p_thetaY1012","",100,0,3123.031);
   Graph_AEDM_vs_p_thetaY1012->SetMinimum(-0.02878851);
   Graph_AEDM_vs_p_thetaY1012->SetMaximum(0.4853548);
   Graph_AEDM_vs_p_thetaY1012->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1012->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1012->GetXaxis()->SetRange(1,101);
   Graph_AEDM_vs_p_thetaY1012->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1012->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1012->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1012->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1012->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1012->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1012->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1012->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1012->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_AEDM_vs_p_thetaY1012->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1012->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1012->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1012);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.69,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AEDM_vs_p_thetaY","Unweighted","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","Weighted","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4001759,0.9341608,0.5998241,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("All decays");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
