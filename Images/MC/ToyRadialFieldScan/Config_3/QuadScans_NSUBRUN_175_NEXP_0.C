void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:11 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1049[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1049[2] = {
   -3.174582,
   -2.53136};
   Double_t -50.000000 ppm_fex1049[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1049[2] = {
   0.01115179,
   0.01115179};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1049,-50.000000 ppm_fy1049,-50.000000 ppm_fex1049,-50.000000 ppm_fey1049);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1049 = new TH1F("Graph_mI50dO000000sPppm1049","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1049->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1049->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1049->SetDirectory(0);
   Graph_mI50dO000000sPppm1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1049->SetLineColor(ci);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1049->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1049->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1049);
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(1.048809e-19);
   quadLineFit1050->SetNDF(0);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,-5.74747);
   quadLineFit1050->SetParError(0,0.07140628);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,0.1608055);
   quadLineFit1050->SetParError(1,0.003942752);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("ap");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(1.048809e-19);
   quadLineFit1051->SetNDF(0);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,-5.74747);
   quadLineFit1051->SetParError(0,0.07140628);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,0.1608055);
   quadLineFit1051->SetParError(1,0.003942752);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t 50.000000 ppm_fx1051[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1051[2] = {
   4.379387,
   3.472125};
   Double_t 50.000000 ppm_fex1051[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1051[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,50.000000 ppm_fx1051,50.000000 ppm_fy1051,50.000000 ppm_fex1051,50.000000 ppm_fey1051);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1051 = new TH1F("Graph_50dO000000sPppm1051","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1051->SetMinimum(3.368017);
   Graph_50dO000000sPppm1051->SetMaximum(4.483495);
   Graph_50dO000000sPppm1051->SetDirectory(0);
   Graph_50dO000000sPppm1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1051->SetLineColor(ci);
   Graph_50dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1051->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(2);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(5.918158e-21);
   quadLineFit1052->SetNDF(0);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,8.008434);
   quadLineFit1052->SetParError(0,0.07140628);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,-0.2268154);
   quadLineFit1052->SetParError(1,0.003942752);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(2);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(5.918158e-21);
   quadLineFit1053->SetNDF(0);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,8.008434);
   quadLineFit1053->SetParError(0,0.07140628);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,-0.2268154);
   quadLineFit1053->SetParError(1,0.003942752);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
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
