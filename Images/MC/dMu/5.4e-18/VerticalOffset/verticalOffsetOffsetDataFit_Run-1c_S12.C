void verticalOffsetOffsetDataFit_Run-1c_S12()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:18:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.517,-0.61875,2977.544,0.06875001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1017[7] = {
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688,
   2607.54};
   Double_t _fy1017[7] = {
   -0.4028806,
   -0.5342711,
   -0.2022927,
   -0.03165616,
   -0.02058869,
   0.03476062,
   0.1470785};
   Double_t _fex1017[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[7] = {
   0.01074611,
   0.009308063,
   0.008917926,
   0.009086981,
   0.009666378,
   0.01076934,
   0.0129109};
   TGraphErrors *gre = new TGraphErrors(7,_fx1017,_fy1017,_fex1017,_fey1017);
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
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","S12",100,979.5197,2755.541);
   Graph_Graph1017->SetMinimum(-0.55);
   Graph_Graph1017->SetMaximum(0);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1017->GetXaxis()->CenterTitle(true);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1017->GetYaxis()->CenterTitle(true);
   Graph_Graph1017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *fit1018 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1018->SetFillColor(19);
   fit1018->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1018->SetLineColor(ci);
   fit1018->SetLineWidth(2);
   fit1018->SetChisquare(588.8358);
   fit1018->SetNDF(5);
   fit1018->GetXaxis()->SetLabelFont(42);
   fit1018->GetXaxis()->SetTitleOffset(1);
   fit1018->GetXaxis()->SetTitleFont(42);
   fit1018->GetYaxis()->SetLabelFont(42);
   fit1018->GetYaxis()->SetTitleFont(42);
   fit1018->SetParameter(0,-0.9802503);
   fit1018->SetParError(0,0.01569678);
   fit1018->SetParLimits(0,0,0);
   fit1018->SetParameter(1,0.0004495605);
   fit1018->SetParError(1,8.407194e-06);
   fit1018->SetParLimits(1,0,0);
   fit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1018);
   gre->Draw("ap");
   
   Double_t _fx1019[7] = {
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688,
   2607.54};
   Double_t _fy1019[7] = {
   -0.4028806,
   -0.5342711,
   -0.2022927,
   -0.03165616,
   -0.02058869,
   0.03476062,
   0.1470785};
   Double_t _fex1019[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[7] = {
   0.01074611,
   0.009308063,
   0.008917926,
   0.009086981,
   0.009666378,
   0.01076934,
   0.0129109};
   gre = new TGraphErrors(7,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10171019 = new TH1F("Graph_Graph_Graph10171019","S12",100,979.5197,2755.541);
   Graph_Graph_Graph10171019->SetMinimum(-0.55);
   Graph_Graph_Graph10171019->SetMaximum(0);
   Graph_Graph_Graph10171019->SetDirectory(0);
   Graph_Graph_Graph10171019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10171019->SetLineColor(ci);
   Graph_Graph_Graph10171019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10171019->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10171019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10171019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10171019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10171019->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10171019->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10171019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10171019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10171019->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10171019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10171019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10171019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10171019);
   
   
   TF1 *fit1020 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1020->SetFillColor(19);
   fit1020->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1020->SetLineColor(ci);
   fit1020->SetLineWidth(2);
   fit1020->SetChisquare(588.8358);
   fit1020->SetNDF(5);
   fit1020->GetXaxis()->SetLabelFont(42);
   fit1020->GetXaxis()->SetTitleOffset(1);
   fit1020->GetXaxis()->SetTitleFont(42);
   fit1020->GetYaxis()->SetLabelFont(42);
   fit1020->GetYaxis()->SetTitleFont(42);
   fit1020->SetParameter(0,-0.9802503);
   fit1020->SetParError(0,0.01569678);
   fit1020->SetParLimits(0,0,0);
   fit1020->SetParameter(1,0.0004495605);
   fit1020->SetParError(1,8.407194e-06);
   fit1020->SetParLimits(1,0,0);
   fit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1020);
   gre->Draw("p ");
   
   TF1 *fit1021 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1021->SetFillColor(19);
   fit1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1021->SetLineColor(ci);
   fit1021->SetLineWidth(2);
   fit1021->SetChisquare(588.8358);
   fit1021->SetNDF(5);
   fit1021->GetXaxis()->SetLabelFont(42);
   fit1021->GetXaxis()->SetTitleOffset(1);
   fit1021->GetXaxis()->SetTitleFont(42);
   fit1021->GetYaxis()->SetLabelFont(42);
   fit1021->GetYaxis()->SetTitleFont(42);
   fit1021->SetParameter(0,-0.9802503);
   fit1021->SetParError(0,0.01569678);
   fit1021->SetParLimits(0,0,0);
   fit1021->SetParameter(1,0.0004495605);
   fit1021->SetParError(1,8.407194e-06);
   fit1021->SetParLimits(1,0,0);
   fit1021->Draw("SAME");
   
   TF1 *fit1022 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1022->SetFillColor(19);
   fit1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1022->SetLineColor(ci);
   fit1022->SetLineWidth(2);
   fit1022->SetChisquare(588.8358);
   fit1022->SetNDF(5);
   fit1022->GetXaxis()->SetLabelFont(42);
   fit1022->GetXaxis()->SetTitleOffset(1);
   fit1022->GetXaxis()->SetTitleFont(42);
   fit1022->GetYaxis()->SetLabelFont(42);
   fit1022->GetYaxis()->SetTitleFont(42);
   fit1022->SetParameter(0,-0.9802503);
   fit1022->SetParError(0,0.01569678);
   fit1022->SetParLimits(0,0,0);
   fit1022->SetParameter(1,0.0004495605);
   fit1022->SetParError(1,8.407194e-06);
   fit1022->SetParLimits(1,0,0);
   fit1022->Draw("SAME");
   
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
