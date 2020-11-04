void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1033[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1033[3] = {
   -3.146181,
   -2.808797,
   -2.542276};
   Double_t -50.000000 ppm_fex1033[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1033[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1033,-50.000000 ppm_fy1033,-50.000000 ppm_fex1033,-50.000000 ppm_fey1033);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1033 = new TH1F("Graph_mI50dO000000sPppm1033","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1033->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1033->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1033->SetDirectory(0);
   Graph_mI50dO000000sPppm1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1033->SetLineColor(ci);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1033->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1033->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(2.909109);
   quadLineFit1034->SetNDF(1);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,-5.54999);
   quadLineFit1034->SetParError(0,0.1083776);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,0.1509762);
   quadLineFit1034->SetParError(1,0.005996347);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("ap");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(2.909109);
   quadLineFit1035->SetNDF(1);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,-5.54999);
   quadLineFit1035->SetParError(0,0.1083776);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,0.1509762);
   quadLineFit1035->SetParError(1,0.005996347);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t -30.000000 ppm_fx1035[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1035[3] = {
   -1.674738,
   -1.504491,
   -1.31762};
   Double_t -30.000000 ppm_fex1035[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1035[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1035,-30.000000 ppm_fy1035,-30.000000 ppm_fex1035,-30.000000 ppm_fey1035);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1035 = new TH1F("Graph_mI30dO000000sPppm1035","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1035->SetMinimum(-1.730803);
   Graph_mI30dO000000sPppm1035->SetMaximum(-1.261554);
   Graph_mI30dO000000sPppm1035->SetDirectory(0);
   Graph_mI30dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1035->SetLineColor(ci);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(2);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(0.1601122);
   quadLineFit1036->SetNDF(1);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,-3.105982);
   quadLineFit1036->SetParError(0,0.1083855);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,0.0892796);
   quadLineFit1036->SetParError(1,0.005996789);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(2);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(0.1601122);
   quadLineFit1037->SetNDF(1);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,-3.105982);
   quadLineFit1037->SetParError(0,0.1083855);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,0.0892796);
   quadLineFit1037->SetParError(1,0.005996789);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   Double_t -10.000000 ppm_fx1037[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1037[3] = {
   -0.1658636,
   -0.1489688,
   -0.1042122};
   Double_t -10.000000 ppm_fex1037[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1037[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1037,-10.000000 ppm_fy1037,-10.000000 ppm_fex1037,-10.000000 ppm_fey1037);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1037 = new TH1F("Graph_mI10dO000000sPppm1037","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1037->SetMinimum(-0.1923823);
   Graph_mI10dO000000sPppm1037->SetMaximum(-0.0776935);
   Graph_mI10dO000000sPppm1037->SetDirectory(0);
   Graph_mI10dO000000sPppm1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1037->SetLineColor(ci);
   Graph_mI10dO000000sPppm1037->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1037->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1037->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1037->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1037->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1037->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1037->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1037);
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineColor(3);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(0.4497309);
   quadLineFit1038->SetNDF(1);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,-0.417113);
   quadLineFit1038->SetParError(0,0.1083835);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,0.01541286);
   quadLineFit1038->SetParError(1,0.005996677);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("p ");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineColor(3);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(0.4497309);
   quadLineFit1039->SetNDF(1);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,-0.417113);
   quadLineFit1039->SetParError(0,0.1083835);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,0.01541286);
   quadLineFit1039->SetParError(1,0.005996677);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t 10.000000 ppm_fx1039[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1039[3] = {
   1.335252,
   1.195481,
   1.09502};
   Double_t 10.000000 ppm_fex1039[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1039[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,10.000000 ppm_fx1039,10.000000 ppm_fy1039,10.000000 ppm_fex1039,10.000000 ppm_fey1039);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1039 = new TH1F("Graph_10dO000000sPppm1039","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1039->SetMinimum(1.050644);
   Graph_10dO000000sPppm1039->SetMaximum(1.379628);
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
   quadLineFit1040->SetLineColor(4);
   quadLineFit1040->SetLineWidth(2);
   quadLineFit1040->SetChisquare(0.8952604);
   quadLineFit1040->SetNDF(1);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,2.289626);
   quadLineFit1040->SetParError(0,0.1083881);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,-0.06005784);
   quadLineFit1040->SetParError(1,0.005996934);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(4);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(0.8952604);
   quadLineFit1041->SetNDF(1);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,2.289626);
   quadLineFit1041->SetParError(0,0.1083881);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,-0.06005784);
   quadLineFit1041->SetParError(1,0.005996934);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t 30.000000 ppm_fx1041[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1041[3] = {
   2.887818,
   2.566455,
   2.27557};
   Double_t 30.000000 ppm_fex1041[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1041[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,30.000000 ppm_fx1041,30.000000 ppm_fy1041,30.000000 ppm_fex1041,30.000000 ppm_fey1041);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1041 = new TH1F("Graph_30dO000000sPppm1041","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1041->SetMinimum(2.193991);
   Graph_30dO000000sPppm1041->SetMaximum(2.969397);
   Graph_30dO000000sPppm1041->SetDirectory(0);
   Graph_30dO000000sPppm1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1041->SetLineColor(ci);
   Graph_30dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1041->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineColor(5);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(0.5381256);
   quadLineFit1042->SetNDF(1);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,5.331734);
   quadLineFit1042->SetParError(0,0.1083842);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,-0.1530622);
   quadLineFit1042->SetParError(1,0.005996716);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineColor(5);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(0.5381256);
   quadLineFit1043->SetNDF(1);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,5.331734);
   quadLineFit1043->SetParError(0,0.1083842);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,-0.1530622);
   quadLineFit1043->SetParError(1,0.005996716);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 50.000000 ppm_fx1043[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1043[3] = {
   4.358514,
   3.896939,
   3.488262};
   Double_t 50.000000 ppm_fex1043[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1043[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,50.000000 ppm_fx1043,50.000000 ppm_fy1043,50.000000 ppm_fex1043,50.000000 ppm_fey1043);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1043 = new TH1F("Graph_50dO000000sPppm1043","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1043->SetMinimum(3.380884);
   Graph_50dO000000sPppm1043->SetMaximum(4.465893);
   Graph_50dO000000sPppm1043->SetDirectory(0);
   Graph_50dO000000sPppm1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1043->SetLineColor(ci);
   Graph_50dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(6);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(1.621136);
   quadLineFit1044->SetNDF(1);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,7.830703);
   quadLineFit1044->SetParError(0,0.1083791);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,-0.2175629);
   quadLineFit1044->SetParError(1,0.005996439);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(6);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(1.621136);
   quadLineFit1045->SetNDF(1);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,7.830703);
   quadLineFit1045->SetParError(0,0.1083791);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,-0.2175629);
   quadLineFit1045->SetParError(1,0.005996439);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
