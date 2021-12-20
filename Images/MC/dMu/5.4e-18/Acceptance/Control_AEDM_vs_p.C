void Control_AEDM_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec 16 15:59:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-97.53538,-0.04375,3374.723,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AEDM_vs_p_thetaY_fx1009[12] = {
   141.6991,
   381.0665,
   628.3264,
   876.3507,
   1124.574,
   1373.651,
   1622.836,
   1871.414,
   2119.624,
   2367.727,
   2613.52,
   2850.226};
   Double_t AEDM_vs_p_thetaY_fy1009[12] = {
   0.2477444,
   0.2682786,
   0.2485024,
   0.2602945,
   0.257144,
   0.2517949,
   0.2308394,
   0.2142686,
   0.1862239,
   0.1496068,
   0.1112019,
   0.0611828};
   Double_t AEDM_vs_p_thetaY_fex1009[12] = {
   0.02289413,
   0.02098637,
   0.01898907,
   0.0178439,
   0.01766308,
   0.01809829,
   0.01885099,
   0.02018278,
   0.022406,
   0.02600401,
   0.03208401,
   0.04542575};
   Double_t AEDM_vs_p_thetaY_fey1009[12] = {
   0.04434072,
   0.01848853,
   0.0120896,
   0.009059885,
   0.00749283,
   0.006509897,
   0.00578635,
   0.005301103,
   0.004976133,
   0.004754699,
   0.004608096,
   0.004735713};
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1009,AEDM_vs_p_thetaY_fy1009,AEDM_vs_p_thetaY_fex1009,AEDM_vs_p_thetaY_fey1009);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AEDM_vs_p_thetaY1009 = new TH1F("Graph_AEDM_vs_p_thetaY1009","",100,0,3121.131);
   Graph_AEDM_vs_p_thetaY1009->SetMinimum(0);
   Graph_AEDM_vs_p_thetaY1009->SetMaximum(0.35);
   Graph_AEDM_vs_p_thetaY1009->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1009->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1009->GetXaxis()->SetRange(9,97);
   Graph_AEDM_vs_p_thetaY1009->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1009->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1009->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1009->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1009->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitleOffset(1.15);
   Graph_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1009->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1009->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1009);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1010[12] = {
   189.6117,
   434.8133,
   652.5915,
   883.8391,
   1126.202,
   1373.788,
   1622.437,
   1870.724,
   2119.217,
   2366.762,
   2613.527,
   2824.515};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1010[12] = {
   1.390126,
   0.1612497,
   0.08501132,
   0.1346622,
   0.1272751,
   0.1664517,
   0.1509131,
   0.1620157,
   0.105209,
   0.1005027,
   0.08693397,
   0.06980805};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1010[12] = {
   0.6020541,
   0.1166688,
   0.0647508,
   0.04374749,
   0.04049387,
   0.04048471,
   0.04220934,
   0.04562989,
   0.05158525,
   0.06063771,
   0.07618059,
   0.09502246};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1010[12] = {
   0.9428443,
   0.1164362,
   0.03795669,
   0.01995838,
   0.01520158,
   0.01307734,
   0.01191705,
   0.0113559,
   0.01124755,
   0.01143376,
   0.01210306,
   0.01758583};
   gre = new TGraphErrors(12,S0S12S18_AEDM_vs_p_thetaY_fx1010,S0S12S18_AEDM_vs_p_thetaY_fy1010,S0S12S18_AEDM_vs_p_thetaY_fex1010,S0S12S18_AEDM_vs_p_thetaY_fey1010);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1010 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1010","S0S12S18_",100,0,3088.17);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetMinimum(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetMaximum(0.35);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1010->GetXaxis()->SetRange(9,98);
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
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.4,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AEDM_vs_p_thetaY","Accepted decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_AEDM_vs_p_thetaY","Reco vertices (#geq12 planes hit)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
