void QuadScans_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1141[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1141[3] = {
   -3.16689,
   -2.805673,
   -2.537955};
   Double_t -50.000000 ppm_fex1141[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1141[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1141,-50.000000 ppm_fy1141,-50.000000 ppm_fex1141,-50.000000 ppm_fey1141);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1141 = new TH1F("Graph_mI50dO000000sPppm1141","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1141->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1141->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1141->SetDirectory(0);
   Graph_mI50dO000000sPppm1141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1141->SetLineColor(ci);
   Graph_mI50dO000000sPppm1141->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1141->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1141->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1141->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1141->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1141->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1141->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1141->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1141->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1141->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1141->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1141->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1141->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1141->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1141->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1141);
   
   
   TF1 *quadLineFit1142 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1142->SetFillColor(19);
   quadLineFit1142->SetFillStyle(0);
   quadLineFit1142->SetLineWidth(2);
   quadLineFit1142->SetChisquare(18.44357);
   quadLineFit1142->SetNDF(1);
   quadLineFit1142->GetXaxis()->SetLabelFont(42);
   quadLineFit1142->GetXaxis()->SetTitleOffset(1);
   quadLineFit1142->GetXaxis()->SetTitleFont(42);
   quadLineFit1142->GetYaxis()->SetLabelFont(42);
   quadLineFit1142->GetYaxis()->SetTitleFont(42);
   quadLineFit1142->SetParameter(0,-5.667044);
   quadLineFit1142->SetParError(0,0.05679712);
   quadLineFit1142->SetParLimits(0,0,0);
   quadLineFit1142->SetParameter(1,0.1572336);
   quadLineFit1142->SetParError(1,0.00314249);
   quadLineFit1142->SetParLimits(1,0,0);
   quadLineFit1142->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1142);
   gre->Draw("ap");
   
   TF1 *quadLineFit1143 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1143->SetFillColor(19);
   quadLineFit1143->SetFillStyle(0);
   quadLineFit1143->SetLineWidth(2);
   quadLineFit1143->SetChisquare(18.44357);
   quadLineFit1143->SetNDF(1);
   quadLineFit1143->GetXaxis()->SetLabelFont(42);
   quadLineFit1143->GetXaxis()->SetTitleOffset(1);
   quadLineFit1143->GetXaxis()->SetTitleFont(42);
   quadLineFit1143->GetYaxis()->SetLabelFont(42);
   quadLineFit1143->GetYaxis()->SetTitleFont(42);
   quadLineFit1143->SetParameter(0,-5.667044);
   quadLineFit1143->SetParError(0,0.05679712);
   quadLineFit1143->SetParLimits(0,0,0);
   quadLineFit1143->SetParameter(1,0.1572336);
   quadLineFit1143->SetParError(1,0.00314249);
   quadLineFit1143->SetParLimits(1,0,0);
   quadLineFit1143->Draw("same");
   
   Double_t -25.000000 ppm_fx1143[3] = {
   16,
   18,
   20};
   Double_t -25.000000 ppm_fy1143[3] = {
   -1.276141,
   -1.148034,
   -1.036774};
   Double_t -25.000000 ppm_fex1143[3] = {
   0,
   0,
   0};
   Double_t -25.000000 ppm_fey1143[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,-25.000000 ppm_fx1143,-25.000000 ppm_fy1143,-25.000000 ppm_fex1143,-25.000000 ppm_fey1143);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1143 = new TH1F("Graph_mI25dO000000sPppm1143","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1143->SetMinimum(-1.310744);
   Graph_mI25dO000000sPppm1143->SetMaximum(-1.002171);
   Graph_mI25dO000000sPppm1143->SetDirectory(0);
   Graph_mI25dO000000sPppm1143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1143->SetLineColor(ci);
   Graph_mI25dO000000sPppm1143->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1143->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1143->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1143->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1143->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1143->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1143->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1143);
   
   
   TF1 *quadLineFit1144 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1144->SetFillColor(19);
   quadLineFit1144->SetFillStyle(0);
   quadLineFit1144->SetLineColor(2);
   quadLineFit1144->SetLineWidth(2);
   quadLineFit1144->SetChisquare(0.5987911);
   quadLineFit1144->SetNDF(1);
   quadLineFit1144->GetXaxis()->SetLabelFont(42);
   quadLineFit1144->GetXaxis()->SetTitleOffset(1);
   quadLineFit1144->GetXaxis()->SetTitleFont(42);
   quadLineFit1144->GetYaxis()->SetLabelFont(42);
   quadLineFit1144->GetYaxis()->SetTitleFont(42);
   quadLineFit1144->SetParameter(0,-2.230803);
   quadLineFit1144->SetParError(0,0.05679621);
   quadLineFit1144->SetParLimits(0,0,0);
   quadLineFit1144->SetParameter(1,0.05984186);
   quadLineFit1144->SetParError(1,0.00314244);
   quadLineFit1144->SetParLimits(1,0,0);
   quadLineFit1144->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1144);
   gre->Draw("p ");
   
   TF1 *quadLineFit1145 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1145->SetFillColor(19);
   quadLineFit1145->SetFillStyle(0);
   quadLineFit1145->SetLineColor(2);
   quadLineFit1145->SetLineWidth(2);
   quadLineFit1145->SetChisquare(0.5987911);
   quadLineFit1145->SetNDF(1);
   quadLineFit1145->GetXaxis()->SetLabelFont(42);
   quadLineFit1145->GetXaxis()->SetTitleOffset(1);
   quadLineFit1145->GetXaxis()->SetTitleFont(42);
   quadLineFit1145->GetYaxis()->SetLabelFont(42);
   quadLineFit1145->GetYaxis()->SetTitleFont(42);
   quadLineFit1145->SetParameter(0,-2.230803);
   quadLineFit1145->SetParError(0,0.05679621);
   quadLineFit1145->SetParLimits(0,0,0);
   quadLineFit1145->SetParameter(1,0.05984186);
   quadLineFit1145->SetParError(1,0.00314244);
   quadLineFit1145->SetParLimits(1,0,0);
   quadLineFit1145->Draw("same");
   
   Double_t 0.000000 ppm_fx1145[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1145[3] = {
   0.6072961,
   0.5249858,
   0.4853384};
   Double_t 0.000000 ppm_fex1145[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1145[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,0.000000 ppm_fx1145,0.000000 ppm_fy1145,0.000000 ppm_fex1145,0.000000 ppm_fey1145);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1145 = new TH1F("Graph_0dO000000sPppm1145","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1145->SetMinimum(0.4624768);
   Graph_0dO000000sPppm1145->SetMaximum(0.6301577);
   Graph_0dO000000sPppm1145->SetDirectory(0);
   Graph_0dO000000sPppm1145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1145->SetLineColor(ci);
   Graph_0dO000000sPppm1145->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1145->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1145->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1145->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1145->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1145->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1145->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1145);
   
   
   TF1 *quadLineFit1146 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1146->SetFillColor(19);
   quadLineFit1146->SetFillStyle(0);
   quadLineFit1146->SetLineColor(3);
   quadLineFit1146->SetLineWidth(2);
   quadLineFit1146->SetChisquare(3.839967);
   quadLineFit1146->SetNDF(1);
   quadLineFit1146->GetXaxis()->SetLabelFont(42);
   quadLineFit1146->GetXaxis()->SetTitleOffset(1);
   quadLineFit1146->GetXaxis()->SetTitleFont(42);
   quadLineFit1146->GetYaxis()->SetLabelFont(42);
   quadLineFit1146->GetYaxis()->SetTitleFont(42);
   quadLineFit1146->SetParameter(0,1.088017);
   quadLineFit1146->SetParError(0,0.05679541);
   quadLineFit1146->SetParLimits(0,0,0);
   quadLineFit1146->SetParameter(1,-0.03048943);
   quadLineFit1146->SetParError(1,0.003142395);
   quadLineFit1146->SetParLimits(1,0,0);
   quadLineFit1146->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1146);
   gre->Draw("p ");
   
   TF1 *quadLineFit1147 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1147->SetFillColor(19);
   quadLineFit1147->SetFillStyle(0);
   quadLineFit1147->SetLineColor(3);
   quadLineFit1147->SetLineWidth(2);
   quadLineFit1147->SetChisquare(3.839967);
   quadLineFit1147->SetNDF(1);
   quadLineFit1147->GetXaxis()->SetLabelFont(42);
   quadLineFit1147->GetXaxis()->SetTitleOffset(1);
   quadLineFit1147->GetXaxis()->SetTitleFont(42);
   quadLineFit1147->GetYaxis()->SetLabelFont(42);
   quadLineFit1147->GetYaxis()->SetTitleFont(42);
   quadLineFit1147->SetParameter(0,1.088017);
   quadLineFit1147->SetParError(0,0.05679541);
   quadLineFit1147->SetParLimits(0,0,0);
   quadLineFit1147->SetParameter(1,-0.03048943);
   quadLineFit1147->SetParError(1,0.003142395);
   quadLineFit1147->SetParLimits(1,0,0);
   quadLineFit1147->Draw("same");
   
   Double_t 25.000000 ppm_fx1147[3] = {
   16,
   18,
   20};
   Double_t 25.000000 ppm_fy1147[3] = {
   2.509239,
   2.213415,
   1.990198};
   Double_t 25.000000 ppm_fex1147[3] = {
   0,
   0,
   0};
   Double_t 25.000000 ppm_fey1147[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,25.000000 ppm_fx1147,25.000000 ppm_fy1147,25.000000 ppm_fex1147,25.000000 ppm_fey1147);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1147 = new TH1F("Graph_25dO000000sPppm1147","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1147->SetMinimum(1.927628);
   Graph_25dO000000sPppm1147->SetMaximum(2.571808);
   Graph_25dO000000sPppm1147->SetDirectory(0);
   Graph_25dO000000sPppm1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1147->SetLineColor(ci);
   Graph_25dO000000sPppm1147->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1147->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1147->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1147->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1147->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1147->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1147->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1147);
   
   
   TF1 *quadLineFit1148 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1148->SetFillColor(19);
   quadLineFit1148->SetFillStyle(0);
   quadLineFit1148->SetLineColor(4);
   quadLineFit1148->SetLineWidth(2);
   quadLineFit1148->SetChisquare(11.12184);
   quadLineFit1148->SetNDF(1);
   quadLineFit1148->GetXaxis()->SetLabelFont(42);
   quadLineFit1148->GetXaxis()->SetTitleOffset(1);
   quadLineFit1148->GetXaxis()->SetTitleFont(42);
   quadLineFit1148->GetYaxis()->SetLabelFont(42);
   quadLineFit1148->GetYaxis()->SetTitleFont(42);
   quadLineFit1148->SetParameter(0,4.573301);
   quadLineFit1148->SetParError(0,0.05679614);
   quadLineFit1148->SetParLimits(0,0,0);
   quadLineFit1148->SetParameter(1,-0.1297602);
   quadLineFit1148->SetParError(1,0.003142436);
   quadLineFit1148->SetParLimits(1,0,0);
   quadLineFit1148->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1148);
   gre->Draw("p ");
   
   TF1 *quadLineFit1149 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1149->SetFillColor(19);
   quadLineFit1149->SetFillStyle(0);
   quadLineFit1149->SetLineColor(4);
   quadLineFit1149->SetLineWidth(2);
   quadLineFit1149->SetChisquare(11.12184);
   quadLineFit1149->SetNDF(1);
   quadLineFit1149->GetXaxis()->SetLabelFont(42);
   quadLineFit1149->GetXaxis()->SetTitleOffset(1);
   quadLineFit1149->GetXaxis()->SetTitleFont(42);
   quadLineFit1149->GetYaxis()->SetLabelFont(42);
   quadLineFit1149->GetYaxis()->SetTitleFont(42);
   quadLineFit1149->SetParameter(0,4.573301);
   quadLineFit1149->SetParError(0,0.05679614);
   quadLineFit1149->SetParLimits(0,0,0);
   quadLineFit1149->SetParameter(1,-0.1297602);
   quadLineFit1149->SetParError(1,0.003142436);
   quadLineFit1149->SetParLimits(1,0,0);
   quadLineFit1149->Draw("same");
   
   Double_t 50.000000 ppm_fx1149[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1149[3] = {
   4.375648,
   3.893085,
   3.492035};
   Double_t 50.000000 ppm_fex1149[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1149[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,50.000000 ppm_fx1149,50.000000 ppm_fy1149,50.000000 ppm_fex1149,50.000000 ppm_fey1149);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1149 = new TH1F("Graph_50dO000000sPppm1149","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1149->SetMinimum(3.393008);
   Graph_50dO000000sPppm1149->SetMaximum(4.474676);
   Graph_50dO000000sPppm1149->SetDirectory(0);
   Graph_50dO000000sPppm1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1149->SetLineColor(ci);
   Graph_50dO000000sPppm1149->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1149->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1149->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1149->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1149->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1149->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1149->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1149);
   
   
   TF1 *quadLineFit1150 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1150->SetFillColor(19);
   quadLineFit1150->SetFillStyle(0);
   quadLineFit1150->SetLineColor(5);
   quadLineFit1150->SetLineWidth(2);
   quadLineFit1150->SetChisquare(14.01826);
   quadLineFit1150->SetNDF(1);
   quadLineFit1150->GetXaxis()->SetLabelFont(42);
   quadLineFit1150->GetXaxis()->SetTitleOffset(1);
   quadLineFit1150->GetXaxis()->SetTitleFont(42);
   quadLineFit1150->GetYaxis()->SetLabelFont(42);
   quadLineFit1150->GetYaxis()->SetTitleFont(42);
   quadLineFit1150->SetParameter(0,7.896516);
   quadLineFit1150->SetParError(0,0.05678524);
   quadLineFit1150->SetParLimits(0,0,0);
   quadLineFit1150->SetParameter(1,-0.2209034);
   quadLineFit1150->SetParError(1,0.003141836);
   quadLineFit1150->SetParLimits(1,0,0);
   quadLineFit1150->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1150);
   gre->Draw("p ");
   
   TF1 *quadLineFit1151 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1151->SetFillColor(19);
   quadLineFit1151->SetFillStyle(0);
   quadLineFit1151->SetLineColor(5);
   quadLineFit1151->SetLineWidth(2);
   quadLineFit1151->SetChisquare(14.01826);
   quadLineFit1151->SetNDF(1);
   quadLineFit1151->GetXaxis()->SetLabelFont(42);
   quadLineFit1151->GetXaxis()->SetTitleOffset(1);
   quadLineFit1151->GetXaxis()->SetTitleFont(42);
   quadLineFit1151->GetYaxis()->SetLabelFont(42);
   quadLineFit1151->GetYaxis()->SetTitleFont(42);
   quadLineFit1151->SetParameter(0,7.896516);
   quadLineFit1151->SetParError(0,0.05678524);
   quadLineFit1151->SetParLimits(0,0,0);
   quadLineFit1151->SetParameter(1,-0.2209034);
   quadLineFit1151->SetParError(1,0.003141836);
   quadLineFit1151->SetParLimits(1,0,0);
   quadLineFit1151->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("25.000000 ppm","   25 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-25.000000 ppm","  #minus25 ppm","lpf");
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
