void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1061[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1061[3] = {
   -1.679151,
   -1.473163,
   -1.337492};
   Double_t -30.000000 ppm_fex1061[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1061[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1061,-30.000000 ppm_fy1061,-30.000000 ppm_fex1061,-30.000000 ppm_fey1061);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1061 = new TH1F("Graph_mI30dO000000sPppm1061","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1061->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1061->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1061->SetDirectory(0);
   Graph_mI30dO000000sPppm1061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1061->SetLineColor(ci);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1061->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1061->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1061->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1061->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1061);
   
   
   TF1 *quadLineFit1062 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1062->SetFillColor(19);
   quadLineFit1062->SetFillStyle(0);
   quadLineFit1062->SetLineWidth(2);
   quadLineFit1062->SetChisquare(6.626539);
   quadLineFit1062->SetNDF(1);
   quadLineFit1062->GetXaxis()->SetLabelFont(42);
   quadLineFit1062->GetXaxis()->SetTitleOffset(1);
   quadLineFit1062->GetXaxis()->SetTitleFont(42);
   quadLineFit1062->GetYaxis()->SetLabelFont(42);
   quadLineFit1062->GetYaxis()->SetTitleFont(42);
   quadLineFit1062->SetParameter(0,-3.034066);
   quadLineFit1062->SetParError(0,0.07125607);
   quadLineFit1062->SetParLimits(0,0,0);
   quadLineFit1062->SetParameter(1,0.08541466);
   quadLineFit1062->SetParError(1,0.003942477);
   quadLineFit1062->SetParLimits(1,0,0);
   quadLineFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1062);
   gre->Draw("ap");
   
   TF1 *quadLineFit1063 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1063->SetFillColor(19);
   quadLineFit1063->SetFillStyle(0);
   quadLineFit1063->SetLineWidth(2);
   quadLineFit1063->SetChisquare(6.626539);
   quadLineFit1063->SetNDF(1);
   quadLineFit1063->GetXaxis()->SetLabelFont(42);
   quadLineFit1063->GetXaxis()->SetTitleOffset(1);
   quadLineFit1063->GetXaxis()->SetTitleFont(42);
   quadLineFit1063->GetYaxis()->SetLabelFont(42);
   quadLineFit1063->GetYaxis()->SetTitleFont(42);
   quadLineFit1063->SetParameter(0,-3.034066);
   quadLineFit1063->SetParError(0,0.07125607);
   quadLineFit1063->SetParLimits(0,0,0);
   quadLineFit1063->SetParameter(1,0.08541466);
   quadLineFit1063->SetParError(1,0.003942477);
   quadLineFit1063->SetParLimits(1,0,0);
   quadLineFit1063->Draw("same");
   
   Double_t 30.000000 ppm_fx1063[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1063[3] = {
   2.868631,
   2.525782,
   2.274822};
   Double_t 30.000000 ppm_fex1063[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1063[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,30.000000 ppm_fx1063,30.000000 ppm_fy1063,30.000000 ppm_fex1063,30.000000 ppm_fey1063);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1063 = new TH1F("Graph_30dO000000sPppm1063","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1063->SetMinimum(2.202059);
   Graph_30dO000000sPppm1063->SetMaximum(2.941394);
   Graph_30dO000000sPppm1063->SetDirectory(0);
   Graph_30dO000000sPppm1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1063->SetLineColor(ci);
   Graph_30dO000000sPppm1063->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1063->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1063->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1063->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1063->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1063->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1063->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1063);
   
   
   TF1 *quadLineFit1064 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1064->SetFillColor(19);
   quadLineFit1064->SetFillStyle(0);
   quadLineFit1064->SetLineColor(2);
   quadLineFit1064->SetLineWidth(2);
   quadLineFit1064->SetChisquare(11.3158);
   quadLineFit1064->SetNDF(1);
   quadLineFit1064->GetXaxis()->SetLabelFont(42);
   quadLineFit1064->GetXaxis()->SetTitleOffset(1);
   quadLineFit1064->GetXaxis()->SetTitleFont(42);
   quadLineFit1064->GetYaxis()->SetLabelFont(42);
   quadLineFit1064->GetYaxis()->SetTitleFont(42);
   quadLineFit1064->SetParameter(0,5.228553);
   quadLineFit1064->SetParError(0,0.07126316);
   quadLineFit1064->SetParLimits(0,0,0);
   quadLineFit1064->SetParameter(1,-0.1484523);
   quadLineFit1064->SetParError(1,0.003942873);
   quadLineFit1064->SetParLimits(1,0,0);
   quadLineFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1064);
   gre->Draw("p ");
   
   TF1 *quadLineFit1065 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1065->SetFillColor(19);
   quadLineFit1065->SetFillStyle(0);
   quadLineFit1065->SetLineColor(2);
   quadLineFit1065->SetLineWidth(2);
   quadLineFit1065->SetChisquare(11.3158);
   quadLineFit1065->SetNDF(1);
   quadLineFit1065->GetXaxis()->SetLabelFont(42);
   quadLineFit1065->GetXaxis()->SetTitleOffset(1);
   quadLineFit1065->GetXaxis()->SetTitleFont(42);
   quadLineFit1065->GetYaxis()->SetLabelFont(42);
   quadLineFit1065->GetYaxis()->SetTitleFont(42);
   quadLineFit1065->SetParameter(0,5.228553);
   quadLineFit1065->SetParError(0,0.07126316);
   quadLineFit1065->SetParLimits(0,0,0);
   quadLineFit1065->SetParameter(1,-0.1484523);
   quadLineFit1065->SetParError(1,0.003942873);
   quadLineFit1065->SetParLimits(1,0,0);
   quadLineFit1065->Draw("same");
   
   Double_t 0.000000 ppm_fx1065[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1065[3] = {
   0.6214924,
   0.5262853,
   0.4900669};
   Double_t 0.000000 ppm_fex1065[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1065[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,0.000000 ppm_fx1065,0.000000 ppm_fy1065,0.000000 ppm_fex1065,0.000000 ppm_fey1065);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1065 = new TH1F("Graph_0dO000000sPppm1065","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1065->SetMinimum(0.4635422);
   Graph_0dO000000sPppm1065->SetMaximum(0.6480171);
   Graph_0dO000000sPppm1065->SetDirectory(0);
   Graph_0dO000000sPppm1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1065->SetLineColor(ci);
   Graph_0dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1065->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineColor(3);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(4.663351);
   quadLineFit1066->SetNDF(1);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,1.137363);
   quadLineFit1066->SetParError(0,0.07126175);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,-0.03285637);
   quadLineFit1066->SetParError(1,0.003942794);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("p ");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineColor(3);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(4.663351);
   quadLineFit1067->SetNDF(1);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,1.137363);
   quadLineFit1067->SetParError(0,0.07126175);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,-0.03285637);
   quadLineFit1067->SetParError(1,0.003942794);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
