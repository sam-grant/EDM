void SlopeVsSlope()
{
//=========Macro generated from canvas: c/
//=========  (Sun Apr 17 23:21:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(3.575e-05,-0.00029875,0.00066825,8.875e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx3[2] = {
   0,
   0.001};
   Double_t _fy3[2] = {
   0,
   0};
   TGraph *graph = new TGraph(2,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle(";#LT#theta_{y}#GT/p [mrad/MeV];#LTy#GT/p [mrad/MeV];");
   graph->SetFillStyle(1000);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0,0.0011);
   Graph_Graph3->SetMinimum(-0.00026);
   Graph_Graph3->SetMaximum(5e-05);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("#LT#theta_{y}#GT/p [mrad/MeV]");
   Graph_Graph3->GetXaxis()->SetRange(10,55);
   Graph_Graph3->GetXaxis()->CenterTitle(true);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("#LTy#GT/p [mrad/MeV]");
   Graph_Graph3->GetYaxis()->CenterTitle(true);
   Graph_Graph3->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("ap");
   
   Double_t _fx1059[4] = {
   0.0003470762,
   0.0003378925,
   0.000447384,
   0.0005685849};
   Double_t _fy1059[4] = {
   -0.0002297356,
   -0.0002207205,
   -0.0002249882,
   -0.0002304304};
   Double_t _fex1059[4] = {
   1.162656e-05,
   9.923645e-06,
   8.17223e-06,
   5.951848e-06};
   Double_t _fey1059[4] = {
   1.445797e-05,
   1.237172e-05,
   1.003756e-05,
   7.250618e-06};
   TGraphErrors *gre = new TGraphErrors(4,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","",100,0.0003033121,0.0005991936);
   Graph_Graph1059->SetMinimum(-0.0002477781);
   Graph_Graph1059->SetMaximum(-0.0002047643);
   Graph_Graph1059->SetDirectory(0);
   Graph_Graph1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1059->SetLineColor(ci);
   Graph_Graph1059->GetXaxis()->CenterTitle(true);
   Graph_Graph1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph1059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph1059->GetYaxis()->CenterTitle(true);
   Graph_Graph1059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph1059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph1059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1059);
   
   
   TF1 *fit_S121060 = new TF1("fit_S12","[0]",0,0.0006, TF1::EAddToList::kNo);
   fit_S121060->SetFillColor(19);
   fit_S121060->SetFillStyle(0);
   fit_S121060->SetLineColor(2);
   fit_S121060->SetLineWidth(2);
   fit_S121060->SetChisquare(0.5499713);
   fit_S121060->SetNDF(3);
   fit_S121060->GetXaxis()->SetLabelFont(42);
   fit_S121060->GetXaxis()->SetTitleOffset(1);
   fit_S121060->GetXaxis()->SetTitleFont(42);
   fit_S121060->GetYaxis()->SetLabelFont(42);
   fit_S121060->GetYaxis()->SetTitleFont(42);
   fit_S121060->SetParameter(0,-0.0002274308);
   fit_S121060->SetParError(0,4.983559e-06);
   fit_S121060->SetParLimits(0,0,0);
   fit_S121060->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit_S121060);
   gre->Draw("p ");
   
   Double_t _fx1061[4] = {
   0.000364363,
   0.0003142396,
   0.0004006697,
   0.0005423412};
   Double_t _fy1061[4] = {
   -3.985219e-06,
   1.507966e-05,
   -3.891437e-06,
   -3.643096e-05};
   Double_t _fex1061[4] = {
   1.225732e-05,
   1.047896e-05,
   8.710316e-06,
   6.418501e-06};
   Double_t _fey1061[4] = {
   1.536519e-05,
   1.313746e-05,
   1.075486e-05,
   7.871948e-06};
   gre = new TGraphErrors(4,_fx1061,_fy1061,_fex1061,_fey1061);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","",100,0.0002792607,0.0005732596);
   Graph_Graph1061->SetMinimum(-5.155491e-05);
   Graph_Graph1061->SetMaximum(3.546912e-05);
   Graph_Graph1061->SetDirectory(0);
   Graph_Graph1061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1061->SetLineColor(ci);
   Graph_Graph1061->GetXaxis()->SetLabelFont(42);
   Graph_Graph1061->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1061->GetXaxis()->SetTitleFont(42);
   Graph_Graph1061->GetYaxis()->SetLabelFont(42);
   Graph_Graph1061->GetYaxis()->SetTitleFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelFont(42);
   Graph_Graph1061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1061);
   
   
   TF1 *fit_S181062 = new TF1("fit_S18","[0]",0,0.0006, TF1::EAddToList::kNo);
   fit_S181062->SetFillColor(19);
   fit_S181062->SetFillStyle(0);
   fit_S181062->SetLineColor(2);
   fit_S181062->SetLineWidth(2);
   fit_S181062->SetChisquare(14.21085);
   fit_S181062->SetNDF(3);
   fit_S181062->GetXaxis()->SetLabelFont(42);
   fit_S181062->GetXaxis()->SetTitleOffset(1);
   fit_S181062->GetXaxis()->SetTitleFont(42);
   fit_S181062->GetYaxis()->SetLabelFont(42);
   fit_S181062->GetYaxis()->SetTitleFont(42);
   fit_S181062->SetParameter(0,-1.582919e-05);
   fit_S181062->SetParError(0,5.359589e-06);
   fit_S181062->SetParLimits(0,0,0);
   fit_S181062->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit_S181062);
   gre->Draw("p ");
   
   Double_t _fx1063[1] = {
   0.0002088142};
   Double_t _fy1063[1] = {
   2.896485e-05};
   Double_t _fex1063[1] = {
   1.060209e-05};
   Double_t _fey1063[1] = {
   1.247898e-05};
   gre = new TGraphErrors(1,_fx1063,_fy1063,_fex1063,_fey1063);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","",100,0.0001960917,0.0002215367);
   Graph_Graph1063->SetMinimum(1.399008e-05);
   Graph_Graph1063->SetMaximum(4.393962e-05);
   Graph_Graph1063->SetDirectory(0);
   Graph_Graph1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1063->SetLineColor(ci);
   Graph_Graph1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph1063->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph1063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1063);
   
   gre->Draw("p ");
   
   Double_t _fx1064[1] = {
   0.0001722409};
   Double_t _fy1064[1] = {
   -1.257192e-06};
   Double_t _fex1064[1] = {
   1.068282e-05};
   Double_t _fey1064[1] = {
   1.261707e-05};
   gre = new TGraphErrors(1,_fx1064,_fy1064,_fex1064,_fey1064);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1064 = new TH1F("Graph_Graph1064","",100,0.0001594215,0.0001850603);
   Graph_Graph1064->SetMinimum(-1.639768e-05);
   Graph_Graph1064->SetMaximum(1.388329e-05);
   Graph_Graph1064->SetDirectory(0);
   Graph_Graph1064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1064->SetLineColor(ci);
   Graph_Graph1064->GetXaxis()->SetLabelFont(42);
   Graph_Graph1064->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1064->GetXaxis()->SetTitleFont(42);
   Graph_Graph1064->GetYaxis()->SetLabelFont(42);
   Graph_Graph1064->GetYaxis()->SetTitleFont(42);
   Graph_Graph1064->GetZaxis()->SetLabelFont(42);
   Graph_Graph1064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1064);
   
   gre->Draw("p ");
   
   TF1 *fit_S121063 = new TF1("fit_S12","[0]",0,0.0006, TF1::EAddToList::kDefault);
   fit_S121063->SetFillColor(19);
   fit_S121063->SetFillStyle(0);
   fit_S121063->SetLineWidth(2);
   fit_S121063->SetChisquare(0.5499713);
   fit_S121063->SetNDF(3);
   fit_S121063->GetXaxis()->SetLabelFont(42);
   fit_S121063->GetXaxis()->SetTitleOffset(1);
   fit_S121063->GetXaxis()->SetTitleFont(42);
   fit_S121063->GetYaxis()->SetLabelFont(42);
   fit_S121063->GetYaxis()->SetTitleFont(42);
   fit_S121063->SetParameter(0,-0.0002274308);
   fit_S121063->SetParError(0,4.983559e-06);
   fit_S121063->SetParLimits(0,0,0);
   fit_S121063->Draw("SAME");
   
   TF1 *fit_S181064 = new TF1("fit_S18","[0]",0,0.0006, TF1::EAddToList::kDefault);
   fit_S181064->SetFillColor(19);
   fit_S181064->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit_S181064->SetLineColor(ci);
   fit_S181064->SetLineWidth(2);
   fit_S181064->SetChisquare(14.21085);
   fit_S181064->SetNDF(3);
   fit_S181064->GetXaxis()->SetLabelFont(42);
   fit_S181064->GetXaxis()->SetTitleOffset(1);
   fit_S181064->GetXaxis()->SetTitleFont(42);
   fit_S181064->GetYaxis()->SetLabelFont(42);
   fit_S181064->GetYaxis()->SetTitleFont(42);
   fit_S181064->SetParameter(0,-1.582919e-05);
   fit_S181064->SetParError(0,5.359589e-06);
   fit_S181064->SetParLimits(0,0,0);
   fit_S181064->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.4,0.35,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data (S12)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Sim (S12)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Data (S18)","lpf");
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
   entry=leg->AddEntry("","Sim (S18)","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
