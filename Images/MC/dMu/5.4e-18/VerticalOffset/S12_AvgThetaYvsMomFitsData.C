void S12_AvgThetaYvsMomFitsData()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr  7 12:12:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.6619,-1.1875,2977.557,0.6875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[7] = {
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992,
   2607.574};
   Double_t _fy1013[7] = {
   -0.2889199,
   -0.4531644,
   -0.1607922,
   0.01181593,
   -0.01040017,
   0.03403629,
   0.09496397};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.01543622,
   0.01332269,
   0.0127284,
   0.01295256,
   0.01374282,
   0.01527657,
   0.0180986};
   TGraphErrors *gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","S12",100,979.6514,2755.567);
   Graph_Graph1013->SetMinimum(-1);
   Graph_Graph1013->SetMaximum(0.5);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1013->GetXaxis()->CenterTitle(true);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1013->GetYaxis()->CenterTitle(true);
   Graph_Graph1013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *fit1014 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1014->SetFillColor(19);
   fit1014->SetFillStyle(0);
   fit1014->SetLineColor(4);
   fit1014->SetLineWidth(2);
   fit1014->SetChisquare(299.5903);
   fit1014->SetNDF(5);
   fit1014->GetXaxis()->SetLabelFont(42);
   fit1014->GetXaxis()->SetTitleOffset(1);
   fit1014->GetXaxis()->SetTitleFont(42);
   fit1014->GetYaxis()->SetLabelFont(42);
   fit1014->GetYaxis()->SetTitleFont(42);
   fit1014->SetParameter(0,-0.7633339);
   fit1014->SetParError(0,0.02237659);
   fit1014->SetParLimits(0,0,0);
   fit1014->SetParameter(1,0.0003514854);
   fit1014->SetParError(1,1.19508e-05);
   fit1014->SetParLimits(1,0,0);
   fit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1014);
   gre->Draw("ap");
   
   TF1 *fit1015 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1015->SetFillColor(19);
   fit1015->SetFillStyle(0);
   fit1015->SetLineColor(4);
   fit1015->SetLineWidth(2);
   fit1015->SetChisquare(299.5903);
   fit1015->SetNDF(5);
   fit1015->GetXaxis()->SetLabelFont(42);
   fit1015->GetXaxis()->SetTitleOffset(1);
   fit1015->GetXaxis()->SetTitleFont(42);
   fit1015->GetYaxis()->SetLabelFont(42);
   fit1015->GetYaxis()->SetTitleFont(42);
   fit1015->SetParameter(0,-0.7633339);
   fit1015->SetParError(0,0.02237659);
   fit1015->SetParLimits(0,0,0);
   fit1015->SetParameter(1,0.0003514854);
   fit1015->SetParError(1,1.19508e-05);
   fit1015->SetParLimits(1,0,0);
   fit1015->Draw("SAME");
   
   Double_t _fx1015[7] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74,
   2607.778};
   Double_t _fy1015[7] = {
   -0.2604132,
   -0.4231579,
   -0.1198555,
   0.01641377,
   -0.00211221,
   0.04664548,
   0.1411009};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.01316455,
   0.01135825,
   0.01085805,
   0.01107303,
   0.01174059,
   0.01303659,
   0.01553866};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,979.6115,2755.793);
   Graph_Graph1015->SetMinimum(-0.4936317);
   Graph_Graph1015->SetMaximum(0.2157551);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *fit1016 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1016->SetFillColor(19);
   fit1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   fit1016->SetLineColor(ci);
   fit1016->SetLineWidth(2);
   fit1016->SetChisquare(372.7914);
   fit1016->SetNDF(5);
   fit1016->GetXaxis()->SetLabelFont(42);
   fit1016->GetXaxis()->SetTitleOffset(1);
   fit1016->GetXaxis()->SetTitleFont(42);
   fit1016->GetYaxis()->SetLabelFont(42);
   fit1016->GetYaxis()->SetTitleFont(42);
   fit1016->SetParameter(0,-0.7267444);
   fit1016->SetParError(0,0.01910857);
   fit1016->SetParLimits(0,0,0);
   fit1016->SetParameter(1,0.0003441644);
   fit1016->SetParError(1,1.021248e-05);
   fit1016->SetParLimits(1,0,0);
   fit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1016);
   gre->Draw("p ");
   
   TF1 *fit1017 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1017->SetFillColor(19);
   fit1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff6600");
   fit1017->SetLineColor(ci);
   fit1017->SetLineWidth(2);
   fit1017->SetChisquare(372.7914);
   fit1017->SetNDF(5);
   fit1017->GetXaxis()->SetLabelFont(42);
   fit1017->GetXaxis()->SetTitleOffset(1);
   fit1017->GetXaxis()->SetTitleFont(42);
   fit1017->GetYaxis()->SetLabelFont(42);
   fit1017->GetYaxis()->SetTitleFont(42);
   fit1017->SetParameter(0,-0.7267444);
   fit1017->SetParError(0,0.01910857);
   fit1017->SetParLimits(0,0,0);
   fit1017->SetParameter(1,0.0003441644);
   fit1017->SetParError(1,1.021248e-05);
   fit1017->SetParLimits(1,0,0);
   fit1017->Draw("SAME");
   
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
   gre = new TGraphErrors(7,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,979.5197,2755.541);
   Graph_Graph1017->SetMinimum(-0.613936);
   Graph_Graph1017->SetMaximum(0.2303463);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *fit1018 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1018->SetFillColor(19);
   fit1018->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
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
   gre->Draw("p ");
   
   TF1 *fit1019 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1019->SetFillColor(19);
   fit1019->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   fit1019->SetLineColor(ci);
   fit1019->SetLineWidth(2);
   fit1019->SetChisquare(588.8358);
   fit1019->SetNDF(5);
   fit1019->GetXaxis()->SetLabelFont(42);
   fit1019->GetXaxis()->SetTitleOffset(1);
   fit1019->GetXaxis()->SetTitleFont(42);
   fit1019->GetYaxis()->SetLabelFont(42);
   fit1019->GetYaxis()->SetTitleFont(42);
   fit1019->SetParameter(0,-0.9802503);
   fit1019->SetParError(0,0.01569678);
   fit1019->SetParLimits(0,0,0);
   fit1019->SetParameter(1,0.0004495605);
   fit1019->SetParError(1,8.407194e-06);
   fit1019->SetParLimits(1,0,0);
   fit1019->Draw("SAME");
   
   Double_t _fx1019[7] = {
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1019[7] = {
   -0.6163227,
   -0.6749196,
   -0.3063854,
   -0.1170644,
   -0.07543333,
   -0.01417044,
   0.1573687};
   Double_t _fex1019[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[7] = {
   0.007833952,
   0.00678342,
   0.00649775,
   0.006644034,
   0.007061917,
   0.007862949,
   0.009373177};
   gre = new TGraphErrors(7,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,979.4085,2756.285);
   Graph_Graph1019->SetMinimum(-0.7665475);
   Graph_Graph1019->SetMaximum(0.2515864);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   
   TF1 *fit1020 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1020->SetFillColor(19);
   fit1020->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   fit1020->SetLineColor(ci);
   fit1020->SetLineWidth(2);
   fit1020->SetChisquare(1073.23);
   fit1020->SetNDF(5);
   fit1020->GetXaxis()->SetLabelFont(42);
   fit1020->GetXaxis()->SetTitleOffset(1);
   fit1020->GetXaxis()->SetTitleFont(42);
   fit1020->GetYaxis()->SetLabelFont(42);
   fit1020->GetYaxis()->SetTitleFont(42);
   fit1020->SetParameter(0,-1.308422);
   fit1020->SetParError(0,0.01143304);
   fit1020->SetParLimits(0,0,0);
   fit1020->SetParameter(1,0.0005774157);
   fit1020->SetParError(1,6.122824e-06);
   fit1020->SetParLimits(1,0,0);
   fit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1020);
   gre->Draw("p ");
   
   TF1 *fit1021 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1021->SetFillColor(19);
   fit1021->SetFillStyle(0);

   ci = TColor::GetColor("#993399");
   fit1021->SetLineColor(ci);
   fit1021->SetLineWidth(2);
   fit1021->SetChisquare(1073.23);
   fit1021->SetNDF(5);
   fit1021->GetXaxis()->SetLabelFont(42);
   fit1021->GetXaxis()->SetTitleOffset(1);
   fit1021->GetXaxis()->SetTitleFont(42);
   fit1021->GetYaxis()->SetLabelFont(42);
   fit1021->GetYaxis()->SetTitleFont(42);
   fit1021->SetParameter(0,-1.308422);
   fit1021->SetParError(0,0.01143304);
   fit1021->SetParLimits(0,0,0);
   fit1021->SetParameter(1,0.0005774157);
   fit1021->SetParError(1,6.122824e-06);
   fit1021->SetParLimits(1,0,0);
   fit1021->Draw("SAME");
   
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
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
