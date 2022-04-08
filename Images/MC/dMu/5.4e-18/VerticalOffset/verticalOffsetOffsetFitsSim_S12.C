void verticalOffsetOffsetFitsSim_S12()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 21:29:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(750.1979,-0.61875,2987.57,0.06875001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[7] = {
   1123.093,
   1371.258,
   1620.035,
   1867.297,
   2114.967,
   2362.535,
   2614.675};
   Double_t _fy1001[7] = {
   -0.4683432,
   -0.3857053,
   -0.349376,
   -0.2533198,
   -0.2007997,
   -0.1622337,
   -0.1329562};
   Double_t _fex1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[7] = {
   0.02168767,
   0.01991033,
   0.01896092,
   0.01906231,
   0.0203877,
   0.02265094,
   0.0234908};
   TGraphErrors *gre = new TGraphErrors(7,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","S12",100,973.9351,2763.833);
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
   
   
   TF1 *fit1002 = new TF1("fit","[0]+[1]*x",973.9351,2763.833, TF1::EAddToList::kNo);
   fit1002->SetFillColor(19);
   fit1002->SetFillStyle(0);
   fit1002->SetLineWidth(2);
   fit1002->SetChisquare(5.414);
   fit1002->SetNDF(5);
   fit1002->GetXaxis()->SetLabelFont(42);
   fit1002->GetXaxis()->SetTitleOffset(1);
   fit1002->GetXaxis()->SetTitleFont(42);
   fit1002->GetYaxis()->SetLabelFont(42);
   fit1002->GetYaxis()->SetTitleFont(42);
   fit1002->SetParameter(0,-0.712214);
   fit1002->SetParError(0,0.03155807);
   fit1002->SetParLimits(0,0,0);
   fit1002->SetParameter(1,0.0002328066);
   fit1002->SetParError(1,1.670467e-05);
   fit1002->SetParLimits(1,0,0);
   fit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1002);
   gre->Draw("ap");
   
   Double_t _fx1003[7] = {
   1123.181,
   1371.166,
   1620.018,
   1867.098,
   2114.802,
   2362.547,
   2614.683};
   Double_t _fy1003[7] = {
   -0.4742936,
   -0.3684396,
   -0.3400718,
   -0.2487959,
   -0.1900544,
   -0.1437723,
   -0.116969};
   Double_t _fex1003[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[7] = {
   0.02178515,
   0.02002518,
   0.01907626,
   0.01920941,
   0.02059458,
   0.02287401,
   0.02371943};
   gre = new TGraphErrors(7,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,974.0304,2763.833);
   Graph_Graph1003->SetMinimum(-0.5363617);
   Graph_Graph1003->SetMaximum(-0.05296659);
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
   
   
   TF1 *fit1004 = new TF1("fit","[0]+[1]*x",974.0304,2763.833, TF1::EAddToList::kNo);
   fit1004->SetFillColor(19);
   fit1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1004->SetLineColor(ci);
   fit1004->SetLineWidth(2);
   fit1004->SetChisquare(6.204669);
   fit1004->SetNDF(5);
   fit1004->GetXaxis()->SetLabelFont(42);
   fit1004->GetXaxis()->SetTitleOffset(1);
   fit1004->GetXaxis()->SetTitleFont(42);
   fit1004->GetYaxis()->SetLabelFont(42);
   fit1004->GetYaxis()->SetTitleFont(42);
   fit1004->SetParameter(0,-0.7195474);
   fit1004->SetParError(0,0.03176567);
   fit1004->SetParLimits(0,0,0);
   fit1004->SetParameter(1,0.0002421595);
   fit1004->SetParError(1,1.683058e-05);
   fit1004->SetParLimits(1,0,0);
   fit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1004);
   gre->Draw("p ");
   
   TF1 *fit1005 = new TF1("fit","[0]+[1]*x",973.9351,2763.833, TF1::EAddToList::kNo);
   fit1005->SetFillColor(19);
   fit1005->SetFillStyle(0);
   fit1005->SetLineWidth(2);
   fit1005->SetChisquare(5.414);
   fit1005->SetNDF(5);
   fit1005->GetXaxis()->SetLabelFont(42);
   fit1005->GetXaxis()->SetTitleOffset(1);
   fit1005->GetXaxis()->SetTitleFont(42);
   fit1005->GetYaxis()->SetLabelFont(42);
   fit1005->GetYaxis()->SetTitleFont(42);
   fit1005->SetParameter(0,-0.712214);
   fit1005->SetParError(0,0.03155807);
   fit1005->SetParLimits(0,0,0);
   fit1005->SetParameter(1,0.0002328066);
   fit1005->SetParError(1,1.670467e-05);
   fit1005->SetParLimits(1,0,0);
   fit1005->Draw("SAME");
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",974.0304,2763.833, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1006->SetLineColor(ci);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(6.204669);
   fit1006->SetNDF(5);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,-0.7195474);
   fit1006->SetParError(0,0.03176567);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.0002421595);
   fit1006->SetParError(1,1.683058e-05);
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
   entry=leg->AddEntry("","#plus1 mm","lpf");
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
