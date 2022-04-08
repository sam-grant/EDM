void verticalOffsetFits_S12()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 16:44:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.6619,-1.25,2977.557,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[7] = {
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992,
   2607.574};
   Double_t _fy1001[7] = {
   -0.2889199,
   -0.4531644,
   -0.1607922,
   0.01181593,
   -0.01040017,
   0.03403629,
   0.09496397};
   Double_t _fex1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[7] = {
   0.01543622,
   0.01332269,
   0.0127284,
   0.01295256,
   0.01374282,
   0.01527657,
   0.0180986};
   TGraphErrors *gre = new TGraphErrors(7,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,979.6514,2755.567);
   Graph_Graph1001->SetMinimum(-1);
   Graph_Graph1001->SetMaximum(1);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *fit1002 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1002->SetFillColor(19);
   fit1002->SetFillStyle(0);
   fit1002->SetLineColor(2);
   fit1002->SetLineWidth(2);
   fit1002->SetChisquare(299.5903);
   fit1002->SetNDF(5);
   fit1002->GetXaxis()->SetLabelFont(42);
   fit1002->GetXaxis()->SetTitleOffset(1);
   fit1002->GetXaxis()->SetTitleFont(42);
   fit1002->GetYaxis()->SetLabelFont(42);
   fit1002->GetYaxis()->SetTitleFont(42);
   fit1002->SetParameter(0,-0.7633339);
   fit1002->SetParError(0,0.02237659);
   fit1002->SetParLimits(0,0,0);
   fit1002->SetParameter(1,0.0003514854);
   fit1002->SetParError(1,1.19508e-05);
   fit1002->SetParLimits(1,0,0);
   fit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1002);
   gre->Draw("ap");
   
   Double_t _fx1003[7] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74,
   2607.778};
   Double_t _fy1003[7] = {
   -0.2604132,
   -0.4231579,
   -0.1198555,
   0.01641377,
   -0.00211221,
   0.04664548,
   0.1411009};
   Double_t _fex1003[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[7] = {
   0.01316455,
   0.01135825,
   0.01085805,
   0.01107303,
   0.01174059,
   0.01303659,
   0.01553866};
   gre = new TGraphErrors(7,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,979.6115,2755.793);
   Graph_Graph1003->SetMinimum(-0.4936317);
   Graph_Graph1003->SetMaximum(0.2157551);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *fit1004 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1004->SetFillColor(19);
   fit1004->SetFillStyle(0);
   fit1004->SetLineColor(2);
   fit1004->SetLineWidth(2);
   fit1004->SetChisquare(372.7914);
   fit1004->SetNDF(5);
   fit1004->GetXaxis()->SetLabelFont(42);
   fit1004->GetXaxis()->SetTitleOffset(1);
   fit1004->GetXaxis()->SetTitleFont(42);
   fit1004->GetYaxis()->SetLabelFont(42);
   fit1004->GetYaxis()->SetTitleFont(42);
   fit1004->SetParameter(0,-0.7267444);
   fit1004->SetParError(0,0.01910857);
   fit1004->SetParLimits(0,0,0);
   fit1004->SetParameter(1,0.0003441644);
   fit1004->SetParError(1,1.021248e-05);
   fit1004->SetParLimits(1,0,0);
   fit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1004);
   gre->Draw("p ");
   
   Double_t _fx1005[7] = {
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688,
   2607.54};
   Double_t _fy1005[7] = {
   -0.4028806,
   -0.5342711,
   -0.2022927,
   -0.03165616,
   -0.02058869,
   0.03476062,
   0.1470785};
   Double_t _fex1005[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[7] = {
   0.01074611,
   0.009308063,
   0.008917926,
   0.009086981,
   0.009666378,
   0.01076934,
   0.0129109};
   gre = new TGraphErrors(7,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,979.5197,2755.541);
   Graph_Graph1005->SetMinimum(-0.613936);
   Graph_Graph1005->SetMaximum(0.2303463);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);
   fit1006->SetLineColor(2);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(588.8358);
   fit1006->SetNDF(5);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,-0.9802503);
   fit1006->SetParError(0,0.01569678);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.0004495605);
   fit1006->SetParError(1,8.407194e-06);
   fit1006->SetParLimits(1,0,0);
   fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1006);
   gre->Draw("p ");
   
   Double_t _fx1007[7] = {
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1007[7] = {
   -0.6163227,
   -0.6749196,
   -0.3063854,
   -0.1170644,
   -0.07543333,
   -0.01417044,
   0.1573687};
   Double_t _fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[7] = {
   0.007833952,
   0.00678342,
   0.00649775,
   0.006644034,
   0.007061917,
   0.007862949,
   0.009373177};
   gre = new TGraphErrors(7,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,979.4085,2756.285);
   Graph_Graph1007->SetMinimum(-0.7665475);
   Graph_Graph1007->SetMaximum(0.2515864);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *fit1008 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1008->SetFillColor(19);
   fit1008->SetFillStyle(0);
   fit1008->SetLineColor(2);
   fit1008->SetLineWidth(2);
   fit1008->SetChisquare(1073.23);
   fit1008->SetNDF(5);
   fit1008->GetXaxis()->SetLabelFont(42);
   fit1008->GetXaxis()->SetTitleOffset(1);
   fit1008->GetXaxis()->SetTitleFont(42);
   fit1008->GetYaxis()->SetLabelFont(42);
   fit1008->GetYaxis()->SetTitleFont(42);
   fit1008->SetParameter(0,-1.308422);
   fit1008->SetParError(0,0.01143304);
   fit1008->SetParLimits(0,0,0);
   fit1008->SetParameter(1,0.0005774157);
   fit1008->SetParError(1,6.122824e-06);
   fit1008->SetParLimits(1,0,0);
   fit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1008);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.11,0.69,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
