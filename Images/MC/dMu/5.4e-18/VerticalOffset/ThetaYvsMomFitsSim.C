#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ThetaYvsMomFitsSim()
{
//=========Macro generated from canvas: c/
//=========  (Fri Oct  7 17:03:30 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(749.8357,-0.7,2988.409,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_gr_thetaY_vs_p_fx1001[7] = {
   1123.015,
   1371.495,
   1620.719,
   1868.038,
   2116.575,
   2363.184,
   2615.099};
   Double_t S0_gr_thetaY_vs_p_fy1001[7] = {
   -0.1931351,
   -0.1254705,
   -0.1721689,
   -0.1192241,
   -0.05999456,
   -0.05141376,
   -0.02666359};
   Double_t S0_gr_thetaY_vs_p_fex1001[7] = {
   0.08358843,
   0.08890004,
   0.09811305,
   0.1126672,
   0.1361522,
   0.1705255,
   0.2138787};
   Double_t S0_gr_thetaY_vs_p_fey1001[7] = {
   0.02088801,
   0.01904909,
   0.01811181,
   0.01782501,
   0.01826586,
   0.01893755,
   0.01889965};
   TGraphErrors *gre = new TGraphErrors(7,S0_gr_thetaY_vs_p_fx1001,S0_gr_thetaY_vs_p_fy1001,S0_gr_thetaY_vs_p_fex1001,S0_gr_thetaY_vs_p_fey1001);
   gre->SetName("S0_gr_thetaY_vs_p");
   gre->SetTitle(";Truth decay vertex momentum [MeV];Truth #LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_gr_thetaY_vs_p1001 = new TH1F("Graph_S0_gr_thetaY_vs_p1001","",100,973.6931,2764.551);
   Graph_S0_gr_thetaY_vs_p1001->SetMinimum(-0.6);
   Graph_S0_gr_thetaY_vs_p1001->SetMaximum(0.2);
   Graph_S0_gr_thetaY_vs_p1001->SetDirectory(0);
   Graph_S0_gr_thetaY_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_gr_thetaY_vs_p1001->SetLineColor(ci);
   Graph_S0_gr_thetaY_vs_p1001->GetXaxis()->SetTitle("Truth decay vertex momentum [MeV]");
   Graph_S0_gr_thetaY_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S0_gr_thetaY_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S0_gr_thetaY_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_gr_thetaY_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_gr_thetaY_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S0_gr_thetaY_vs_p1001->GetYaxis()->SetTitle("Truth #LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S0_gr_thetaY_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S0_gr_thetaY_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_gr_thetaY_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S0_gr_thetaY_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_gr_thetaY_vs_p1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0_gr_thetaY_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S0_gr_thetaY_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S0_gr_thetaY_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0_gr_thetaY_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_gr_thetaY_vs_p1001);
   
   
   TF1 *S0_fit_thetaY_vs_p1002 = new TF1("S0_fit_thetaY_vs_p","[0]+[1]*x",1123.015,2615.099, TF1::EAddToList::kNo);
   S0_fit_thetaY_vs_p1002->SetFillColor(19);
   S0_fit_thetaY_vs_p1002->SetFillStyle(0);
   S0_fit_thetaY_vs_p1002->SetLineWidth(2);
   S0_fit_thetaY_vs_p1002->SetChisquare(9.674391);
   S0_fit_thetaY_vs_p1002->SetNDF(5);
   S0_fit_thetaY_vs_p1002->GetXaxis()->SetLabelFont(42);
   S0_fit_thetaY_vs_p1002->GetXaxis()->SetTitleOffset(1);
   S0_fit_thetaY_vs_p1002->GetXaxis()->SetTitleFont(42);
   S0_fit_thetaY_vs_p1002->GetYaxis()->SetLabelFont(42);
   S0_fit_thetaY_vs_p1002->GetYaxis()->SetTitleFont(42);
   S0_fit_thetaY_vs_p1002->SetParameter(0,-0.3123477);
   S0_fit_thetaY_vs_p1002->SetParError(0,0.02883521);
   S0_fit_thetaY_vs_p1002->SetParLimits(0,0,0);
   S0_fit_thetaY_vs_p1002->SetParameter(1,0.0001097345);
   S0_fit_thetaY_vs_p1002->SetParError(1,1.480589e-05);
   S0_fit_thetaY_vs_p1002->SetParLimits(1,0,0);
   S0_fit_thetaY_vs_p1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(S0_fit_thetaY_vs_p1002);
   gre->Draw("ap");
   
   Double_t S12_gr_thetaY_vs_p_fx1003[7] = {
   1123.157,
   1371.168,
   1620.209,
   1866.979,
   2114.945,
   2362.649,
   2614.189};
   Double_t S12_gr_thetaY_vs_p_fy1003[7] = {
   -0.4493299,
   -0.385384,
   -0.3667789,
   -0.2334841,
   -0.1880839,
   -0.2095453,
   -0.1475466};
   Double_t S12_gr_thetaY_vs_p_fex1003[7] = {
   0.05741904,
   0.06114667,
   0.06750951,
   0.07880495,
   0.09848062,
   0.1287367,
   0.1585777};
   Double_t S12_gr_thetaY_vs_p_fey1003[7] = {
   0.01430193,
   0.01305374,
   0.01242489,
   0.01247921,
   0.01318161,
   0.01421315,
   0.01414239};
   gre = new TGraphErrors(7,S12_gr_thetaY_vs_p_fx1003,S12_gr_thetaY_vs_p_fy1003,S12_gr_thetaY_vs_p_fex1003,S12_gr_thetaY_vs_p_fey1003);
   gre->SetName("S12_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_thetaY_vs_p1003 = new TH1F("Graph_S12_gr_thetaY_vs_p1003","",100,973.9745,2763.472);
   Graph_S12_gr_thetaY_vs_p1003->SetMinimum(-0.4966546);
   Graph_S12_gr_thetaY_vs_p1003->SetMaximum(-0.1003815);
   Graph_S12_gr_thetaY_vs_p1003->SetDirectory(0);
   Graph_S12_gr_thetaY_vs_p1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_thetaY_vs_p1003->SetLineColor(ci);
   Graph_S12_gr_thetaY_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1003->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_thetaY_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_thetaY_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_thetaY_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_thetaY_vs_p1003);
   
   
   TF1 *S12_fit_thetaY_vs_p1004 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1123.157,2614.189, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1004->SetFillColor(19);
   S12_fit_thetaY_vs_p1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   S12_fit_thetaY_vs_p1004->SetLineColor(ci);
   S12_fit_thetaY_vs_p1004->SetLineWidth(2);
   S12_fit_thetaY_vs_p1004->SetChisquare(40.28941);
   S12_fit_thetaY_vs_p1004->SetNDF(5);
   S12_fit_thetaY_vs_p1004->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1004->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1004->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1004->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1004->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1004->SetParameter(0,-0.6713623);
   S12_fit_thetaY_vs_p1004->SetParError(0,0.02028776);
   S12_fit_thetaY_vs_p1004->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1004->SetParameter(1,0.0002088142);
   S12_fit_thetaY_vs_p1004->SetParError(1,1.060209e-05);
   S12_fit_thetaY_vs_p1004->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit_thetaY_vs_p1004);
   gre->Draw("p ");
   
   Double_t S18_gr_thetaY_vs_p_fx1005[7] = {
   1123.011,
   1370.957,
   1619.775,
   1866.603,
   2115.049,
   2363.385,
   2612.036};
   Double_t S18_gr_thetaY_vs_p_fy1005[7] = {
   -0.3655042,
   -0.2707336,
   -0.2548287,
   -0.2201752,
   -0.1213478,
   -0.1310975,
   -0.1040198};
   Double_t S18_gr_thetaY_vs_p_fex1005[7] = {
   0.05737492,
   0.06148554,
   0.06813682,
   0.08042809,
   0.1007996,
   0.1326146,
   0.1588373};
   Double_t S18_gr_thetaY_vs_p_fey1005[7] = {
   0.01420668,
   0.01308544,
   0.01252691,
   0.01269017,
   0.01345579,
   0.01457528,
   0.01430881};
   gre = new TGraphErrors(7,S18_gr_thetaY_vs_p_fx1005,S18_gr_thetaY_vs_p_fy1005,S18_gr_thetaY_vs_p_fex1005,S18_gr_thetaY_vs_p_fey1005);
   gre->SetName("S18_gr_thetaY_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_thetaY_vs_p1005 = new TH1F("Graph_S18_gr_thetaY_vs_p1005","",100,974.0297,2761.119);
   Graph_S18_gr_thetaY_vs_p1005->SetMinimum(-0.4087109);
   Graph_S18_gr_thetaY_vs_p1005->SetMaximum(-0.06071094);
   Graph_S18_gr_thetaY_vs_p1005->SetDirectory(0);
   Graph_S18_gr_thetaY_vs_p1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_thetaY_vs_p1005->SetLineColor(ci);
   Graph_S18_gr_thetaY_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1005->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_thetaY_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_thetaY_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_thetaY_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_thetaY_vs_p1005);
   
   
   TF1 *S18_fit_thetaY_vs_p1006 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1123.011,2612.036, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1006->SetFillColor(19);
   S18_fit_thetaY_vs_p1006->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   S18_fit_thetaY_vs_p1006->SetLineColor(ci);
   S18_fit_thetaY_vs_p1006->SetLineWidth(2);
   S18_fit_thetaY_vs_p1006->SetChisquare(22.18044);
   S18_fit_thetaY_vs_p1006->SetNDF(5);
   S18_fit_thetaY_vs_p1006->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1006->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1006->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1006->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1006->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1006->SetParameter(0,-0.5304012);
   S18_fit_thetaY_vs_p1006->SetParError(0,0.02036659);
   S18_fit_thetaY_vs_p1006->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1006->SetParameter(1,0.0001722409);
   S18_fit_thetaY_vs_p1006->SetParError(1,1.068282e-05);
   S18_fit_thetaY_vs_p1006->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit_thetaY_vs_p1006);
   gre->Draw("p ");
   
   TF1 *S0_fit_thetaY_vs_p1007 = new TF1("S0_fit_thetaY_vs_p","[0]+[1]*x",1123.015,2615.099, TF1::EAddToList::kNo);
   S0_fit_thetaY_vs_p1007->SetFillColor(19);
   S0_fit_thetaY_vs_p1007->SetFillStyle(0);
   S0_fit_thetaY_vs_p1007->SetLineWidth(2);
   S0_fit_thetaY_vs_p1007->SetChisquare(9.674391);
   S0_fit_thetaY_vs_p1007->SetNDF(5);
   S0_fit_thetaY_vs_p1007->GetXaxis()->SetLabelFont(42);
   S0_fit_thetaY_vs_p1007->GetXaxis()->SetTitleOffset(1);
   S0_fit_thetaY_vs_p1007->GetXaxis()->SetTitleFont(42);
   S0_fit_thetaY_vs_p1007->GetYaxis()->SetLabelFont(42);
   S0_fit_thetaY_vs_p1007->GetYaxis()->SetTitleFont(42);
   S0_fit_thetaY_vs_p1007->SetParameter(0,-0.3123477);
   S0_fit_thetaY_vs_p1007->SetParError(0,0.02883521);
   S0_fit_thetaY_vs_p1007->SetParLimits(0,0,0);
   S0_fit_thetaY_vs_p1007->SetParameter(1,0.0001097345);
   S0_fit_thetaY_vs_p1007->SetParError(1,1.480589e-05);
   S0_fit_thetaY_vs_p1007->SetParLimits(1,0,0);
   S0_fit_thetaY_vs_p1007->Draw("SAME");
   
   TF1 *S12_fit_thetaY_vs_p1008 = new TF1("S12_fit_thetaY_vs_p","[0]+[1]*x",1123.157,2614.189, TF1::EAddToList::kNo);
   S12_fit_thetaY_vs_p1008->SetFillColor(19);
   S12_fit_thetaY_vs_p1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   S12_fit_thetaY_vs_p1008->SetLineColor(ci);
   S12_fit_thetaY_vs_p1008->SetLineWidth(2);
   S12_fit_thetaY_vs_p1008->SetChisquare(40.28941);
   S12_fit_thetaY_vs_p1008->SetNDF(5);
   S12_fit_thetaY_vs_p1008->GetXaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1008->GetXaxis()->SetTitleOffset(1);
   S12_fit_thetaY_vs_p1008->GetXaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1008->GetYaxis()->SetLabelFont(42);
   S12_fit_thetaY_vs_p1008->GetYaxis()->SetTitleFont(42);
   S12_fit_thetaY_vs_p1008->SetParameter(0,-0.6713623);
   S12_fit_thetaY_vs_p1008->SetParError(0,0.02028776);
   S12_fit_thetaY_vs_p1008->SetParLimits(0,0,0);
   S12_fit_thetaY_vs_p1008->SetParameter(1,0.0002088142);
   S12_fit_thetaY_vs_p1008->SetParError(1,1.060209e-05);
   S12_fit_thetaY_vs_p1008->SetParLimits(1,0,0);
   S12_fit_thetaY_vs_p1008->Draw("SAME");
   
   TF1 *S18_fit_thetaY_vs_p1009 = new TF1("S18_fit_thetaY_vs_p","[0]+[1]*x",1123.011,2612.036, TF1::EAddToList::kNo);
   S18_fit_thetaY_vs_p1009->SetFillColor(19);
   S18_fit_thetaY_vs_p1009->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   S18_fit_thetaY_vs_p1009->SetLineColor(ci);
   S18_fit_thetaY_vs_p1009->SetLineWidth(2);
   S18_fit_thetaY_vs_p1009->SetChisquare(22.18044);
   S18_fit_thetaY_vs_p1009->SetNDF(5);
   S18_fit_thetaY_vs_p1009->GetXaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1009->GetXaxis()->SetTitleOffset(1);
   S18_fit_thetaY_vs_p1009->GetXaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1009->GetYaxis()->SetLabelFont(42);
   S18_fit_thetaY_vs_p1009->GetYaxis()->SetTitleFont(42);
   S18_fit_thetaY_vs_p1009->SetParameter(0,-0.5304012);
   S18_fit_thetaY_vs_p1009->SetParError(0,0.02036659);
   S18_fit_thetaY_vs_p1009->SetParLimits(0,0,0);
   S18_fit_thetaY_vs_p1009->SetParameter(1,0.0001722409);
   S18_fit_thetaY_vs_p1009->SetParError(1,1.068282e-05);
   S18_fit_thetaY_vs_p1009->SetParLimits(1,0,0);
   S18_fit_thetaY_vs_p1009->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.75,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_gr_thetaY_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12_gr_thetaY_vs_p","S12","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_gr_thetaY_vs_p","S18","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
