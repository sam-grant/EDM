void verticalOffsetOffsetDataFit_Run-1c_S18()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:18:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.5223,-0.44375,2976.21,-0.006249997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1021[7] = {
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1021[7] = {
   -0.515818,
   -0.4586708,
   -0.2290593,
   -0.09722382,
   -0.05849442,
   -0.005661826,
   0.02117755};
   Double_t _fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[7] = {
   0.01099636,
   0.00968276,
   0.009383729,
   0.009791495,
   0.01057808,
   0.01190168,
   0.01416838};
   TGraphErrors *gre = new TGraphErrors(7,_fx1021,_fy1021,_fex1021,_fey1021);
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
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","S18",100,979.3911,2754.341);
   Graph_Graph1021->SetMinimum(-0.4);
   Graph_Graph1021->SetMaximum(-0.05);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1021->GetXaxis()->CenterTitle(true);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1021->GetYaxis()->CenterTitle(true);
   Graph_Graph1021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *fit1022 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1022->SetFillColor(19);
   fit1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1022->SetLineColor(ci);
   fit1022->SetLineWidth(2);
   fit1022->SetChisquare(221.1691);
   fit1022->SetNDF(4);
   fit1022->GetXaxis()->SetLabelFont(42);
   fit1022->GetXaxis()->SetTitleOffset(1);
   fit1022->GetXaxis()->SetTitleFont(42);
   fit1022->GetYaxis()->SetLabelFont(42);
   fit1022->GetYaxis()->SetTitleFont(42);
   fit1022->SetParameter(0,-0.9025367);
   fit1022->SetParError(0,0.02125949);
   fit1022->SetParLimits(0,0,0);
   fit1022->SetParameter(1,0.0003884853);
   fit1022->SetParError(1,1.100532e-05);
   fit1022->SetParLimits(1,0,0);
   fit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1022);
   gre->Draw("ap");
   
   Double_t _fx1023[7] = {
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1023[7] = {
   -0.515818,
   -0.4586708,
   -0.2290593,
   -0.09722382,
   -0.05849442,
   -0.005661826,
   0.02117755};
   Double_t _fex1023[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[7] = {
   0.01099636,
   0.00968276,
   0.009383729,
   0.009791495,
   0.01057808,
   0.01190168,
   0.01416838};
   gre = new TGraphErrors(7,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10211023 = new TH1F("Graph_Graph_Graph10211023","S18",100,979.3911,2754.341);
   Graph_Graph_Graph10211023->SetMinimum(-0.4);
   Graph_Graph_Graph10211023->SetMaximum(-0.05);
   Graph_Graph_Graph10211023->SetDirectory(0);
   Graph_Graph_Graph10211023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10211023->SetLineColor(ci);
   Graph_Graph_Graph10211023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10211023->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10211023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10211023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10211023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10211023->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10211023->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10211023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10211023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10211023->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10211023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10211023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10211023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10211023);
   
   
   TF1 *fit1024 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1024->SetFillColor(19);
   fit1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1024->SetLineColor(ci);
   fit1024->SetLineWidth(2);
   fit1024->SetChisquare(221.1691);
   fit1024->SetNDF(4);
   fit1024->GetXaxis()->SetLabelFont(42);
   fit1024->GetXaxis()->SetTitleOffset(1);
   fit1024->GetXaxis()->SetTitleFont(42);
   fit1024->GetYaxis()->SetLabelFont(42);
   fit1024->GetYaxis()->SetTitleFont(42);
   fit1024->SetParameter(0,-0.9025367);
   fit1024->SetParError(0,0.02125949);
   fit1024->SetParLimits(0,0,0);
   fit1024->SetParameter(1,0.0003884853);
   fit1024->SetParError(1,1.100532e-05);
   fit1024->SetParLimits(1,0,0);
   fit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1024);
   gre->Draw("p ");
   
   TF1 *fit1025 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1025->SetFillColor(19);
   fit1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1025->SetLineColor(ci);
   fit1025->SetLineWidth(2);
   fit1025->SetChisquare(221.1691);
   fit1025->SetNDF(4);
   fit1025->GetXaxis()->SetLabelFont(42);
   fit1025->GetXaxis()->SetTitleOffset(1);
   fit1025->GetXaxis()->SetTitleFont(42);
   fit1025->GetYaxis()->SetLabelFont(42);
   fit1025->GetYaxis()->SetTitleFont(42);
   fit1025->SetParameter(0,-0.9025367);
   fit1025->SetParError(0,0.02125949);
   fit1025->SetParLimits(0,0,0);
   fit1025->SetParameter(1,0.0003884853);
   fit1025->SetParError(1,1.100532e-05);
   fit1025->SetParLimits(1,0,0);
   fit1025->Draw("SAME");
   
   TF1 *fit1026 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1026->SetFillColor(19);
   fit1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1026->SetLineColor(ci);
   fit1026->SetLineWidth(2);
   fit1026->SetChisquare(221.1691);
   fit1026->SetNDF(4);
   fit1026->GetXaxis()->SetLabelFont(42);
   fit1026->GetXaxis()->SetTitleOffset(1);
   fit1026->GetXaxis()->SetTitleFont(42);
   fit1026->GetYaxis()->SetLabelFont(42);
   fit1026->GetYaxis()->SetTitleFont(42);
   fit1026->SetParameter(0,-0.9025367);
   fit1026->SetParError(0,0.02125949);
   fit1026->SetParLimits(0,0,0);
   fit1026->SetParameter(1,0.0003884853);
   fit1026->SetParError(1,1.100532e-05);
   fit1026->SetParLimits(1,0,0);
   fit1026->Draw("SAME");
   
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
