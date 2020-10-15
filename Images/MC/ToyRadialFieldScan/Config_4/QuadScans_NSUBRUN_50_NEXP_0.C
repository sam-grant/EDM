void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1027[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1027[2] = {
   -3.165264,
   -2.515502};
   Double_t -50.000000 ppm_fex1027[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1027[2] = {
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1027,-50.000000 ppm_fy1027,-50.000000 ppm_fex1027,-50.000000 ppm_fey1027);
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
   quadLineFit1028->SetChisquare(2.294916e-23);
   quadLineFit1028->SetNDF(0);
   quadLineFit1028->GetXaxis()->SetLabelFont(42);
   quadLineFit1028->GetXaxis()->SetTitleOffset(1);
   quadLineFit1028->GetXaxis()->SetTitleFont(42);
   quadLineFit1028->GetYaxis()->SetLabelFont(42);
   quadLineFit1028->GetYaxis()->SetTitleFont(42);
   quadLineFit1028->SetParameter(0,-5.764312);
   quadLineFit1028->SetParError(0,0.1328027);
   quadLineFit1028->SetParLimits(0,0,0);
   quadLineFit1028->SetParameter(1,0.1624405);
   quadLineFit1028->SetParError(1,0.007332801);
   quadLineFit1028->SetParLimits(1,0,0);
   quadLineFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1028);
   gre->Draw("ap");
   
   TF1 *quadLineFit1029 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1029->SetFillColor(19);
   quadLineFit1029->SetFillStyle(0);
   quadLineFit1029->SetLineWidth(2);
   quadLineFit1029->SetChisquare(2.294916e-23);
   quadLineFit1029->SetNDF(0);
   quadLineFit1029->GetXaxis()->SetLabelFont(42);
   quadLineFit1029->GetXaxis()->SetTitleOffset(1);
   quadLineFit1029->GetXaxis()->SetTitleFont(42);
   quadLineFit1029->GetYaxis()->SetLabelFont(42);
   quadLineFit1029->GetYaxis()->SetTitleFont(42);
   quadLineFit1029->SetParameter(0,-5.764312);
   quadLineFit1029->SetParError(0,0.1328027);
   quadLineFit1029->SetParLimits(0,0,0);
   quadLineFit1029->SetParameter(1,0.1624405);
   quadLineFit1029->SetParError(1,0.007332801);
   quadLineFit1029->SetParLimits(1,0,0);
   quadLineFit1029->Draw("same");
   
   Double_t -40.000000 ppm_fx1029[2] = {
   16,
   20};
   Double_t -40.000000 ppm_fy1029[2] = {
   -2.413783,
   -1.950265};
   Double_t -40.000000 ppm_fex1029[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1029[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1029,-40.000000 ppm_fy1029,-40.000000 ppm_fex1029,-40.000000 ppm_fey1029);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1029 = new TH1F("Graph_mI40dO000000sPppm1029","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1029->SetMinimum(-2.485023);
   Graph_mI40dO000000sPppm1029->SetMaximum(-1.879024);
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
   quadLineFit1030->SetChisquare(3.419944e-19);
   quadLineFit1030->SetNDF(0);
   quadLineFit1030->GetXaxis()->SetLabelFont(42);
   quadLineFit1030->GetXaxis()->SetTitleOffset(1);
   quadLineFit1030->GetXaxis()->SetTitleFont(42);
   quadLineFit1030->GetYaxis()->SetLabelFont(42);
   quadLineFit1030->GetYaxis()->SetTitleFont(42);
   quadLineFit1030->SetParameter(0,-4.267855);
   quadLineFit1030->SetParError(0,0.1328027);
   quadLineFit1030->SetParLimits(0,0,0);
   quadLineFit1030->SetParameter(1,0.1158795);
   quadLineFit1030->SetParError(1,0.007332801);
   quadLineFit1030->SetParLimits(1,0,0);
   quadLineFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1030);
   gre->Draw("p ");
   
   TF1 *quadLineFit1031 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1031->SetFillColor(19);
   quadLineFit1031->SetFillStyle(0);
   quadLineFit1031->SetLineColor(2);
   quadLineFit1031->SetLineWidth(2);
   quadLineFit1031->SetChisquare(3.419944e-19);
   quadLineFit1031->SetNDF(0);
   quadLineFit1031->GetXaxis()->SetLabelFont(42);
   quadLineFit1031->GetXaxis()->SetTitleOffset(1);
   quadLineFit1031->GetXaxis()->SetTitleFont(42);
   quadLineFit1031->GetYaxis()->SetLabelFont(42);
   quadLineFit1031->GetYaxis()->SetTitleFont(42);
   quadLineFit1031->SetParameter(0,-4.267855);
   quadLineFit1031->SetParError(0,0.1328027);
   quadLineFit1031->SetParLimits(0,0,0);
   quadLineFit1031->SetParameter(1,0.1158795);
   quadLineFit1031->SetParError(1,0.007332801);
   quadLineFit1031->SetParLimits(1,0,0);
   quadLineFit1031->Draw("same");
   
   Double_t -30.000000 ppm_fx1031[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1031[2] = {
   -1.645254,
   -1.352038};
   Double_t -30.000000 ppm_fex1031[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1031[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1031,-30.000000 ppm_fy1031,-30.000000 ppm_fex1031,-30.000000 ppm_fey1031);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1031 = new TH1F("Graph_mI30dO000000sPppm1031","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1031->SetMinimum(-1.699464);
   Graph_mI30dO000000sPppm1031->SetMaximum(-1.297828);
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
   quadLineFit1032->SetChisquare(5.521361e-20);
   quadLineFit1032->SetNDF(0);
   quadLineFit1032->GetXaxis()->SetLabelFont(42);
   quadLineFit1032->GetXaxis()->SetTitleOffset(1);
   quadLineFit1032->GetXaxis()->SetTitleFont(42);
   quadLineFit1032->GetYaxis()->SetLabelFont(42);
   quadLineFit1032->GetYaxis()->SetTitleFont(42);
   quadLineFit1032->SetParameter(0,-2.81812);
   quadLineFit1032->SetParError(0,0.1328027);
   quadLineFit1032->SetParLimits(0,0,0);
   quadLineFit1032->SetParameter(1,0.07330411);
   quadLineFit1032->SetParError(1,0.007332801);
   quadLineFit1032->SetParLimits(1,0,0);
   quadLineFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1032);
   gre->Draw("p ");
   
   TF1 *quadLineFit1033 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1033->SetFillColor(19);
   quadLineFit1033->SetFillStyle(0);
   quadLineFit1033->SetLineColor(3);
   quadLineFit1033->SetLineWidth(2);
   quadLineFit1033->SetChisquare(5.521361e-20);
   quadLineFit1033->SetNDF(0);
   quadLineFit1033->GetXaxis()->SetLabelFont(42);
   quadLineFit1033->GetXaxis()->SetTitleOffset(1);
   quadLineFit1033->GetXaxis()->SetTitleFont(42);
   quadLineFit1033->GetYaxis()->SetLabelFont(42);
   quadLineFit1033->GetYaxis()->SetTitleFont(42);
   quadLineFit1033->SetParameter(0,-2.81812);
   quadLineFit1033->SetParError(0,0.1328027);
   quadLineFit1033->SetParLimits(0,0,0);
   quadLineFit1033->SetParameter(1,0.07330411);
   quadLineFit1033->SetParError(1,0.007332801);
   quadLineFit1033->SetParLimits(1,0,0);
   quadLineFit1033->Draw("same");
   
   Double_t -20.000000 ppm_fx1033[2] = {
   16,
   20};
   Double_t -20.000000 ppm_fy1033[2] = {
   -0.9069733,
   -0.704552};
   Double_t -20.000000 ppm_fex1033[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1033[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1033,-20.000000 ppm_fy1033,-20.000000 ppm_fex1033,-20.000000 ppm_fey1033);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1033 = new TH1F("Graph_mI20dO000000sPppm1033","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1033->SetMinimum(-0.9521038);
   Graph_mI20dO000000sPppm1033->SetMaximum(-0.6594216);
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
   quadLineFit1034->SetChisquare(1.89614e-20);
   quadLineFit1034->SetNDF(0);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,-1.716659);
   quadLineFit1034->SetParError(0,0.1328027);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,0.05060533);
   quadLineFit1034->SetParError(1,0.007332801);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("p ");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineColor(4);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(1.89614e-20);
   quadLineFit1035->SetNDF(0);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,-1.716659);
   quadLineFit1035->SetParError(0,0.1328027);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,0.05060533);
   quadLineFit1035->SetParError(1,0.007332801);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t -10.000000 ppm_fx1035[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1035[2] = {
   -0.1682912,
   -0.1115952};
   Double_t -10.000000 ppm_fex1035[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1035[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1035,-10.000000 ppm_fy1035,-10.000000 ppm_fex1035,-10.000000 ppm_fey1035);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1035 = new TH1F("Graph_mI10dO000000sPppm1035","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1035->SetMinimum(-0.1988491);
   Graph_mI10dO000000sPppm1035->SetMaximum(-0.08103725);
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
   quadLineFit1036->SetChisquare(7.244463e-21);
   quadLineFit1036->SetNDF(0);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,-0.395075);
   quadLineFit1036->SetParError(0,0.1328027);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,0.01417399);
   quadLineFit1036->SetParError(1,0.007332801);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(5);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(7.244463e-21);
   quadLineFit1037->SetNDF(0);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,-0.395075);
   quadLineFit1037->SetParError(0,0.1328027);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,0.01417399);
   quadLineFit1037->SetParError(1,0.007332801);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   Double_t 0.000000 ppm_fx1037[2] = {
   16,
   20};
   Double_t 0.000000 ppm_fy1037[2] = {
   0.6010952,
   0.4868907};
   Double_t 0.000000 ppm_fex1037[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1037[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,0.000000 ppm_fx1037,0.000000 ppm_fy1037,0.000000 ppm_fex1037,0.000000 ppm_fey1037);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1037 = new TH1F("Graph_0dO000000sPppm1037","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1037->SetMinimum(0.4505819);
   Graph_0dO000000sPppm1037->SetMaximum(0.637404);
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
   quadLineFit1038->SetChisquare(4.99862e-21);
   quadLineFit1038->SetNDF(0);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,1.057913);
   quadLineFit1038->SetParError(0,0.1328027);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,-0.02855113);
   quadLineFit1038->SetParError(1,0.007332801);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("p ");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineColor(6);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(4.99862e-21);
   quadLineFit1039->SetNDF(0);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,1.057913);
   quadLineFit1039->SetParError(0,0.1328027);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,-0.02855113);
   quadLineFit1039->SetParError(1,0.007332801);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t 10.000000 ppm_fx1039[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1039[2] = {
   1.329761,
   1.123117};
   Double_t 10.000000 ppm_fex1039[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1039[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,10.000000 ppm_fx1039,10.000000 ppm_fy1039,10.000000 ppm_fex1039,10.000000 ppm_fey1039);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1039 = new TH1F("Graph_10dO000000sPppm1039","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1039->SetMinimum(1.077564);
   Graph_10dO000000sPppm1039->SetMaximum(1.375313);
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
   quadLineFit1040->SetChisquare(2.929902e-18);
   quadLineFit1040->SetNDF(0);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,2.156336);
   quadLineFit1040->SetParError(0,0.1328027);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,-0.05166099);
   quadLineFit1040->SetParError(1,0.007332801);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(7);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(2.929902e-18);
   quadLineFit1041->SetNDF(0);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,2.156336);
   quadLineFit1041->SetParError(0,0.1328027);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,-0.05166099);
   quadLineFit1041->SetParError(1,0.007332801);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t 20.000000 ppm_fx1041[2] = {
   16,
   20};
   Double_t 20.000000 ppm_fy1041[2] = {
   2.078304,
   1.661933};
   Double_t 20.000000 ppm_fex1041[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1041[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,20.000000 ppm_fx1041,20.000000 ppm_fy1041,20.000000 ppm_fex1041,20.000000 ppm_fey1041);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1041 = new TH1F("Graph_20dO000000sPppm1041","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1041->SetMinimum(1.595408);
   Graph_20dO000000sPppm1041->SetMaximum(2.144829);
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
   quadLineFit1042->SetChisquare(2.926048e-20);
   quadLineFit1042->SetNDF(0);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,3.743787);
   quadLineFit1042->SetParError(0,0.1328027);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,-0.1040927);
   quadLineFit1042->SetParError(1,0.007332801);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineColor(8);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(2.926048e-20);
   quadLineFit1043->SetNDF(0);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,3.743787);
   quadLineFit1043->SetParError(0,0.1328027);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,-0.1040927);
   quadLineFit1043->SetParError(1,0.007332801);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 30.000000 ppm_fx1043[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1043[2] = {
   2.874355,
   2.278177};
   Double_t 30.000000 ppm_fex1043[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1043[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,30.000000 ppm_fx1043,30.000000 ppm_fy1043,30.000000 ppm_fex1043,30.000000 ppm_fey1043);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1043 = new TH1F("Graph_30dO000000sPppm1043","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1043->SetMinimum(2.193671);
   Graph_30dO000000sPppm1043->SetMaximum(2.958861);
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
   quadLineFit1044->SetChisquare(1.291337e-19);
   quadLineFit1044->SetNDF(0);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,5.259067);
   quadLineFit1044->SetParError(0,0.1328027);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,-0.1490445);
   quadLineFit1044->SetParError(1,0.007332801);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(9);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(1.291337e-19);
   quadLineFit1045->SetNDF(0);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,5.259067);
   quadLineFit1045->SetParError(0,0.1328027);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,-0.1490445);
   quadLineFit1045->SetParError(1,0.007332801);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   Double_t 40.000000 ppm_fx1045[2] = {
   16,
   20};
   Double_t 40.000000 ppm_fy1045[2] = {
   3.625726,
   2.882968};
   Double_t 40.000000 ppm_fex1045[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1045[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,40.000000 ppm_fx1045,40.000000 ppm_fy1045,40.000000 ppm_fex1045,40.000000 ppm_fey1045);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1045 = new TH1F("Graph_40dO000000sPppm1045","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1045->SetMinimum(2.783803);
   Graph_40dO000000sPppm1045->SetMaximum(3.72489);
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
   quadLineFit1046->SetChisquare(1.237928e-18);
   quadLineFit1046->SetNDF(0);
   quadLineFit1046->GetXaxis()->SetLabelFont(42);
   quadLineFit1046->GetXaxis()->SetTitleOffset(1);
   quadLineFit1046->GetXaxis()->SetTitleFont(42);
   quadLineFit1046->GetYaxis()->SetLabelFont(42);
   quadLineFit1046->GetYaxis()->SetTitleFont(42);
   quadLineFit1046->SetParameter(0,6.59676);
   quadLineFit1046->SetParError(0,0.1328027);
   quadLineFit1046->SetParLimits(0,0,0);
   quadLineFit1046->SetParameter(1,-0.1856896);
   quadLineFit1046->SetParError(1,0.007332801);
   quadLineFit1046->SetParLimits(1,0,0);
   quadLineFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1046);
   gre->Draw("p ");
   
   TF1 *quadLineFit1047 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1047->SetFillColor(19);
   quadLineFit1047->SetFillStyle(0);
   quadLineFit1047->SetLineColor(10);
   quadLineFit1047->SetLineWidth(2);
   quadLineFit1047->SetChisquare(1.237928e-18);
   quadLineFit1047->SetNDF(0);
   quadLineFit1047->GetXaxis()->SetLabelFont(42);
   quadLineFit1047->GetXaxis()->SetTitleOffset(1);
   quadLineFit1047->GetXaxis()->SetTitleFont(42);
   quadLineFit1047->GetYaxis()->SetLabelFont(42);
   quadLineFit1047->GetYaxis()->SetTitleFont(42);
   quadLineFit1047->SetParameter(0,6.59676);
   quadLineFit1047->SetParError(0,0.1328027);
   quadLineFit1047->SetParLimits(0,0,0);
   quadLineFit1047->SetParameter(1,-0.1856896);
   quadLineFit1047->SetParError(1,0.007332801);
   quadLineFit1047->SetParLimits(1,0,0);
   quadLineFit1047->Draw("same");
   
   Double_t 50.000000 ppm_fx1047[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1047[2] = {
   4.403473,
   3.526049};
   Double_t 50.000000 ppm_fex1047[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1047[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,50.000000 ppm_fx1047,50.000000 ppm_fy1047,50.000000 ppm_fex1047,50.000000 ppm_fey1047);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1047 = new TH1F("Graph_50dO000000sPppm1047","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1047->SetMinimum(3.413418);
   Graph_50dO000000sPppm1047->SetMaximum(4.516103);
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
   quadLineFit1048->SetChisquare(9.059064e-19);
   quadLineFit1048->SetNDF(0);
   quadLineFit1048->GetXaxis()->SetLabelFont(42);
   quadLineFit1048->GetXaxis()->SetTitleOffset(1);
   quadLineFit1048->GetXaxis()->SetTitleFont(42);
   quadLineFit1048->GetYaxis()->SetLabelFont(42);
   quadLineFit1048->GetYaxis()->SetTitleFont(42);
   quadLineFit1048->SetParameter(0,7.913167);
   quadLineFit1048->SetParError(0,0.1328027);
   quadLineFit1048->SetParLimits(0,0,0);
   quadLineFit1048->SetParameter(1,-0.2193559);
   quadLineFit1048->SetParError(1,0.007332801);
   quadLineFit1048->SetParLimits(1,0,0);
   quadLineFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1048);
   gre->Draw("p ");
   
   TF1 *quadLineFit1049 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1049->SetFillColor(19);
   quadLineFit1049->SetFillStyle(0);
   quadLineFit1049->SetLineColor(11);
   quadLineFit1049->SetLineWidth(2);
   quadLineFit1049->SetChisquare(9.059064e-19);
   quadLineFit1049->SetNDF(0);
   quadLineFit1049->GetXaxis()->SetLabelFont(42);
   quadLineFit1049->GetXaxis()->SetTitleOffset(1);
   quadLineFit1049->GetXaxis()->SetTitleFont(42);
   quadLineFit1049->GetYaxis()->SetLabelFont(42);
   quadLineFit1049->GetYaxis()->SetTitleFont(42);
   quadLineFit1049->SetParameter(0,7.913167);
   quadLineFit1049->SetParError(0,0.1328027);
   quadLineFit1049->SetParLimits(0,0,0);
   quadLineFit1049->SetParameter(1,-0.2193559);
   quadLineFit1049->SetParError(1,0.007332801);
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
