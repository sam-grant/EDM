#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_AvgThetaYvsMomFitsData()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 17:03:30 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.2364,-1.1875,2977.453,0.6875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_gr_thetaY_vs_p_fx1015[7] = {
   1127.34,
   1373.07,
   1619.546,
   1866.689,
   2115.975,
   2359.684,
   2607.206};
   Double_t S18_gr_thetaY_vs_p_fy1015[7] = {
   -0.5177191,
   -0.4839606,
   -0.2798482,
   -0.142667,
   -0.09237124,
   -0.07009987,
   -0.05640051};
   Double_t S18_gr_thetaY_vs_p_fex1015[7] = {
   0.06792331,
   0.06754774,
   0.07503825,
   0.09225359,
   0.1164629,
   0.1541941,
   0.210611};
   Double_t S18_gr_thetaY_vs_p_fey1015[7] = {
   0.01562498,
   0.01372792,
   0.01324268,
   0.01369969,
   0.01465121,
   0.01611726,
   0.01823659};
   TGraphErrors *gre = new TGraphErrors(7,S18_gr_thetaY_vs_p_fx1015,S18_gr_thetaY_vs_p_fy1015,S18_gr_thetaY_vs_p_fex1015,S18_gr_thetaY_vs_p_fey1015);
   gre->SetName("S18_gr_thetaY_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_thetaY_vs_p1015 = new TH1F("Graph_S18_gr_thetaY_vs_p1015","S18",100,979.2581,2755.431);
   Graph_S18_gr_thetaY_vs_p1015->SetMinimum(-1);
   Graph_S18_gr_thetaY_vs_p1015->SetMaximum(0.5);
   Graph_S18_gr_thetaY_vs_p1015->SetDirectory(0);
   Graph_S18_gr_thetaY_vs_p1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_thetaY_vs_p1015->SetLineColor(ci);
   Graph_S18_gr_thetaY_vs_p1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_thetaY_vs_p1015->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_thetaY_vs_p1015->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1015->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_thetaY_vs_p1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_thetaY_vs_p1015->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1015->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S18_gr_thetaY_vs_p1015->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_thetaY_vs_p1015->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_thetaY_vs_p1015->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1015->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_thetaY_vs_p1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_thetaY_vs_p1015->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1015->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1015->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_thetaY_vs_p1015);
   
   
   TF1 *S18_fit_thetaY_vs_p1016 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.34,2607.206, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1016->SetFillColor(19);
   S18_fit_thetaY_vs_p1016->SetFillStyle(0);
   S18_fit_thetaY_vs_p1016->SetLineColor(4);
   S18_fit_thetaY_vs_p1016->SetLineWidth(2);
   S18_fit_thetaY_vs_p1016->SetChisquare(119.7105);
   S18_fit_thetaY_vs_p1016->SetNDF(5);
   S18_fit_thetaY_vs_p1016->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1016->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1016->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1016->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1016->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1016->SetParameter(0,-0.9076787);
   S18_fit_thetaY_vs_p1016->SetParError(0,0.02289515);
   S18_fit_thetaY_vs_p1016->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1016->SetParameter(1,0.000364363);
   S18_fit_thetaY_vs_p1016->SetParError(1,1.225732e-05);
   S18_fit_thetaY_vs_p1016->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_thetaY_vs_p1016);
   gre->Draw("ap");
   
   TF1 *S18_fit_thetaY_vs_p1017 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.34,2607.206, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1017->SetFillColor(19);
   S18_fit_thetaY_vs_p1017->SetFillStyle(0);
   S18_fit_thetaY_vs_p1017->SetLineColor(4);
   S18_fit_thetaY_vs_p1017->SetLineWidth(2);
   S18_fit_thetaY_vs_p1017->SetChisquare(119.7105);
   S18_fit_thetaY_vs_p1017->SetNDF(5);
   S18_fit_thetaY_vs_p1017->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1017->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1017->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1017->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1017->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1017->SetParameter(0,-0.9076787);
   S18_fit_thetaY_vs_p1017->SetParError(0,0.02289515);
   S18_fit_thetaY_vs_p1017->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1017->SetParameter(1,0.000364363);
   S18_fit_thetaY_vs_p1017->SetParError(1,1.225732e-05);
   S18_fit_thetaY_vs_p1017->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1017->Draw("SAME");
   
   Double_t S18_gr_thetaY_vs_p_fx1017[7] = {
   1127.172,
   1372.862,
   1619.551,
   1866.461,
   2116.155,
   2359.263,
   2607.247};
   Double_t S18_gr_thetaY_vs_p_fy1017[7] = {
   -0.4238789,
   -0.4233043,
   -0.2495366,
   -0.1226921,
   -0.06640429,
   -0.06293679,
   -0.03697452};
   Double_t S18_gr_thetaY_vs_p_fex1017[7] = {
   0.05779642,
   0.05748754,
   0.06386294,
   0.07853929,
   0.09949952,
   0.1316754,
   0.1793424};
   Double_t S18_gr_thetaY_vs_p_fey1017[7] = {
   0.01335678,
   0.01174163,
   0.01130774,
   0.01172954,
   0.01256241,
   0.0137844,
   0.01557899};
   gre = new TGraphErrors(7,S18_gr_thetaY_vs_p_fx1017,S18_gr_thetaY_vs_p_fy1017,S18_gr_thetaY_vs_p_fex1017,S18_gr_thetaY_vs_p_fey1017);
   gre->SetName("S18_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_thetaY_vs_p1017 = new TH1F("Graph_S18_gr_thetaY_vs_p1017","",100,979.0826,2755.457);
   Graph_S18_gr_thetaY_vs_p1017->SetMinimum(-0.4788197);
   Graph_S18_gr_thetaY_vs_p1017->SetMaximum(0.02018848);
   Graph_S18_gr_thetaY_vs_p1017->SetDirectory(0);
   Graph_S18_gr_thetaY_vs_p1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_thetaY_vs_p1017->SetLineColor(ci);
   Graph_S18_gr_thetaY_vs_p1017->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1017->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1017->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1017->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1017->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1017->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1017->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_thetaY_vs_p1017);
   
   
   TF1 *S18_fit_thetaY_vs_p1018 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.172,2607.247, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1018->SetFillColor(19);
   S18_fit_thetaY_vs_p1018->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S18_fit_thetaY_vs_p1018->SetLineColor(ci);
   S18_fit_thetaY_vs_p1018->SetLineWidth(2);
   S18_fit_thetaY_vs_p1018->SetChisquare(122.6109);
   S18_fit_thetaY_vs_p1018->SetNDF(5);
   S18_fit_thetaY_vs_p1018->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1018->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1018->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1018->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1018->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1018->SetParameter(0,-0.7795956);
   S18_fit_thetaY_vs_p1018->SetParError(0,0.01957019);
   S18_fit_thetaY_vs_p1018->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1018->SetParameter(1,0.0003142396);
   S18_fit_thetaY_vs_p1018->SetParError(1,1.047896e-05);
   S18_fit_thetaY_vs_p1018->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_thetaY_vs_p1018);
   gre->Draw("p ");
   
   TF1 *S18_fit_thetaY_vs_p1019 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.172,2607.247, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1019->SetFillColor(19);
   S18_fit_thetaY_vs_p1019->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   S18_fit_thetaY_vs_p1019->SetLineColor(ci);
   S18_fit_thetaY_vs_p1019->SetLineWidth(2);
   S18_fit_thetaY_vs_p1019->SetChisquare(122.6109);
   S18_fit_thetaY_vs_p1019->SetNDF(5);
   S18_fit_thetaY_vs_p1019->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1019->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1019->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1019->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1019->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1019->SetParameter(0,-0.7795956);
   S18_fit_thetaY_vs_p1019->SetParError(0,0.01957019);
   S18_fit_thetaY_vs_p1019->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1019->SetParameter(1,0.0003142396);
   S18_fit_thetaY_vs_p1019->SetParError(1,1.047896e-05);
   S18_fit_thetaY_vs_p1019->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1019->Draw("SAME");
   
   Double_t S18_gr_thetaY_vs_p_fx1019[7] = {
   1127.304,
   1372.915,
   1619.587,
   1866.591,
   2115.808,
   2359.487,
   2606.43};
   Double_t S18_gr_thetaY_vs_p_fy1019[7] = {
   -0.6200568,
   -0.5637119,
   -0.33405,
   -0.2018396,
   -0.1662918,
   -0.1155555,
   -0.09081989};
   Double_t S18_gr_thetaY_vs_p_fex1019[7] = {
   0.0477222,
   0.047559,
   0.05301859,
   0.0653003,
   0.08286297,
   0.1099903,
   0.1514961};
   Double_t S18_gr_thetaY_vs_p_fey1019[7] = {
   0.01099033,
   0.009683148,
   0.00937213,
   0.009735656,
   0.01040877,
   0.01147481,
   0.01312362};
   gre = new TGraphErrors(7,S18_gr_thetaY_vs_p_fx1019,S18_gr_thetaY_vs_p_fy1019,S18_gr_thetaY_vs_p_fex1019,S18_gr_thetaY_vs_p_fey1019);
   gre->SetName("S18_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_thetaY_vs_p1019 = new TH1F("Graph_S18_gr_thetaY_vs_p1019","",100,979.3234,2754.514);
   Graph_S18_gr_thetaY_vs_p1019->SetMinimum(-0.6863822);
   Graph_S18_gr_thetaY_vs_p1019->SetMaximum(-0.02236119);
   Graph_S18_gr_thetaY_vs_p1019->SetDirectory(0);
   Graph_S18_gr_thetaY_vs_p1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_thetaY_vs_p1019->SetLineColor(ci);
   Graph_S18_gr_thetaY_vs_p1019->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1019->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1019->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1019->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1019->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1019->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1019->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_thetaY_vs_p1019);
   
   
   TF1 *S18_fit_thetaY_vs_p1020 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.304,2606.43, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1020->SetFillColor(19);
   S18_fit_thetaY_vs_p1020->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S18_fit_thetaY_vs_p1020->SetLineColor(ci);
   S18_fit_thetaY_vs_p1020->SetLineWidth(2);
   S18_fit_thetaY_vs_p1020->SetChisquare(251.4275);
   S18_fit_thetaY_vs_p1020->SetNDF(5);
   S18_fit_thetaY_vs_p1020->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1020->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1020->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1020->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1020->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1020->SetParameter(0,-1.038736);
   S18_fit_thetaY_vs_p1020->SetParError(0,0.01622219);
   S18_fit_thetaY_vs_p1020->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1020->SetParameter(1,0.0004006697);
   S18_fit_thetaY_vs_p1020->SetParError(1,8.710316e-06);
   S18_fit_thetaY_vs_p1020->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_thetaY_vs_p1020);
   gre->Draw("p ");
   
   TF1 *S18_fit_thetaY_vs_p1021 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.304,2606.43, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1021->SetFillColor(19);
   S18_fit_thetaY_vs_p1021->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   S18_fit_thetaY_vs_p1021->SetLineColor(ci);
   S18_fit_thetaY_vs_p1021->SetLineWidth(2);
   S18_fit_thetaY_vs_p1021->SetChisquare(251.4275);
   S18_fit_thetaY_vs_p1021->SetNDF(5);
   S18_fit_thetaY_vs_p1021->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1021->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1021->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1021->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1021->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1021->SetParameter(0,-1.038736);
   S18_fit_thetaY_vs_p1021->SetParError(0,0.01622219);
   S18_fit_thetaY_vs_p1021->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1021->SetParameter(1,0.0004006697);
   S18_fit_thetaY_vs_p1021->SetParError(1,8.710316e-06);
   S18_fit_thetaY_vs_p1021->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1021->Draw("SAME");
   
   Double_t S18_gr_thetaY_vs_p_fx1021[7] = {
   1127.239,
   1372.896,
   1619.455,
   1866.55,
   2115.746,
   2359.198,
   2606.767};
   Double_t S18_gr_thetaY_vs_p_fy1021[7] = {
   -0.8893514,
   -0.8071195,
   -0.5216901,
   -0.3557173,
   -0.2694801,
   -0.2265513,
   -0.1570335};
   Double_t S18_gr_thetaY_vs_p_fex1021[7] = {
   0.03504799,
   0.03491518,
   0.03891889,
   0.04811988,
   0.06102013,
   0.08111828,
   0.1114284};
   Double_t S18_gr_thetaY_vs_p_fey1021[7] = {
   0.008080163,
   0.007128596,
   0.006898376,
   0.007183821,
   0.007687233,
   0.008498631,
   0.009665447};
   gre = new TGraphErrors(7,S18_gr_thetaY_vs_p_fx1021,S18_gr_thetaY_vs_p_fy1021,S18_gr_thetaY_vs_p_fex1021,S18_gr_thetaY_vs_p_fey1021);
   gre->SetName("S18_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_thetaY_vs_p1021 = new TH1F("Graph_S18_gr_thetaY_vs_p1021","",100,979.237,2754.846);
   Graph_S18_gr_thetaY_vs_p1021->SetMinimum(-0.9724379);
   Graph_S18_gr_thetaY_vs_p1021->SetMaximum(-0.07236168);
   Graph_S18_gr_thetaY_vs_p1021->SetDirectory(0);
   Graph_S18_gr_thetaY_vs_p1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_thetaY_vs_p1021->SetLineColor(ci);
   Graph_S18_gr_thetaY_vs_p1021->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1021->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1021->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1021->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1021->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1021->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1021->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_thetaY_vs_p1021);
   
   
   TF1 *S18_fit_thetaY_vs_p1022 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.239,2606.767, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1022->SetFillColor(19);
   S18_fit_thetaY_vs_p1022->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S18_fit_thetaY_vs_p1022->SetLineColor(ci);
   S18_fit_thetaY_vs_p1022->SetLineWidth(2);
   S18_fit_thetaY_vs_p1022->SetChisquare(620.5865);
   S18_fit_thetaY_vs_p1022->SetNDF(5);
   S18_fit_thetaY_vs_p1022->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1022->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1022->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1022->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1022->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1022->SetParameter(0,-1.4641);
   S18_fit_thetaY_vs_p1022->SetParError(0,0.0119449);
   S18_fit_thetaY_vs_p1022->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1022->SetParameter(1,0.0005423412);
   S18_fit_thetaY_vs_p1022->SetParError(1,6.418501e-06);
   S18_fit_thetaY_vs_p1022->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_thetaY_vs_p1022);
   gre->Draw("p ");
   
   TF1 *S18_fit_thetaY_vs_p1023 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1127.239,2606.767, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1023->SetFillColor(19);
   S18_fit_thetaY_vs_p1023->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   S18_fit_thetaY_vs_p1023->SetLineColor(ci);
   S18_fit_thetaY_vs_p1023->SetLineWidth(2);
   S18_fit_thetaY_vs_p1023->SetChisquare(620.5865);
   S18_fit_thetaY_vs_p1023->SetNDF(5);
   S18_fit_thetaY_vs_p1023->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1023->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1023->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1023->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1023->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1023->SetParameter(0,-1.4641);
   S18_fit_thetaY_vs_p1023->SetParError(0,0.0119449);
   S18_fit_thetaY_vs_p1023->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1023->SetParameter(1,0.0005423412);
   S18_fit_thetaY_vs_p1023->SetParError(1,6.418501e-06);
   S18_fit_thetaY_vs_p1023->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1023->Draw("SAME");
   
   TLegend *leg = new TLegend(0.11,0.6,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_gr_thetaY_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_gr_thetaY_vs_p","Run-1b","lpf");
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
   entry=leg->AddEntry("S18_gr_thetaY_vs_p","Run-1c","lpf");
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
   entry=leg->AddEntry("S18_gr_thetaY_vs_p","Run-1d","lpf");
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
