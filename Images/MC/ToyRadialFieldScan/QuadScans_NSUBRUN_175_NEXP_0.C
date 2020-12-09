void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1049[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1049[2] = {
   -1.904967,
   -1.473561};
   Double_t -30.000000 ppm_fex1049[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1049[2] = {
   0.01118368,
   0.01118368};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1049,-30.000000 ppm_fy1049,-30.000000 ppm_fex1049,-30.000000 ppm_fey1049);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1049 = new TH1F("Graph_mI30dO000000sPppm1049","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1049->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1049->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1049->SetDirectory(0);
   Graph_mI30dO000000sPppm1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1049->SetLineColor(ci);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1049->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1049->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1049->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1049->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1049);
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(3.622697e-19);
   quadLineFit1050->SetNDF(0);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,0.03635658);
   quadLineFit1050->SetParError(0,0.06375676);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,-27.17853);
   quadLineFit1050->SetParError(1,0.9964147);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("ap");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(3.622697e-19);
   quadLineFit1051->SetNDF(0);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,0.03635658);
   quadLineFit1051->SetParError(0,0.06375676);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,-27.17853);
   quadLineFit1051->SetParError(1,0.9964147);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t 30.000000 ppm_fx1051[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1051[2] = {
   3.281927,
   2.52138};
   Double_t 30.000000 ppm_fex1051[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1051[2] = {
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(2,30.000000 ppm_fx1051,30.000000 ppm_fy1051,30.000000 ppm_fex1051,30.000000 ppm_fey1051);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_30dO000000sPppm1051 = new TH1F("Graph_30dO000000sPppm1051","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1051->SetMinimum(2.431904);
   Graph_30dO000000sPppm1051->SetMaximum(3.371402);
   Graph_30dO000000sPppm1051->SetDirectory(0);
   Graph_30dO000000sPppm1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1051->SetLineColor(ci);
   Graph_30dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1051->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(2);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(1.582483e-18);
   quadLineFit1052->SetNDF(0);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,-0.1405358);
   quadLineFit1052->SetParError(0,0.06375676);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,47.91448);
   quadLineFit1052->SetParError(1,0.9964147);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(2);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(1.582483e-18);
   quadLineFit1053->SetNDF(0);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,-0.1405358);
   quadLineFit1053->SetParError(0,0.06375676);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,47.91448);
   quadLineFit1053->SetParError(1,0.9964147);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
