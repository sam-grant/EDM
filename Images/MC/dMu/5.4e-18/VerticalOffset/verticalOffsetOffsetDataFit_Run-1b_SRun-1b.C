void verticalOffsetOffsetDataFit_Run-1b_SRun-1b()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:19:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.5888,-0.61875,2977.816,0.06875001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[7] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74,
   2607.778};
   Double_t _fy1005[7] = {
   -0.2604132,
   -0.4231579,
   -0.1198555,
   0.01641377,
   -0.00211221,
   0.04664548,
   0.1411009};
   Double_t _fex1005[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[7] = {
   0.01316455,
   0.01135825,
   0.01085805,
   0.01107303,
   0.01174059,
   0.01303659,
   0.01553866};
   TGraphErrors *gre = new TGraphErrors(7,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("SRun-1b");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","SRun-1b",100,979.6115,2755.793);
   Graph_Graph1005->SetMinimum(-0.55);
   Graph_Graph1005->SetMaximum(0);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(372.7914);
   fit1006->SetNDF(5);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,-0.7267444);
   fit1006->SetParError(0,0.01910857);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.0003441644);
   fit1006->SetParError(1,1.021248e-05);
   fit1006->SetParLimits(1,0,0);
   fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1006);
   gre->Draw("ap");
   
   Double_t _fx1007[7] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239};
   Double_t _fy1007[7] = {
   -0.3631521,
   -0.3613913,
   -0.1888101,
   -0.05875643,
   -0.001628842,
   0.002780129,
   0.0156971};
   Double_t _fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[7] = {
   0.01336411,
   0.0117414,
   0.01132148,
   0.01180217,
   0.01277149,
   0.01431503,
   0.01680647};
   gre = new TGraphErrors(7,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,979.1654,2755.245);
   Graph_Graph1007->SetMinimum(-0.4174182);
   Graph_Graph1007->SetMaximum(0.07340554);
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
   
   
   TF1 *fit1008 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1008->SetFillColor(19);
   fit1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1008->SetLineColor(ci);
   fit1008->SetLineWidth(2);
   fit1008->SetChisquare(125.7187);
   fit1008->SetNDF(4);
   fit1008->GetXaxis()->SetLabelFont(42);
   fit1008->GetXaxis()->SetTitleOffset(1);
   fit1008->GetXaxis()->SetTitleFont(42);
   fit1008->GetYaxis()->SetLabelFont(42);
   fit1008->GetYaxis()->SetTitleFont(42);
   fit1008->SetParameter(0,-0.727268);
   fit1008->SetParError(0,0.02558691);
   fit1008->SetParLimits(0,0,0);
   fit1008->SetParameter(1,0.0003198354);
   fit1008->SetParError(1,1.321871e-05);
   fit1008->SetParLimits(1,0,0);
   fit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1008);
   gre->Draw("p ");
   
   TF1 *fit1009 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1009->SetFillColor(19);
   fit1009->SetFillStyle(0);
   fit1009->SetLineWidth(2);
   fit1009->SetChisquare(372.7914);
   fit1009->SetNDF(5);
   fit1009->GetXaxis()->SetLabelFont(42);
   fit1009->GetXaxis()->SetTitleOffset(1);
   fit1009->GetXaxis()->SetTitleFont(42);
   fit1009->GetYaxis()->SetLabelFont(42);
   fit1009->GetYaxis()->SetTitleFont(42);
   fit1009->SetParameter(0,-0.7267444);
   fit1009->SetParError(0,0.01910857);
   fit1009->SetParLimits(0,0,0);
   fit1009->SetParameter(1,0.0003441644);
   fit1009->SetParError(1,1.021248e-05);
   fit1009->SetParLimits(1,0,0);
   fit1009->Draw("SAME");
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1010->SetLineColor(ci);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(125.7187);
   fit1010->SetNDF(4);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,-0.727268);
   fit1010->SetParError(0,0.02558691);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.0003198354);
   fit1010->SetParError(1,1.321871e-05);
   fit1010->SetParLimits(1,0,0);
   fit1010->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.75,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","0 mm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4152513,0.94,0.5847487,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("SRun-1b");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
