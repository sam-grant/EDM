void S12_AvgYvsMomFitsData()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 18 11:40:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.5262,-0.75,2977.82,1.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_Y_vs_p_fx1023[7] = {
   1127.642,
   1373.563,
   1620.324,
   1867.208,
   2116.298,
   2359.991,
   2607.577};
   Double_t S12_gr_Y_vs_p_fy1023[7] = {
   0.2426619,
   0.3949903,
   0.3123797,
   0.1847123,
   0.1380604,
   -0.003610475,
   -0.1848957};
   Double_t S12_gr_Y_vs_p_fex1023[7] = {
   0.06671287,
   0.065106,
   0.07171083,
   0.08614936,
   0.1078001,
   0.1395465,
   0.1943591};
   Double_t S12_gr_Y_vs_p_fey1023[7] = {
   0.01170363,
   0.01155709,
   0.01271779,
   0.01520164,
   0.01889991,
   0.02482405,
   0.03604167};
   TGraphErrors *gre = new TGraphErrors(7,S12_gr_Y_vs_p_fx1023,S12_gr_Y_vs_p_fy1023,S12_gr_Y_vs_p_fex1023,S12_gr_Y_vs_p_fey1023);
   gre->SetName("S12_gr_Y_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_Y_vs_p1023 = new TH1F("Graph_S12_gr_Y_vs_p1023","S12",100,979.5556,2755.791);
   Graph_S12_gr_Y_vs_p1023->SetMinimum(-0.5);
   Graph_S12_gr_Y_vs_p1023->SetMaximum(1.5);
   Graph_S12_gr_Y_vs_p1023->SetDirectory(0);
   Graph_S12_gr_Y_vs_p1023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_gr_Y_vs_p1023->SetLineColor(ci);
   Graph_S12_gr_Y_vs_p1023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_gr_Y_vs_p1023->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_Y_vs_p1023->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1023->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_Y_vs_p1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_Y_vs_p1023->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1023->GetYaxis()->SetTitle("#LTy#GT [mm] / 250 MeV");
   Graph_S12_gr_Y_vs_p1023->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_Y_vs_p1023->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_Y_vs_p1023->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1023->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_Y_vs_p1023->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_Y_vs_p1023->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1023->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1023->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_Y_vs_p1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_Y_vs_p1023);
   
   
   TF1 *S12_fit_Y_vs_p1024 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.642,2607.577, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1024->SetFillColor(19);
   S12_fit_Y_vs_p1024->SetFillStyle(0);
   S12_fit_Y_vs_p1024->SetLineColor(4);
   S12_fit_Y_vs_p1024->SetLineWidth(2);
   S12_fit_Y_vs_p1024->SetChisquare(232.6643);
   S12_fit_Y_vs_p1024->SetNDF(5);
   S12_fit_Y_vs_p1024->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1024->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1024->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1024->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1024->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1024->SetParameter(0,0.616979);
   S12_fit_Y_vs_p1024->SetParError(0,0.02364358);
   S12_fit_Y_vs_p1024->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1024->SetParameter(1,-0.0002297356);
   S12_fit_Y_vs_p1024->SetParError(1,1.445797e-05);
   S12_fit_Y_vs_p1024->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_Y_vs_p1024);
   gre->Draw("ap");
   
   TF1 *S12_fit_Y_vs_p1025 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.642,2607.577, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1025->SetFillColor(19);
   S12_fit_Y_vs_p1025->SetFillStyle(0);
   S12_fit_Y_vs_p1025->SetLineColor(4);
   S12_fit_Y_vs_p1025->SetLineWidth(2);
   S12_fit_Y_vs_p1025->SetChisquare(232.6643);
   S12_fit_Y_vs_p1025->SetNDF(5);
   S12_fit_Y_vs_p1025->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1025->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1025->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1025->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1025->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1025->SetParameter(0,0.616979);
   S12_fit_Y_vs_p1025->SetParError(0,0.02364358);
   S12_fit_Y_vs_p1025->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1025->SetParameter(1,-0.0002297356);
   S12_fit_Y_vs_p1025->SetParError(1,1.445797e-05);
   S12_fit_Y_vs_p1025->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1025->Draw("SAME");
   
   Double_t S12_gr_Y_vs_p_fx1025[7] = {
   1127.627,
   1373.622,
   1620.285,
   1867.088,
   2116.434,
   2359.737,
   2607.782};
   Double_t S12_gr_Y_vs_p_fy1025[7] = {
   0.160014,
   0.334015,
   0.2347183,
   0.1349938,
   0.05915232,
   -0.09417059,
   -0.2169413};
   Double_t S12_gr_Y_vs_p_fex1025[7] = {
   0.05677434,
   0.05548426,
   0.06097623,
   0.07342569,
   0.09177072,
   0.1190406,
   0.1664736};
   Double_t S12_gr_Y_vs_p_fey1025[7] = {
   0.01000738,
   0.009885582,
   0.01086323,
   0.01298894,
   0.01616522,
   0.02123474,
   0.03093099};
   gre = new TGraphErrors(7,S12_gr_Y_vs_p_fx1025,S12_gr_Y_vs_p_fy1025,S12_gr_Y_vs_p_fex1025,S12_gr_Y_vs_p_fey1025);
   gre->SetName("S12_gr_Y_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_Y_vs_p1025 = new TH1F("Graph_S12_gr_Y_vs_p1025","",100,979.532,2755.986);
   Graph_S12_gr_Y_vs_p1025->SetMinimum(-0.3070496);
   Graph_S12_gr_Y_vs_p1025->SetMaximum(0.4030779);
   Graph_S12_gr_Y_vs_p1025->SetDirectory(0);
   Graph_S12_gr_Y_vs_p1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_Y_vs_p1025->SetLineColor(ci);
   Graph_S12_gr_Y_vs_p1025->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1025->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_Y_vs_p1025->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1025->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1025->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1025->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1025->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_Y_vs_p1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_Y_vs_p1025);
   
   
   TF1 *S12_fit_Y_vs_p1026 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.627,2607.782, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1026->SetFillColor(19);
   S12_fit_Y_vs_p1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S12_fit_Y_vs_p1026->SetLineColor(ci);
   S12_fit_Y_vs_p1026->SetLineWidth(2);
   S12_fit_Y_vs_p1026->SetChisquare(352.8991);
   S12_fit_Y_vs_p1026->SetNDF(5);
   S12_fit_Y_vs_p1026->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1026->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1026->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1026->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1026->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1026->SetParameter(0,0.5322787);
   S12_fit_Y_vs_p1026->SetParError(0,0.0202291);
   S12_fit_Y_vs_p1026->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1026->SetParameter(1,-0.0002207205);
   S12_fit_Y_vs_p1026->SetParError(1,1.237172e-05);
   S12_fit_Y_vs_p1026->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_Y_vs_p1026);
   gre->Draw("p ");
   
   TF1 *S12_fit_Y_vs_p1027 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.627,2607.782, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1027->SetFillColor(19);
   S12_fit_Y_vs_p1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S12_fit_Y_vs_p1027->SetLineColor(ci);
   S12_fit_Y_vs_p1027->SetLineWidth(2);
   S12_fit_Y_vs_p1027->SetChisquare(352.8991);
   S12_fit_Y_vs_p1027->SetNDF(5);
   S12_fit_Y_vs_p1027->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1027->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1027->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1027->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1027->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1027->SetParameter(0,0.5322787);
   S12_fit_Y_vs_p1027->SetParError(0,0.0202291);
   S12_fit_Y_vs_p1027->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1027->SetParameter(1,-0.0002207205);
   S12_fit_Y_vs_p1027->SetParError(1,1.237172e-05);
   S12_fit_Y_vs_p1027->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1027->Draw("SAME");
   
   Double_t S12_gr_Y_vs_p_fx1027[7] = {
   1127.521,
   1373.594,
   1620.3,
   1867.14,
   2116.241,
   2359.687,
   2607.541};
   Double_t S12_gr_Y_vs_p_fy1027[7] = {
   0.5366824,
   0.6943152,
   0.592601,
   0.483951,
   0.4322683,
   0.2912349,
   0.1307438};
   Double_t S12_gr_Y_vs_p_fex1027[7] = {
   0.04653765,
   0.04560684,
   0.05024491,
   0.06051975,
   0.07584874,
   0.09852956,
   0.1381994};
   Double_t S12_gr_Y_vs_p_fey1027[7] = {
   0.008058872,
   0.007983553,
   0.008795936,
   0.01054365,
   0.01312884,
   0.01729644,
   0.02535604};
   gre = new TGraphErrors(7,S12_gr_Y_vs_p_fx1027,S12_gr_Y_vs_p_fy1027,S12_gr_Y_vs_p_fex1027,S12_gr_Y_vs_p_fey1027);
   gre->SetName("S12_gr_Y_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_Y_vs_p1027 = new TH1F("Graph_S12_gr_Y_vs_p1027","",100,979.4539,2755.699);
   Graph_S12_gr_Y_vs_p1027->SetMinimum(0.04569667);
   Graph_S12_gr_Y_vs_p1027->SetMaximum(0.7619899);
   Graph_S12_gr_Y_vs_p1027->SetDirectory(0);
   Graph_S12_gr_Y_vs_p1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_Y_vs_p1027->SetLineColor(ci);
   Graph_S12_gr_Y_vs_p1027->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1027->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_Y_vs_p1027->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1027->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1027->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1027->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1027->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_Y_vs_p1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_Y_vs_p1027);
   
   
   TF1 *S12_fit_Y_vs_p1028 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.521,2607.541, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1028->SetFillColor(19);
   S12_fit_Y_vs_p1028->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S12_fit_Y_vs_p1028->SetLineColor(ci);
   S12_fit_Y_vs_p1028->SetLineWidth(2);
   S12_fit_Y_vs_p1028->SetChisquare(466.8737);
   S12_fit_Y_vs_p1028->SetNDF(5);
   S12_fit_Y_vs_p1028->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1028->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1028->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1028->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1028->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1028->SetParameter(0,0.9033416);
   S12_fit_Y_vs_p1028->SetParError(0,0.01637942);
   S12_fit_Y_vs_p1028->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1028->SetParameter(1,-0.0002249882);
   S12_fit_Y_vs_p1028->SetParError(1,1.003756e-05);
   S12_fit_Y_vs_p1028->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_Y_vs_p1028);
   gre->Draw("p ");
   
   TF1 *S12_fit_Y_vs_p1029 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.521,2607.541, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1029->SetFillColor(19);
   S12_fit_Y_vs_p1029->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S12_fit_Y_vs_p1029->SetLineColor(ci);
   S12_fit_Y_vs_p1029->SetLineWidth(2);
   S12_fit_Y_vs_p1029->SetChisquare(466.8737);
   S12_fit_Y_vs_p1029->SetNDF(5);
   S12_fit_Y_vs_p1029->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1029->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1029->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1029->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1029->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1029->SetParameter(0,0.9033416);
   S12_fit_Y_vs_p1029->SetParError(0,0.01637942);
   S12_fit_Y_vs_p1029->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1029->SetParameter(1,-0.0002249882);
   S12_fit_Y_vs_p1029->SetParError(1,1.003756e-05);
   S12_fit_Y_vs_p1029->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1029->Draw("SAME");
   
   Double_t S12_gr_Y_vs_p_fx1029[7] = {
   1127.483,
   1373.62,
   1620.287,
   1866.946,
   2116.359,
   2359.645,
   2608.213};
   Double_t S12_gr_Y_vs_p_fy1029[7] = {
   1.038412,
   1.193031,
   1.087386,
   0.9916075,
   0.9207458,
   0.7899837,
   0.6151858};
   Double_t S12_gr_Y_vs_p_fex1029[7] = {
   0.03384042,
   0.03313154,
   0.03650538,
   0.04404049,
   0.05518869,
   0.07177596,
   0.1004619};
   Double_t S12_gr_Y_vs_p_fey1029[7] = {
   0.005817555,
   0.005769056,
   0.006355263,
   0.007622743,
   0.009502257,
   0.01250969,
   0.01827618};
   gre = new TGraphErrors(7,S12_gr_Y_vs_p_fx1029,S12_gr_Y_vs_p_fy1029,S12_gr_Y_vs_p_fex1029,S12_gr_Y_vs_p_fey1029);
   gre->SetName("S12_gr_Y_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_Y_vs_p1029 = new TH1F("Graph_S12_gr_Y_vs_p1029","",100,979.3624,2756.4);
   Graph_S12_gr_Y_vs_p1029->SetMinimum(0.5367206);
   Graph_S12_gr_Y_vs_p1029->SetMaximum(1.258989);
   Graph_S12_gr_Y_vs_p1029->SetDirectory(0);
   Graph_S12_gr_Y_vs_p1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_Y_vs_p1029->SetLineColor(ci);
   Graph_S12_gr_Y_vs_p1029->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1029->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_Y_vs_p1029->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1029->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1029->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_Y_vs_p1029->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_Y_vs_p1029->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_Y_vs_p1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_Y_vs_p1029);
   
   
   TF1 *S12_fit_Y_vs_p1030 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.483,2608.213, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1030->SetFillColor(19);
   S12_fit_Y_vs_p1030->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S12_fit_Y_vs_p1030->SetLineColor(ci);
   S12_fit_Y_vs_p1030->SetLineWidth(2);
   S12_fit_Y_vs_p1030->SetChisquare(882.7886);
   S12_fit_Y_vs_p1030->SetNDF(5);
   S12_fit_Y_vs_p1030->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1030->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1030->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1030->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1030->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1030->SetParameter(0,1.410516);
   S12_fit_Y_vs_p1030->SetParError(0,0.01182927);
   S12_fit_Y_vs_p1030->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1030->SetParameter(1,-0.0002304304);
   S12_fit_Y_vs_p1030->SetParError(1,7.250618e-06);
   S12_fit_Y_vs_p1030->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_Y_vs_p1030);
   gre->Draw("p ");
   
   TF1 *S12_fit_Y_vs_p1031 = new TF1("S12_fit_Y_vs_p","[0]+[1]*x",1127.483,2608.213, TF1::EAddToList::kNo);
   S12_fit_Y_vs_p1031->SetFillColor(19);
   S12_fit_Y_vs_p1031->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S12_fit_Y_vs_p1031->SetLineColor(ci);
   S12_fit_Y_vs_p1031->SetLineWidth(2);
   S12_fit_Y_vs_p1031->SetChisquare(882.7886);
   S12_fit_Y_vs_p1031->SetNDF(5);
   S12_fit_Y_vs_p1031->GetXaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1031->GetXaxis()->SetTitleOffset(1);
   S12_fit_Y_vs_p1031->GetXaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1031->GetYaxis()->SetLabelFont(42);
   S12_fit_Y_vs_p1031->GetYaxis()->SetTitleFont(42);
   S12_fit_Y_vs_p1031->SetParameter(0,1.410516);
   S12_fit_Y_vs_p1031->SetParError(0,0.01182927);
   S12_fit_Y_vs_p1031->SetParLimits(0,0,0);
   S12_fit_Y_vs_p1031->SetParameter(1,-0.0002304304);
   S12_fit_Y_vs_p1031->SetParError(1,7.250618e-06);
   S12_fit_Y_vs_p1031->SetParLimits(1,0,0);
   S12_fit_Y_vs_p1031->Draw("SAME");
   
   TLegend *leg = new TLegend(0.6,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_gr_Y_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_gr_Y_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_gr_Y_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_gr_Y_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
