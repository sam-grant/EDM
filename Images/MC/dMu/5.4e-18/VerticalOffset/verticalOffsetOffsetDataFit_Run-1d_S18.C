void verticalOffsetOffsetDataFit_Run-1d_S18()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:18:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.3574,-0.44375,2976.65,-0.006249997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1029[7] = {
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768};
   Double_t _fy1029[7] = {
   -0.7183937,
   -0.6358225,
   -0.3506347,
   -0.181515,
   -0.09963287,
   -0.05288394,
   0.01548025};
   Double_t _fex1029[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[7] = {
   0.00808423,
   0.007128531,
   0.006906955,
   0.007225717,
   0.007816829,
   0.00881887,
   0.01043666};
   TGraphErrors *gre = new TGraphErrors(7,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","S18",100,979.2867,2754.721);
   Graph_Graph1029->SetMinimum(-0.4);
   Graph_Graph1029->SetMaximum(-0.05);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1029->GetXaxis()->CenterTitle(true);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1029->GetYaxis()->CenterTitle(true);
   Graph_Graph1029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *fit1030 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1030->SetFillColor(19);
   fit1030->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1030->SetLineColor(ci);
   fit1030->SetLineWidth(2);
   fit1030->SetChisquare(569.2721);
   fit1030->SetNDF(4);
   fit1030->GetXaxis()->SetLabelFont(42);
   fit1030->GetXaxis()->SetTitleOffset(1);
   fit1030->GetXaxis()->SetTitleFont(42);
   fit1030->GetYaxis()->SetLabelFont(42);
   fit1030->GetYaxis()->SetTitleFont(42);
   fit1030->SetParameter(0,-1.250085);
   fit1030->SetParError(0,0.01566531);
   fit1030->SetParLimits(0,0,0);
   fit1030->SetParameter(1,0.000523953);
   fit1030->SetParError(1,8.11422e-06);
   fit1030->SetParLimits(1,0,0);
   fit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1030);
   gre->Draw("ap");
   
   Double_t _fx1031[7] = {
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768};
   Double_t _fy1031[7] = {
   -0.7183937,
   -0.6358225,
   -0.3506347,
   -0.181515,
   -0.09963287,
   -0.05288394,
   0.01548025};
   Double_t _fex1031[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1031[7] = {
   0.00808423,
   0.007128531,
   0.006906955,
   0.007225717,
   0.007816829,
   0.00881887,
   0.01043666};
   gre = new TGraphErrors(7,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10291031 = new TH1F("Graph_Graph_Graph10291031","S18",100,979.2867,2754.721);
   Graph_Graph_Graph10291031->SetMinimum(-0.4);
   Graph_Graph_Graph10291031->SetMaximum(-0.05);
   Graph_Graph_Graph10291031->SetDirectory(0);
   Graph_Graph_Graph10291031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10291031->SetLineColor(ci);
   Graph_Graph_Graph10291031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10291031->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10291031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10291031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10291031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10291031->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10291031->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10291031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10291031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10291031->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10291031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10291031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10291031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10291031);
   
   
   TF1 *fit1032 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1032->SetFillColor(19);
   fit1032->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1032->SetLineColor(ci);
   fit1032->SetLineWidth(2);
   fit1032->SetChisquare(569.2721);
   fit1032->SetNDF(4);
   fit1032->GetXaxis()->SetLabelFont(42);
   fit1032->GetXaxis()->SetTitleOffset(1);
   fit1032->GetXaxis()->SetTitleFont(42);
   fit1032->GetYaxis()->SetLabelFont(42);
   fit1032->GetYaxis()->SetTitleFont(42);
   fit1032->SetParameter(0,-1.250085);
   fit1032->SetParError(0,0.01566531);
   fit1032->SetParLimits(0,0,0);
   fit1032->SetParameter(1,0.000523953);
   fit1032->SetParError(1,8.11422e-06);
   fit1032->SetParLimits(1,0,0);
   fit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1032);
   gre->Draw("p ");
   
   TF1 *fit1033 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1033->SetFillColor(19);
   fit1033->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1033->SetLineColor(ci);
   fit1033->SetLineWidth(2);
   fit1033->SetChisquare(569.2721);
   fit1033->SetNDF(4);
   fit1033->GetXaxis()->SetLabelFont(42);
   fit1033->GetXaxis()->SetTitleOffset(1);
   fit1033->GetXaxis()->SetTitleFont(42);
   fit1033->GetYaxis()->SetLabelFont(42);
   fit1033->GetYaxis()->SetTitleFont(42);
   fit1033->SetParameter(0,-1.250085);
   fit1033->SetParError(0,0.01566531);
   fit1033->SetParLimits(0,0,0);
   fit1033->SetParameter(1,0.000523953);
   fit1033->SetParError(1,8.11422e-06);
   fit1033->SetParLimits(1,0,0);
   fit1033->Draw("SAME");
   
   TF1 *fit1034 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1034->SetFillColor(19);
   fit1034->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1034->SetLineColor(ci);
   fit1034->SetLineWidth(2);
   fit1034->SetChisquare(569.2721);
   fit1034->SetNDF(4);
   fit1034->GetXaxis()->SetLabelFont(42);
   fit1034->GetXaxis()->SetTitleOffset(1);
   fit1034->GetXaxis()->SetTitleFont(42);
   fit1034->GetYaxis()->SetLabelFont(42);
   fit1034->GetYaxis()->SetTitleFont(42);
   fit1034->SetParameter(0,-1.250085);
   fit1034->SetParError(0,0.01566531);
   fit1034->SetParLimits(0,0,0);
   fit1034->SetParameter(1,0.000523953);
   fit1034->SetParError(1,8.11422e-06);
   fit1034->SetParLimits(1,0,0);
   fit1034->Draw("SAME");
   
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
   entry=leg->AddEntry("","#minus1 mm","lpf");
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
