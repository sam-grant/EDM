void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1031[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1031[3] = {
   -1.631727,
   -1.44615,
   -1.347579};
   Double_t -30.000000 ppm_fex1031[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1031[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1031,-30.000000 ppm_fy1031,-30.000000 ppm_fex1031,-30.000000 ppm_fey1031);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1031 = new TH1F("Graph_mI30dO000000sPppm1031","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1031->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1031->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1031->SetDirectory(0);
   Graph_mI30dO000000sPppm1031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1031->SetLineColor(ci);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1031->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1031->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1031->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1031->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1031);
   
   
   TF1 *quadLineFit1032 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1032->SetFillColor(19);
   quadLineFit1032->SetFillStyle(0);
   quadLineFit1032->SetLineWidth(2);
   quadLineFit1032->SetChisquare(5.780605);
   quadLineFit1032->SetNDF(1);
   quadLineFit1032->GetXaxis()->SetLabelFont(42);
   quadLineFit1032->GetXaxis()->SetTitleOffset(1);
   quadLineFit1032->GetXaxis()->SetTitleFont(42);
   quadLineFit1032->GetYaxis()->SetLabelFont(42);
   quadLineFit1032->GetYaxis()->SetTitleFont(42);
   quadLineFit1032->SetParameter(0,-2.753819);
   quadLineFit1032->SetParError(0,0.0944053);
   quadLineFit1032->SetParLimits(0,0,0);
   quadLineFit1032->SetParameter(1,0.07103705);
   quadLineFit1032->SetParError(1,0.005223288);
   quadLineFit1032->SetParLimits(1,0,0);
   quadLineFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1032);
   gre->Draw("ap");
   
   TF1 *quadLineFit1033 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1033->SetFillColor(19);
   quadLineFit1033->SetFillStyle(0);
   quadLineFit1033->SetLineWidth(2);
   quadLineFit1033->SetChisquare(5.780605);
   quadLineFit1033->SetNDF(1);
   quadLineFit1033->GetXaxis()->SetLabelFont(42);
   quadLineFit1033->GetXaxis()->SetTitleOffset(1);
   quadLineFit1033->GetXaxis()->SetTitleFont(42);
   quadLineFit1033->GetYaxis()->SetLabelFont(42);
   quadLineFit1033->GetYaxis()->SetTitleFont(42);
   quadLineFit1033->SetParameter(0,-2.753819);
   quadLineFit1033->SetParError(0,0.0944053);
   quadLineFit1033->SetParLimits(0,0,0);
   quadLineFit1033->SetParameter(1,0.07103705);
   quadLineFit1033->SetParError(1,0.005223288);
   quadLineFit1033->SetParLimits(1,0,0);
   quadLineFit1033->Draw("same");
   
   Double_t 30.000000 ppm_fx1033[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1033[3] = {
   2.840442,
   2.542322,
   2.264256};
   Double_t 30.000000 ppm_fex1033[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1033[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,30.000000 ppm_fx1033,30.000000 ppm_fy1033,30.000000 ppm_fex1033,30.000000 ppm_fey1033);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1033 = new TH1F("Graph_30dO000000sPppm1033","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1033->SetMinimum(2.188909);
   Graph_30dO000000sPppm1033->SetMaximum(2.915789);
   Graph_30dO000000sPppm1033->SetDirectory(0);
   Graph_30dO000000sPppm1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1033->SetLineColor(ci);
   Graph_30dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineColor(2);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(0.3070914);
   quadLineFit1034->SetNDF(1);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,5.141844);
   quadLineFit1034->SetParError(0,0.0944098);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,-0.1440466);
   quadLineFit1034->SetParError(1,0.005223539);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("p ");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineColor(2);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(0.3070914);
   quadLineFit1035->SetNDF(1);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,5.141844);
   quadLineFit1035->SetParError(0,0.0944098);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,-0.1440466);
   quadLineFit1035->SetParError(1,0.005223539);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t 0.000000 ppm_fx1035[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1035[3] = {
   0.5940856,
   0.5143488,
   0.5103802};
   Double_t 0.000000 ppm_fex1035[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1035[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,0.000000 ppm_fx1035,0.000000 ppm_fy1035,0.000000 ppm_fex1035,0.000000 ppm_fey1035);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1035 = new TH1F("Graph_0dO000000sPppm1035","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1035->SetMinimum(0.4842813);
   Graph_0dO000000sPppm1035->SetMaximum(0.6201845);
   Graph_0dO000000sPppm1035->SetDirectory(0);
   Graph_0dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1035->SetLineColor(ci);
   Graph_0dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(3);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(4.383738);
   quadLineFit1036->SetNDF(1);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,0.9162788);
   quadLineFit1036->SetParError(0,0.09440504);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,-0.02092633);
   quadLineFit1036->SetParError(1,0.005223273);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(3);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(4.383738);
   quadLineFit1037->SetNDF(1);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,0.9162788);
   quadLineFit1037->SetParError(0,0.09440504);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,-0.02092633);
   quadLineFit1037->SetParError(1,0.005223273);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
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
