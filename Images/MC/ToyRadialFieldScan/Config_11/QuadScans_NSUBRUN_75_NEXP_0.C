void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1017[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1017[3] = {
   -3.128954,
   -2.80893,
   -2.520647};
   Double_t -50.000000 ppm_fex1017[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1017[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1017,-50.000000 ppm_fy1017,-50.000000 ppm_fex1017,-50.000000 ppm_fey1017);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1017 = new TH1F("Graph_mI50dO000000sPppm1017","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1017->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1017->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1017->SetDirectory(0);
   Graph_mI50dO000000sPppm1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1017->SetLineColor(ci);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1017->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1017->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1017->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1017->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1017);
   
   
   TF1 *quadLineFit1018 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1018->SetFillColor(19);
   quadLineFit1018->SetFillStyle(0);
   quadLineFit1018->SetLineWidth(2);
   quadLineFit1018->SetChisquare(0.583684);
   quadLineFit1018->SetNDF(1);
   quadLineFit1018->GetXaxis()->SetLabelFont(42);
   quadLineFit1018->GetXaxis()->SetTitleOffset(1);
   quadLineFit1018->GetXaxis()->SetTitleFont(42);
   quadLineFit1018->GetYaxis()->SetLabelFont(42);
   quadLineFit1018->GetYaxis()->SetTitleFont(42);
   quadLineFit1018->SetParameter(0,-5.55689);
   quadLineFit1018->SetParError(0,0.1083799);
   quadLineFit1018->SetParLimits(0,0,0);
   quadLineFit1018->SetParameter(1,0.1520767);
   quadLineFit1018->SetParError(1,0.005996478);
   quadLineFit1018->SetParLimits(1,0,0);
   quadLineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1018);
   gre->Draw("ap");
   
   TF1 *quadLineFit1019 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1019->SetFillColor(19);
   quadLineFit1019->SetFillStyle(0);
   quadLineFit1019->SetLineWidth(2);
   quadLineFit1019->SetChisquare(0.583684);
   quadLineFit1019->SetNDF(1);
   quadLineFit1019->GetXaxis()->SetLabelFont(42);
   quadLineFit1019->GetXaxis()->SetTitleOffset(1);
   quadLineFit1019->GetXaxis()->SetTitleFont(42);
   quadLineFit1019->GetYaxis()->SetLabelFont(42);
   quadLineFit1019->GetYaxis()->SetTitleFont(42);
   quadLineFit1019->SetParameter(0,-5.55689);
   quadLineFit1019->SetParError(0,0.1083799);
   quadLineFit1019->SetParLimits(0,0,0);
   quadLineFit1019->SetParameter(1,0.1520767);
   quadLineFit1019->SetParError(1,0.005996478);
   quadLineFit1019->SetParLimits(1,0,0);
   quadLineFit1019->Draw("same");
   
   Double_t 50.000000 ppm_fx1019[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1019[3] = {
   4.369247,
   3.9075,
   3.505419};
   Double_t 50.000000 ppm_fex1019[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1019[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,50.000000 ppm_fx1019,50.000000 ppm_fy1019,50.000000 ppm_fex1019,50.000000 ppm_fey1019);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1019 = new TH1F("Graph_50dO000000sPppm1019","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1019->SetMinimum(3.398683);
   Graph_50dO000000sPppm1019->SetMaximum(4.475984);
   Graph_50dO000000sPppm1019->SetDirectory(0);
   Graph_50dO000000sPppm1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1019->SetLineColor(ci);
   Graph_50dO000000sPppm1019->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1019->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1019->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1019->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1019->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1019->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1019->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1019);
   
   
   TF1 *quadLineFit1020 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1020->SetFillColor(19);
   quadLineFit1020->SetFillStyle(0);
   quadLineFit1020->SetLineColor(2);
   quadLineFit1020->SetLineWidth(2);
   quadLineFit1020->SetChisquare(2.062507);
   quadLineFit1020->SetNDF(1);
   quadLineFit1020->GetXaxis()->SetLabelFont(42);
   quadLineFit1020->GetXaxis()->SetTitleOffset(1);
   quadLineFit1020->GetXaxis()->SetTitleFont(42);
   quadLineFit1020->GetYaxis()->SetLabelFont(42);
   quadLineFit1020->GetYaxis()->SetTitleFont(42);
   quadLineFit1020->SetParameter(0,7.814616);
   quadLineFit1020->SetParError(0,0.1083632);
   quadLineFit1020->SetParLimits(0,0,0);
   quadLineFit1020->SetParameter(1,-0.2159571);
   quadLineFit1020->SetParError(1,0.005995561);
   quadLineFit1020->SetParLimits(1,0,0);
   quadLineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1020);
   gre->Draw("p ");
   
   TF1 *quadLineFit1021 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1021->SetFillColor(19);
   quadLineFit1021->SetFillStyle(0);
   quadLineFit1021->SetLineColor(2);
   quadLineFit1021->SetLineWidth(2);
   quadLineFit1021->SetChisquare(2.062507);
   quadLineFit1021->SetNDF(1);
   quadLineFit1021->GetXaxis()->SetLabelFont(42);
   quadLineFit1021->GetXaxis()->SetTitleOffset(1);
   quadLineFit1021->GetXaxis()->SetTitleFont(42);
   quadLineFit1021->GetYaxis()->SetLabelFont(42);
   quadLineFit1021->GetYaxis()->SetTitleFont(42);
   quadLineFit1021->SetParameter(0,7.814616);
   quadLineFit1021->SetParError(0,0.1083632);
   quadLineFit1021->SetParLimits(0,0,0);
   quadLineFit1021->SetParameter(1,-0.2159571);
   quadLineFit1021->SetParError(1,0.005995561);
   quadLineFit1021->SetParLimits(1,0,0);
   quadLineFit1021->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
