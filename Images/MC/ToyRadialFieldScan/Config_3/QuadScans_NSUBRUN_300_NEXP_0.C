void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:49:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1133[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1133[3] = {
   -1.660785,
   -1.471229,
   -1.307287};
   Double_t -30.000000 ppm_fex1133[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1133[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1133,-30.000000 ppm_fy1133,-30.000000 ppm_fex1133,-30.000000 ppm_fey1133);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1133 = new TH1F("Graph_mI30dO000000sPppm1133","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1133->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1133->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1133->SetDirectory(0);
   Graph_mI30dO000000sPppm1133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1133->SetLineColor(ci);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1133->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1133->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1133->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1133->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1133);
   
   
   TF1 *quadLineFit1134 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1134->SetFillColor(19);
   quadLineFit1134->SetFillStyle(0);
   quadLineFit1134->SetLineWidth(2);
   quadLineFit1134->SetChisquare(1.510446);
   quadLineFit1134->SetNDF(1);
   quadLineFit1134->GetXaxis()->SetLabelFont(42);
   quadLineFit1134->GetXaxis()->SetTitleOffset(1);
   quadLineFit1134->GetXaxis()->SetTitleFont(42);
   quadLineFit1134->GetYaxis()->SetLabelFont(42);
   quadLineFit1134->GetYaxis()->SetTitleFont(42);
   quadLineFit1134->SetParameter(0,-3.070507);
   quadLineFit1134->SetParError(0,0.05437029);
   quadLineFit1134->SetParLimits(0,0,0);
   quadLineFit1134->SetParameter(1,0.08837446);
   quadLineFit1134->SetParError(1,0.003008217);
   quadLineFit1134->SetParLimits(1,0,0);
   quadLineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1134);
   gre->Draw("ap");
   
   TF1 *quadLineFit1135 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1135->SetFillColor(19);
   quadLineFit1135->SetFillStyle(0);
   quadLineFit1135->SetLineWidth(2);
   quadLineFit1135->SetChisquare(1.510446);
   quadLineFit1135->SetNDF(1);
   quadLineFit1135->GetXaxis()->SetLabelFont(42);
   quadLineFit1135->GetXaxis()->SetTitleOffset(1);
   quadLineFit1135->GetXaxis()->SetTitleFont(42);
   quadLineFit1135->GetYaxis()->SetLabelFont(42);
   quadLineFit1135->GetYaxis()->SetTitleFont(42);
   quadLineFit1135->SetParameter(0,-3.070507);
   quadLineFit1135->SetParError(0,0.05437029);
   quadLineFit1135->SetParLimits(0,0,0);
   quadLineFit1135->SetParameter(1,0.08837446);
   quadLineFit1135->SetParError(1,0.003008217);
   quadLineFit1135->SetParLimits(1,0,0);
   quadLineFit1135->Draw("same");
   
   Double_t -10.000000 ppm_fx1135[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1135[3] = {
   -0.1627521,
   -0.1229565,
   -0.1382759};
   Double_t -10.000000 ppm_fex1135[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1135[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1135,-10.000000 ppm_fy1135,-10.000000 ppm_fex1135,-10.000000 ppm_fey1135);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1135 = new TH1F("Graph_mI10dO000000sPppm1135","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1135->SetMinimum(-0.176942);
   Graph_mI10dO000000sPppm1135->SetMaximum(-0.1087666);
   Graph_mI10dO000000sPppm1135->SetDirectory(0);
   Graph_mI10dO000000sPppm1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1135->SetLineColor(ci);
   Graph_mI10dO000000sPppm1135->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1135->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1135->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1135->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1135->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1135->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1135->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1135);
   
   
   TF1 *quadLineFit1136 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1136->SetFillColor(19);
   quadLineFit1136->SetFillStyle(0);
   quadLineFit1136->SetLineColor(2);
   quadLineFit1136->SetLineWidth(2);
   quadLineFit1136->SetChisquare(6.993038);
   quadLineFit1136->SetNDF(1);
   quadLineFit1136->GetXaxis()->SetLabelFont(42);
   quadLineFit1136->GetXaxis()->SetTitleOffset(1);
   quadLineFit1136->GetXaxis()->SetTitleFont(42);
   quadLineFit1136->GetYaxis()->SetLabelFont(42);
   quadLineFit1136->GetYaxis()->SetTitleFont(42);
   quadLineFit1136->SetParameter(0,-0.2514709);
   quadLineFit1136->SetParError(0,0.05437081);
   quadLineFit1136->SetParLimits(0,0,0);
   quadLineFit1136->SetParameter(1,0.006119042);
   quadLineFit1136->SetParError(1,0.003008246);
   quadLineFit1136->SetParLimits(1,0,0);
   quadLineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1136);
   gre->Draw("p ");
   
   TF1 *quadLineFit1137 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1137->SetFillColor(19);
   quadLineFit1137->SetFillStyle(0);
   quadLineFit1137->SetLineColor(2);
   quadLineFit1137->SetLineWidth(2);
   quadLineFit1137->SetChisquare(6.993038);
   quadLineFit1137->SetNDF(1);
   quadLineFit1137->GetXaxis()->SetLabelFont(42);
   quadLineFit1137->GetXaxis()->SetTitleOffset(1);
   quadLineFit1137->GetXaxis()->SetTitleFont(42);
   quadLineFit1137->GetYaxis()->SetLabelFont(42);
   quadLineFit1137->GetYaxis()->SetTitleFont(42);
   quadLineFit1137->SetParameter(0,-0.2514709);
   quadLineFit1137->SetParError(0,0.05437081);
   quadLineFit1137->SetParLimits(0,0,0);
   quadLineFit1137->SetParameter(1,0.006119042);
   quadLineFit1137->SetParError(1,0.003008246);
   quadLineFit1137->SetParLimits(1,0,0);
   quadLineFit1137->Draw("same");
   
   Double_t 10.000000 ppm_fx1137[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1137[3] = {
   1.364982,
   1.189814,
   1.077108};
   Double_t 10.000000 ppm_fex1137[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1137[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,10.000000 ppm_fx1137,10.000000 ppm_fy1137,10.000000 ppm_fex1137,10.000000 ppm_fey1137);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1137 = new TH1F("Graph_10dO000000sPppm1137","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1137->SetMinimum(1.03811);
   Graph_10dO000000sPppm1137->SetMaximum(1.40398);
   Graph_10dO000000sPppm1137->SetDirectory(0);
   Graph_10dO000000sPppm1137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1137->SetLineColor(ci);
   Graph_10dO000000sPppm1137->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1137->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1137->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1137->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1137->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1137->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1137->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1137);
   
   
   TF1 *quadLineFit1138 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1138->SetFillColor(19);
   quadLineFit1138->SetFillStyle(0);
   quadLineFit1138->SetLineColor(3);
   quadLineFit1138->SetLineWidth(2);
   quadLineFit1138->SetChisquare(8.981804);
   quadLineFit1138->SetNDF(1);
   quadLineFit1138->GetXaxis()->SetLabelFont(42);
   quadLineFit1138->GetXaxis()->SetTitleOffset(1);
   quadLineFit1138->GetXaxis()->SetTitleFont(42);
   quadLineFit1138->GetYaxis()->SetLabelFont(42);
   quadLineFit1138->GetYaxis()->SetTitleFont(42);
   quadLineFit1138->SetParameter(0,2.506069);
   quadLineFit1138->SetParError(0,0.05437224);
   quadLineFit1138->SetParLimits(0,0,0);
   quadLineFit1138->SetParameter(1,-0.07196857);
   quadLineFit1138->SetParError(1,0.003008326);
   quadLineFit1138->SetParLimits(1,0,0);
   quadLineFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1138);
   gre->Draw("p ");
   
   TF1 *quadLineFit1139 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1139->SetFillColor(19);
   quadLineFit1139->SetFillStyle(0);
   quadLineFit1139->SetLineColor(3);
   quadLineFit1139->SetLineWidth(2);
   quadLineFit1139->SetChisquare(8.981804);
   quadLineFit1139->SetNDF(1);
   quadLineFit1139->GetXaxis()->SetLabelFont(42);
   quadLineFit1139->GetXaxis()->SetTitleOffset(1);
   quadLineFit1139->GetXaxis()->SetTitleFont(42);
   quadLineFit1139->GetYaxis()->SetLabelFont(42);
   quadLineFit1139->GetYaxis()->SetTitleFont(42);
   quadLineFit1139->SetParameter(0,2.506069);
   quadLineFit1139->SetParError(0,0.05437224);
   quadLineFit1139->SetParLimits(0,0,0);
   quadLineFit1139->SetParameter(1,-0.07196857);
   quadLineFit1139->SetParError(1,0.003008326);
   quadLineFit1139->SetParLimits(1,0,0);
   quadLineFit1139->Draw("same");
   
   Double_t 30.000000 ppm_fx1139[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1139[3] = {
   2.869567,
   2.544721,
   2.283652};
   Double_t 30.000000 ppm_fex1139[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1139[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,30.000000 ppm_fx1139,30.000000 ppm_fy1139,30.000000 ppm_fex1139,30.000000 ppm_fey1139);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1139 = new TH1F("Graph_30dO000000sPppm1139","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1139->SetMinimum(2.21485);
   Graph_30dO000000sPppm1139->SetMaximum(2.938369);
   Graph_30dO000000sPppm1139->SetDirectory(0);
   Graph_30dO000000sPppm1139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1139->SetLineColor(ci);
   Graph_30dO000000sPppm1139->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1139->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1139->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1139->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1139->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1139->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1139->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1139);
   
   
   TF1 *quadLineFit1140 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1140->SetFillColor(19);
   quadLineFit1140->SetFillStyle(0);
   quadLineFit1140->SetLineColor(4);
   quadLineFit1140->SetLineWidth(2);
   quadLineFit1140->SetChisquare(9.363469);
   quadLineFit1140->SetNDF(1);
   quadLineFit1140->GetXaxis()->SetLabelFont(42);
   quadLineFit1140->GetXaxis()->SetTitleOffset(1);
   quadLineFit1140->GetXaxis()->SetTitleFont(42);
   quadLineFit1140->GetYaxis()->SetLabelFont(42);
   quadLineFit1140->GetYaxis()->SetTitleFont(42);
   quadLineFit1140->SetParameter(0,5.202599);
   quadLineFit1140->SetParError(0,0.05440535);
   quadLineFit1140->SetParLimits(0,0,0);
   quadLineFit1140->SetParameter(1,-0.1464788);
   quadLineFit1140->SetParError(1,0.003010173);
   quadLineFit1140->SetParLimits(1,0,0);
   quadLineFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1140);
   gre->Draw("p ");
   
   TF1 *quadLineFit1141 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1141->SetFillColor(19);
   quadLineFit1141->SetFillStyle(0);
   quadLineFit1141->SetLineColor(4);
   quadLineFit1141->SetLineWidth(2);
   quadLineFit1141->SetChisquare(9.363469);
   quadLineFit1141->SetNDF(1);
   quadLineFit1141->GetXaxis()->SetLabelFont(42);
   quadLineFit1141->GetXaxis()->SetTitleOffset(1);
   quadLineFit1141->GetXaxis()->SetTitleFont(42);
   quadLineFit1141->GetYaxis()->SetLabelFont(42);
   quadLineFit1141->GetYaxis()->SetTitleFont(42);
   quadLineFit1141->SetParameter(0,5.202599);
   quadLineFit1141->SetParError(0,0.05440535);
   quadLineFit1141->SetParLimits(0,0,0);
   quadLineFit1141->SetParameter(1,-0.1464788);
   quadLineFit1141->SetParError(1,0.003010173);
   quadLineFit1141->SetParLimits(1,0,0);
   quadLineFit1141->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
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
