void verticalOffsetOffsetDataFit_Run-1c_SRun-1c()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:19:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.517,-0.61875,2977.544,0.06875001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[7] = {
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688,
   2607.54};
   Double_t _fy1009[7] = {
   -0.4028806,
   -0.5342711,
   -0.2022927,
   -0.03165616,
   -0.02058869,
   0.03476062,
   0.1470785};
   Double_t _fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[7] = {
   0.01074611,
   0.009308063,
   0.008917926,
   0.009086981,
   0.009666378,
   0.01076934,
   0.0129109};
   TGraphErrors *gre = new TGraphErrors(7,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("SRun-1c");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","SRun-1c",100,979.5197,2755.541);
   Graph_Graph1009->SetMinimum(-0.55);
   Graph_Graph1009->SetMaximum(0);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(588.8358);
   fit1010->SetNDF(5);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,-0.9802503);
   fit1010->SetParError(0,0.01569678);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.0004495605);
   fit1010->SetParError(1,8.407194e-06);
   fit1010->SetParLimits(1,0,0);
   fit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1010);
   gre->Draw("ap");
   
   Double_t _fx1011[7] = {
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1011[7] = {
   -0.515818,
   -0.4586708,
   -0.2290593,
   -0.09722382,
   -0.05849442,
   -0.005661826,
   0.02117755};
   Double_t _fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[7] = {
   0.01099636,
   0.00968276,
   0.009383729,
   0.009791495,
   0.01057808,
   0.01190168,
   0.01416838};
   gre = new TGraphErrors(7,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,979.3911,2754.341);
   Graph_Graph1011->SetMinimum(-0.5830303);
   Graph_Graph1011->SetMaximum(0.09156195);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *fit1012 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1012->SetFillColor(19);
   fit1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1012->SetLineColor(ci);
   fit1012->SetLineWidth(2);
   fit1012->SetChisquare(221.1691);
   fit1012->SetNDF(4);
   fit1012->GetXaxis()->SetLabelFont(42);
   fit1012->GetXaxis()->SetTitleOffset(1);
   fit1012->GetXaxis()->SetTitleFont(42);
   fit1012->GetYaxis()->SetLabelFont(42);
   fit1012->GetYaxis()->SetTitleFont(42);
   fit1012->SetParameter(0,-0.9025367);
   fit1012->SetParError(0,0.02125949);
   fit1012->SetParLimits(0,0,0);
   fit1012->SetParameter(1,0.0003884853);
   fit1012->SetParError(1,1.100532e-05);
   fit1012->SetParLimits(1,0,0);
   fit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1012);
   gre->Draw("p ");
   
   TF1 *fit1013 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1013->SetFillColor(19);
   fit1013->SetFillStyle(0);
   fit1013->SetLineWidth(2);
   fit1013->SetChisquare(588.8358);
   fit1013->SetNDF(5);
   fit1013->GetXaxis()->SetLabelFont(42);
   fit1013->GetXaxis()->SetTitleOffset(1);
   fit1013->GetXaxis()->SetTitleFont(42);
   fit1013->GetYaxis()->SetLabelFont(42);
   fit1013->GetYaxis()->SetTitleFont(42);
   fit1013->SetParameter(0,-0.9802503);
   fit1013->SetParError(0,0.01569678);
   fit1013->SetParLimits(0,0,0);
   fit1013->SetParameter(1,0.0004495605);
   fit1013->SetParError(1,8.407194e-06);
   fit1013->SetParLimits(1,0,0);
   fit1013->Draw("SAME");
   
   TF1 *fit1014 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1014->SetFillColor(19);
   fit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1014->SetLineColor(ci);
   fit1014->SetLineWidth(2);
   fit1014->SetChisquare(221.1691);
   fit1014->SetNDF(4);
   fit1014->GetXaxis()->SetLabelFont(42);
   fit1014->GetXaxis()->SetTitleOffset(1);
   fit1014->GetXaxis()->SetTitleFont(42);
   fit1014->GetYaxis()->SetLabelFont(42);
   fit1014->GetYaxis()->SetTitleFont(42);
   fit1014->SetParameter(0,-0.9025367);
   fit1014->SetParError(0,0.02125949);
   fit1014->SetParLimits(0,0,0);
   fit1014->SetParameter(1,0.0003884853);
   fit1014->SetParError(1,1.100532e-05);
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
   TText *pt_LaTex = pt->AddText("SRun-1c");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
