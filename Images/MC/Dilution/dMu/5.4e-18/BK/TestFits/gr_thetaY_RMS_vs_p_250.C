void gr_thetaY_RMS_vs_p_250()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 25 15:52:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->Range(498.445,-1.638801,2741.917,37.81662);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_thetaY_RMS_vs_p_fx1002[11] = {
   451.788,
   653.3045,
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041,
   2614.061,
   2788.497};
   Double_t S0S12S18_thetaY_RMS_vs_p_fy1002[11] = {
   31.186,
   25.82557,
   21.23924,
   17.97409,
   15.43013,
   13.27681,
   11.39599,
   9.629802,
   7.943062,
   6.254216,
   4.955824};
   Double_t S0S12S18_thetaY_RMS_vs_p_fex1002[11] = {
   0.08198194,
   0.06912392,
   0.05013223,
   0.04895013,
   0.05223031,
   0.05773684,
   0.06715259,
   0.08317769,
   0.1068838,
   0.1311515,
   0.1590514};
   Double_t S0S12S18_thetaY_RMS_vs_p_fey1002[11] = {
   0.05471868,
   0.01833205,
   0.01052293,
   0.008642313,
   0.007919987,
   0.007544462,
   0.007544692,
   0.007891038,
   0.008389874,
   0.008318616,
   0.01872002};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_thetaY_RMS_vs_p_fx1002,S0S12S18_thetaY_RMS_vs_p_fy1002,S0S12S18_thetaY_RMS_vs_p_fex1002,S0S12S18_thetaY_RMS_vs_p_fey1002);
   gre->SetName("S0S12S18_thetaY_RMS_vs_p");
   gre->SetTitle(";Decay vertex momentum [MeV]; #sigma_{#theta_{y}} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_thetaY_RMS_vs_p1002 = new TH1F("Graph_S0S12S18_thetaY_RMS_vs_p1002","",100,218.0111,3022.351);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->SetMinimum(2.306742);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->SetMaximum(33.87108);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->SetDirectory(0);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_thetaY_RMS_vs_p1002->SetLineColor(ci);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetXaxis()->SetRange(19,82);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetYaxis()->SetTitle(" #sigma_{#theta_{y}} [mrad] / 250 MeV");
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_thetaY_RMS_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_thetaY_RMS_vs_p1002);
   
   
   TF1 *fitPol31003 = new TF1("fitPol3","pol3",800,2400, TF1::EAddToList::kNo);
   fitPol31003->SetFillColor(19);
   fitPol31003->SetFillStyle(0);
   fitPol31003->SetLineColor(2);
   fitPol31003->SetLineWidth(2);
   fitPol31003->SetChisquare(111.3533);
   fitPol31003->SetNDF(3);
   fitPol31003->GetXaxis()->SetLabelFont(42);
   fitPol31003->GetXaxis()->SetTitleOffset(1);
   fitPol31003->GetXaxis()->SetTitleFont(42);
   fitPol31003->GetYaxis()->SetLabelFont(42);
   fitPol31003->GetYaxis()->SetTitleFont(42);
   fitPol31003->SetParameter(0,40.08218);
   fitPol31003->SetParError(0,0.1555576);
   fitPol31003->SetParLimits(0,0,0);
   fitPol31003->SetParameter(1,-0.02978274);
   fitPol31003->SetParError(1,0.0003112881);
   fitPol31003->SetParLimits(1,0,0);
   fitPol31003->SetParameter(2,1.102656e-05);
   fitPol31003->SetParError(2,1.976296e-07);
   fitPol31003->SetParLimits(2,0,0);
   fitPol31003->SetParameter(3,-1.769797e-09);
   fitPol31003->SetParError(3,4.005413e-11);
   fitPol31003->SetParLimits(3,0,0);
   fitPol31003->SetParent(gre);
   gre->GetListOfFunctions()->Add(fitPol31003);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.615,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 111.4 / 3");
   ptstats_LaTex = ptstats->AddText("p0       = 40.08 #pm 0.1556 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.02978 #pm 0.0003113 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.103e-05 #pm 1.976e-07 ");
   ptstats_LaTex = ptstats->AddText("p3       = -1.77e-09 #pm 4.005e-11 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
