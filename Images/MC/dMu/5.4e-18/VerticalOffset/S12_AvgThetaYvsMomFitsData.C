void S12_AvgThetaYvsMomFitsData()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 18 11:40:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.5262,-1.1875,2977.82,0.6875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_thetaY_vs_p_fx1007[7] = {
   1127.642,
   1373.563,
   1620.324,
   1867.208,
   2116.298,
   2359.991,
   2607.577};
   Double_t S12_gr_thetaY_vs_p_fy1007[7] = {
   -0.3589503,
   -0.5236907,
   -0.2320354,
   -0.06200424,
   -0.08302642,
   -0.04342037,
   0.02983785};
   Double_t S12_gr_thetaY_vs_p_fex1007[7] = {
   0.06671287,
   0.065106,
   0.07171083,
   0.08614936,
   0.1078001,
   0.1395465,
   0.1943591};
   Double_t S12_gr_thetaY_vs_p_fey1007[7] = {
   0.01542862,
   0.01332313,
   0.0127151,
   0.01288067,
   0.01350483,
   0.01472765,
   0.0168571};
   TGraphErrors *gre = new TGraphErrors(7,S12_gr_thetaY_vs_p_fx1007,S12_gr_thetaY_vs_p_fy1007,S12_gr_thetaY_vs_p_fex1007,S12_gr_thetaY_vs_p_fey1007);
   gre->SetName("S12_gr_thetaY_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_thetaY_vs_p1007 = new TH1F("Graph_S12_gr_thetaY_vs_p1007","S12",100,979.5556,2755.791);
   Graph_S12_gr_thetaY_vs_p1007->SetMinimum(-1);
   Graph_S12_gr_thetaY_vs_p1007->SetMaximum(0.5);
   Graph_S12_gr_thetaY_vs_p1007->SetDirectory(0);
   Graph_S12_gr_thetaY_vs_p1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_gr_thetaY_vs_p1007->SetLineColor(ci);
   Graph_S12_gr_thetaY_vs_p1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_gr_thetaY_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_thetaY_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_thetaY_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_thetaY_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1007->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S12_gr_thetaY_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_thetaY_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_thetaY_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_thetaY_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_thetaY_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_thetaY_vs_p1007);
   
   
   TF1 *S12_fit_thetaY_vs_p1008 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.642,2607.577, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1008->SetFillColor(19);
   S12_fit_thetaY_vs_p1008->SetFillStyle(0);
   S12_fit_thetaY_vs_p1008->SetLineColor(4);
   S12_fit_thetaY_vs_p1008->SetLineWidth(2);
   S12_fit_thetaY_vs_p1008->SetChisquare(297.5605);
   S12_fit_thetaY_vs_p1008->SetNDF(5);
   S12_fit_thetaY_vs_p1008->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1008->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1008->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1008->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1008->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1008->SetParameter(0,-0.8278419);
   S12_fit_thetaY_vs_p1008->SetParError(0,0.02197474);
   S12_fit_thetaY_vs_p1008->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1008->SetParameter(1,0.0003470762);
   S12_fit_thetaY_vs_p1008->SetParError(1,1.162656e-05);
   S12_fit_thetaY_vs_p1008->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_thetaY_vs_p1008);
   gre->Draw("ap");
   
   TF1 *S12_fit_thetaY_vs_p1009 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.642,2607.577, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1009->SetFillColor(19);
   S12_fit_thetaY_vs_p1009->SetFillStyle(0);
   S12_fit_thetaY_vs_p1009->SetLineColor(4);
   S12_fit_thetaY_vs_p1009->SetLineWidth(2);
   S12_fit_thetaY_vs_p1009->SetChisquare(297.5605);
   S12_fit_thetaY_vs_p1009->SetNDF(5);
   S12_fit_thetaY_vs_p1009->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1009->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1009->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1009->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1009->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1009->SetParameter(0,-0.8278419);
   S12_fit_thetaY_vs_p1009->SetParError(0,0.02197474);
   S12_fit_thetaY_vs_p1009->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1009->SetParameter(1,0.0003470762);
   S12_fit_thetaY_vs_p1009->SetParError(1,1.162656e-05);
   S12_fit_thetaY_vs_p1009->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1009->Draw("SAME");
   
   Double_t S12_gr_thetaY_vs_p_fx1009[7] = {
   1127.627,
   1373.622,
   1620.285,
   1867.088,
   2116.434,
   2359.737,
   2607.782};
   Double_t S12_gr_thetaY_vs_p_fy1009[7] = {
   -0.3225377,
   -0.4856133,
   -0.1821739,
   -0.04881718,
   -0.06560805,
   -0.01915368,
   0.07251801};
   Double_t S12_gr_thetaY_vs_p_fex1009[7] = {
   0.05677434,
   0.05548426,
   0.06097623,
   0.07342569,
   0.09177072,
   0.1190406,
   0.1664736};
   Double_t S12_gr_thetaY_vs_p_fey1009[7] = {
   0.01315737,
   0.01135845,
   0.01084496,
   0.01100689,
   0.01154953,
   0.01256811,
   0.01440778};
   gre = new TGraphErrors(7,S12_gr_thetaY_vs_p_fx1009,S12_gr_thetaY_vs_p_fy1009,S12_gr_thetaY_vs_p_fex1009,S12_gr_thetaY_vs_p_fey1009);
   gre->SetName("S12_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_thetaY_vs_p1009 = new TH1F("Graph_S12_gr_thetaY_vs_p1009","",100,979.532,2755.986);
   Graph_S12_gr_thetaY_vs_p1009->SetMinimum(-0.5553615);
   Graph_S12_gr_thetaY_vs_p1009->SetMaximum(0.1453155);
   Graph_S12_gr_thetaY_vs_p1009->SetDirectory(0);
   Graph_S12_gr_thetaY_vs_p1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_thetaY_vs_p1009->SetLineColor(ci);
   Graph_S12_gr_thetaY_vs_p1009->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1009->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1009->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1009->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1009->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1009->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1009->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_thetaY_vs_p1009);
   
   
   TF1 *S12_fit_thetaY_vs_p1010 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.627,2607.782, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1010->SetFillColor(19);
   S12_fit_thetaY_vs_p1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S12_fit_thetaY_vs_p1010->SetLineColor(ci);
   S12_fit_thetaY_vs_p1010->SetLineWidth(2);
   S12_fit_thetaY_vs_p1010->SetChisquare(374.0854);
   S12_fit_thetaY_vs_p1010->SetNDF(5);
   S12_fit_thetaY_vs_p1010->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1010->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1010->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1010->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1010->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1010->SetParameter(0,-0.7798492);
   S12_fit_thetaY_vs_p1010->SetParError(0,0.01874918);
   S12_fit_thetaY_vs_p1010->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1010->SetParameter(1,0.0003378925);
   S12_fit_thetaY_vs_p1010->SetParError(1,9.923645e-06);
   S12_fit_thetaY_vs_p1010->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_thetaY_vs_p1010);
   gre->Draw("p ");
   
   TF1 *S12_fit_thetaY_vs_p1011 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.627,2607.782, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1011->SetFillColor(19);
   S12_fit_thetaY_vs_p1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S12_fit_thetaY_vs_p1011->SetLineColor(ci);
   S12_fit_thetaY_vs_p1011->SetLineWidth(2);
   S12_fit_thetaY_vs_p1011->SetChisquare(374.0854);
   S12_fit_thetaY_vs_p1011->SetNDF(5);
   S12_fit_thetaY_vs_p1011->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1011->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1011->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1011->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1011->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1011->SetParameter(0,-0.7798492);
   S12_fit_thetaY_vs_p1011->SetParError(0,0.01874918);
   S12_fit_thetaY_vs_p1011->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1011->SetParameter(1,0.0003378925);
   S12_fit_thetaY_vs_p1011->SetParError(1,9.923645e-06);
   S12_fit_thetaY_vs_p1011->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1011->Draw("SAME");
   
   Double_t S12_gr_thetaY_vs_p_fx1011[7] = {
   1127.521,
   1373.594,
   1620.3,
   1867.14,
   2116.241,
   2359.687,
   2607.541};
   Double_t S12_gr_thetaY_vs_p_fy1011[7] = {
   -0.5090231,
   -0.6410375,
   -0.3091319,
   -0.1378794,
   -0.1312848,
   -0.0711881,
   0.04552709};
   Double_t S12_gr_thetaY_vs_p_fex1011[7] = {
   0.04653765,
   0.04560684,
   0.05024491,
   0.06051975,
   0.07584874,
   0.09852956,
   0.1381994};
   Double_t S12_gr_thetaY_vs_p_fey1011[7] = {
   0.01073993,
   0.009308112,
   0.008907556,
   0.009033967,
   0.009511409,
   0.01038305,
   0.01198076};
   gre = new TGraphErrors(7,S12_gr_thetaY_vs_p_fx1011,S12_gr_thetaY_vs_p_fy1011,S12_gr_thetaY_vs_p_fex1011,S12_gr_thetaY_vs_p_fey1011);
   gre->SetName("S12_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_thetaY_vs_p1011 = new TH1F("Graph_S12_gr_thetaY_vs_p1011","",100,979.4539,2755.699);
   Graph_S12_gr_thetaY_vs_p1011->SetMinimum(-0.721131);
   Graph_S12_gr_thetaY_vs_p1011->SetMaximum(0.1282932);
   Graph_S12_gr_thetaY_vs_p1011->SetDirectory(0);
   Graph_S12_gr_thetaY_vs_p1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_thetaY_vs_p1011->SetLineColor(ci);
   Graph_S12_gr_thetaY_vs_p1011->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1011->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1011->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1011->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1011->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1011->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1011->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_thetaY_vs_p1011);
   
   
   TF1 *S12_fit_thetaY_vs_p1012 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.521,2607.541, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1012->SetFillColor(19);
   S12_fit_thetaY_vs_p1012->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S12_fit_thetaY_vs_p1012->SetLineColor(ci);
   S12_fit_thetaY_vs_p1012->SetLineWidth(2);
   S12_fit_thetaY_vs_p1012->SetChisquare(591.7202);
   S12_fit_thetaY_vs_p1012->SetNDF(5);
   S12_fit_thetaY_vs_p1012->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1012->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1012->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1012->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1012->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1012->SetParameter(0,-1.083604);
   S12_fit_thetaY_vs_p1012->SetParError(0,0.0154046);
   S12_fit_thetaY_vs_p1012->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1012->SetParameter(1,0.000447384);
   S12_fit_thetaY_vs_p1012->SetParError(1,8.17223e-06);
   S12_fit_thetaY_vs_p1012->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_thetaY_vs_p1012);
   gre->Draw("p ");
   
   TF1 *S12_fit_thetaY_vs_p1013 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.521,2607.541, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1013->SetFillColor(19);
   S12_fit_thetaY_vs_p1013->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S12_fit_thetaY_vs_p1013->SetLineColor(ci);
   S12_fit_thetaY_vs_p1013->SetLineWidth(2);
   S12_fit_thetaY_vs_p1013->SetChisquare(591.7202);
   S12_fit_thetaY_vs_p1013->SetNDF(5);
   S12_fit_thetaY_vs_p1013->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1013->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1013->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1013->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1013->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1013->SetParameter(0,-1.083604);
   S12_fit_thetaY_vs_p1013->SetParError(0,0.0154046);
   S12_fit_thetaY_vs_p1013->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1013->SetParameter(1,0.000447384);
   S12_fit_thetaY_vs_p1013->SetParError(1,8.17223e-06);
   S12_fit_thetaY_vs_p1013->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1013->Draw("SAME");
   
   Double_t S12_gr_thetaY_vs_p_fx1013[7] = {
   1127.483,
   1373.62,
   1620.287,
   1866.946,
   2116.359,
   2359.645,
   2608.213};
   Double_t S12_gr_thetaY_vs_p_fy1013[7] = {
   -0.7897833,
   -0.8484727,
   -0.4808793,
   -0.2925448,
   -0.2517007,
   -0.1955595,
   -0.02236814};
   Double_t S12_gr_thetaY_vs_p_fex1013[7] = {
   0.03384042,
   0.03313154,
   0.03650538,
   0.04404049,
   0.05518869,
   0.07177596,
   0.1004619};
   Double_t S12_gr_thetaY_vs_p_fey1013[7] = {
   0.007829763,
   0.00678365,
   0.006490422,
   0.006605095,
   0.006948787,
   0.007585171,
   0.008698433};
   gre = new TGraphErrors(7,S12_gr_thetaY_vs_p_fx1013,S12_gr_thetaY_vs_p_fy1013,S12_gr_thetaY_vs_p_fex1013,S12_gr_thetaY_vs_p_fey1013);
   gre->SetName("S12_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_thetaY_vs_p1013 = new TH1F("Graph_S12_gr_thetaY_vs_p1013","",100,979.3624,2756.4);
   Graph_S12_gr_thetaY_vs_p1013->SetMinimum(-0.939415);
   Graph_S12_gr_thetaY_vs_p1013->SetMaximum(0.07048896);
   Graph_S12_gr_thetaY_vs_p1013->SetDirectory(0);
   Graph_S12_gr_thetaY_vs_p1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_thetaY_vs_p1013->SetLineColor(ci);
   Graph_S12_gr_thetaY_vs_p1013->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1013->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1013->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1013->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1013->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1013->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1013->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_thetaY_vs_p1013);
   
   
   TF1 *S12_fit_thetaY_vs_p1014 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.483,2608.213, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1014->SetFillColor(19);
   S12_fit_thetaY_vs_p1014->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S12_fit_thetaY_vs_p1014->SetLineColor(ci);
   S12_fit_thetaY_vs_p1014->SetLineWidth(2);
   S12_fit_thetaY_vs_p1014->SetChisquare(1094.749);
   S12_fit_thetaY_vs_p1014->SetNDF(5);
   S12_fit_thetaY_vs_p1014->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1014->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1014->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1014->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1014->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1014->SetParameter(0,-1.469153);
   S12_fit_thetaY_vs_p1014->SetParError(0,0.01122062);
   S12_fit_thetaY_vs_p1014->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1014->SetParameter(1,0.0005685849);
   S12_fit_thetaY_vs_p1014->SetParError(1,5.951848e-06);
   S12_fit_thetaY_vs_p1014->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_thetaY_vs_p1014);
   gre->Draw("p ");
   
   TF1 *S12_fit_thetaY_vs_p1015 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1127.483,2608.213, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1015->SetFillColor(19);
   S12_fit_thetaY_vs_p1015->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S12_fit_thetaY_vs_p1015->SetLineColor(ci);
   S12_fit_thetaY_vs_p1015->SetLineWidth(2);
   S12_fit_thetaY_vs_p1015->SetChisquare(1094.749);
   S12_fit_thetaY_vs_p1015->SetNDF(5);
   S12_fit_thetaY_vs_p1015->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1015->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1015->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1015->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1015->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1015->SetParameter(0,-1.469153);
   S12_fit_thetaY_vs_p1015->SetParError(0,0.01122062);
   S12_fit_thetaY_vs_p1015->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1015->SetParameter(1,0.0005685849);
   S12_fit_thetaY_vs_p1015->SetParError(1,5.951848e-06);
   S12_fit_thetaY_vs_p1015->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1015->Draw("SAME");
   
   TLegend *leg = new TLegend(0.11,0.6,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_gr_thetaY_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_gr_thetaY_vs_p","Run-1b","lpf");
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
   entry=leg->AddEntry("S12_gr_thetaY_vs_p","Run-1c","lpf");
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
   entry=leg->AddEntry("S12_gr_thetaY_vs_p","Run-1d","lpf");
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
