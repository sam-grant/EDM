void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct 14 23:19:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1037[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1037[2] = {
   -1.671866,
   -1.32649};
   Double_t -30.000000 ppm_fex1037[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1037[2] = {
   0.01477369,
   0.01477369};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1037,-30.000000 ppm_fy1037,-30.000000 ppm_fex1037,-30.000000 ppm_fey1037);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1037 = new TH1F("Graph_mI30dO000000sPppm1037","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1037->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1037->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1037->SetDirectory(0);
   Graph_mI30dO000000sPppm1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1037->SetLineColor(ci);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1037->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1037->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1037->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1037->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1037);
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(1.108571e-19);
   quadLineFit1038->SetNDF(0);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,-3.053371);
   quadLineFit1038->SetParError(0,0.09459776);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,0.08634407);
   quadLineFit1038->SetParError(1,0.005223287);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("ap");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(1.108571e-19);
   quadLineFit1039->SetNDF(0);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,-3.053371);
   quadLineFit1039->SetParError(0,0.09459776);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,0.08634407);
   quadLineFit1039->SetParError(1,0.005223287);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t -10.000000 ppm_fx1039[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1039[2] = {
   -0.1361431,
   -0.1504917};
   Double_t -10.000000 ppm_fex1039[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1039[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1039,-10.000000 ppm_fy1039,-10.000000 ppm_fex1039,-10.000000 ppm_fey1039);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1039 = new TH1F("Graph_mI10dO000000sPppm1039","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1039->SetMinimum(-0.169655);
   Graph_mI10dO000000sPppm1039->SetMaximum(-0.1169798);
   Graph_mI10dO000000sPppm1039->SetDirectory(0);
   Graph_mI10dO000000sPppm1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1039->SetLineColor(ci);
   Graph_mI10dO000000sPppm1039->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1039->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1039->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1039->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1039->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1039->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1039->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1039);
   
   
   TF1 *quadLineFit1040 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1040->SetFillColor(19);
   quadLineFit1040->SetFillStyle(0);
   quadLineFit1040->SetLineColor(2);
   quadLineFit1040->SetLineWidth(2);
   quadLineFit1040->SetChisquare(2.981174e-22);
   quadLineFit1040->SetNDF(0);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,-0.07874836);
   quadLineFit1040->SetParError(0,0.09459776);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,-0.003587169);
   quadLineFit1040->SetParError(1,0.005223287);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(2);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(2.981174e-22);
   quadLineFit1041->SetNDF(0);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,-0.07874836);
   quadLineFit1041->SetParError(0,0.09459776);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,-0.003587169);
   quadLineFit1041->SetParError(1,0.005223287);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t 10.000000 ppm_fx1041[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1041[2] = {
   1.332351,
   1.08858};
   Double_t 10.000000 ppm_fex1041[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1041[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,10.000000 ppm_fx1041,10.000000 ppm_fy1041,10.000000 ppm_fex1041,10.000000 ppm_fey1041);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1041 = new TH1F("Graph_10dO000000sPppm1041","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1041->SetMinimum(1.046475);
   Graph_10dO000000sPppm1041->SetMaximum(1.374456);
   Graph_10dO000000sPppm1041->SetDirectory(0);
   Graph_10dO000000sPppm1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1041->SetLineColor(ci);
   Graph_10dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1041->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineColor(3);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(6.442531e-21);
   quadLineFit1042->SetNDF(0);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,2.307433);
   quadLineFit1042->SetParError(0,0.09459776);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,-0.06094264);
   quadLineFit1042->SetParError(1,0.005223287);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineColor(3);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(6.442531e-21);
   quadLineFit1043->SetNDF(0);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,2.307433);
   quadLineFit1043->SetParError(0,0.09459776);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,-0.06094264);
   quadLineFit1043->SetParError(1,0.005223287);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 30.000000 ppm_fx1043[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1043[2] = {
   2.872509,
   2.306156};
   Double_t 30.000000 ppm_fex1043[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1043[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,30.000000 ppm_fx1043,30.000000 ppm_fy1043,30.000000 ppm_fex1043,30.000000 ppm_fey1043);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1043 = new TH1F("Graph_30dO000000sPppm1043","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1043->SetMinimum(2.231793);
   Graph_30dO000000sPppm1043->SetMaximum(2.946873);
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
   quadLineFit1044->SetLineColor(4);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(6.969093e-19);
   quadLineFit1044->SetNDF(0);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,5.137921);
   quadLineFit1044->SetParError(0,0.09459776);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,-0.1415882);
   quadLineFit1044->SetParError(1,0.005223287);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(4);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(6.969093e-19);
   quadLineFit1045->SetNDF(0);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,5.137921);
   quadLineFit1045->SetParError(0,0.09459776);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,-0.1415882);
   quadLineFit1045->SetParError(1,0.005223287);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
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
