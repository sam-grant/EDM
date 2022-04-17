void S18_AvgYvsMomFitsData()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Apr 17 23:21:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.2364,-0.25,2977.453,2.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_gr_Y_vs_p_fx1031[7] = {
   1127.34,
   1373.07,
   1619.546,
   1866.689,
   2115.975,
   2359.684,
   2607.206};
   Double_t S18_gr_Y_vs_p_fy1031[7] = {
   0.5599519,
   0.5756364,
   0.6699568,
   0.6291602,
   0.4610254,
   0.5237898,
   0.654396};
   Double_t S18_gr_Y_vs_p_fex1031[7] = {
   0.06792331,
   0.06754774,
   0.07503825,
   0.09225359,
   0.1164629,
   0.1541941,
   0.210611};
   Double_t S18_gr_Y_vs_p_fey1031[7] = {
   0.01193173,
   0.0120268,
   0.01340562,
   0.0163014,
   0.02044287,
   0.02728844,
   0.03932501};
   TGraphErrors *gre = new TGraphErrors(7,S18_gr_Y_vs_p_fx1031,S18_gr_Y_vs_p_fy1031,S18_gr_Y_vs_p_fex1031,S18_gr_Y_vs_p_fey1031);
   gre->SetName("S18_gr_Y_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_Y_vs_p1031 = new TH1F("Graph_S18_gr_Y_vs_p1031","S18",100,979.2581,2755.431);
   Graph_S18_gr_Y_vs_p1031->SetMinimum(0);
   Graph_S18_gr_Y_vs_p1031->SetMaximum(2);
   Graph_S18_gr_Y_vs_p1031->SetDirectory(0);
   Graph_S18_gr_Y_vs_p1031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_Y_vs_p1031->SetLineColor(ci);
   Graph_S18_gr_Y_vs_p1031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_Y_vs_p1031->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_Y_vs_p1031->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1031->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_Y_vs_p1031->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_Y_vs_p1031->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1031->GetYaxis()->SetTitle("#LTy#GT [mm] / 250 MeV");
   Graph_S18_gr_Y_vs_p1031->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_Y_vs_p1031->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_Y_vs_p1031->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1031->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_Y_vs_p1031->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_Y_vs_p1031->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1031->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1031->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_Y_vs_p1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_Y_vs_p1031);
   
   
   TF1 *S18_fit_Y_vs_p1032 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.34,2607.206, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1032->SetFillColor(19);
   S18_fit_Y_vs_p1032->SetFillStyle(0);
   S18_fit_Y_vs_p1032->SetLineColor(4);
   S18_fit_Y_vs_p1032->SetLineWidth(2);
   S18_fit_Y_vs_p1032->SetChisquare(97.22069);
   S18_fit_Y_vs_p1032->SetNDF(5);
   S18_fit_Y_vs_p1032->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1032->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1032->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1032->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1032->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1032->SetParameter(0,0.5935754);
   S18_fit_Y_vs_p1032->SetParError(0,0.02483962);
   S18_fit_Y_vs_p1032->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1032->SetParameter(1,-3.985219e-06);
   S18_fit_Y_vs_p1032->SetParError(1,1.536519e-05);
   S18_fit_Y_vs_p1032->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_Y_vs_p1032);
   gre->Draw("ap");
   
   TF1 *S18_fit_Y_vs_p1033 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.34,2607.206, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1033->SetFillColor(19);
   S18_fit_Y_vs_p1033->SetFillStyle(0);
   S18_fit_Y_vs_p1033->SetLineColor(4);
   S18_fit_Y_vs_p1033->SetLineWidth(2);
   S18_fit_Y_vs_p1033->SetChisquare(97.22069);
   S18_fit_Y_vs_p1033->SetNDF(5);
   S18_fit_Y_vs_p1033->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1033->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1033->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1033->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1033->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1033->SetParameter(0,0.5935754);
   S18_fit_Y_vs_p1033->SetParError(0,0.02483962);
   S18_fit_Y_vs_p1033->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1033->SetParameter(1,-3.985219e-06);
   S18_fit_Y_vs_p1033->SetParError(1,1.536519e-05);
   S18_fit_Y_vs_p1033->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1033->Draw("SAME");
   
   Double_t S18_gr_Y_vs_p_fx1033[7] = {
   1127.172,
   1372.862,
   1619.551,
   1866.461,
   2116.155,
   2359.263,
   2607.247};
   Double_t S18_gr_Y_vs_p_fy1033[7] = {
   0.4681622,
   0.5094868,
   0.6253072,
   0.569805,
   0.3877371,
   0.4543175,
   0.5879876};
   Double_t S18_gr_Y_vs_p_fex1033[7] = {
   0.05779642,
   0.05748754,
   0.06386294,
   0.07853929,
   0.09949952,
   0.1316754,
   0.1793424};
   Double_t S18_gr_Y_vs_p_fey1033[7] = {
   0.01019882,
   0.01025954,
   0.01142968,
   0.01390569,
   0.01750244,
   0.02330588,
   0.03372846};
   gre = new TGraphErrors(7,S18_gr_Y_vs_p_fx1033,S18_gr_Y_vs_p_fy1033,S18_gr_Y_vs_p_fex1033,S18_gr_Y_vs_p_fey1033);
   gre->SetName("S18_gr_Y_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_Y_vs_p1033 = new TH1F("Graph_S18_gr_Y_vs_p1033","",100,979.0826,2755.457);
   Graph_S18_gr_Y_vs_p1033->SetMinimum(0.3435844);
   Graph_S18_gr_Y_vs_p1033->SetMaximum(0.663387);
   Graph_S18_gr_Y_vs_p1033->SetDirectory(0);
   Graph_S18_gr_Y_vs_p1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_Y_vs_p1033->SetLineColor(ci);
   Graph_S18_gr_Y_vs_p1033->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1033->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_Y_vs_p1033->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1033->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1033->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1033->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1033->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_Y_vs_p1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_Y_vs_p1033);
   
   
   TF1 *S18_fit_Y_vs_p1034 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.172,2607.247, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1034->SetFillColor(19);
   S18_fit_Y_vs_p1034->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S18_fit_Y_vs_p1034->SetLineColor(ci);
   S18_fit_Y_vs_p1034->SetLineWidth(2);
   S18_fit_Y_vs_p1034->SetChisquare(192.3746);
   S18_fit_Y_vs_p1034->SetNDF(5);
   S18_fit_Y_vs_p1034->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1034->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1034->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1034->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1034->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1034->SetParameter(0,0.4956277);
   S18_fit_Y_vs_p1034->SetParError(0,0.02123185);
   S18_fit_Y_vs_p1034->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1034->SetParameter(1,1.507966e-05);
   S18_fit_Y_vs_p1034->SetParError(1,1.313746e-05);
   S18_fit_Y_vs_p1034->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_Y_vs_p1034);
   gre->Draw("p ");
   
   TF1 *S18_fit_Y_vs_p1035 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.172,2607.247, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1035->SetFillColor(19);
   S18_fit_Y_vs_p1035->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S18_fit_Y_vs_p1035->SetLineColor(ci);
   S18_fit_Y_vs_p1035->SetLineWidth(2);
   S18_fit_Y_vs_p1035->SetChisquare(192.3746);
   S18_fit_Y_vs_p1035->SetNDF(5);
   S18_fit_Y_vs_p1035->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1035->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1035->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1035->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1035->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1035->SetParameter(0,0.4956277);
   S18_fit_Y_vs_p1035->SetParError(0,0.02123185);
   S18_fit_Y_vs_p1035->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1035->SetParameter(1,1.507966e-05);
   S18_fit_Y_vs_p1035->SetParError(1,1.313746e-05);
   S18_fit_Y_vs_p1035->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1035->Draw("SAME");
   
   Double_t S18_gr_Y_vs_p_fx1035[7] = {
   1127.304,
   1372.915,
   1619.587,
   1866.591,
   2115.808,
   2359.487,
   2606.43};
   Double_t S18_gr_Y_vs_p_fy1035[7] = {
   0.8393127,
   0.8772507,
   0.9317617,
   0.9006218,
   0.7786929,
   0.8002983,
   0.9275333};
   Double_t S18_gr_Y_vs_p_fex1035[7] = {
   0.0477222,
   0.047559,
   0.05301859,
   0.0653003,
   0.08286297,
   0.1099903,
   0.1514961};
   Double_t S18_gr_Y_vs_p_fey1035[7] = {
   0.00827638,
   0.008338525,
   0.009330798,
   0.01137252,
   0.01431849,
   0.01916013,
   0.02802083};
   gre = new TGraphErrors(7,S18_gr_Y_vs_p_fx1035,S18_gr_Y_vs_p_fy1035,S18_gr_Y_vs_p_fex1035,S18_gr_Y_vs_p_fey1035);
   gre->SetName("S18_gr_Y_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_Y_vs_p1035 = new TH1F("Graph_S18_gr_Y_vs_p1035","",100,979.3234,2754.514);
   Graph_S18_gr_Y_vs_p1035->SetMinimum(0.7452564);
   Graph_S18_gr_Y_vs_p1035->SetMaximum(0.9746721);
   Graph_S18_gr_Y_vs_p1035->SetDirectory(0);
   Graph_S18_gr_Y_vs_p1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_Y_vs_p1035->SetLineColor(ci);
   Graph_S18_gr_Y_vs_p1035->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1035->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_Y_vs_p1035->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1035->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1035->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1035->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1035->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_Y_vs_p1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_Y_vs_p1035);
   
   
   TF1 *S18_fit_Y_vs_p1036 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.304,2606.43, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1036->SetFillColor(19);
   S18_fit_Y_vs_p1036->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S18_fit_Y_vs_p1036->SetLineColor(ci);
   S18_fit_Y_vs_p1036->SetLineWidth(2);
   S18_fit_Y_vs_p1036->SetChisquare(123.5215);
   S18_fit_Y_vs_p1036->SetNDF(5);
   S18_fit_Y_vs_p1036->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1036->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1036->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1036->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1036->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1036->SetParameter(0,0.8767983);
   S18_fit_Y_vs_p1036->SetParError(0,0.01734104);
   S18_fit_Y_vs_p1036->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1036->SetParameter(1,-3.891437e-06);
   S18_fit_Y_vs_p1036->SetParError(1,1.075486e-05);
   S18_fit_Y_vs_p1036->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_Y_vs_p1036);
   gre->Draw("p ");
   
   TF1 *S18_fit_Y_vs_p1037 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.304,2606.43, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1037->SetFillColor(19);
   S18_fit_Y_vs_p1037->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S18_fit_Y_vs_p1037->SetLineColor(ci);
   S18_fit_Y_vs_p1037->SetLineWidth(2);
   S18_fit_Y_vs_p1037->SetChisquare(123.5215);
   S18_fit_Y_vs_p1037->SetNDF(5);
   S18_fit_Y_vs_p1037->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1037->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1037->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1037->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1037->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1037->SetParameter(0,0.8767983);
   S18_fit_Y_vs_p1037->SetParError(0,0.01734104);
   S18_fit_Y_vs_p1037->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1037->SetParameter(1,-3.891437e-06);
   S18_fit_Y_vs_p1037->SetParError(1,1.075486e-05);
   S18_fit_Y_vs_p1037->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1037->Draw("SAME");
   
   Double_t S18_gr_Y_vs_p_fx1037[7] = {
   1127.239,
   1372.896,
   1619.455,
   1866.55,
   2115.746,
   2359.198,
   2606.767};
   Double_t S18_gr_Y_vs_p_fy1037[7] = {
   1.336348,
   1.368782,
   1.421204,
   1.365129,
   1.203698,
   1.274164,
   1.444525};
   Double_t S18_gr_Y_vs_p_fex1037[7] = {
   0.03504799,
   0.03491518,
   0.03891889,
   0.04811988,
   0.06102013,
   0.08111828,
   0.1114284};
   Double_t S18_gr_Y_vs_p_fey1037[7] = {
   0.006037741,
   0.006097638,
   0.006824866,
   0.008329711,
   0.01048957,
   0.01405586,
   0.0205701};
   gre = new TGraphErrors(7,S18_gr_Y_vs_p_fx1037,S18_gr_Y_vs_p_fy1037,S18_gr_Y_vs_p_fex1037,S18_gr_Y_vs_p_fey1037);
   gre->SetName("S18_gr_Y_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_Y_vs_p1037 = new TH1F("Graph_S18_gr_Y_vs_p1037","",100,979.237,2754.846);
   Graph_S18_gr_Y_vs_p1037->SetMinimum(1.166019);
   Graph_S18_gr_Y_vs_p1037->SetMaximum(1.492284);
   Graph_S18_gr_Y_vs_p1037->SetDirectory(0);
   Graph_S18_gr_Y_vs_p1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_Y_vs_p1037->SetLineColor(ci);
   Graph_S18_gr_Y_vs_p1037->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1037->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_Y_vs_p1037->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1037->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1037->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_Y_vs_p1037->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_Y_vs_p1037->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_Y_vs_p1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_Y_vs_p1037);
   
   
   TF1 *S18_fit_Y_vs_p1038 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.239,2606.767, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1038->SetFillColor(19);
   S18_fit_Y_vs_p1038->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S18_fit_Y_vs_p1038->SetLineColor(ci);
   S18_fit_Y_vs_p1038->SetLineWidth(2);
   S18_fit_Y_vs_p1038->SetChisquare(348.6795);
   S18_fit_Y_vs_p1038->SetNDF(5);
   S18_fit_Y_vs_p1038->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1038->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1038->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1038->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1038->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1038->SetParameter(0,1.410584);
   S18_fit_Y_vs_p1038->SetParError(0,0.01268184);
   S18_fit_Y_vs_p1038->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1038->SetParameter(1,-3.643096e-05);
   S18_fit_Y_vs_p1038->SetParError(1,7.871948e-06);
   S18_fit_Y_vs_p1038->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_Y_vs_p1038);
   gre->Draw("p ");
   
   TF1 *S18_fit_Y_vs_p1039 = new TF1("S18_fit_Y_vs_p","[0]+[1]*x",1127.239,2606.767, TF1::EAddToList::kNo);
   S18_fit_Y_vs_p1039->SetFillColor(19);
   S18_fit_Y_vs_p1039->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S18_fit_Y_vs_p1039->SetLineColor(ci);
   S18_fit_Y_vs_p1039->SetLineWidth(2);
   S18_fit_Y_vs_p1039->SetChisquare(348.6795);
   S18_fit_Y_vs_p1039->SetNDF(5);
   S18_fit_Y_vs_p1039->GetXaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1039->GetXaxis()->SetTitleOffset(1);
   S18_fit_Y_vs_p1039->GetXaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1039->GetYaxis()->SetLabelFont(42);
   S18_fit_Y_vs_p1039->GetYaxis()->SetTitleFont(42);
   S18_fit_Y_vs_p1039->SetParameter(0,1.410584);
   S18_fit_Y_vs_p1039->SetParError(0,0.01268184);
   S18_fit_Y_vs_p1039->SetParLimits(0,0,0);
   S18_fit_Y_vs_p1039->SetParameter(1,-3.643096e-05);
   S18_fit_Y_vs_p1039->SetParError(1,7.871948e-06);
   S18_fit_Y_vs_p1039->SetParLimits(1,0,0);
   S18_fit_Y_vs_p1039->Draw("SAME");
   
   TLegend *leg = new TLegend(0.6,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_gr_Y_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_gr_Y_vs_p","Run-1b","lpf");
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
   entry=leg->AddEntry("S18_gr_Y_vs_p","Run-1c","lpf");
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
   entry=leg->AddEntry("S18_gr_Y_vs_p","Run-1d","lpf");
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
