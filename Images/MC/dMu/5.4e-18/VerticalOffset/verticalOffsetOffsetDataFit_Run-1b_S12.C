void verticalOffsetOffsetDataFit_Run-1b_S12()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:18:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.5888,-0.61875,2977.816,0.06875001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[7] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74,
   2607.778};
   Double_t _fy1009[7] = {
   -0.2604132,
   -0.4231579,
   -0.1198555,
   0.01641377,
   -0.00211221,
   0.04664548,
   0.1411009};
   Double_t _fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[7] = {
   0.01316455,
   0.01135825,
   0.01085805,
   0.01107303,
   0.01174059,
   0.01303659,
   0.01553866};
   TGraphErrors *gre = new TGraphErrors(7,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","S12",100,979.6115,2755.793);
   Graph_Graph1009->SetMinimum(-0.55);
   Graph_Graph1009->SetMaximum(0);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1010->SetLineColor(ci);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(372.7914);
   fit1010->SetNDF(5);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,-0.7267444);
   fit1010->SetParError(0,0.01910857);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.0003441644);
   fit1010->SetParError(1,1.021248e-05);
   fit1010->SetParLimits(1,0,0);
   fit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1010);
   gre->Draw("ap");
   
   Double_t _fx1011[7] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74,
   2607.778};
   Double_t _fy1011[7] = {
   -0.2604132,
   -0.4231579,
   -0.1198555,
   0.01641377,
   -0.00211221,
   0.04664548,
   0.1411009};
   Double_t _fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[7] = {
   0.01316455,
   0.01135825,
   0.01085805,
   0.01107303,
   0.01174059,
   0.01303659,
   0.01553866};
   gre = new TGraphErrors(7,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10091011 = new TH1F("Graph_Graph_Graph10091011","S12",100,979.6115,2755.793);
   Graph_Graph_Graph10091011->SetMinimum(-0.55);
   Graph_Graph_Graph10091011->SetMaximum(0);
   Graph_Graph_Graph10091011->SetDirectory(0);
   Graph_Graph_Graph10091011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10091011->SetLineColor(ci);
   Graph_Graph_Graph10091011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10091011->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10091011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10091011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10091011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091011->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10091011->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10091011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10091011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10091011->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10091011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10091011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10091011);
   
   
   TF1 *fit1012 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1012->SetFillColor(19);
   fit1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1012->SetLineColor(ci);
   fit1012->SetLineWidth(2);
   fit1012->SetChisquare(372.7914);
   fit1012->SetNDF(5);
   fit1012->GetXaxis()->SetLabelFont(42);
   fit1012->GetXaxis()->SetTitleOffset(1);
   fit1012->GetXaxis()->SetTitleFont(42);
   fit1012->GetYaxis()->SetLabelFont(42);
   fit1012->GetYaxis()->SetTitleFont(42);
   fit1012->SetParameter(0,-0.7267444);
   fit1012->SetParError(0,0.01910857);
   fit1012->SetParLimits(0,0,0);
   fit1012->SetParameter(1,0.0003441644);
   fit1012->SetParError(1,1.021248e-05);
   fit1012->SetParLimits(1,0,0);
   fit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1012);
   gre->Draw("p ");
   
   TF1 *fit1013 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1013->SetFillColor(19);
   fit1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1013->SetLineColor(ci);
   fit1013->SetLineWidth(2);
   fit1013->SetChisquare(372.7914);
   fit1013->SetNDF(5);
   fit1013->GetXaxis()->SetLabelFont(42);
   fit1013->GetXaxis()->SetTitleOffset(1);
   fit1013->GetXaxis()->SetTitleFont(42);
   fit1013->GetYaxis()->SetLabelFont(42);
   fit1013->GetYaxis()->SetTitleFont(42);
   fit1013->SetParameter(0,-0.7267444);
   fit1013->SetParError(0,0.01910857);
   fit1013->SetParLimits(0,0,0);
   fit1013->SetParameter(1,0.0003441644);
   fit1013->SetParError(1,1.021248e-05);
   fit1013->SetParLimits(1,0,0);
   fit1013->Draw("SAME");
   
   TF1 *fit1014 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1014->SetFillColor(19);
   fit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1014->SetLineColor(ci);
   fit1014->SetLineWidth(2);
   fit1014->SetChisquare(372.7914);
   fit1014->SetNDF(5);
   fit1014->GetXaxis()->SetLabelFont(42);
   fit1014->GetXaxis()->SetTitleOffset(1);
   fit1014->GetXaxis()->SetTitleFont(42);
   fit1014->GetYaxis()->SetLabelFont(42);
   fit1014->GetYaxis()->SetTitleFont(42);
   fit1014->SetParameter(0,-0.7267444);
   fit1014->SetParError(0,0.01910857);
   fit1014->SetParLimits(0,0,0);
   fit1014->SetParameter(1,0.0003441644);
   fit1014->SetParError(1,1.021248e-05);
   fit1014->SetParLimits(1,0,0);
   fit1014->Draw("SAME");
   
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

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
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
