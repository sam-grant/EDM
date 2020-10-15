void QuadScans_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1183[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1183[3] = {
   -3.157557,
   -2.81115,
   -2.529365};
   Double_t -50.000000 ppm_fex1183[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1183[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1183,-50.000000 ppm_fy1183,-50.000000 ppm_fex1183,-50.000000 ppm_fey1183);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1183 = new TH1F("Graph_mI50dO000000sPppm1183","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1183->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1183->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1183->SetDirectory(0);
   Graph_mI50dO000000sPppm1183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1183->SetLineColor(ci);
   Graph_mI50dO000000sPppm1183->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1183->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1183->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1183->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1183->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1183->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1183->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1183->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1183->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1183->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1183->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1183->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1183->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1183->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1183->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1183);
   
   
   TF1 *quadLineFit1184 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1184->SetFillColor(19);
   quadLineFit1184->SetFillStyle(0);
   quadLineFit1184->SetLineWidth(2);
   quadLineFit1184->SetChisquare(6.401054);
   quadLineFit1184->SetNDF(1);
   quadLineFit1184->GetXaxis()->SetLabelFont(42);
   quadLineFit1184->GetXaxis()->SetTitleOffset(1);
   quadLineFit1184->GetXaxis()->SetTitleFont(42);
   quadLineFit1184->GetYaxis()->SetLabelFont(42);
   quadLineFit1184->GetYaxis()->SetTitleFont(42);
   quadLineFit1184->SetParameter(0,-5.659557);
   quadLineFit1184->SetParError(0,0.06663179);
   quadLineFit1184->SetParLimits(0,0,0);
   quadLineFit1184->SetParameter(1,0.1570481);
   quadLineFit1184->SetParError(1,0.003686625);
   quadLineFit1184->SetParLimits(1,0,0);
   quadLineFit1184->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1184);
   gre->Draw("ap");
   
   TF1 *quadLineFit1185 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1185->SetFillColor(19);
   quadLineFit1185->SetFillStyle(0);
   quadLineFit1185->SetLineWidth(2);
   quadLineFit1185->SetChisquare(6.401054);
   quadLineFit1185->SetNDF(1);
   quadLineFit1185->GetXaxis()->SetLabelFont(42);
   quadLineFit1185->GetXaxis()->SetTitleOffset(1);
   quadLineFit1185->GetXaxis()->SetTitleFont(42);
   quadLineFit1185->GetYaxis()->SetLabelFont(42);
   quadLineFit1185->GetYaxis()->SetTitleFont(42);
   quadLineFit1185->SetParameter(0,-5.659557);
   quadLineFit1185->SetParError(0,0.06663179);
   quadLineFit1185->SetParLimits(0,0,0);
   quadLineFit1185->SetParameter(1,0.1570481);
   quadLineFit1185->SetParError(1,0.003686625);
   quadLineFit1185->SetParLimits(1,0,0);
   quadLineFit1185->Draw("same");
   
   Double_t -40.000000 ppm_fx1185[3] = {
   16,
   18,
   20};
   Double_t -40.000000 ppm_fy1185[3] = {
   -2.419042,
   -2.143077,
   -1.907863};
   Double_t -40.000000 ppm_fex1185[3] = {
   0,
   0,
   0};
   Double_t -40.000000 ppm_fey1185[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,-40.000000 ppm_fx1185,-40.000000 ppm_fy1185,-40.000000 ppm_fex1185,-40.000000 ppm_fey1185);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1185 = new TH1F("Graph_mI40dO000000sPppm1185","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1185->SetMinimum(-2.482672);
   Graph_mI40dO000000sPppm1185->SetMaximum(-1.844233);
   Graph_mI40dO000000sPppm1185->SetDirectory(0);
   Graph_mI40dO000000sPppm1185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1185->SetLineColor(ci);
   Graph_mI40dO000000sPppm1185->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1185->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1185->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1185->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1185->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1185->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1185->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1185);
   
   
   TF1 *quadLineFit1186 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1186->SetFillColor(19);
   quadLineFit1186->SetFillStyle(0);
   quadLineFit1186->SetLineColor(2);
   quadLineFit1186->SetLineWidth(2);
   quadLineFit1186->SetChisquare(2.545342);
   quadLineFit1186->SetNDF(1);
   quadLineFit1186->GetXaxis()->SetLabelFont(42);
   quadLineFit1186->GetXaxis()->SetTitleOffset(1);
   quadLineFit1186->GetXaxis()->SetTitleFont(42);
   quadLineFit1186->GetYaxis()->SetLabelFont(42);
   quadLineFit1186->GetYaxis()->SetTitleFont(42);
   quadLineFit1186->SetParameter(0,-4.456962);
   quadLineFit1186->SetParError(0,0.06663509);
   quadLineFit1186->SetParLimits(0,0,0);
   quadLineFit1186->SetParameter(1,0.1277945);
   quadLineFit1186->SetParError(1,0.003686809);
   quadLineFit1186->SetParLimits(1,0,0);
   quadLineFit1186->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1186);
   gre->Draw("p ");
   
   TF1 *quadLineFit1187 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1187->SetFillColor(19);
   quadLineFit1187->SetFillStyle(0);
   quadLineFit1187->SetLineColor(2);
   quadLineFit1187->SetLineWidth(2);
   quadLineFit1187->SetChisquare(2.545342);
   quadLineFit1187->SetNDF(1);
   quadLineFit1187->GetXaxis()->SetLabelFont(42);
   quadLineFit1187->GetXaxis()->SetTitleOffset(1);
   quadLineFit1187->GetXaxis()->SetTitleFont(42);
   quadLineFit1187->GetYaxis()->SetLabelFont(42);
   quadLineFit1187->GetYaxis()->SetTitleFont(42);
   quadLineFit1187->SetParameter(0,-4.456962);
   quadLineFit1187->SetParError(0,0.06663509);
   quadLineFit1187->SetParLimits(0,0,0);
   quadLineFit1187->SetParameter(1,0.1277945);
   quadLineFit1187->SetParError(1,0.003686809);
   quadLineFit1187->SetParLimits(1,0,0);
   quadLineFit1187->Draw("same");
   
   Double_t -30.000000 ppm_fx1187[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1187[3] = {
   -1.66188,
   -1.464984,
   -1.329619};
   Double_t -30.000000 ppm_fex1187[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1187[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1187,-30.000000 ppm_fy1187,-30.000000 ppm_fex1187,-30.000000 ppm_fey1187);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1187 = new TH1F("Graph_mI30dO000000sPppm1187","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1187->SetMinimum(-1.707619);
   Graph_mI30dO000000sPppm1187->SetMaximum(-1.28388);
   Graph_mI30dO000000sPppm1187->SetDirectory(0);
   Graph_mI30dO000000sPppm1187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1187->SetLineColor(ci);
   Graph_mI30dO000000sPppm1187->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1187->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1187->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1187->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1187->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1187->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1187->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1187);
   
   
   TF1 *quadLineFit1188 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1188->SetFillColor(19);
   quadLineFit1188->SetFillStyle(0);
   quadLineFit1188->SetLineColor(3);
   quadLineFit1188->SetLineWidth(2);
   quadLineFit1188->SetChisquare(5.803449);
   quadLineFit1188->SetNDF(1);
   quadLineFit1188->GetXaxis()->SetLabelFont(42);
   quadLineFit1188->GetXaxis()->SetTitleOffset(1);
   quadLineFit1188->GetXaxis()->SetTitleFont(42);
   quadLineFit1188->GetYaxis()->SetLabelFont(42);
   quadLineFit1188->GetYaxis()->SetTitleFont(42);
   quadLineFit1188->SetParameter(0,-2.98067);
   quadLineFit1188->SetParError(0,0.06663388);
   quadLineFit1188->SetParLimits(0,0,0);
   quadLineFit1188->SetParameter(1,0.0830653);
   quadLineFit1188->SetParError(1,0.003686742);
   quadLineFit1188->SetParLimits(1,0,0);
   quadLineFit1188->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1188);
   gre->Draw("p ");
   
   TF1 *quadLineFit1189 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1189->SetFillColor(19);
   quadLineFit1189->SetFillStyle(0);
   quadLineFit1189->SetLineColor(3);
   quadLineFit1189->SetLineWidth(2);
   quadLineFit1189->SetChisquare(5.803449);
   quadLineFit1189->SetNDF(1);
   quadLineFit1189->GetXaxis()->SetLabelFont(42);
   quadLineFit1189->GetXaxis()->SetTitleOffset(1);
   quadLineFit1189->GetXaxis()->SetTitleFont(42);
   quadLineFit1189->GetYaxis()->SetLabelFont(42);
   quadLineFit1189->GetYaxis()->SetTitleFont(42);
   quadLineFit1189->SetParameter(0,-2.98067);
   quadLineFit1189->SetParError(0,0.06663388);
   quadLineFit1189->SetParLimits(0,0,0);
   quadLineFit1189->SetParameter(1,0.0830653);
   quadLineFit1189->SetParError(1,0.003686742);
   quadLineFit1189->SetParLimits(1,0,0);
   quadLineFit1189->Draw("same");
   
   Double_t -20.000000 ppm_fx1189[3] = {
   16,
   18,
   20};
   Double_t -20.000000 ppm_fy1189[3] = {
   -0.9148733,
   -0.8210297,
   -0.7336089};
   Double_t -20.000000 ppm_fex1189[3] = {
   0,
   0,
   0};
   Double_t -20.000000 ppm_fey1189[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,-20.000000 ppm_fx1189,-20.000000 ppm_fy1189,-20.000000 ppm_fex1189,-20.000000 ppm_fey1189);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1189 = new TH1F("Graph_mI20dO000000sPppm1189","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1189->SetMinimum(-0.9455127);
   Graph_mI20dO000000sPppm1189->SetMaximum(-0.7029695);
   Graph_mI20dO000000sPppm1189->SetDirectory(0);
   Graph_mI20dO000000sPppm1189->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1189->SetLineColor(ci);
   Graph_mI20dO000000sPppm1189->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1189->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1189->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1189->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1189->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1189->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1189->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1189);
   
   
   TF1 *quadLineFit1190 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1190->SetFillColor(19);
   quadLineFit1190->SetFillStyle(0);
   quadLineFit1190->SetLineColor(4);
   quadLineFit1190->SetLineWidth(2);
   quadLineFit1190->SetChisquare(0.06323364);
   quadLineFit1190->SetNDF(1);
   quadLineFit1190->GetXaxis()->SetLabelFont(42);
   quadLineFit1190->GetXaxis()->SetTitleOffset(1);
   quadLineFit1190->GetXaxis()->SetTitleFont(42);
   quadLineFit1190->GetYaxis()->SetLabelFont(42);
   quadLineFit1190->GetYaxis()->SetTitleFont(42);
   quadLineFit1190->SetParameter(0,-1.63886);
   quadLineFit1190->SetParError(0,0.06663251);
   quadLineFit1190->SetParLimits(0,0,0);
   quadLineFit1190->SetParameter(1,0.04531608);
   quadLineFit1190->SetParError(1,0.003686666);
   quadLineFit1190->SetParLimits(1,0,0);
   quadLineFit1190->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1190);
   gre->Draw("p ");
   
   TF1 *quadLineFit1191 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1191->SetFillColor(19);
   quadLineFit1191->SetFillStyle(0);
   quadLineFit1191->SetLineColor(4);
   quadLineFit1191->SetLineWidth(2);
   quadLineFit1191->SetChisquare(0.06323364);
   quadLineFit1191->SetNDF(1);
   quadLineFit1191->GetXaxis()->SetLabelFont(42);
   quadLineFit1191->GetXaxis()->SetTitleOffset(1);
   quadLineFit1191->GetXaxis()->SetTitleFont(42);
   quadLineFit1191->GetYaxis()->SetLabelFont(42);
   quadLineFit1191->GetYaxis()->SetTitleFont(42);
   quadLineFit1191->SetParameter(0,-1.63886);
   quadLineFit1191->SetParError(0,0.06663251);
   quadLineFit1191->SetParLimits(0,0,0);
   quadLineFit1191->SetParameter(1,0.04531608);
   quadLineFit1191->SetParError(1,0.003686666);
   quadLineFit1191->SetParLimits(1,0,0);
   quadLineFit1191->Draw("same");
   
   Double_t -10.000000 ppm_fx1191[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1191[3] = {
   -0.1770202,
   -0.1518012,
   -0.1266991};
   Double_t -10.000000 ppm_fex1191[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1191[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1191,-10.000000 ppm_fy1191,-10.000000 ppm_fex1191,-10.000000 ppm_fey1191);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1191 = new TH1F("Graph_mI10dO000000sPppm1191","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1191->SetMinimum(-0.1945653);
   Graph_mI10dO000000sPppm1191->SetMaximum(-0.109154);
   Graph_mI10dO000000sPppm1191->SetDirectory(0);
   Graph_mI10dO000000sPppm1191->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1191->SetLineColor(ci);
   Graph_mI10dO000000sPppm1191->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1191->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1191->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1191->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1191->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1191->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1191->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1191);
   
   
   TF1 *quadLineFit1192 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1192->SetFillColor(19);
   quadLineFit1192->SetFillStyle(0);
   quadLineFit1192->SetLineColor(5);
   quadLineFit1192->SetLineWidth(2);
   quadLineFit1192->SetChisquare(2.094207e-05);
   quadLineFit1192->SetNDF(1);
   quadLineFit1192->GetXaxis()->SetLabelFont(42);
   quadLineFit1192->GetXaxis()->SetTitleOffset(1);
   quadLineFit1192->GetXaxis()->SetTitleFont(42);
   quadLineFit1192->GetYaxis()->SetLabelFont(42);
   quadLineFit1192->GetYaxis()->SetTitleFont(42);
   quadLineFit1192->SetParameter(0,-0.3782852);
   quadLineFit1192->SetParError(0,0.06663282);
   quadLineFit1192->SetParLimits(0,0,0);
   quadLineFit1192->SetParameter(1,0.01258028);
   quadLineFit1192->SetParError(1,0.003686683);
   quadLineFit1192->SetParLimits(1,0,0);
   quadLineFit1192->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1192);
   gre->Draw("p ");
   
   TF1 *quadLineFit1193 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1193->SetFillColor(19);
   quadLineFit1193->SetFillStyle(0);
   quadLineFit1193->SetLineColor(5);
   quadLineFit1193->SetLineWidth(2);
   quadLineFit1193->SetChisquare(2.094207e-05);
   quadLineFit1193->SetNDF(1);
   quadLineFit1193->GetXaxis()->SetLabelFont(42);
   quadLineFit1193->GetXaxis()->SetTitleOffset(1);
   quadLineFit1193->GetXaxis()->SetTitleFont(42);
   quadLineFit1193->GetYaxis()->SetLabelFont(42);
   quadLineFit1193->GetYaxis()->SetTitleFont(42);
   quadLineFit1193->SetParameter(0,-0.3782852);
   quadLineFit1193->SetParError(0,0.06663282);
   quadLineFit1193->SetParLimits(0,0,0);
   quadLineFit1193->SetParameter(1,0.01258028);
   quadLineFit1193->SetParError(1,0.003686683);
   quadLineFit1193->SetParLimits(1,0,0);
   quadLineFit1193->Draw("same");
   
   Double_t 0.000000 ppm_fx1193[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1193[3] = {
   0.6061745,
   0.5342397,
   0.480185};
   Double_t 0.000000 ppm_fex1193[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1193[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,0.000000 ppm_fx1193,0.000000 ppm_fy1193,0.000000 ppm_fex1193,0.000000 ppm_fey1193);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1193 = new TH1F("Graph_0dO000000sPppm1193","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1193->SetMinimum(0.455073);
   Graph_0dO000000sPppm1193->SetMaximum(0.6312865);
   Graph_0dO000000sPppm1193->SetDirectory(0);
   Graph_0dO000000sPppm1193->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1193->SetLineColor(ci);
   Graph_0dO000000sPppm1193->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1193->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1193->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1193->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1193->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1193->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1193->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1193->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1193);
   
   
   TF1 *quadLineFit1194 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1194->SetFillColor(19);
   quadLineFit1194->SetFillStyle(0);
   quadLineFit1194->SetLineColor(6);
   quadLineFit1194->SetLineWidth(2);
   quadLineFit1194->SetChisquare(0.4900391);
   quadLineFit1194->SetNDF(1);
   quadLineFit1194->GetXaxis()->SetLabelFont(42);
   quadLineFit1194->GetXaxis()->SetTitleOffset(1);
   quadLineFit1194->GetXaxis()->SetTitleFont(42);
   quadLineFit1194->GetYaxis()->SetLabelFont(42);
   quadLineFit1194->GetYaxis()->SetTitleFont(42);
   quadLineFit1194->SetParameter(0,1.107153);
   quadLineFit1194->SetParError(0,0.06663285);
   quadLineFit1194->SetParLimits(0,0,0);
   quadLineFit1194->SetParameter(1,-0.03149739);
   quadLineFit1194->SetParError(1,0.003686685);
   quadLineFit1194->SetParLimits(1,0,0);
   quadLineFit1194->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1194);
   gre->Draw("p ");
   
   TF1 *quadLineFit1195 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1195->SetFillColor(19);
   quadLineFit1195->SetFillStyle(0);
   quadLineFit1195->SetLineColor(6);
   quadLineFit1195->SetLineWidth(2);
   quadLineFit1195->SetChisquare(0.4900391);
   quadLineFit1195->SetNDF(1);
   quadLineFit1195->GetXaxis()->SetLabelFont(42);
   quadLineFit1195->GetXaxis()->SetTitleOffset(1);
   quadLineFit1195->GetXaxis()->SetTitleFont(42);
   quadLineFit1195->GetYaxis()->SetLabelFont(42);
   quadLineFit1195->GetYaxis()->SetTitleFont(42);
   quadLineFit1195->SetParameter(0,1.107153);
   quadLineFit1195->SetParError(0,0.06663285);
   quadLineFit1195->SetParLimits(0,0,0);
   quadLineFit1195->SetParameter(1,-0.03149739);
   quadLineFit1195->SetParError(1,0.003686685);
   quadLineFit1195->SetParLimits(1,0,0);
   quadLineFit1195->Draw("same");
   
   Double_t 10.000000 ppm_fx1195[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1195[3] = {
   1.365842,
   1.191816,
   1.083998};
   Double_t 10.000000 ppm_fex1195[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1195[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,10.000000 ppm_fx1195,10.000000 ppm_fy1195,10.000000 ppm_fex1195,10.000000 ppm_fey1195);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1195 = new TH1F("Graph_10dO000000sPppm1195","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1195->SetMinimum(1.043301);
   Graph_10dO000000sPppm1195->SetMaximum(1.40654);
   Graph_10dO000000sPppm1195->SetDirectory(0);
   Graph_10dO000000sPppm1195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1195->SetLineColor(ci);
   Graph_10dO000000sPppm1195->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1195->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1195->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1195->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1195->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1195->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1195->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1195);
   
   
   TF1 *quadLineFit1196 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1196->SetFillColor(19);
   quadLineFit1196->SetFillStyle(0);
   quadLineFit1196->SetLineColor(7);
   quadLineFit1196->SetLineWidth(2);
   quadLineFit1196->SetChisquare(6.719301);
   quadLineFit1196->SetNDF(1);
   quadLineFit1196->GetXaxis()->SetLabelFont(42);
   quadLineFit1196->GetXaxis()->SetTitleOffset(1);
   quadLineFit1196->GetXaxis()->SetTitleFont(42);
   quadLineFit1196->GetYaxis()->SetLabelFont(42);
   quadLineFit1196->GetYaxis()->SetTitleFont(42);
   quadLineFit1196->SetParameter(0,2.482182);
   quadLineFit1196->SetParError(0,0.066633);
   quadLineFit1196->SetParLimits(0,0,0);
   quadLineFit1196->SetParameter(1,-0.07046092);
   quadLineFit1196->SetParError(1,0.003686693);
   quadLineFit1196->SetParLimits(1,0,0);
   quadLineFit1196->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1196);
   gre->Draw("p ");
   
   TF1 *quadLineFit1197 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1197->SetFillColor(19);
   quadLineFit1197->SetFillStyle(0);
   quadLineFit1197->SetLineColor(7);
   quadLineFit1197->SetLineWidth(2);
   quadLineFit1197->SetChisquare(6.719301);
   quadLineFit1197->SetNDF(1);
   quadLineFit1197->GetXaxis()->SetLabelFont(42);
   quadLineFit1197->GetXaxis()->SetTitleOffset(1);
   quadLineFit1197->GetXaxis()->SetTitleFont(42);
   quadLineFit1197->GetYaxis()->SetLabelFont(42);
   quadLineFit1197->GetYaxis()->SetTitleFont(42);
   quadLineFit1197->SetParameter(0,2.482182);
   quadLineFit1197->SetParError(0,0.066633);
   quadLineFit1197->SetParLimits(0,0,0);
   quadLineFit1197->SetParameter(1,-0.07046092);
   quadLineFit1197->SetParError(1,0.003686693);
   quadLineFit1197->SetParLimits(1,0,0);
   quadLineFit1197->Draw("same");
   
   Double_t 20.000000 ppm_fx1197[3] = {
   16,
   18,
   20};
   Double_t 20.000000 ppm_fy1197[3] = {
   2.098986,
   1.860966,
   1.682068};
   Double_t 20.000000 ppm_fex1197[3] = {
   0,
   0,
   0};
   Double_t 20.000000 ppm_fey1197[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,20.000000 ppm_fx1197,20.000000 ppm_fy1197,20.000000 ppm_fex1197,20.000000 ppm_fey1197);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1197 = new TH1F("Graph_20dO000000sPppm1197","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1197->SetMinimum(1.627863);
   Graph_20dO000000sPppm1197->SetMaximum(2.15319);
   Graph_20dO000000sPppm1197->SetDirectory(0);
   Graph_20dO000000sPppm1197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1197->SetLineColor(ci);
   Graph_20dO000000sPppm1197->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1197->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1197->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1197->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1197->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1197->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1197->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1197);
   
   
   TF1 *quadLineFit1198 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1198->SetFillColor(19);
   quadLineFit1198->SetFillStyle(0);
   quadLineFit1198->SetLineColor(8);
   quadLineFit1198->SetLineWidth(2);
   quadLineFit1198->SetChisquare(5.357579);
   quadLineFit1198->SetNDF(1);
   quadLineFit1198->GetXaxis()->SetLabelFont(42);
   quadLineFit1198->GetXaxis()->SetTitleOffset(1);
   quadLineFit1198->GetXaxis()->SetTitleFont(42);
   quadLineFit1198->GetYaxis()->SetLabelFont(42);
   quadLineFit1198->GetYaxis()->SetTitleFont(42);
   quadLineFit1198->SetParameter(0,3.756804);
   quadLineFit1198->SetParError(0,0.06663294);
   quadLineFit1198->SetParLimits(0,0,0);
   quadLineFit1198->SetParameter(1,-0.1042295);
   quadLineFit1198->SetParError(1,0.003686689);
   quadLineFit1198->SetParLimits(1,0,0);
   quadLineFit1198->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1198);
   gre->Draw("p ");
   
   TF1 *quadLineFit1199 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1199->SetFillColor(19);
   quadLineFit1199->SetFillStyle(0);
   quadLineFit1199->SetLineColor(8);
   quadLineFit1199->SetLineWidth(2);
   quadLineFit1199->SetChisquare(5.357579);
   quadLineFit1199->SetNDF(1);
   quadLineFit1199->GetXaxis()->SetLabelFont(42);
   quadLineFit1199->GetXaxis()->SetTitleOffset(1);
   quadLineFit1199->GetXaxis()->SetTitleFont(42);
   quadLineFit1199->GetYaxis()->SetLabelFont(42);
   quadLineFit1199->GetYaxis()->SetTitleFont(42);
   quadLineFit1199->SetParameter(0,3.756804);
   quadLineFit1199->SetParError(0,0.06663294);
   quadLineFit1199->SetParLimits(0,0,0);
   quadLineFit1199->SetParameter(1,-0.1042295);
   quadLineFit1199->SetParError(1,0.003686689);
   quadLineFit1199->SetParLimits(1,0,0);
   quadLineFit1199->Draw("same");
   
   Double_t 30.000000 ppm_fx1199[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1199[3] = {
   2.85948,
   2.53943,
   2.29027};
   Double_t 30.000000 ppm_fex1199[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1199[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,30.000000 ppm_fx1199,30.000000 ppm_fy1199,30.000000 ppm_fex1199,30.000000 ppm_fey1199);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1199 = new TH1F("Graph_30dO000000sPppm1199","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1199->SetMinimum(2.220835);
   Graph_30dO000000sPppm1199->SetMaximum(2.928914);
   Graph_30dO000000sPppm1199->SetDirectory(0);
   Graph_30dO000000sPppm1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1199->SetLineColor(ci);
   Graph_30dO000000sPppm1199->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1199->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1199->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1199->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1199->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1199->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1199->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1199);
   
   
   TF1 *quadLineFit1200 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1200->SetFillColor(19);
   quadLineFit1200->SetFillStyle(0);
   quadLineFit1200->SetLineColor(9);
   quadLineFit1200->SetLineWidth(2);
   quadLineFit1200->SetChisquare(7.702733);
   quadLineFit1200->SetNDF(1);
   quadLineFit1200->GetXaxis()->SetLabelFont(42);
   quadLineFit1200->GetXaxis()->SetTitleOffset(1);
   quadLineFit1200->GetXaxis()->SetTitleFont(42);
   quadLineFit1200->GetYaxis()->SetLabelFont(42);
   quadLineFit1200->GetYaxis()->SetTitleFont(42);
   quadLineFit1200->SetParameter(0,5.124507);
   quadLineFit1200->SetParError(0,0.06663287);
   quadLineFit1200->SetParLimits(0,0,0);
   quadLineFit1200->SetParameter(1,-0.1423026);
   quadLineFit1200->SetParError(1,0.003686686);
   quadLineFit1200->SetParLimits(1,0,0);
   quadLineFit1200->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1200);
   gre->Draw("p ");
   
   TF1 *quadLineFit1201 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1201->SetFillColor(19);
   quadLineFit1201->SetFillStyle(0);
   quadLineFit1201->SetLineColor(9);
   quadLineFit1201->SetLineWidth(2);
   quadLineFit1201->SetChisquare(7.702733);
   quadLineFit1201->SetNDF(1);
   quadLineFit1201->GetXaxis()->SetLabelFont(42);
   quadLineFit1201->GetXaxis()->SetTitleOffset(1);
   quadLineFit1201->GetXaxis()->SetTitleFont(42);
   quadLineFit1201->GetYaxis()->SetLabelFont(42);
   quadLineFit1201->GetYaxis()->SetTitleFont(42);
   quadLineFit1201->SetParameter(0,5.124507);
   quadLineFit1201->SetParError(0,0.06663287);
   quadLineFit1201->SetParLimits(0,0,0);
   quadLineFit1201->SetParameter(1,-0.1423026);
   quadLineFit1201->SetParError(1,0.003686686);
   quadLineFit1201->SetParLimits(1,0,0);
   quadLineFit1201->Draw("same");
   
   Double_t 40.000000 ppm_fx1201[3] = {
   16,
   18,
   20};
   Double_t 40.000000 ppm_fy1201[3] = {
   3.618038,
   3.20594,
   2.897346};
   Double_t 40.000000 ppm_fex1201[3] = {
   0,
   0,
   0};
   Double_t 40.000000 ppm_fey1201[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,40.000000 ppm_fx1201,40.000000 ppm_fy1201,40.000000 ppm_fex1201,40.000000 ppm_fey1201);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1201 = new TH1F("Graph_40dO000000sPppm1201","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1201->SetMinimum(2.812764);
   Graph_40dO000000sPppm1201->SetMaximum(3.70262);
   Graph_40dO000000sPppm1201->SetDirectory(0);
   Graph_40dO000000sPppm1201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1201->SetLineColor(ci);
   Graph_40dO000000sPppm1201->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1201->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1201->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1201->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1201->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1201->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1201->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1201);
   
   
   TF1 *quadLineFit1202 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1202->SetFillColor(19);
   quadLineFit1202->SetFillStyle(0);
   quadLineFit1202->SetLineColor(10);
   quadLineFit1202->SetLineWidth(2);
   quadLineFit1202->SetChisquare(16.42116);
   quadLineFit1202->SetNDF(1);
   quadLineFit1202->GetXaxis()->SetLabelFont(42);
   quadLineFit1202->GetXaxis()->SetTitleOffset(1);
   quadLineFit1202->GetXaxis()->SetTitleFont(42);
   quadLineFit1202->GetYaxis()->SetLabelFont(42);
   quadLineFit1202->GetYaxis()->SetTitleFont(42);
   quadLineFit1202->SetParameter(0,6.483557);
   quadLineFit1202->SetParError(0,0.06663146);
   quadLineFit1202->SetParLimits(0,0,0);
   quadLineFit1202->SetParameter(1,-0.1801731);
   quadLineFit1202->SetParError(1,0.003686607);
   quadLineFit1202->SetParLimits(1,0,0);
   quadLineFit1202->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1202);
   gre->Draw("p ");
   
   TF1 *quadLineFit1203 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1203->SetFillColor(19);
   quadLineFit1203->SetFillStyle(0);
   quadLineFit1203->SetLineColor(10);
   quadLineFit1203->SetLineWidth(2);
   quadLineFit1203->SetChisquare(16.42116);
   quadLineFit1203->SetNDF(1);
   quadLineFit1203->GetXaxis()->SetLabelFont(42);
   quadLineFit1203->GetXaxis()->SetTitleOffset(1);
   quadLineFit1203->GetXaxis()->SetTitleFont(42);
   quadLineFit1203->GetYaxis()->SetLabelFont(42);
   quadLineFit1203->GetYaxis()->SetTitleFont(42);
   quadLineFit1203->SetParameter(0,6.483557);
   quadLineFit1203->SetParError(0,0.06663146);
   quadLineFit1203->SetParLimits(0,0,0);
   quadLineFit1203->SetParameter(1,-0.1801731);
   quadLineFit1203->SetParError(1,0.003686607);
   quadLineFit1203->SetParLimits(1,0,0);
   quadLineFit1203->Draw("same");
   
   Double_t 50.000000 ppm_fx1203[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1203[3] = {
   4.365126,
   3.877619,
   3.493503};
   Double_t 50.000000 ppm_fex1203[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1203[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,50.000000 ppm_fx1203,50.000000 ppm_fy1203,50.000000 ppm_fex1203,50.000000 ppm_fey1203);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1203 = new TH1F("Graph_50dO000000sPppm1203","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1203->SetMinimum(3.393828);
   Graph_50dO000000sPppm1203->SetMaximum(4.464802);
   Graph_50dO000000sPppm1203->SetDirectory(0);
   Graph_50dO000000sPppm1203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1203->SetLineColor(ci);
   Graph_50dO000000sPppm1203->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1203->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1203->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1203->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1203);
   
   
   TF1 *quadLineFit1204 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1204->SetFillColor(19);
   quadLineFit1204->SetFillStyle(0);
   quadLineFit1204->SetLineColor(11);
   quadLineFit1204->SetLineWidth(2);
   quadLineFit1204->SetChisquare(16.38521);
   quadLineFit1204->SetNDF(1);
   quadLineFit1204->GetXaxis()->SetLabelFont(42);
   quadLineFit1204->GetXaxis()->SetTitleOffset(1);
   quadLineFit1204->GetXaxis()->SetTitleFont(42);
   quadLineFit1204->GetYaxis()->SetLabelFont(42);
   quadLineFit1204->GetYaxis()->SetTitleFont(42);
   quadLineFit1204->SetParameter(0,7.834386);
   quadLineFit1204->SetParError(0,0.06662795);
   quadLineFit1204->SetParLimits(0,0,0);
   quadLineFit1204->SetParameter(1,-0.2179057);
   quadLineFit1204->SetParError(1,0.003686414);
   quadLineFit1204->SetParLimits(1,0,0);
   quadLineFit1204->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1204);
   gre->Draw("p ");
   
   TF1 *quadLineFit1205 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1205->SetFillColor(19);
   quadLineFit1205->SetFillStyle(0);
   quadLineFit1205->SetLineColor(11);
   quadLineFit1205->SetLineWidth(2);
   quadLineFit1205->SetChisquare(16.38521);
   quadLineFit1205->SetNDF(1);
   quadLineFit1205->GetXaxis()->SetLabelFont(42);
   quadLineFit1205->GetXaxis()->SetTitleOffset(1);
   quadLineFit1205->GetXaxis()->SetTitleFont(42);
   quadLineFit1205->GetYaxis()->SetLabelFont(42);
   quadLineFit1205->GetYaxis()->SetTitleFont(42);
   quadLineFit1205->SetParameter(0,7.834386);
   quadLineFit1205->SetParError(0,0.06662795);
   quadLineFit1205->SetParLimits(0,0,0);
   quadLineFit1205->SetParameter(1,-0.2179057);
   quadLineFit1205->SetParError(1,0.003686414);
   quadLineFit1205->SetParLimits(1,0,0);
   quadLineFit1205->Draw("same");
   
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
