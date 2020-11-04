void QuadScans_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.91429,-3.25,19.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1145[3] = {
   14,
   16,
   18};
   Double_t -30.000000 ppm_fy1145[3] = {
   -1.902713,
   -1.658675,
   -1.469404};
   Double_t -30.000000 ppm_fex1145[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1145[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1145,-30.000000 ppm_fy1145,-30.000000 ppm_fex1145,-30.000000 ppm_fey1145);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1145 = new TH1F("Graph_mI30dO000000sPppm1145","",100,13.6,18.4);
   Graph_mI30dO000000sPppm1145->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1145->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1145->SetDirectory(0);
   Graph_mI30dO000000sPppm1145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1145->SetLineColor(ci);
   Graph_mI30dO000000sPppm1145->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1145->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1145->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1145->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1145->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1145->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1145->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1145->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1145->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1145->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1145->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1145->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1145->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1145->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1145->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1145);
   
   
   TF1 *quadLineFit1146 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1146->SetFillColor(19);
   quadLineFit1146->SetFillStyle(0);
   quadLineFit1146->SetLineWidth(2);
   quadLineFit1146->SetChisquare(7.479963);
   quadLineFit1146->SetNDF(1);
   quadLineFit1146->GetXaxis()->SetLabelFont(42);
   quadLineFit1146->GetXaxis()->SetTitleOffset(1);
   quadLineFit1146->GetXaxis()->SetTitleFont(42);
   quadLineFit1146->GetYaxis()->SetLabelFont(42);
   quadLineFit1146->GetYaxis()->SetTitleFont(42);
   quadLineFit1146->SetParameter(0,-3.410167);
   quadLineFit1146->SetParError(0,0.04648433);
   quadLineFit1146->SetParLimits(0,0,0);
   quadLineFit1146->SetParameter(1,0.1083273);
   quadLineFit1146->SetParError(1,0.002890256);
   quadLineFit1146->SetParLimits(1,0,0);
   quadLineFit1146->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1146);
   gre->Draw("ap");
   
   TF1 *quadLineFit1147 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1147->SetFillColor(19);
   quadLineFit1147->SetFillStyle(0);
   quadLineFit1147->SetLineWidth(2);
   quadLineFit1147->SetChisquare(7.479963);
   quadLineFit1147->SetNDF(1);
   quadLineFit1147->GetXaxis()->SetLabelFont(42);
   quadLineFit1147->GetXaxis()->SetTitleOffset(1);
   quadLineFit1147->GetXaxis()->SetTitleFont(42);
   quadLineFit1147->GetYaxis()->SetLabelFont(42);
   quadLineFit1147->GetYaxis()->SetTitleFont(42);
   quadLineFit1147->SetParameter(0,-3.410167);
   quadLineFit1147->SetParError(0,0.04648433);
   quadLineFit1147->SetParLimits(0,0,0);
   quadLineFit1147->SetParameter(1,0.1083273);
   quadLineFit1147->SetParError(1,0.002890256);
   quadLineFit1147->SetParLimits(1,0,0);
   quadLineFit1147->Draw("same");
   
   Double_t -10.000000 ppm_fx1147[3] = {
   14,
   16,
   18};
   Double_t -10.000000 ppm_fy1147[3] = {
   -0.1762476,
   -0.1511751,
   -0.1414275};
   Double_t -10.000000 ppm_fex1147[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1147[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1147,-10.000000 ppm_fy1147,-10.000000 ppm_fex1147,-10.000000 ppm_fey1147);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1147 = new TH1F("Graph_mI10dO000000sPppm1147","Graph",100,13.6,18.4);
   Graph_mI10dO000000sPppm1147->SetMinimum(-0.1895395);
   Graph_mI10dO000000sPppm1147->SetMaximum(-0.1281356);
   Graph_mI10dO000000sPppm1147->SetDirectory(0);
   Graph_mI10dO000000sPppm1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1147->SetLineColor(ci);
   Graph_mI10dO000000sPppm1147->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1147->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1147->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1147->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1147->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1147->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1147->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1147);
   
   
   TF1 *quadLineFit1148 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1148->SetFillColor(19);
   quadLineFit1148->SetFillStyle(0);
   quadLineFit1148->SetLineColor(2);
   quadLineFit1148->SetLineWidth(2);
   quadLineFit1148->SetChisquare(0.5857074);
   quadLineFit1148->SetNDF(1);
   quadLineFit1148->GetXaxis()->SetLabelFont(42);
   quadLineFit1148->GetXaxis()->SetTitleOffset(1);
   quadLineFit1148->GetXaxis()->SetTitleFont(42);
   quadLineFit1148->GetYaxis()->SetLabelFont(42);
   quadLineFit1148->GetYaxis()->SetTitleFont(42);
   quadLineFit1148->SetParameter(0,-0.2955638);
   quadLineFit1148->SetParError(0,0.0464845);
   quadLineFit1148->SetParLimits(0,0,0);
   quadLineFit1148->SetParameter(1,0.008705026);
   quadLineFit1148->SetParError(1,0.002890267);
   quadLineFit1148->SetParLimits(1,0,0);
   quadLineFit1148->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1148);
   gre->Draw("p ");
   
   TF1 *quadLineFit1149 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1149->SetFillColor(19);
   quadLineFit1149->SetFillStyle(0);
   quadLineFit1149->SetLineColor(2);
   quadLineFit1149->SetLineWidth(2);
   quadLineFit1149->SetChisquare(0.5857074);
   quadLineFit1149->SetNDF(1);
   quadLineFit1149->GetXaxis()->SetLabelFont(42);
   quadLineFit1149->GetXaxis()->SetTitleOffset(1);
   quadLineFit1149->GetXaxis()->SetTitleFont(42);
   quadLineFit1149->GetYaxis()->SetLabelFont(42);
   quadLineFit1149->GetYaxis()->SetTitleFont(42);
   quadLineFit1149->SetParameter(0,-0.2955638);
   quadLineFit1149->SetParError(0,0.0464845);
   quadLineFit1149->SetParLimits(0,0,0);
   quadLineFit1149->SetParameter(1,0.008705026);
   quadLineFit1149->SetParError(1,0.002890267);
   quadLineFit1149->SetParLimits(1,0,0);
   quadLineFit1149->Draw("same");
   
   Double_t 10.000000 ppm_fx1149[3] = {
   14,
   16,
   18};
   Double_t 10.000000 ppm_fy1149[3] = {
   1.563456,
   1.348865,
   1.193127};
   Double_t 10.000000 ppm_fex1149[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1149[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,10.000000 ppm_fx1149,10.000000 ppm_fy1149,10.000000 ppm_fex1149,10.000000 ppm_fey1149);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1149 = new TH1F("Graph_10dO000000sPppm1149","Graph",100,13.6,18.4);
   Graph_10dO000000sPppm1149->SetMinimum(1.146285);
   Graph_10dO000000sPppm1149->SetMaximum(1.610298);
   Graph_10dO000000sPppm1149->SetDirectory(0);
   Graph_10dO000000sPppm1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1149->SetLineColor(ci);
   Graph_10dO000000sPppm1149->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1149->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1149->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1149->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1149->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1149->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1149->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1149);
   
   
   TF1 *quadLineFit1150 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1150->SetFillColor(19);
   quadLineFit1150->SetFillStyle(0);
   quadLineFit1150->SetLineColor(3);
   quadLineFit1150->SetLineWidth(2);
   quadLineFit1150->SetChisquare(8.63782);
   quadLineFit1150->SetNDF(1);
   quadLineFit1150->GetXaxis()->SetLabelFont(42);
   quadLineFit1150->GetXaxis()->SetTitleOffset(1);
   quadLineFit1150->GetXaxis()->SetTitleFont(42);
   quadLineFit1150->GetYaxis()->SetLabelFont(42);
   quadLineFit1150->GetYaxis()->SetTitleFont(42);
   quadLineFit1150->SetParameter(0,2.849796);
   quadLineFit1150->SetParError(0,0.0464844);
   quadLineFit1150->SetParLimits(0,0,0);
   quadLineFit1150->SetParameter(1,-0.0925821);
   quadLineFit1150->SetParError(1,0.002890261);
   quadLineFit1150->SetParLimits(1,0,0);
   quadLineFit1150->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1150);
   gre->Draw("p ");
   
   TF1 *quadLineFit1151 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1151->SetFillColor(19);
   quadLineFit1151->SetFillStyle(0);
   quadLineFit1151->SetLineColor(3);
   quadLineFit1151->SetLineWidth(2);
   quadLineFit1151->SetChisquare(8.63782);
   quadLineFit1151->SetNDF(1);
   quadLineFit1151->GetXaxis()->SetLabelFont(42);
   quadLineFit1151->GetXaxis()->SetTitleOffset(1);
   quadLineFit1151->GetXaxis()->SetTitleFont(42);
   quadLineFit1151->GetYaxis()->SetLabelFont(42);
   quadLineFit1151->GetYaxis()->SetTitleFont(42);
   quadLineFit1151->SetParameter(0,2.849796);
   quadLineFit1151->SetParError(0,0.0464844);
   quadLineFit1151->SetParLimits(0,0,0);
   quadLineFit1151->SetParameter(1,-0.0925821);
   quadLineFit1151->SetParError(1,0.002890261);
   quadLineFit1151->SetParLimits(1,0,0);
   quadLineFit1151->Draw("same");
   
   Double_t 30.000000 ppm_fx1151[3] = {
   14,
   16,
   18};
   Double_t 30.000000 ppm_fy1151[3] = {
   3.263562,
   2.862588,
   2.550111};
   Double_t 30.000000 ppm_fex1151[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1151[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,30.000000 ppm_fx1151,30.000000 ppm_fy1151,30.000000 ppm_fex1151,30.000000 ppm_fey1151);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1151 = new TH1F("Graph_30dO000000sPppm1151","Graph",100,13.6,18.4);
   Graph_30dO000000sPppm1151->SetMinimum(2.468956);
   Graph_30dO000000sPppm1151->SetMaximum(3.344717);
   Graph_30dO000000sPppm1151->SetDirectory(0);
   Graph_30dO000000sPppm1151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1151->SetLineColor(ci);
   Graph_30dO000000sPppm1151->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1151->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1151->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1151->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1151->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1151->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1151->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1151);
   
   
   TF1 *quadLineFit1152 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1152->SetFillColor(19);
   quadLineFit1152->SetFillStyle(0);
   quadLineFit1152->SetLineColor(4);
   quadLineFit1152->SetLineWidth(2);
   quadLineFit1152->SetChisquare(19.53195);
   quadLineFit1152->SetNDF(1);
   quadLineFit1152->GetXaxis()->SetLabelFont(42);
   quadLineFit1152->GetXaxis()->SetTitleOffset(1);
   quadLineFit1152->GetXaxis()->SetTitleFont(42);
   quadLineFit1152->GetYaxis()->SetLabelFont(42);
   quadLineFit1152->GetYaxis()->SetTitleFont(42);
   quadLineFit1152->SetParameter(0,5.745893);
   quadLineFit1152->SetParError(0,0.04648462);
   quadLineFit1152->SetParLimits(0,0,0);
   quadLineFit1152->SetParameter(1,-0.1783629);
   quadLineFit1152->SetParError(1,0.002890274);
   quadLineFit1152->SetParLimits(1,0,0);
   quadLineFit1152->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1152);
   gre->Draw("p ");
   
   TF1 *quadLineFit1153 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1153->SetFillColor(19);
   quadLineFit1153->SetFillStyle(0);
   quadLineFit1153->SetLineColor(4);
   quadLineFit1153->SetLineWidth(2);
   quadLineFit1153->SetChisquare(19.53195);
   quadLineFit1153->SetNDF(1);
   quadLineFit1153->GetXaxis()->SetLabelFont(42);
   quadLineFit1153->GetXaxis()->SetTitleOffset(1);
   quadLineFit1153->GetXaxis()->SetTitleFont(42);
   quadLineFit1153->GetYaxis()->SetLabelFont(42);
   quadLineFit1153->GetYaxis()->SetTitleFont(42);
   quadLineFit1153->SetParameter(0,5.745893);
   quadLineFit1153->SetParError(0,0.04648462);
   quadLineFit1153->SetParLimits(0,0,0);
   quadLineFit1153->SetParameter(1,-0.1783629);
   quadLineFit1153->SetParError(1,0.002890274);
   quadLineFit1153->SetParLimits(1,0,0);
   quadLineFit1153->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
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
