void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1061[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -30.000000 ppm_fy1061[3] = {
   -1.884704,
   -1.677031,
   -1.469959};
   Double_t -30.000000 ppm_fex1061[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1061[3] = {
   0.01208777,
   0.01208777,
   0.01208777};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1061,-30.000000 ppm_fy1061,-30.000000 ppm_fex1061,-30.000000 ppm_fey1061);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1061 = new TH1F("Graph_mI30dO000000sPppm1061","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1061->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1061->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1061->SetDirectory(0);
   Graph_mI30dO000000sPppm1061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1061->SetLineColor(ci);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
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
   
   
   TF1 *quadLineFit1062 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1062->SetFillColor(19);
   quadLineFit1062->SetFillStyle(0);
   quadLineFit1062->SetLineWidth(2);
   quadLineFit1062->SetChisquare(2.979667);
   quadLineFit1062->SetNDF(1);
   quadLineFit1062->GetXaxis()->SetLabelFont(42);
   quadLineFit1062->GetXaxis()->SetTitleOffset(1);
   quadLineFit1062->GetXaxis()->SetTitleFont(42);
   quadLineFit1062->GetYaxis()->SetLabelFont(42);
   quadLineFit1062->GetYaxis()->SetTitleFont(42);
   quadLineFit1062->SetParameter(0,-0.03534522);
   quadLineFit1062->SetParError(0,0.06820408);
   quadLineFit1062->SetParLimits(0,0,0);
   quadLineFit1062->SetParameter(1,-25.9951);
   quadLineFit1062->SetParError(1,1.074171);
   quadLineFit1062->SetParLimits(1,0,0);
   quadLineFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1062);
   gre->Draw("ap");
   
   TF1 *quadLineFit1063 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1063->SetFillColor(19);
   quadLineFit1063->SetFillStyle(0);
   quadLineFit1063->SetLineWidth(2);
   quadLineFit1063->SetChisquare(2.979667);
   quadLineFit1063->SetNDF(1);
   quadLineFit1063->GetXaxis()->SetLabelFont(42);
   quadLineFit1063->GetXaxis()->SetTitleOffset(1);
   quadLineFit1063->GetXaxis()->SetTitleFont(42);
   quadLineFit1063->GetYaxis()->SetLabelFont(42);
   quadLineFit1063->GetYaxis()->SetTitleFont(42);
   quadLineFit1063->SetParameter(0,-0.03534522);
   quadLineFit1063->SetParError(0,0.06820408);
   quadLineFit1063->SetParLimits(0,0,0);
   quadLineFit1063->SetParameter(1,-25.9951);
   quadLineFit1063->SetParError(1,1.074171);
   quadLineFit1063->SetParLimits(1,0,0);
   quadLineFit1063->Draw("same");
   
   Double_t -10.000000 ppm_fx1063[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -10.000000 ppm_fy1063[3] = {
   -0.1630324,
   -0.1562267,
   -0.1219838};
   Double_t -10.000000 ppm_fex1063[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1063[3] = {
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1063,-10.000000 ppm_fy1063,-10.000000 ppm_fex1063,-10.000000 ppm_fey1063);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1063 = new TH1F("Graph_mI10dO000000sPppm1063","Graph",100,0.05396825,0.07301587);
   Graph_mI10dO000000sPppm1063->SetMinimum(-0.1816426);
   Graph_mI10dO000000sPppm1063->SetMaximum(-0.1033736);
   Graph_mI10dO000000sPppm1063->SetDirectory(0);
   Graph_mI10dO000000sPppm1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1063->SetLineColor(ci);
   Graph_mI10dO000000sPppm1063->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1063->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1063->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1063->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1063->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1063->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1063->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1063);
   
   
   TF1 *quadLineFit1064 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1064->SetFillColor(19);
   quadLineFit1064->SetFillStyle(0);
   quadLineFit1064->SetLineColor(2);
   quadLineFit1064->SetLineWidth(2);
   quadLineFit1064->SetChisquare(1.203614);
   quadLineFit1064->SetNDF(1);
   quadLineFit1064->GetXaxis()->SetLabelFont(42);
   quadLineFit1064->GetXaxis()->SetTitleOffset(1);
   quadLineFit1064->GetXaxis()->SetTitleFont(42);
   quadLineFit1064->GetYaxis()->SetLabelFont(42);
   quadLineFit1064->GetYaxis()->SetTitleFont(42);
   quadLineFit1064->SetParameter(0,0.01088652);
   quadLineFit1064->SetParError(0,0.06820624);
   quadLineFit1064->SetParLimits(0,0,0);
   quadLineFit1064->SetParameter(1,-2.501014);
   quadLineFit1064->SetParError(1,1.074205);
   quadLineFit1064->SetParLimits(1,0,0);
   quadLineFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1064);
   gre->Draw("p ");
   
   TF1 *quadLineFit1065 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1065->SetFillColor(19);
   quadLineFit1065->SetFillStyle(0);
   quadLineFit1065->SetLineColor(2);
   quadLineFit1065->SetLineWidth(2);
   quadLineFit1065->SetChisquare(1.203614);
   quadLineFit1065->SetNDF(1);
   quadLineFit1065->GetXaxis()->SetLabelFont(42);
   quadLineFit1065->GetXaxis()->SetTitleOffset(1);
   quadLineFit1065->GetXaxis()->SetTitleFont(42);
   quadLineFit1065->GetYaxis()->SetLabelFont(42);
   quadLineFit1065->GetYaxis()->SetTitleFont(42);
   quadLineFit1065->SetParameter(0,0.01088652);
   quadLineFit1065->SetParError(0,0.06820624);
   quadLineFit1065->SetParLimits(0,0,0);
   quadLineFit1065->SetParameter(1,-2.501014);
   quadLineFit1065->SetParError(1,1.074205);
   quadLineFit1065->SetParLimits(1,0,0);
   quadLineFit1065->Draw("same");
   
   Double_t 10.000000 ppm_fx1065[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 10.000000 ppm_fy1065[3] = {
   1.550358,
   1.372508,
   1.215338};
   Double_t 10.000000 ppm_fex1065[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1065[3] = {
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(3,10.000000 ppm_fx1065,10.000000 ppm_fy1065,10.000000 ppm_fex1065,10.000000 ppm_fey1065);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_10dO000000sPppm1065 = new TH1F("Graph_10dO000000sPppm1065","Graph",100,0.05396825,0.07301587);
   Graph_10dO000000sPppm1065->SetMinimum(1.16733);
   Graph_10dO000000sPppm1065->SetMaximum(1.598366);
   Graph_10dO000000sPppm1065->SetDirectory(0);
   Graph_10dO000000sPppm1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1065->SetLineColor(ci);
   Graph_10dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineColor(3);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(0.5098827);
   quadLineFit1066->SetNDF(1);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,0.04979519);
   quadLineFit1066->SetParError(0,0.06822066);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,21.05094);
   quadLineFit1066->SetParError(1,1.074432);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("p ");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineColor(3);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(0.5098827);
   quadLineFit1067->SetNDF(1);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,0.04979519);
   quadLineFit1067->SetParError(0,0.06822066);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,21.05094);
   quadLineFit1067->SetParError(1,1.074432);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t 30.000000 ppm_fx1067[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 30.000000 ppm_fy1067[3] = {
   3.245782,
   2.852758,
   2.561815};
   Double_t 30.000000 ppm_fex1067[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1067[3] = {
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(3,30.000000 ppm_fx1067,30.000000 ppm_fy1067,30.000000 ppm_fex1067,30.000000 ppm_fey1067);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_30dO000000sPppm1067 = new TH1F("Graph_30dO000000sPppm1067","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1067->SetMinimum(2.478913);
   Graph_30dO000000sPppm1067->SetMaximum(3.328685);
   Graph_30dO000000sPppm1067->SetDirectory(0);
   Graph_30dO000000sPppm1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1067->SetLineColor(ci);
   Graph_30dO000000sPppm1067->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1067->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1067->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1067->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1067);
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(4);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(0.312151);
   quadLineFit1068->SetNDF(1);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,0.1624285);
   quadLineFit1068->SetParError(0,0.06820226);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,43.13327);
   quadLineFit1068->SetParError(1,1.074142);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(4);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(0.312151);
   quadLineFit1069->SetNDF(1);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,0.1624285);
   quadLineFit1069->SetParError(0,0.06820226);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,43.13327);
   quadLineFit1069->SetParError(1,1.074142);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
