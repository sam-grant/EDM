void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 15:14:04 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04418367,-3.25,0.08091837,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1129[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -50.000000 ppm_fy1129[4] = {
   -3.603811,
   -3.166418,
   -2.820332,
   -2.519051};
   Double_t -50.000000 ppm_fex1129[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1129[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1129,-50.000000 ppm_fy1129,-50.000000 ppm_fex1129,-50.000000 ppm_fey1129);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1129 = new TH1F("Graph_mI50dO000000sPppm1129","",100,0.04785714,0.07357143);
   Graph_mI50dO000000sPppm1129->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1129->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1129->SetDirectory(0);
   Graph_mI50dO000000sPppm1129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1129->SetLineColor(ci);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI50dO000000sPppm1129->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1129->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1129->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1129->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1129);
   
   
   TF1 *quadLineFit1130 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1130->SetFillColor(19);
   quadLineFit1130->SetFillStyle(0);
   quadLineFit1130->SetLineWidth(2);
   quadLineFit1130->SetChisquare(3.151034);
   quadLineFit1130->SetNDF(2);
   quadLineFit1130->GetXaxis()->SetLabelFont(42);
   quadLineFit1130->GetXaxis()->SetTitleOffset(1);
   quadLineFit1130->GetXaxis()->SetTitleFont(42);
   quadLineFit1130->GetYaxis()->SetLabelFont(42);
   quadLineFit1130->GetYaxis()->SetTitleFont(42);
   quadLineFit1130->SetParameter(0,-0.007840714);
   quadLineFit1130->SetParError(0,0.0371501);
   quadLineFit1130->SetParLimits(0,0,0);
   quadLineFit1130->SetParameter(1,-50.43445);
   quadLineFit1130->SetParError(1,0.6150242);
   quadLineFit1130->SetParLimits(1,0,0);
   quadLineFit1130->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1130);
   gre->Draw("ap");
   
   TF1 *quadLineFit1131 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1131->SetFillColor(19);
   quadLineFit1131->SetFillStyle(0);
   quadLineFit1131->SetLineWidth(2);
   quadLineFit1131->SetChisquare(3.151034);
   quadLineFit1131->SetNDF(2);
   quadLineFit1131->GetXaxis()->SetLabelFont(42);
   quadLineFit1131->GetXaxis()->SetTitleOffset(1);
   quadLineFit1131->GetXaxis()->SetTitleFont(42);
   quadLineFit1131->GetYaxis()->SetLabelFont(42);
   quadLineFit1131->GetYaxis()->SetTitleFont(42);
   quadLineFit1131->SetParameter(0,-0.007840714);
   quadLineFit1131->SetParError(0,0.0371501);
   quadLineFit1131->SetParLimits(0,0,0);
   quadLineFit1131->SetParameter(1,-50.43445);
   quadLineFit1131->SetParError(1,0.6150242);
   quadLineFit1131->SetParLimits(1,0,0);
   quadLineFit1131->Draw("same");
   
   Double_t -30.000000 ppm_fx1131[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -30.000000 ppm_fy1131[4] = {
   -1.896939,
   -1.660198,
   -1.462734,
   -1.33633};
   Double_t -30.000000 ppm_fex1131[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1131[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1131,-30.000000 ppm_fy1131,-30.000000 ppm_fex1131,-30.000000 ppm_fey1131);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1131 = new TH1F("Graph_mI30dO000000sPppm1131","Graph",100,0.04785714,0.07357143);
   Graph_mI30dO000000sPppm1131->SetMinimum(-1.964821);
   Graph_mI30dO000000sPppm1131->SetMaximum(-1.268448);
   Graph_mI30dO000000sPppm1131->SetDirectory(0);
   Graph_mI30dO000000sPppm1131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1131->SetLineColor(ci);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1131);
   
   
   TF1 *quadLineFit1132 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1132->SetFillColor(19);
   quadLineFit1132->SetFillStyle(0);
   quadLineFit1132->SetLineColor(2);
   quadLineFit1132->SetLineWidth(2);
   quadLineFit1132->SetChisquare(2.324765);
   quadLineFit1132->SetNDF(2);
   quadLineFit1132->GetXaxis()->SetLabelFont(42);
   quadLineFit1132->GetXaxis()->SetTitleOffset(1);
   quadLineFit1132->GetXaxis()->SetTitleFont(42);
   quadLineFit1132->GetYaxis()->SetLabelFont(42);
   quadLineFit1132->GetYaxis()->SetTitleFont(42);
   quadLineFit1132->SetParameter(0,-0.005581136);
   quadLineFit1132->SetParError(0,0.03714734);
   quadLineFit1132->SetParLimits(0,0,0);
   quadLineFit1132->SetParameter(1,-26.448);
   quadLineFit1132->SetParError(1,0.6149784);
   quadLineFit1132->SetParLimits(1,0,0);
   quadLineFit1132->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1132);
   gre->Draw("p ");
   
   TF1 *quadLineFit1133 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1133->SetFillColor(19);
   quadLineFit1133->SetFillStyle(0);
   quadLineFit1133->SetLineColor(2);
   quadLineFit1133->SetLineWidth(2);
   quadLineFit1133->SetChisquare(2.324765);
   quadLineFit1133->SetNDF(2);
   quadLineFit1133->GetXaxis()->SetLabelFont(42);
   quadLineFit1133->GetXaxis()->SetTitleOffset(1);
   quadLineFit1133->GetXaxis()->SetTitleFont(42);
   quadLineFit1133->GetYaxis()->SetLabelFont(42);
   quadLineFit1133->GetYaxis()->SetTitleFont(42);
   quadLineFit1133->SetParameter(0,-0.005581136);
   quadLineFit1133->SetParError(0,0.03714734);
   quadLineFit1133->SetParLimits(0,0,0);
   quadLineFit1133->SetParameter(1,-26.448);
   quadLineFit1133->SetParError(1,0.6149784);
   quadLineFit1133->SetParLimits(1,0,0);
   quadLineFit1133->Draw("same");
   
   Double_t -10.000000 ppm_fx1133[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -10.000000 ppm_fy1133[4] = {
   -0.1598476,
   -0.1349684,
   -0.1514676,
   -0.1134949};
   Double_t -10.000000 ppm_fex1133[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1133[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1133,-10.000000 ppm_fy1133,-10.000000 ppm_fex1133,-10.000000 ppm_fey1133);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1133 = new TH1F("Graph_mI10dO000000sPppm1133","Graph",100,0.04785714,0.07357143);
   Graph_mI10dO000000sPppm1133->SetMinimum(-0.1763039);
   Graph_mI10dO000000sPppm1133->SetMaximum(-0.09703855);
   Graph_mI10dO000000sPppm1133->SetDirectory(0);
   Graph_mI10dO000000sPppm1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1133->SetLineColor(ci);
   Graph_mI10dO000000sPppm1133->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1133->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1133->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1133->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1133->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1133->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1133->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1133);
   
   
   TF1 *quadLineFit1134 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1134->SetFillColor(19);
   quadLineFit1134->SetFillStyle(0);
   quadLineFit1134->SetLineColor(3);
   quadLineFit1134->SetLineWidth(2);
   quadLineFit1134->SetChisquare(5.546158);
   quadLineFit1134->SetNDF(2);
   quadLineFit1134->GetXaxis()->SetLabelFont(42);
   quadLineFit1134->GetXaxis()->SetTitleOffset(1);
   quadLineFit1134->GetXaxis()->SetTitleFont(42);
   quadLineFit1134->GetYaxis()->SetLabelFont(42);
   quadLineFit1134->GetYaxis()->SetTitleFont(42);
   quadLineFit1134->SetParameter(0,-0.03999055);
   quadLineFit1134->SetParError(0,0.03715014);
   quadLineFit1134->SetParLimits(0,0,0);
   quadLineFit1134->SetParameter(1,-1.66949);
   quadLineFit1134->SetParError(1,0.6150249);
   quadLineFit1134->SetParLimits(1,0,0);
   quadLineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1134);
   gre->Draw("p ");
   
   TF1 *quadLineFit1135 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1135->SetFillColor(19);
   quadLineFit1135->SetFillStyle(0);
   quadLineFit1135->SetLineColor(3);
   quadLineFit1135->SetLineWidth(2);
   quadLineFit1135->SetChisquare(5.546158);
   quadLineFit1135->SetNDF(2);
   quadLineFit1135->GetXaxis()->SetLabelFont(42);
   quadLineFit1135->GetXaxis()->SetTitleOffset(1);
   quadLineFit1135->GetXaxis()->SetTitleFont(42);
   quadLineFit1135->GetYaxis()->SetLabelFont(42);
   quadLineFit1135->GetYaxis()->SetTitleFont(42);
   quadLineFit1135->SetParameter(0,-0.03999055);
   quadLineFit1135->SetParError(0,0.03715014);
   quadLineFit1135->SetParLimits(0,0,0);
   quadLineFit1135->SetParameter(1,-1.66949);
   quadLineFit1135->SetParError(1,0.6150249);
   quadLineFit1135->SetParLimits(1,0,0);
   quadLineFit1135->Draw("same");
   
   Double_t 10.000000 ppm_fx1135[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 10.000000 ppm_fy1135[4] = {
   1.533831,
   1.352378,
   1.200872,
   1.083713};
   Double_t 10.000000 ppm_fex1135[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1135[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,10.000000 ppm_fx1135,10.000000 ppm_fy1135,10.000000 ppm_fex1135,10.000000 ppm_fey1135);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1135 = new TH1F("Graph_10dO000000sPppm1135","Graph",100,0.04785714,0.07357143);
   Graph_10dO000000sPppm1135->SetMinimum(1.02688);
   Graph_10dO000000sPppm1135->SetMaximum(1.590664);
   Graph_10dO000000sPppm1135->SetDirectory(0);
   Graph_10dO000000sPppm1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1135->SetLineColor(ci);
   Graph_10dO000000sPppm1135->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1135->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1135->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1135->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1135->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1135->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1135->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1135);
   
   
   TF1 *quadLineFit1136 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1136->SetFillColor(19);
   quadLineFit1136->SetFillStyle(0);
   quadLineFit1136->SetLineColor(4);
   quadLineFit1136->SetLineWidth(2);
   quadLineFit1136->SetChisquare(0.2664217);
   quadLineFit1136->SetNDF(2);
   quadLineFit1136->GetXaxis()->SetLabelFont(42);
   quadLineFit1136->GetXaxis()->SetTitleOffset(1);
   quadLineFit1136->GetXaxis()->SetTitleFont(42);
   quadLineFit1136->GetYaxis()->SetLabelFont(42);
   quadLineFit1136->GetYaxis()->SetTitleFont(42);
   quadLineFit1136->SetParameter(0,0.03180008);
   quadLineFit1136->SetParError(0,0.03717701);
   quadLineFit1136->SetParLimits(0,0,0);
   quadLineFit1136->SetParameter(1,21.06024);
   quadLineFit1136->SetParError(1,0.6154755);
   quadLineFit1136->SetParLimits(1,0,0);
   quadLineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1136);
   gre->Draw("p ");
   
   TF1 *quadLineFit1137 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1137->SetFillColor(19);
   quadLineFit1137->SetFillStyle(0);
   quadLineFit1137->SetLineColor(4);
   quadLineFit1137->SetLineWidth(2);
   quadLineFit1137->SetChisquare(0.2664217);
   quadLineFit1137->SetNDF(2);
   quadLineFit1137->GetXaxis()->SetLabelFont(42);
   quadLineFit1137->GetXaxis()->SetTitleOffset(1);
   quadLineFit1137->GetXaxis()->SetTitleFont(42);
   quadLineFit1137->GetYaxis()->SetLabelFont(42);
   quadLineFit1137->GetYaxis()->SetTitleFont(42);
   quadLineFit1137->SetParameter(0,0.03180008);
   quadLineFit1137->SetParError(0,0.03717701);
   quadLineFit1137->SetParLimits(0,0,0);
   quadLineFit1137->SetParameter(1,21.06024);
   quadLineFit1137->SetParError(1,0.6154755);
   quadLineFit1137->SetParLimits(1,0,0);
   quadLineFit1137->Draw("same");
   
   Double_t 30.000000 ppm_fx1137[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 30.000000 ppm_fy1137[4] = {
   3.267053,
   2.869545,
   2.531907,
   2.276919};
   Double_t 30.000000 ppm_fex1137[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1137[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,30.000000 ppm_fx1137,30.000000 ppm_fy1137,30.000000 ppm_fex1137,30.000000 ppm_fey1137);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1137 = new TH1F("Graph_30dO000000sPppm1137","Graph",100,0.04785714,0.07357143);
   Graph_30dO000000sPppm1137->SetMinimum(2.166084);
   Graph_30dO000000sPppm1137->SetMaximum(3.377888);
   Graph_30dO000000sPppm1137->SetDirectory(0);
   Graph_30dO000000sPppm1137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1137->SetLineColor(ci);
   Graph_30dO000000sPppm1137->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1137->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1137->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1137->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1137->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1137->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1137->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1137);
   
   
   TF1 *quadLineFit1138 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1138->SetFillColor(19);
   quadLineFit1138->SetFillStyle(0);
   quadLineFit1138->SetLineColor(5);
   quadLineFit1138->SetLineWidth(2);
   quadLineFit1138->SetChisquare(1.817162);
   quadLineFit1138->SetNDF(2);
   quadLineFit1138->GetXaxis()->SetLabelFont(42);
   quadLineFit1138->GetXaxis()->SetTitleOffset(1);
   quadLineFit1138->GetXaxis()->SetTitleFont(42);
   quadLineFit1138->GetYaxis()->SetLabelFont(42);
   quadLineFit1138->GetYaxis()->SetTitleFont(42);
   quadLineFit1138->SetParameter(0,-0.04101868);
   quadLineFit1138->SetParError(0,0.03714744);
   quadLineFit1138->SetParLimits(0,0,0);
   quadLineFit1138->SetParameter(1,46.38929);
   quadLineFit1138->SetParError(1,0.6149809);
   quadLineFit1138->SetParLimits(1,0,0);
   quadLineFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1138);
   gre->Draw("p ");
   
   TF1 *quadLineFit1139 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1139->SetFillColor(19);
   quadLineFit1139->SetFillStyle(0);
   quadLineFit1139->SetLineColor(5);
   quadLineFit1139->SetLineWidth(2);
   quadLineFit1139->SetChisquare(1.817162);
   quadLineFit1139->SetNDF(2);
   quadLineFit1139->GetXaxis()->SetLabelFont(42);
   quadLineFit1139->GetXaxis()->SetTitleOffset(1);
   quadLineFit1139->GetXaxis()->SetTitleFont(42);
   quadLineFit1139->GetYaxis()->SetLabelFont(42);
   quadLineFit1139->GetYaxis()->SetTitleFont(42);
   quadLineFit1139->SetParameter(0,-0.04101868);
   quadLineFit1139->SetParError(0,0.03714744);
   quadLineFit1139->SetParLimits(0,0,0);
   quadLineFit1139->SetParameter(1,46.38929);
   quadLineFit1139->SetParError(1,0.6149809);
   quadLineFit1139->SetParLimits(1,0,0);
   quadLineFit1139->Draw("same");
   
   Double_t 50.000000 ppm_fx1139[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 50.000000 ppm_fy1139[4] = {
   4.991445,
   4.383889,
   3.875169,
   3.488867};
   Double_t 50.000000 ppm_fex1139[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1139[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,50.000000 ppm_fx1139,50.000000 ppm_fy1139,50.000000 ppm_fex1139,50.000000 ppm_fey1139);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1139 = new TH1F("Graph_50dO000000sPppm1139","Graph",100,0.04785714,0.07357143);
   Graph_50dO000000sPppm1139->SetMinimum(3.326788);
   Graph_50dO000000sPppm1139->SetMaximum(5.153524);
   Graph_50dO000000sPppm1139->SetDirectory(0);
   Graph_50dO000000sPppm1139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1139->SetLineColor(ci);
   Graph_50dO000000sPppm1139->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1139->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1139->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1139->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1139->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1139->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1139->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1139);
   
   
   TF1 *quadLineFit1140 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1140->SetFillColor(19);
   quadLineFit1140->SetFillStyle(0);
   quadLineFit1140->SetLineColor(6);
   quadLineFit1140->SetLineWidth(2);
   quadLineFit1140->SetChisquare(2.8847);
   quadLineFit1140->SetNDF(2);
   quadLineFit1140->GetXaxis()->SetLabelFont(42);
   quadLineFit1140->GetXaxis()->SetTitleOffset(1);
   quadLineFit1140->GetXaxis()->SetTitleFont(42);
   quadLineFit1140->GetYaxis()->SetLabelFont(42);
   quadLineFit1140->GetYaxis()->SetTitleFont(42);
   quadLineFit1140->SetParameter(0,-0.02797346);
   quadLineFit1140->SetParError(0,0.03712769);
   quadLineFit1140->SetParLimits(0,0,0);
   quadLineFit1140->SetParameter(1,70.36485);
   quadLineFit1140->SetParError(1,0.6146527);
   quadLineFit1140->SetParLimits(1,0,0);
   quadLineFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1140);
   gre->Draw("p ");
   
   TF1 *quadLineFit1141 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1141->SetFillColor(19);
   quadLineFit1141->SetFillStyle(0);
   quadLineFit1141->SetLineColor(6);
   quadLineFit1141->SetLineWidth(2);
   quadLineFit1141->SetChisquare(2.8847);
   quadLineFit1141->SetNDF(2);
   quadLineFit1141->GetXaxis()->SetLabelFont(42);
   quadLineFit1141->GetXaxis()->SetTitleOffset(1);
   quadLineFit1141->GetXaxis()->SetTitleFont(42);
   quadLineFit1141->GetYaxis()->SetLabelFont(42);
   quadLineFit1141->GetYaxis()->SetTitleFont(42);
   quadLineFit1141->SetParameter(0,-0.02797346);
   quadLineFit1141->SetParError(0,0.03712769);
   quadLineFit1141->SetParLimits(0,0,0);
   quadLineFit1141->SetParameter(1,70.36485);
   quadLineFit1141->SetParError(1,0.6146527);
   quadLineFit1141->SetParLimits(1,0,0);
   quadLineFit1141->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","App. #LTB_{r}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
