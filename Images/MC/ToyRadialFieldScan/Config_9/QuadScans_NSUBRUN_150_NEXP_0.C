void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1051[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1051[3] = {
   -1.646437,
   -1.483224,
   -1.342419};
   Double_t -30.000000 ppm_fex1051[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1051[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1051,-30.000000 ppm_fy1051,-30.000000 ppm_fex1051,-30.000000 ppm_fey1051);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1051 = new TH1F("Graph_mI30dO000000sPppm1051","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1051->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1051->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1051->SetDirectory(0);
   Graph_mI30dO000000sPppm1051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1051->SetLineColor(ci);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1051->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1051->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(0.5766005);
   quadLineFit1052->SetNDF(1);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,-2.858777);
   quadLineFit1052->SetParError(0,0.07698766);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,0.07600462);
   quadLineFit1052->SetParError(1,0.004259599);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("ap");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(0.5766005);
   quadLineFit1053->SetNDF(1);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,-2.858777);
   quadLineFit1053->SetParError(0,0.07698766);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,0.07600462);
   quadLineFit1053->SetParError(1,0.004259599);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   Double_t 30.000000 ppm_fx1053[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1053[3] = {
   2.845493,
   2.529951,
   2.289716};
   Double_t 30.000000 ppm_fex1053[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1053[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,30.000000 ppm_fx1053,30.000000 ppm_fy1053,30.000000 ppm_fex1053,30.000000 ppm_fey1053);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1053 = new TH1F("Graph_30dO000000sPppm1053","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1053->SetMinimum(2.219681);
   Graph_30dO000000sPppm1053->SetMaximum(2.915528);
   Graph_30dO000000sPppm1053->SetDirectory(0);
   Graph_30dO000000sPppm1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1053->SetLineColor(ci);
   Graph_30dO000000sPppm1053->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1053->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1053->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1053->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1053->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1053->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1053->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1053);
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineColor(2);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(6.511813);
   quadLineFit1054->SetNDF(1);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,5.056051);
   quadLineFit1054->SetParError(0,0.07698396);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,-0.1389443);
   quadLineFit1054->SetParError(1,0.004259393);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("p ");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineColor(2);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(6.511813);
   quadLineFit1055->SetNDF(1);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,5.056051);
   quadLineFit1055->SetParError(0,0.07698396);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,-0.1389443);
   quadLineFit1055->SetParError(1,0.004259393);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t 0.000000 ppm_fx1055[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1055[3] = {
   0.6096535,
   0.5364099,
   0.4876124};
   Double_t 0.000000 ppm_fex1055[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1055[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,0.000000 ppm_fx1055,0.000000 ppm_fy1055,0.000000 ppm_fex1055,0.000000 ppm_fey1055);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1055 = new TH1F("Graph_0dO000000sPppm1055","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1055->SetMinimum(0.460951);
   Graph_0dO000000sPppm1055->SetMaximum(0.636315);
   Graph_0dO000000sPppm1055->SetDirectory(0);
   Graph_0dO000000sPppm1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1055->SetLineColor(ci);
   Graph_0dO000000sPppm1055->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1055->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1055->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1055->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1055->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1055->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1055->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1055);
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(3);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(0.6862032);
   quadLineFit1056->SetNDF(1);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,1.093744);
   quadLineFit1056->SetParError(0,0.07698564);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,-0.03051027);
   quadLineFit1056->SetParError(1,0.004259487);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(3);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(0.6862032);
   quadLineFit1057->SetNDF(1);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,1.093744);
   quadLineFit1057->SetParError(0,0.07698564);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,-0.03051027);
   quadLineFit1057->SetParError(1,0.004259487);
   quadLineFit1057->SetParLimits(1,0,0);
   quadLineFit1057->Draw("same");
   
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
