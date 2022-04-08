void verticalOffsetOffsetDataFit_Run-1a_SRun-1a()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:19:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.6619,-0.61875,2977.557,0.06875001);
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
   gre->SetTitle("SRun-1a");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","SRun-1a",100,979.6514,2755.567);
   Graph_Graph1001->SetMinimum(-0.55);
   Graph_Graph1001->SetMaximum(0);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *fit1002 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1002->SetFillColor(19);
   fit1002->SetFillStyle(0);
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
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205};
   Double_t _fy1003[7] = {
   -0.4474794,
   -0.4138531,
   -0.2093635,
   -0.07458984,
   -0.01955939,
   0.006714371,
   0.01347812};
   Double_t _fex1003[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[7] = {
   0.0156335,
   0.01372789,
   0.01326113,
   0.01378129,
   0.01490272,
   0.01673893,
   0.01964262};
   gre = new TGraphErrors(7,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,979.3537,2755.191);
   Graph_Graph1003->SetMinimum(-0.5127362);
   Graph_Graph1003->SetMaximum(0.0827441);
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
   
   
   TF1 *fit1004 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1004->SetFillColor(19);
   fit1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1004->SetLineColor(ci);
   fit1004->SetLineWidth(2);
   fit1004->SetChisquare(110.7639);
   fit1004->SetNDF(4);
   fit1004->GetXaxis()->SetLabelFont(42);
   fit1004->GetXaxis()->SetTitleOffset(1);
   fit1004->GetXaxis()->SetTitleFont(42);
   fit1004->GetYaxis()->SetLabelFont(42);
   fit1004->GetYaxis()->SetTitleFont(42);
   fit1004->SetParameter(0,-0.8223826);
   fit1004->SetParError(0,0.02992371);
   fit1004->SetParLimits(0,0,0);
   fit1004->SetParameter(1,0.0003592212);
   fit1004->SetParError(1,1.545551e-05);
   fit1004->SetParLimits(1,0,0);
   fit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1004);
   gre->Draw("p ");
   
   TF1 *fit1005 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1005->SetFillColor(19);
   fit1005->SetFillStyle(0);
   fit1005->SetLineWidth(2);
   fit1005->SetChisquare(299.5903);
   fit1005->SetNDF(5);
   fit1005->GetXaxis()->SetLabelFont(42);
   fit1005->GetXaxis()->SetTitleOffset(1);
   fit1005->GetXaxis()->SetTitleFont(42);
   fit1005->GetYaxis()->SetLabelFont(42);
   fit1005->GetYaxis()->SetTitleFont(42);
   fit1005->SetParameter(0,-0.7633339);
   fit1005->SetParError(0,0.02237659);
   fit1005->SetParLimits(0,0,0);
   fit1005->SetParameter(1,0.0003514854);
   fit1005->SetParError(1,1.19508e-05);
   fit1005->SetParLimits(1,0,0);
   fit1005->Draw("SAME");
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1006->SetLineColor(ci);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(110.7639);
   fit1006->SetNDF(4);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,-0.8223826);
   fit1006->SetParError(0,0.02992371);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.0003592212);
   fit1006->SetParError(1,1.545551e-05);
   fit1006->SetParLimits(1,0,0);
   fit1006->Draw("SAME");
   
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
   
   TPaveText *pt = new TPaveText(0.4165075,0.94,0.5834925,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("SRun-1a");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
