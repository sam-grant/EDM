void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1027[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1027[3] = {
   -3.162006,
   -2.802952,
   -2.545302};
   Double_t -50.000000 ppm_fex1027[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1027[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1027,-50.000000 ppm_fy1027,-50.000000 ppm_fex1027,-50.000000 ppm_fey1027);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1027 = new TH1F("Graph_mI50dO000000sPppm1027","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1027->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1027->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1027->SetDirectory(0);
   Graph_mI50dO000000sPppm1027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1027->SetLineColor(ci);
   Graph_mI50dO000000sPppm1027->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1027->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1027->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1027->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1027->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1027->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1027->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1027->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1027->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1027->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1027->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1027->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1027->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1027->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1027->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1027);
   
   
   TF1 *quadLineFit1028 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1028->SetFillColor(19);
   quadLineFit1028->SetFillStyle(0);
   quadLineFit1028->SetLineWidth(2);
   quadLineFit1028->SetChisquare(3.984103);
   quadLineFit1028->SetNDF(1);
   quadLineFit1028->GetXaxis()->SetLabelFont(42);
   quadLineFit1028->GetXaxis()->SetTitleOffset(1);
   quadLineFit1028->GetXaxis()->SetTitleFont(42);
   quadLineFit1028->GetYaxis()->SetLabelFont(42);
   quadLineFit1028->GetYaxis()->SetTitleFont(42);
   quadLineFit1028->SetParameter(0,-5.61192);
   quadLineFit1028->SetParError(0,0.1325382);
   quadLineFit1028->SetParLimits(0,0,0);
   quadLineFit1028->SetParameter(1,0.154176);
   quadLineFit1028->SetParError(1,0.007333119);
   quadLineFit1028->SetParLimits(1,0,0);
   quadLineFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1028);
   gre->Draw("ap");
   
   TF1 *quadLineFit1029 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1029->SetFillColor(19);
   quadLineFit1029->SetFillStyle(0);
   quadLineFit1029->SetLineWidth(2);
   quadLineFit1029->SetChisquare(3.984103);
   quadLineFit1029->SetNDF(1);
   quadLineFit1029->GetXaxis()->SetLabelFont(42);
   quadLineFit1029->GetXaxis()->SetTitleOffset(1);
   quadLineFit1029->GetXaxis()->SetTitleFont(42);
   quadLineFit1029->GetYaxis()->SetLabelFont(42);
   quadLineFit1029->GetYaxis()->SetTitleFont(42);
   quadLineFit1029->SetParameter(0,-5.61192);
   quadLineFit1029->SetParError(0,0.1325382);
   quadLineFit1029->SetParLimits(0,0,0);
   quadLineFit1029->SetParameter(1,0.154176);
   quadLineFit1029->SetParError(1,0.007333119);
   quadLineFit1029->SetParLimits(1,0,0);
   quadLineFit1029->Draw("same");
   
   Double_t -40.000000 ppm_fx1029[3] = {
   16,
   18,
   20};
   Double_t -40.000000 ppm_fy1029[3] = {
   -2.412908,
   -2.100545,
   -1.909054};
   Double_t -40.000000 ppm_fex1029[3] = {
   0,
   0,
   0};
   Double_t -40.000000 ppm_fey1029[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,-40.000000 ppm_fx1029,-40.000000 ppm_fy1029,-40.000000 ppm_fex1029,-40.000000 ppm_fey1029);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1029 = new TH1F("Graph_mI40dO000000sPppm1029","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1029->SetMinimum(-2.488182);
   Graph_mI40dO000000sPppm1029->SetMaximum(-1.83378);
   Graph_mI40dO000000sPppm1029->SetDirectory(0);
   Graph_mI40dO000000sPppm1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1029->SetLineColor(ci);
   Graph_mI40dO000000sPppm1029->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1029->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1029->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1029->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1029->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1029->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1029->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1029);
   
   
   TF1 *quadLineFit1030 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1030->SetFillColor(19);
   quadLineFit1030->SetFillStyle(0);
   quadLineFit1030->SetLineColor(2);
   quadLineFit1030->SetLineWidth(2);
   quadLineFit1030->SetChisquare(5.660806);
   quadLineFit1030->SetNDF(1);
   quadLineFit1030->GetXaxis()->SetLabelFont(42);
   quadLineFit1030->GetXaxis()->SetTitleOffset(1);
   quadLineFit1030->GetXaxis()->SetTitleFont(42);
   quadLineFit1030->GetYaxis()->SetLabelFont(42);
   quadLineFit1030->GetYaxis()->SetTitleFont(42);
   quadLineFit1030->SetParameter(0,-4.408181);
   quadLineFit1030->SetParError(0,0.1325373);
   quadLineFit1030->SetParLimits(0,0,0);
   quadLineFit1030->SetParameter(1,0.1259636);
   quadLineFit1030->SetParError(1,0.007333071);
   quadLineFit1030->SetParLimits(1,0,0);
   quadLineFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1030);
   gre->Draw("p ");
   
   TF1 *quadLineFit1031 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1031->SetFillColor(19);
   quadLineFit1031->SetFillStyle(0);
   quadLineFit1031->SetLineColor(2);
   quadLineFit1031->SetLineWidth(2);
   quadLineFit1031->SetChisquare(5.660806);
   quadLineFit1031->SetNDF(1);
   quadLineFit1031->GetXaxis()->SetLabelFont(42);
   quadLineFit1031->GetXaxis()->SetTitleOffset(1);
   quadLineFit1031->GetXaxis()->SetTitleFont(42);
   quadLineFit1031->GetYaxis()->SetLabelFont(42);
   quadLineFit1031->GetYaxis()->SetTitleFont(42);
   quadLineFit1031->SetParameter(0,-4.408181);
   quadLineFit1031->SetParError(0,0.1325373);
   quadLineFit1031->SetParLimits(0,0,0);
   quadLineFit1031->SetParameter(1,0.1259636);
   quadLineFit1031->SetParError(1,0.007333071);
   quadLineFit1031->SetParLimits(1,0,0);
   quadLineFit1031->Draw("same");
   
   Double_t -30.000000 ppm_fx1031[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1031[3] = {
   -1.657897,
   -1.44829,
   -1.280802};
   Double_t -30.000000 ppm_fex1031[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1031[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1031,-30.000000 ppm_fy1031,-30.000000 ppm_fex1031,-30.000000 ppm_fey1031);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1031 = new TH1F("Graph_mI30dO000000sPppm1031","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1031->SetMinimum(-1.720495);
   Graph_mI30dO000000sPppm1031->SetMaximum(-1.218204);
   Graph_mI30dO000000sPppm1031->SetDirectory(0);
   Graph_mI30dO000000sPppm1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1031->SetLineColor(ci);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1031->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1031->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1031->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1031->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1031);
   
   
   TF1 *quadLineFit1032 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1032->SetFillColor(19);
   quadLineFit1032->SetFillStyle(0);
   quadLineFit1032->SetLineColor(3);
   quadLineFit1032->SetLineWidth(2);
   quadLineFit1032->SetChisquare(0.6873163);
   quadLineFit1032->SetNDF(1);
   quadLineFit1032->GetXaxis()->SetLabelFont(42);
   quadLineFit1032->GetXaxis()->SetTitleOffset(1);
   quadLineFit1032->GetXaxis()->SetTitleFont(42);
   quadLineFit1032->GetYaxis()->SetLabelFont(42);
   quadLineFit1032->GetYaxis()->SetTitleFont(42);
   quadLineFit1032->SetParameter(0,-3.159261);
   quadLineFit1032->SetParError(0,0.1325324);
   quadLineFit1032->SetParLimits(0,0,0);
   quadLineFit1032->SetParameter(1,0.09427395);
   quadLineFit1032->SetParError(1,0.007332795);
   quadLineFit1032->SetParLimits(1,0,0);
   quadLineFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1032);
   gre->Draw("p ");
   
   TF1 *quadLineFit1033 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1033->SetFillColor(19);
   quadLineFit1033->SetFillStyle(0);
   quadLineFit1033->SetLineColor(3);
   quadLineFit1033->SetLineWidth(2);
   quadLineFit1033->SetChisquare(0.6873163);
   quadLineFit1033->SetNDF(1);
   quadLineFit1033->GetXaxis()->SetLabelFont(42);
   quadLineFit1033->GetXaxis()->SetTitleOffset(1);
   quadLineFit1033->GetXaxis()->SetTitleFont(42);
   quadLineFit1033->GetYaxis()->SetLabelFont(42);
   quadLineFit1033->GetYaxis()->SetTitleFont(42);
   quadLineFit1033->SetParameter(0,-3.159261);
   quadLineFit1033->SetParError(0,0.1325324);
   quadLineFit1033->SetParLimits(0,0,0);
   quadLineFit1033->SetParameter(1,0.09427395);
   quadLineFit1033->SetParError(1,0.007332795);
   quadLineFit1033->SetParLimits(1,0,0);
   quadLineFit1033->Draw("same");
   
   Double_t -20.000000 ppm_fx1033[3] = {
   16,
   18,
   20};
   Double_t -20.000000 ppm_fy1033[3] = {
   -0.9396776,
   -0.8334517,
   -0.7117831};
   Double_t -20.000000 ppm_fex1033[3] = {
   0,
   0,
   0};
   Double_t -20.000000 ppm_fey1033[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,-20.000000 ppm_fx1033,-20.000000 ppm_fy1033,-20.000000 ppm_fex1033,-20.000000 ppm_fey1033);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1033 = new TH1F("Graph_mI20dO000000sPppm1033","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1033->SetMinimum(-0.9873554);
   Graph_mI20dO000000sPppm1033->SetMaximum(-0.6641053);
   Graph_mI20dO000000sPppm1033->SetDirectory(0);
   Graph_mI20dO000000sPppm1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1033->SetLineColor(ci);
   Graph_mI20dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1033->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineColor(4);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(0.09239887);
   quadLineFit1034->SetNDF(1);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,-1.85383);
   quadLineFit1034->SetParError(0,0.1325315);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,0.05697363);
   quadLineFit1034->SetParError(1,0.007332744);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("p ");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineColor(4);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(0.09239887);
   quadLineFit1035->SetNDF(1);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,-1.85383);
   quadLineFit1035->SetParError(0,0.1325315);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,0.05697363);
   quadLineFit1035->SetParError(1,0.007332744);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t -10.000000 ppm_fx1035[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1035[3] = {
   -0.1515208,
   -0.1587741,
   -0.1257847};
   Double_t -10.000000 ppm_fex1035[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1035[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1035,-10.000000 ppm_fy1035,-10.000000 ppm_fex1035,-10.000000 ppm_fey1035);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1035 = new TH1F("Graph_mI10dO000000sPppm1035","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1035->SetMinimum(-0.1869614);
   Graph_mI10dO000000sPppm1035->SetMaximum(-0.09759737);
   Graph_mI10dO000000sPppm1035->SetDirectory(0);
   Graph_mI10dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1035->SetLineColor(ci);
   Graph_mI10dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(5);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(0.6274723);
   quadLineFit1036->SetNDF(1);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,-0.2611725);
   quadLineFit1036->SetParError(0,0.1325324);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,0.006434033);
   quadLineFit1036->SetParError(1,0.007332799);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(5);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(0.6274723);
   quadLineFit1037->SetNDF(1);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,-0.2611725);
   quadLineFit1037->SetParError(0,0.1325324);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,0.006434033);
   quadLineFit1037->SetParError(1,0.007332799);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   Double_t 0.000000 ppm_fx1037[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1037[3] = {
   0.6521866,
   0.5006383,
   0.4944307};
   Double_t 0.000000 ppm_fex1037[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1037[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,0.000000 ppm_fx1037,0.000000 ppm_fy1037,0.000000 ppm_fex1037,0.000000 ppm_fey1037);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1037 = new TH1F("Graph_0dO000000sPppm1037","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1037->SetMinimum(0.4537667);
   Graph_0dO000000sPppm1037->SetMaximum(0.6928505);
   Graph_0dO000000sPppm1037->SetDirectory(0);
   Graph_0dO000000sPppm1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1037->SetLineColor(ci);
   Graph_0dO000000sPppm1037->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1037->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1037->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1037->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1037->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1037->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1037->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1037);
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineColor(6);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(8.184517);
   quadLineFit1038->SetNDF(1);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,1.258987);
   quadLineFit1038->SetParError(0,0.1325324);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,-0.03943898);
   quadLineFit1038->SetParError(1,0.007332795);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("p ");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineColor(6);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(8.184517);
   quadLineFit1039->SetNDF(1);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,1.258987);
   quadLineFit1039->SetParError(0,0.1325324);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,-0.03943898);
   quadLineFit1039->SetParError(1,0.007332795);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t 10.000000 ppm_fx1039[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1039[3] = {
   1.376275,
   1.201125,
   1.097177};
   Double_t 10.000000 ppm_fex1039[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1039[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,10.000000 ppm_fx1039,10.000000 ppm_fy1039,10.000000 ppm_fex1039,10.000000 ppm_fey1039);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1039 = new TH1F("Graph_10dO000000sPppm1039","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1039->SetMinimum(1.044379);
   Graph_10dO000000sPppm1039->SetMaximum(1.429073);
   Graph_10dO000000sPppm1039->SetDirectory(0);
   Graph_10dO000000sPppm1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1039->SetLineColor(ci);
   Graph_10dO000000sPppm1039->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1039->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1039->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1039->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1039->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1039->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1039->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1039);
   
   
   TF1 *quadLineFit1040 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1040->SetFillColor(19);
   quadLineFit1040->SetFillStyle(0);
   quadLineFit1040->SetLineColor(7);
   quadLineFit1040->SetLineWidth(2);
   quadLineFit1040->SetChisquare(1.964267);
   quadLineFit1040->SetNDF(1);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,2.4808);
   quadLineFit1040->SetParError(0,0.1325327);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,-0.06977449);
   quadLineFit1040->SetParError(1,0.007332815);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(7);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(1.964267);
   quadLineFit1041->SetNDF(1);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,2.4808);
   quadLineFit1041->SetParError(0,0.1325327);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,-0.06977449);
   quadLineFit1041->SetParError(1,0.007332815);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t 20.000000 ppm_fx1041[3] = {
   16,
   18,
   20};
   Double_t 20.000000 ppm_fy1041[3] = {
   2.10318,
   1.881037,
   1.708007};
   Double_t 20.000000 ppm_fex1041[3] = {
   0,
   0,
   0};
   Double_t 20.000000 ppm_fey1041[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,20.000000 ppm_fx1041,20.000000 ppm_fy1041,20.000000 ppm_fex1041,20.000000 ppm_fey1041);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1041 = new TH1F("Graph_20dO000000sPppm1041","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1041->SetMinimum(1.643601);
   Graph_20dO000000sPppm1041->SetMaximum(2.167585);
   Graph_20dO000000sPppm1041->SetDirectory(0);
   Graph_20dO000000sPppm1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1041->SetLineColor(ci);
   Graph_20dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1041->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineColor(8);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(0.9345658);
   quadLineFit1042->SetNDF(1);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,3.675685);
   quadLineFit1042->SetParError(0,0.1325436);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,-0.09879318);
   quadLineFit1042->SetParError(1,0.00733342);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineColor(8);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(0.9345658);
   quadLineFit1043->SetNDF(1);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,3.675685);
   quadLineFit1043->SetParError(0,0.1325436);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,-0.09879318);
   quadLineFit1043->SetParError(1,0.00733342);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 30.000000 ppm_fx1043[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1043[3] = {
   2.891902,
   2.514612,
   2.275938};
   Double_t 30.000000 ppm_fex1043[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1043[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,30.000000 ppm_fx1043,30.000000 ppm_fy1043,30.000000 ppm_fex1043,30.000000 ppm_fey1043);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1043 = new TH1F("Graph_30dO000000sPppm1043","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1043->SetMinimum(2.189453);
   Graph_30dO000000sPppm1043->SetMaximum(2.978387);
   Graph_30dO000000sPppm1043->SetDirectory(0);
   Graph_30dO000000sPppm1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1043->SetLineColor(ci);
   Graph_30dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1043->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(9);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(7.444604);
   quadLineFit1044->SetNDF(1);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,5.33266);
   quadLineFit1044->SetParError(0,0.1325395);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,-0.1539912);
   quadLineFit1044->SetParError(1,0.007333191);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(9);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(7.444604);
   quadLineFit1045->SetNDF(1);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,5.33266);
   quadLineFit1045->SetParError(0,0.1325395);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,-0.1539912);
   quadLineFit1045->SetParError(1,0.007333191);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   Double_t 40.000000 ppm_fx1045[3] = {
   16,
   18,
   20};
   Double_t 40.000000 ppm_fy1045[3] = {
   3.614143,
   3.189197,
   2.893637};
   Double_t 40.000000 ppm_fex1045[3] = {
   0,
   0,
   0};
   Double_t 40.000000 ppm_fey1045[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,40.000000 ppm_fx1045,40.000000 ppm_fy1045,40.000000 ppm_fex1045,40.000000 ppm_fey1045);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1045 = new TH1F("Graph_40dO000000sPppm1045","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1045->SetMinimum(2.796698);
   Graph_40dO000000sPppm1045->SetMaximum(3.711082);
   Graph_40dO000000sPppm1045->SetDirectory(0);
   Graph_40dO000000sPppm1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1045->SetLineColor(ci);
   Graph_40dO000000sPppm1045->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1045->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1045->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1045->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1045->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1045->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1045->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1045);
   
   
   TF1 *quadLineFit1046 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1046->SetFillColor(19);
   quadLineFit1046->SetFillStyle(0);
   quadLineFit1046->SetLineColor(10);
   quadLineFit1046->SetLineWidth(2);
   quadLineFit1046->SetChisquare(6.486159);
   quadLineFit1046->SetNDF(1);
   quadLineFit1046->GetXaxis()->SetLabelFont(42);
   quadLineFit1046->GetXaxis()->SetTitleOffset(1);
   quadLineFit1046->GetXaxis()->SetTitleFont(42);
   quadLineFit1046->GetYaxis()->SetLabelFont(42);
   quadLineFit1046->GetYaxis()->SetTitleFont(42);
   quadLineFit1046->SetParameter(0,6.474604);
   quadLineFit1046->SetParError(0,0.1325298);
   quadLineFit1046->SetParLimits(0,0,0);
   quadLineFit1046->SetParameter(1,-0.1801266);
   quadLineFit1046->SetParError(1,0.007332652);
   quadLineFit1046->SetParLimits(1,0,0);
   quadLineFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1046);
   gre->Draw("p ");
   
   TF1 *quadLineFit1047 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1047->SetFillColor(19);
   quadLineFit1047->SetFillStyle(0);
   quadLineFit1047->SetLineColor(10);
   quadLineFit1047->SetLineWidth(2);
   quadLineFit1047->SetChisquare(6.486159);
   quadLineFit1047->SetNDF(1);
   quadLineFit1047->GetXaxis()->SetLabelFont(42);
   quadLineFit1047->GetXaxis()->SetTitleOffset(1);
   quadLineFit1047->GetXaxis()->SetTitleFont(42);
   quadLineFit1047->GetYaxis()->SetLabelFont(42);
   quadLineFit1047->GetYaxis()->SetTitleFont(42);
   quadLineFit1047->SetParameter(0,6.474604);
   quadLineFit1047->SetParError(0,0.1325298);
   quadLineFit1047->SetParLimits(0,0,0);
   quadLineFit1047->SetParameter(1,-0.1801266);
   quadLineFit1047->SetParError(1,0.007332652);
   quadLineFit1047->SetParLimits(1,0,0);
   quadLineFit1047->Draw("same");
   
   Double_t 50.000000 ppm_fx1047[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1047[3] = {
   4.377539,
   3.863266,
   3.464026};
   Double_t 50.000000 ppm_fex1047[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1047[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,50.000000 ppm_fx1047,50.000000 ppm_fy1047,50.000000 ppm_fex1047,50.000000 ppm_fey1047);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1047 = new TH1F("Graph_50dO000000sPppm1047","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1047->SetMinimum(3.347787);
   Graph_50dO000000sPppm1047->SetMaximum(4.493779);
   Graph_50dO000000sPppm1047->SetDirectory(0);
   Graph_50dO000000sPppm1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1047->SetLineColor(ci);
   Graph_50dO000000sPppm1047->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1047->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1047->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1047->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1047->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1047->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1047->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1047);
   
   
   TF1 *quadLineFit1048 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1048->SetFillColor(19);
   quadLineFit1048->SetFillStyle(0);
   quadLineFit1048->SetLineColor(11);
   quadLineFit1048->SetLineWidth(2);
   quadLineFit1048->SetChisquare(5.127088);
   quadLineFit1048->SetNDF(1);
   quadLineFit1048->GetXaxis()->SetLabelFont(42);
   quadLineFit1048->GetXaxis()->SetTitleOffset(1);
   quadLineFit1048->GetXaxis()->SetTitleFont(42);
   quadLineFit1048->GetYaxis()->SetLabelFont(42);
   quadLineFit1048->GetYaxis()->SetTitleFont(42);
   quadLineFit1048->SetParameter(0,8.012418);
   quadLineFit1048->SetParError(0,0.1325384);
   quadLineFit1048->SetParLimits(0,0,0);
   quadLineFit1048->SetParameter(1,-0.2283782);
   quadLineFit1048->SetParError(1,0.007333132);
   quadLineFit1048->SetParLimits(1,0,0);
   quadLineFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1048);
   gre->Draw("p ");
   
   TF1 *quadLineFit1049 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1049->SetFillColor(19);
   quadLineFit1049->SetFillStyle(0);
   quadLineFit1049->SetLineColor(11);
   quadLineFit1049->SetLineWidth(2);
   quadLineFit1049->SetChisquare(5.127088);
   quadLineFit1049->SetNDF(1);
   quadLineFit1049->GetXaxis()->SetLabelFont(42);
   quadLineFit1049->GetXaxis()->SetTitleOffset(1);
   quadLineFit1049->GetXaxis()->SetTitleFont(42);
   quadLineFit1049->GetYaxis()->SetLabelFont(42);
   quadLineFit1049->GetYaxis()->SetTitleFont(42);
   quadLineFit1049->SetParameter(0,8.012418);
   quadLineFit1049->SetParError(0,0.1325384);
   quadLineFit1049->SetParLimits(0,0,0);
   quadLineFit1049->SetParameter(1,-0.2283782);
   quadLineFit1049->SetParError(1,0.007333132);
   quadLineFit1049->SetParLimits(1,0,0);
   quadLineFit1049->Draw("same");
   
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
