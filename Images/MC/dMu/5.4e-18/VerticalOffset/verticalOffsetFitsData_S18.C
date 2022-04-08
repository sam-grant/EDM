void verticalOffsetFitsData_S18()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 21:29:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.374,-1.1875,2977.171,0.6875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1021[7] = {
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205};
   Double_t _fy1021[7] = {
   -0.4474794,
   -0.4138531,
   -0.2093635,
   -0.07458984,
   -0.01955939,
   0.006714371,
   0.01347812};
   Double_t _fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[7] = {
   0.0156335,
   0.01372789,
   0.01326113,
   0.01378129,
   0.01490272,
   0.01673893,
   0.01964262};
   TGraphErrors *gre = new TGraphErrors(7,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","S18",100,979.3537,2755.191);
   Graph_Graph1021->SetMinimum(-1);
   Graph_Graph1021->SetMaximum(0.5);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *fit1022 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1022->SetFillColor(19);
   fit1022->SetFillStyle(0);
   fit1022->SetLineColor(4);
   fit1022->SetLineWidth(2);
   fit1022->SetChisquare(110.7639);
   fit1022->SetNDF(4);
   fit1022->GetXaxis()->SetLabelFont(42);
   fit1022->GetXaxis()->SetTitleOffset(1);
   fit1022->GetXaxis()->SetTitleFont(42);
   fit1022->GetYaxis()->SetLabelFont(42);
   fit1022->GetYaxis()->SetTitleFont(42);
   fit1022->SetParameter(0,-0.8223826);
   fit1022->SetParError(0,0.02992371);
   fit1022->SetParLimits(0,0,0);
   fit1022->SetParameter(1,0.0003592212);
   fit1022->SetParError(1,1.545551e-05);
   fit1022->SetParLimits(1,0,0);
   fit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1022);
   gre->Draw("ap");
   
   TF1 *fit1023 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1023->SetFillColor(19);
   fit1023->SetFillStyle(0);
   fit1023->SetLineColor(4);
   fit1023->SetLineWidth(2);
   fit1023->SetChisquare(110.7639);
   fit1023->SetNDF(4);
   fit1023->GetXaxis()->SetLabelFont(42);
   fit1023->GetXaxis()->SetTitleOffset(1);
   fit1023->GetXaxis()->SetTitleFont(42);
   fit1023->GetYaxis()->SetLabelFont(42);
   fit1023->GetYaxis()->SetTitleFont(42);
   fit1023->SetParameter(0,-0.8223826);
   fit1023->SetParError(0,0.02992371);
   fit1023->SetParLimits(0,0,0);
   fit1023->SetParameter(1,0.0003592212);
   fit1023->SetParError(1,1.545551e-05);
   fit1023->SetParLimits(1,0,0);
   fit1023->Draw("SAME");
   
   Double_t _fx1023[7] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239};
   Double_t _fy1023[7] = {
   -0.3631521,
   -0.3613913,
   -0.1888101,
   -0.05875643,
   -0.001628842,
   0.002780129,
   0.0156971};
   Double_t _fex1023[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[7] = {
   0.01336411,
   0.0117414,
   0.01132148,
   0.01180217,
   0.01277149,
   0.01431503,
   0.01680647};
   gre = new TGraphErrors(7,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,979.1654,2755.245);
   Graph_Graph1023->SetMinimum(-0.4174182);
   Graph_Graph1023->SetMaximum(0.07340554);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   
   TF1 *fit1024 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1024->SetFillColor(19);
   fit1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   fit1024->SetLineColor(ci);
   fit1024->SetLineWidth(2);
   fit1024->SetChisquare(125.7187);
   fit1024->SetNDF(4);
   fit1024->GetXaxis()->SetLabelFont(42);
   fit1024->GetXaxis()->SetTitleOffset(1);
   fit1024->GetXaxis()->SetTitleFont(42);
   fit1024->GetYaxis()->SetLabelFont(42);
   fit1024->GetYaxis()->SetTitleFont(42);
   fit1024->SetParameter(0,-0.727268);
   fit1024->SetParError(0,0.02558691);
   fit1024->SetParLimits(0,0,0);
   fit1024->SetParameter(1,0.0003198354);
   fit1024->SetParError(1,1.321871e-05);
   fit1024->SetParLimits(1,0,0);
   fit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1024);
   gre->Draw("p ");
   
   TF1 *fit1025 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1025->SetFillColor(19);
   fit1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   fit1025->SetLineColor(ci);
   fit1025->SetLineWidth(2);
   fit1025->SetChisquare(125.7187);
   fit1025->SetNDF(4);
   fit1025->GetXaxis()->SetLabelFont(42);
   fit1025->GetXaxis()->SetTitleOffset(1);
   fit1025->GetXaxis()->SetTitleFont(42);
   fit1025->GetYaxis()->SetLabelFont(42);
   fit1025->GetYaxis()->SetTitleFont(42);
   fit1025->SetParameter(0,-0.727268);
   fit1025->SetParError(0,0.02558691);
   fit1025->SetParLimits(0,0,0);
   fit1025->SetParameter(1,0.0003198354);
   fit1025->SetParError(1,1.321871e-05);
   fit1025->SetParLimits(1,0,0);
   fit1025->Draw("SAME");
   
   Double_t _fx1025[7] = {
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1025[7] = {
   -0.515818,
   -0.4586708,
   -0.2290593,
   -0.09722382,
   -0.05849442,
   -0.005661826,
   0.02117755};
   Double_t _fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[7] = {
   0.01099636,
   0.00968276,
   0.009383729,
   0.009791495,
   0.01057808,
   0.01190168,
   0.01416838};
   gre = new TGraphErrors(7,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,979.3911,2754.341);
   Graph_Graph1025->SetMinimum(-0.5830303);
   Graph_Graph1025->SetMaximum(0.09156195);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *fit1026 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1026->SetFillColor(19);
   fit1026->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
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
   fit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1026);
   gre->Draw("p ");
   
   TF1 *fit1027 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1027->SetFillColor(19);
   fit1027->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   fit1027->SetLineColor(ci);
   fit1027->SetLineWidth(2);
   fit1027->SetChisquare(221.1691);
   fit1027->SetNDF(4);
   fit1027->GetXaxis()->SetLabelFont(42);
   fit1027->GetXaxis()->SetTitleOffset(1);
   fit1027->GetXaxis()->SetTitleFont(42);
   fit1027->GetYaxis()->SetLabelFont(42);
   fit1027->GetYaxis()->SetTitleFont(42);
   fit1027->SetParameter(0,-0.9025367);
   fit1027->SetParError(0,0.02125949);
   fit1027->SetParLimits(0,0,0);
   fit1027->SetParameter(1,0.0003884853);
   fit1027->SetParError(1,1.100532e-05);
   fit1027->SetParLimits(1,0,0);
   fit1027->Draw("SAME");
   
   Double_t _fx1027[7] = {
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768};
   Double_t _fy1027[7] = {
   -0.7183937,
   -0.6358225,
   -0.3506347,
   -0.181515,
   -0.09963287,
   -0.05288394,
   0.01548025};
   Double_t _fex1027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[7] = {
   0.00808423,
   0.007128531,
   0.006906955,
   0.007225717,
   0.007816829,
   0.00881887,
   0.01043666};
   gre = new TGraphErrors(7,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,979.2867,2754.721);
   Graph_Graph1027->SetMinimum(-0.8017174);
   Graph_Graph1027->SetMaximum(0.1011564);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   
   TF1 *fit1028 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1028->SetFillColor(19);
   fit1028->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   fit1028->SetLineColor(ci);
   fit1028->SetLineWidth(2);
   fit1028->SetChisquare(569.2721);
   fit1028->SetNDF(4);
   fit1028->GetXaxis()->SetLabelFont(42);
   fit1028->GetXaxis()->SetTitleOffset(1);
   fit1028->GetXaxis()->SetTitleFont(42);
   fit1028->GetYaxis()->SetLabelFont(42);
   fit1028->GetYaxis()->SetTitleFont(42);
   fit1028->SetParameter(0,-1.250085);
   fit1028->SetParError(0,0.01566531);
   fit1028->SetParLimits(0,0,0);
   fit1028->SetParameter(1,0.000523953);
   fit1028->SetParError(1,8.11422e-06);
   fit1028->SetParLimits(1,0,0);
   fit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1028);
   gre->Draw("p ");
   
   TF1 *fit1029 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1029->SetFillColor(19);
   fit1029->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   fit1029->SetLineColor(ci);
   fit1029->SetLineWidth(2);
   fit1029->SetChisquare(569.2721);
   fit1029->SetNDF(4);
   fit1029->GetXaxis()->SetLabelFont(42);
   fit1029->GetXaxis()->SetTitleOffset(1);
   fit1029->GetXaxis()->SetTitleFont(42);
   fit1029->GetYaxis()->SetLabelFont(42);
   fit1029->GetYaxis()->SetTitleFont(42);
   fit1029->SetParameter(0,-1.250085);
   fit1029->SetParError(0,0.01566531);
   fit1029->SetParLimits(0,0,0);
   fit1029->SetParameter(1,0.000523953);
   fit1029->SetParError(1,8.11422e-06);
   fit1029->SetParLimits(1,0,0);
   fit1029->Draw("SAME");
   
   TLegend *leg = new TLegend(0.11,0.6,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
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
