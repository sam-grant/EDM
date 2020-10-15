void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1131[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1131[2] = {
   -3.152091,
   -2.752957};
   Double_t -50.000000 ppm_fex1131[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1131[2] = {
   0.0120478,
   0.0120478};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1131,-50.000000 ppm_fy1131,-50.000000 ppm_fex1131,-50.000000 ppm_fey1131);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1131 = new TH1F("Graph_mI50dO000000sPppm1131","",100,15.77,18.53);
   Graph_mI50dO000000sPppm1131->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1131->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1131->SetDirectory(0);
   Graph_mI50dO000000sPppm1131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1131->SetLineColor(ci);
   Graph_mI50dO000000sPppm1131->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1131->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1131->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1131->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1131->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1131->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1131->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1131->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1131->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1131->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1131->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1131->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1131->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1131->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1131->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1131);
   
   
   TF1 *quadLineFit1132 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1132->SetFillColor(19);
   quadLineFit1132->SetFillStyle(0);
   quadLineFit1132->SetLineWidth(2);
   quadLineFit1132->SetChisquare(2.349926e-18);
   quadLineFit1132->SetNDF(0);
   quadLineFit1132->GetXaxis()->SetLabelFont(42);
   quadLineFit1132->GetXaxis()->SetTitleOffset(1);
   quadLineFit1132->GetXaxis()->SetTitleFont(42);
   quadLineFit1132->GetYaxis()->SetLabelFont(42);
   quadLineFit1132->GetYaxis()->SetTitleFont(42);
   quadLineFit1132->SetParameter(0,-5.928677);
   quadLineFit1132->SetParError(0,0.1273307);
   quadLineFit1132->SetParLimits(0,0,0);
   quadLineFit1132->SetParameter(1,0.1735366);
   quadLineFit1132->SetParError(1,0.007407894);
   quadLineFit1132->SetParLimits(1,0,0);
   quadLineFit1132->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1132);
   gre->Draw("ap");
   
   TF1 *quadLineFit1133 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1133->SetFillColor(19);
   quadLineFit1133->SetFillStyle(0);
   quadLineFit1133->SetLineWidth(2);
   quadLineFit1133->SetChisquare(2.349926e-18);
   quadLineFit1133->SetNDF(0);
   quadLineFit1133->GetXaxis()->SetLabelFont(42);
   quadLineFit1133->GetXaxis()->SetTitleOffset(1);
   quadLineFit1133->GetXaxis()->SetTitleFont(42);
   quadLineFit1133->GetYaxis()->SetLabelFont(42);
   quadLineFit1133->GetYaxis()->SetTitleFont(42);
   quadLineFit1133->SetParameter(0,-5.928677);
   quadLineFit1133->SetParError(0,0.1273307);
   quadLineFit1133->SetParLimits(0,0,0);
   quadLineFit1133->SetParameter(1,0.1735366);
   quadLineFit1133->SetParError(1,0.007407894);
   quadLineFit1133->SetParLimits(1,0,0);
   quadLineFit1133->Draw("same");
   
   Double_t -40.000000 ppm_fx1133[2] = {
   16,
   18.3};
   Double_t -40.000000 ppm_fy1133[2] = {
   -2.413987,
   -2.116303};
   Double_t -40.000000 ppm_fex1133[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1133[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1133,-40.000000 ppm_fy1133,-40.000000 ppm_fex1133,-40.000000 ppm_fey1133);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1133 = new TH1F("Graph_mI40dO000000sPppm1133","Graph",100,15.77,18.53);
   Graph_mI40dO000000sPppm1133->SetMinimum(-2.458213);
   Graph_mI40dO000000sPppm1133->SetMaximum(-2.072077);
   Graph_mI40dO000000sPppm1133->SetDirectory(0);
   Graph_mI40dO000000sPppm1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1133->SetLineColor(ci);
   Graph_mI40dO000000sPppm1133->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1133->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1133->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1133->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1133->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1133->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1133->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1133);
   
   
   TF1 *quadLineFit1134 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1134->SetFillColor(19);
   quadLineFit1134->SetFillStyle(0);
   quadLineFit1134->SetLineColor(2);
   quadLineFit1134->SetLineWidth(2);
   quadLineFit1134->SetChisquare(1.004647e-19);
   quadLineFit1134->SetNDF(0);
   quadLineFit1134->GetXaxis()->SetLabelFont(42);
   quadLineFit1134->GetXaxis()->SetTitleOffset(1);
   quadLineFit1134->GetXaxis()->SetTitleFont(42);
   quadLineFit1134->GetYaxis()->SetLabelFont(42);
   quadLineFit1134->GetYaxis()->SetTitleFont(42);
   quadLineFit1134->SetParameter(0,-4.484835);
   quadLineFit1134->SetParError(0,0.1273307);
   quadLineFit1134->SetParLimits(0,0,0);
   quadLineFit1134->SetParameter(1,0.129428);
   quadLineFit1134->SetParError(1,0.007407894);
   quadLineFit1134->SetParLimits(1,0,0);
   quadLineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1134);
   gre->Draw("p ");
   
   TF1 *quadLineFit1135 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1135->SetFillColor(19);
   quadLineFit1135->SetFillStyle(0);
   quadLineFit1135->SetLineColor(2);
   quadLineFit1135->SetLineWidth(2);
   quadLineFit1135->SetChisquare(1.004647e-19);
   quadLineFit1135->SetNDF(0);
   quadLineFit1135->GetXaxis()->SetLabelFont(42);
   quadLineFit1135->GetXaxis()->SetTitleOffset(1);
   quadLineFit1135->GetXaxis()->SetTitleFont(42);
   quadLineFit1135->GetYaxis()->SetLabelFont(42);
   quadLineFit1135->GetYaxis()->SetTitleFont(42);
   quadLineFit1135->SetParameter(0,-4.484835);
   quadLineFit1135->SetParError(0,0.1273307);
   quadLineFit1135->SetParLimits(0,0,0);
   quadLineFit1135->SetParameter(1,0.129428);
   quadLineFit1135->SetParError(1,0.007407894);
   quadLineFit1135->SetParLimits(1,0,0);
   quadLineFit1135->Draw("same");
   
   Double_t -30.000000 ppm_fx1135[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1135[2] = {
   -1.66335,
   -1.461429};
   Double_t -30.000000 ppm_fex1135[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1135[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1135,-30.000000 ppm_fy1135,-30.000000 ppm_fex1135,-30.000000 ppm_fey1135);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1135 = new TH1F("Graph_mI30dO000000sPppm1135","Graph",100,15.77,18.53);
   Graph_mI30dO000000sPppm1135->SetMinimum(-1.698);
   Graph_mI30dO000000sPppm1135->SetMaximum(-1.42678);
   Graph_mI30dO000000sPppm1135->SetDirectory(0);
   Graph_mI30dO000000sPppm1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1135->SetLineColor(ci);
   Graph_mI30dO000000sPppm1135->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1135->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1135->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1135->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1135->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1135->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1135->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1135);
   
   
   TF1 *quadLineFit1136 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1136->SetFillColor(19);
   quadLineFit1136->SetFillStyle(0);
   quadLineFit1136->SetLineColor(3);
   quadLineFit1136->SetLineWidth(2);
   quadLineFit1136->SetChisquare(5.476574e-20);
   quadLineFit1136->SetNDF(0);
   quadLineFit1136->GetXaxis()->SetLabelFont(42);
   quadLineFit1136->GetXaxis()->SetTitleOffset(1);
   quadLineFit1136->GetXaxis()->SetTitleFont(42);
   quadLineFit1136->GetYaxis()->SetLabelFont(42);
   quadLineFit1136->GetYaxis()->SetTitleFont(42);
   quadLineFit1136->SetParameter(0,-3.068021);
   quadLineFit1136->SetParError(0,0.1273307);
   quadLineFit1136->SetParLimits(0,0,0);
   quadLineFit1136->SetParameter(1,0.08779191);
   quadLineFit1136->SetParError(1,0.007407894);
   quadLineFit1136->SetParLimits(1,0,0);
   quadLineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1136);
   gre->Draw("p ");
   
   TF1 *quadLineFit1137 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1137->SetFillColor(19);
   quadLineFit1137->SetFillStyle(0);
   quadLineFit1137->SetLineColor(3);
   quadLineFit1137->SetLineWidth(2);
   quadLineFit1137->SetChisquare(5.476574e-20);
   quadLineFit1137->SetNDF(0);
   quadLineFit1137->GetXaxis()->SetLabelFont(42);
   quadLineFit1137->GetXaxis()->SetTitleOffset(1);
   quadLineFit1137->GetXaxis()->SetTitleFont(42);
   quadLineFit1137->GetYaxis()->SetLabelFont(42);
   quadLineFit1137->GetYaxis()->SetTitleFont(42);
   quadLineFit1137->SetParameter(0,-3.068021);
   quadLineFit1137->SetParError(0,0.1273307);
   quadLineFit1137->SetParLimits(0,0,0);
   quadLineFit1137->SetParameter(1,0.08779191);
   quadLineFit1137->SetParError(1,0.007407894);
   quadLineFit1137->SetParLimits(1,0,0);
   quadLineFit1137->Draw("same");
   
   Double_t -20.000000 ppm_fx1137[2] = {
   16,
   18.3};
   Double_t -20.000000 ppm_fy1137[2] = {
   -0.9141648,
   -0.7831118};
   Double_t -20.000000 ppm_fex1137[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1137[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1137,-20.000000 ppm_fy1137,-20.000000 ppm_fex1137,-20.000000 ppm_fey1137);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1137 = new TH1F("Graph_mI20dO000000sPppm1137","Graph",100,15.77,18.53);
   Graph_mI20dO000000sPppm1137->SetMinimum(-0.9417275);
   Graph_mI20dO000000sPppm1137->SetMaximum(-0.7555492);
   Graph_mI20dO000000sPppm1137->SetDirectory(0);
   Graph_mI20dO000000sPppm1137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1137->SetLineColor(ci);
   Graph_mI20dO000000sPppm1137->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1137->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1137->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1137->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1137->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1137->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1137->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1137);
   
   
   TF1 *quadLineFit1138 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1138->SetFillColor(19);
   quadLineFit1138->SetFillStyle(0);
   quadLineFit1138->SetLineColor(4);
   quadLineFit1138->SetLineWidth(2);
   quadLineFit1138->SetChisquare(1.431169e-20);
   quadLineFit1138->SetNDF(0);
   quadLineFit1138->GetXaxis()->SetLabelFont(42);
   quadLineFit1138->GetXaxis()->SetTitleOffset(1);
   quadLineFit1138->GetXaxis()->SetTitleFont(42);
   quadLineFit1138->GetYaxis()->SetLabelFont(42);
   quadLineFit1138->GetYaxis()->SetTitleFont(42);
   quadLineFit1138->SetParameter(0,-1.825838);
   quadLineFit1138->SetParError(0,0.1273307);
   quadLineFit1138->SetParLimits(0,0,0);
   quadLineFit1138->SetParameter(1,0.05697957);
   quadLineFit1138->SetParError(1,0.007407894);
   quadLineFit1138->SetParLimits(1,0,0);
   quadLineFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1138);
   gre->Draw("p ");
   
   TF1 *quadLineFit1139 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1139->SetFillColor(19);
   quadLineFit1139->SetFillStyle(0);
   quadLineFit1139->SetLineColor(4);
   quadLineFit1139->SetLineWidth(2);
   quadLineFit1139->SetChisquare(1.431169e-20);
   quadLineFit1139->SetNDF(0);
   quadLineFit1139->GetXaxis()->SetLabelFont(42);
   quadLineFit1139->GetXaxis()->SetTitleOffset(1);
   quadLineFit1139->GetXaxis()->SetTitleFont(42);
   quadLineFit1139->GetYaxis()->SetLabelFont(42);
   quadLineFit1139->GetYaxis()->SetTitleFont(42);
   quadLineFit1139->SetParameter(0,-1.825838);
   quadLineFit1139->SetParError(0,0.1273307);
   quadLineFit1139->SetParLimits(0,0,0);
   quadLineFit1139->SetParameter(1,0.05697957);
   quadLineFit1139->SetParError(1,0.007407894);
   quadLineFit1139->SetParLimits(1,0,0);
   quadLineFit1139->Draw("same");
   
   Double_t -10.000000 ppm_fx1139[2] = {
   16,
   18.3};
   Double_t -10.000000 ppm_fy1139[2] = {
   -0.1341821,
   -0.1365713};
   Double_t -10.000000 ppm_fex1139[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1139[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1139,-10.000000 ppm_fy1139,-10.000000 ppm_fex1139,-10.000000 ppm_fey1139);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1139 = new TH1F("Graph_mI10dO000000sPppm1139","Graph",100,15.77,18.53);
   Graph_mI10dO000000sPppm1139->SetMinimum(-0.1512676);
   Graph_mI10dO000000sPppm1139->SetMaximum(-0.1194858);
   Graph_mI10dO000000sPppm1139->SetDirectory(0);
   Graph_mI10dO000000sPppm1139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1139->SetLineColor(ci);
   Graph_mI10dO000000sPppm1139->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1139->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1139->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1139->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1139->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1139->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1139->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1139);
   
   
   TF1 *quadLineFit1140 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1140->SetFillColor(19);
   quadLineFit1140->SetFillStyle(0);
   quadLineFit1140->SetLineColor(5);
   quadLineFit1140->SetLineWidth(2);
   quadLineFit1140->SetChisquare(2.343214e-20);
   quadLineFit1140->SetNDF(0);
   quadLineFit1140->GetXaxis()->SetLabelFont(42);
   quadLineFit1140->GetXaxis()->SetTitleOffset(1);
   quadLineFit1140->GetXaxis()->SetTitleFont(42);
   quadLineFit1140->GetYaxis()->SetLabelFont(42);
   quadLineFit1140->GetYaxis()->SetTitleFont(42);
   quadLineFit1140->SetParameter(0,-0.1175615);
   quadLineFit1140->SetParError(0,0.1273307);
   quadLineFit1140->SetParLimits(0,0,0);
   quadLineFit1140->SetParameter(1,-0.001038786);
   quadLineFit1140->SetParError(1,0.007407894);
   quadLineFit1140->SetParLimits(1,0,0);
   quadLineFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1140);
   gre->Draw("p ");
   
   TF1 *quadLineFit1141 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1141->SetFillColor(19);
   quadLineFit1141->SetFillStyle(0);
   quadLineFit1141->SetLineColor(5);
   quadLineFit1141->SetLineWidth(2);
   quadLineFit1141->SetChisquare(2.343214e-20);
   quadLineFit1141->SetNDF(0);
   quadLineFit1141->GetXaxis()->SetLabelFont(42);
   quadLineFit1141->GetXaxis()->SetTitleOffset(1);
   quadLineFit1141->GetXaxis()->SetTitleFont(42);
   quadLineFit1141->GetYaxis()->SetLabelFont(42);
   quadLineFit1141->GetYaxis()->SetTitleFont(42);
   quadLineFit1141->SetParameter(0,-0.1175615);
   quadLineFit1141->SetParError(0,0.1273307);
   quadLineFit1141->SetParLimits(0,0,0);
   quadLineFit1141->SetParameter(1,-0.001038786);
   quadLineFit1141->SetParError(1,0.007407894);
   quadLineFit1141->SetParLimits(1,0,0);
   quadLineFit1141->Draw("same");
   
   Double_t 0.000000 ppm_fx1141[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1141[2] = {
   0.5829365,
   0.5233449};
   Double_t 0.000000 ppm_fex1141[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1141[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,0.000000 ppm_fx1141,0.000000 ppm_fy1141,0.000000 ppm_fex1141,0.000000 ppm_fey1141);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1141 = new TH1F("Graph_0dO000000sPppm1141","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1141->SetMinimum(0.5029284);
   Graph_0dO000000sPppm1141->SetMaximum(0.603353);
   Graph_0dO000000sPppm1141->SetDirectory(0);
   Graph_0dO000000sPppm1141->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1141->SetLineColor(ci);
   Graph_0dO000000sPppm1141->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1141->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1141->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1141->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1141->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1141->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1141->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1141);
   
   
   TF1 *quadLineFit1142 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1142->SetFillColor(19);
   quadLineFit1142->SetFillStyle(0);
   quadLineFit1142->SetLineColor(6);
   quadLineFit1142->SetLineWidth(2);
   quadLineFit1142->SetChisquare(1.654057e-18);
   quadLineFit1142->SetNDF(0);
   quadLineFit1142->GetXaxis()->SetLabelFont(42);
   quadLineFit1142->GetXaxis()->SetTitleOffset(1);
   quadLineFit1142->GetXaxis()->SetTitleFont(42);
   quadLineFit1142->GetYaxis()->SetLabelFont(42);
   quadLineFit1142->GetYaxis()->SetTitleFont(42);
   quadLineFit1142->SetParameter(0,0.9974869);
   quadLineFit1142->SetParError(0,0.1273307);
   quadLineFit1142->SetParLimits(0,0,0);
   quadLineFit1142->SetParameter(1,-0.0259094);
   quadLineFit1142->SetParError(1,0.007407894);
   quadLineFit1142->SetParLimits(1,0,0);
   quadLineFit1142->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1142);
   gre->Draw("p ");
   
   TF1 *quadLineFit1143 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1143->SetFillColor(19);
   quadLineFit1143->SetFillStyle(0);
   quadLineFit1143->SetLineColor(6);
   quadLineFit1143->SetLineWidth(2);
   quadLineFit1143->SetChisquare(1.654057e-18);
   quadLineFit1143->SetNDF(0);
   quadLineFit1143->GetXaxis()->SetLabelFont(42);
   quadLineFit1143->GetXaxis()->SetTitleOffset(1);
   quadLineFit1143->GetXaxis()->SetTitleFont(42);
   quadLineFit1143->GetYaxis()->SetLabelFont(42);
   quadLineFit1143->GetYaxis()->SetTitleFont(42);
   quadLineFit1143->SetParameter(0,0.9974869);
   quadLineFit1143->SetParError(0,0.1273307);
   quadLineFit1143->SetParLimits(0,0,0);
   quadLineFit1143->SetParameter(1,-0.0259094);
   quadLineFit1143->SetParError(1,0.007407894);
   quadLineFit1143->SetParLimits(1,0,0);
   quadLineFit1143->Draw("same");
   
   Double_t 10.000000 ppm_fx1143[2] = {
   16,
   18.3};
   Double_t 10.000000 ppm_fy1143[2] = {
   1.359675,
   1.189122};
   Double_t 10.000000 ppm_fex1143[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1143[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,10.000000 ppm_fx1143,10.000000 ppm_fy1143,10.000000 ppm_fex1143,10.000000 ppm_fey1143);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1143 = new TH1F("Graph_10dO000000sPppm1143","Graph",100,15.77,18.53);
   Graph_10dO000000sPppm1143->SetMinimum(1.157609);
   Graph_10dO000000sPppm1143->SetMaximum(1.391187);
   Graph_10dO000000sPppm1143->SetDirectory(0);
   Graph_10dO000000sPppm1143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1143->SetLineColor(ci);
   Graph_10dO000000sPppm1143->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1143->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1143->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1143->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1143->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1143->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1143->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1143);
   
   
   TF1 *quadLineFit1144 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1144->SetFillColor(19);
   quadLineFit1144->SetFillStyle(0);
   quadLineFit1144->SetLineColor(7);
   quadLineFit1144->SetLineWidth(2);
   quadLineFit1144->SetChisquare(8.879773e-18);
   quadLineFit1144->SetNDF(0);
   quadLineFit1144->GetXaxis()->SetLabelFont(42);
   quadLineFit1144->GetXaxis()->SetTitleOffset(1);
   quadLineFit1144->GetXaxis()->SetTitleFont(42);
   quadLineFit1144->GetYaxis()->SetLabelFont(42);
   quadLineFit1144->GetYaxis()->SetTitleFont(42);
   quadLineFit1144->SetParameter(0,2.546128);
   quadLineFit1144->SetParError(0,0.1273307);
   quadLineFit1144->SetParLimits(0,0,0);
   quadLineFit1144->SetParameter(1,-0.07415334);
   quadLineFit1144->SetParError(1,0.007407894);
   quadLineFit1144->SetParLimits(1,0,0);
   quadLineFit1144->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1144);
   gre->Draw("p ");
   
   TF1 *quadLineFit1145 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1145->SetFillColor(19);
   quadLineFit1145->SetFillStyle(0);
   quadLineFit1145->SetLineColor(7);
   quadLineFit1145->SetLineWidth(2);
   quadLineFit1145->SetChisquare(8.879773e-18);
   quadLineFit1145->SetNDF(0);
   quadLineFit1145->GetXaxis()->SetLabelFont(42);
   quadLineFit1145->GetXaxis()->SetTitleOffset(1);
   quadLineFit1145->GetXaxis()->SetTitleFont(42);
   quadLineFit1145->GetYaxis()->SetLabelFont(42);
   quadLineFit1145->GetYaxis()->SetTitleFont(42);
   quadLineFit1145->SetParameter(0,2.546128);
   quadLineFit1145->SetParError(0,0.1273307);
   quadLineFit1145->SetParLimits(0,0,0);
   quadLineFit1145->SetParameter(1,-0.07415334);
   quadLineFit1145->SetParError(1,0.007407894);
   quadLineFit1145->SetParLimits(1,0,0);
   quadLineFit1145->Draw("same");
   
   Double_t 20.000000 ppm_fx1145[2] = {
   16,
   18.3};
   Double_t 20.000000 ppm_fy1145[2] = {
   2.105091,
   1.838171};
   Double_t 20.000000 ppm_fex1145[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1145[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,20.000000 ppm_fx1145,20.000000 ppm_fy1145,20.000000 ppm_fex1145,20.000000 ppm_fey1145);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1145 = new TH1F("Graph_20dO000000sPppm1145","Graph",100,15.77,18.53);
   Graph_20dO000000sPppm1145->SetMinimum(1.797022);
   Graph_20dO000000sPppm1145->SetMaximum(2.14624);
   Graph_20dO000000sPppm1145->SetDirectory(0);
   Graph_20dO000000sPppm1145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1145->SetLineColor(ci);
   Graph_20dO000000sPppm1145->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1145->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1145->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1145->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1145->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1145->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1145->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1145);
   
   
   TF1 *quadLineFit1146 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1146->SetFillColor(19);
   quadLineFit1146->SetFillStyle(0);
   quadLineFit1146->SetLineColor(8);
   quadLineFit1146->SetLineWidth(2);
   quadLineFit1146->SetChisquare(6.135439e-19);
   quadLineFit1146->SetNDF(0);
   quadLineFit1146->GetXaxis()->SetLabelFont(42);
   quadLineFit1146->GetXaxis()->SetTitleOffset(1);
   quadLineFit1146->GetXaxis()->SetTitleFont(42);
   quadLineFit1146->GetYaxis()->SetLabelFont(42);
   quadLineFit1146->GetYaxis()->SetTitleFont(42);
   quadLineFit1146->SetParameter(0,3.961926);
   quadLineFit1146->SetParError(0,0.1273307);
   quadLineFit1146->SetParLimits(0,0,0);
   quadLineFit1146->SetParameter(1,-0.1160522);
   quadLineFit1146->SetParError(1,0.007407894);
   quadLineFit1146->SetParLimits(1,0,0);
   quadLineFit1146->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1146);
   gre->Draw("p ");
   
   TF1 *quadLineFit1147 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1147->SetFillColor(19);
   quadLineFit1147->SetFillStyle(0);
   quadLineFit1147->SetLineColor(8);
   quadLineFit1147->SetLineWidth(2);
   quadLineFit1147->SetChisquare(6.135439e-19);
   quadLineFit1147->SetNDF(0);
   quadLineFit1147->GetXaxis()->SetLabelFont(42);
   quadLineFit1147->GetXaxis()->SetTitleOffset(1);
   quadLineFit1147->GetXaxis()->SetTitleFont(42);
   quadLineFit1147->GetYaxis()->SetLabelFont(42);
   quadLineFit1147->GetYaxis()->SetTitleFont(42);
   quadLineFit1147->SetParameter(0,3.961926);
   quadLineFit1147->SetParError(0,0.1273307);
   quadLineFit1147->SetParLimits(0,0,0);
   quadLineFit1147->SetParameter(1,-0.1160522);
   quadLineFit1147->SetParError(1,0.007407894);
   quadLineFit1147->SetParLimits(1,0,0);
   quadLineFit1147->Draw("same");
   
   Double_t 30.000000 ppm_fx1147[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1147[2] = {
   2.848593,
   2.481152};
   Double_t 30.000000 ppm_fex1147[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1147[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,30.000000 ppm_fx1147,30.000000 ppm_fy1147,30.000000 ppm_fex1147,30.000000 ppm_fey1147);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1147 = new TH1F("Graph_30dO000000sPppm1147","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1147->SetMinimum(2.429951);
   Graph_30dO000000sPppm1147->SetMaximum(2.899795);
   Graph_30dO000000sPppm1147->SetDirectory(0);
   Graph_30dO000000sPppm1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1147->SetLineColor(ci);
   Graph_30dO000000sPppm1147->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1147->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1147->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1147->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1147->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1147->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1147->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1147);
   
   
   TF1 *quadLineFit1148 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1148->SetFillColor(19);
   quadLineFit1148->SetFillStyle(0);
   quadLineFit1148->SetLineColor(9);
   quadLineFit1148->SetLineWidth(2);
   quadLineFit1148->SetChisquare(7.94366e-19);
   quadLineFit1148->SetNDF(0);
   quadLineFit1148->GetXaxis()->SetLabelFont(42);
   quadLineFit1148->GetXaxis()->SetTitleOffset(1);
   quadLineFit1148->GetXaxis()->SetTitleFont(42);
   quadLineFit1148->GetYaxis()->SetLabelFont(42);
   quadLineFit1148->GetYaxis()->SetTitleFont(42);
   quadLineFit1148->SetParameter(0,5.404706);
   quadLineFit1148->SetParError(0,0.1273307);
   quadLineFit1148->SetParLimits(0,0,0);
   quadLineFit1148->SetParameter(1,-0.159757);
   quadLineFit1148->SetParError(1,0.007407894);
   quadLineFit1148->SetParLimits(1,0,0);
   quadLineFit1148->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1148);
   gre->Draw("p ");
   
   TF1 *quadLineFit1149 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1149->SetFillColor(19);
   quadLineFit1149->SetFillStyle(0);
   quadLineFit1149->SetLineColor(9);
   quadLineFit1149->SetLineWidth(2);
   quadLineFit1149->SetChisquare(7.94366e-19);
   quadLineFit1149->SetNDF(0);
   quadLineFit1149->GetXaxis()->SetLabelFont(42);
   quadLineFit1149->GetXaxis()->SetTitleOffset(1);
   quadLineFit1149->GetXaxis()->SetTitleFont(42);
   quadLineFit1149->GetYaxis()->SetLabelFont(42);
   quadLineFit1149->GetYaxis()->SetTitleFont(42);
   quadLineFit1149->SetParameter(0,5.404706);
   quadLineFit1149->SetParError(0,0.1273307);
   quadLineFit1149->SetParLimits(0,0,0);
   quadLineFit1149->SetParameter(1,-0.159757);
   quadLineFit1149->SetParError(1,0.007407894);
   quadLineFit1149->SetParLimits(1,0,0);
   quadLineFit1149->Draw("same");
   
   Double_t 40.000000 ppm_fx1149[2] = {
   16,
   18.3};
   Double_t 40.000000 ppm_fy1149[2] = {
   3.627842,
   3.15578};
   Double_t 40.000000 ppm_fex1149[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1149[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,40.000000 ppm_fx1149,40.000000 ppm_fy1149,40.000000 ppm_fex1149,40.000000 ppm_fey1149);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1149 = new TH1F("Graph_40dO000000sPppm1149","Graph",100,15.77,18.53);
   Graph_40dO000000sPppm1149->SetMinimum(3.094117);
   Graph_40dO000000sPppm1149->SetMaximum(3.689505);
   Graph_40dO000000sPppm1149->SetDirectory(0);
   Graph_40dO000000sPppm1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1149->SetLineColor(ci);
   Graph_40dO000000sPppm1149->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1149->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1149->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1149->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1149->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1149->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1149->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1149);
   
   
   TF1 *quadLineFit1150 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1150->SetFillColor(19);
   quadLineFit1150->SetFillStyle(0);
   quadLineFit1150->SetLineColor(10);
   quadLineFit1150->SetLineWidth(2);
   quadLineFit1150->SetChisquare(3.638122e-17);
   quadLineFit1150->SetNDF(0);
   quadLineFit1150->GetXaxis()->SetLabelFont(42);
   quadLineFit1150->GetXaxis()->SetTitleOffset(1);
   quadLineFit1150->GetXaxis()->SetTitleFont(42);
   quadLineFit1150->GetYaxis()->SetLabelFont(42);
   quadLineFit1150->GetYaxis()->SetTitleFont(42);
   quadLineFit1150->SetParameter(0,6.911744);
   quadLineFit1150->SetParError(0,0.1273307);
   quadLineFit1150->SetParLimits(0,0,0);
   quadLineFit1150->SetParameter(1,-0.2052439);
   quadLineFit1150->SetParError(1,0.007407894);
   quadLineFit1150->SetParLimits(1,0,0);
   quadLineFit1150->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1150);
   gre->Draw("p ");
   
   TF1 *quadLineFit1151 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1151->SetFillColor(19);
   quadLineFit1151->SetFillStyle(0);
   quadLineFit1151->SetLineColor(10);
   quadLineFit1151->SetLineWidth(2);
   quadLineFit1151->SetChisquare(3.638122e-17);
   quadLineFit1151->SetNDF(0);
   quadLineFit1151->GetXaxis()->SetLabelFont(42);
   quadLineFit1151->GetXaxis()->SetTitleOffset(1);
   quadLineFit1151->GetXaxis()->SetTitleFont(42);
   quadLineFit1151->GetYaxis()->SetLabelFont(42);
   quadLineFit1151->GetYaxis()->SetTitleFont(42);
   quadLineFit1151->SetParameter(0,6.911744);
   quadLineFit1151->SetParError(0,0.1273307);
   quadLineFit1151->SetParLimits(0,0,0);
   quadLineFit1151->SetParameter(1,-0.2052439);
   quadLineFit1151->SetParError(1,0.007407894);
   quadLineFit1151->SetParLimits(1,0,0);
   quadLineFit1151->Draw("same");
   
   Double_t 50.000000 ppm_fx1151[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1151[2] = {
   4.374293,
   3.820382};
   Double_t 50.000000 ppm_fex1151[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1151[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,50.000000 ppm_fx1151,50.000000 ppm_fy1151,50.000000 ppm_fex1151,50.000000 ppm_fey1151);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1151 = new TH1F("Graph_50dO000000sPppm1151","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1151->SetMinimum(3.750533);
   Graph_50dO000000sPppm1151->SetMaximum(4.444142);
   Graph_50dO000000sPppm1151->SetDirectory(0);
   Graph_50dO000000sPppm1151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1151->SetLineColor(ci);
   Graph_50dO000000sPppm1151->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1151->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1151->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1151->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1151->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1151->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1151->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1151);
   
   
   TF1 *quadLineFit1152 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1152->SetFillColor(19);
   quadLineFit1152->SetFillStyle(0);
   quadLineFit1152->SetLineColor(11);
   quadLineFit1152->SetLineWidth(2);
   quadLineFit1152->SetChisquare(8.337529e-20);
   quadLineFit1152->SetNDF(0);
   quadLineFit1152->GetXaxis()->SetLabelFont(42);
   quadLineFit1152->GetXaxis()->SetTitleOffset(1);
   quadLineFit1152->GetXaxis()->SetTitleFont(42);
   quadLineFit1152->GetYaxis()->SetLabelFont(42);
   quadLineFit1152->GetYaxis()->SetTitleFont(42);
   quadLineFit1152->SetParameter(0,8.227589);
   quadLineFit1152->SetParError(0,0.1273307);
   quadLineFit1152->SetParLimits(0,0,0);
   quadLineFit1152->SetParameter(1,-0.240831);
   quadLineFit1152->SetParError(1,0.007407894);
   quadLineFit1152->SetParLimits(1,0,0);
   quadLineFit1152->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1152);
   gre->Draw("p ");
   
   TF1 *quadLineFit1153 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1153->SetFillColor(19);
   quadLineFit1153->SetFillStyle(0);
   quadLineFit1153->SetLineColor(11);
   quadLineFit1153->SetLineWidth(2);
   quadLineFit1153->SetChisquare(8.337529e-20);
   quadLineFit1153->SetNDF(0);
   quadLineFit1153->GetXaxis()->SetLabelFont(42);
   quadLineFit1153->GetXaxis()->SetTitleOffset(1);
   quadLineFit1153->GetXaxis()->SetTitleFont(42);
   quadLineFit1153->GetYaxis()->SetLabelFont(42);
   quadLineFit1153->GetYaxis()->SetTitleFont(42);
   quadLineFit1153->SetParameter(0,8.227589);
   quadLineFit1153->SetParError(0,0.1273307);
   quadLineFit1153->SetParLimits(0,0,0);
   quadLineFit1153->SetParameter(1,-0.240831);
   quadLineFit1153->SetParError(1,0.007407894);
   quadLineFit1153->SetParLimits(1,0,0);
   quadLineFit1153->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(11);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("40.000000 ppm","   40 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(10);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("20.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-20.000000 ppm","  #minus20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-40.000000 ppm","  #minus40 ppm","lpf");
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
