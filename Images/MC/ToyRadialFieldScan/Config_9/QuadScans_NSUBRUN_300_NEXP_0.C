void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1111[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1111[3] = {
   -1.652552,
   -1.482689,
   -1.335003};
   Double_t -30.000000 ppm_fex1111[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1111[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1111,-30.000000 ppm_fy1111,-30.000000 ppm_fex1111,-30.000000 ppm_fey1111);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1111 = new TH1F("Graph_mI30dO000000sPppm1111","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1111->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1111->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1111->SetDirectory(0);
   Graph_mI30dO000000sPppm1111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1111->SetLineColor(ci);
   Graph_mI30dO000000sPppm1111->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1111->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1111->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1111->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1111->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1111->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1111->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1111->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1111->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1111->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1111->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1111->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1111->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1111->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1111->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1111);
   
   
   TF1 *quadLineFit1112 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1112->SetFillColor(19);
   quadLineFit1112->SetFillStyle(0);
   quadLineFit1112->SetLineWidth(2);
   quadLineFit1112->SetChisquare(1.132309);
   quadLineFit1112->SetNDF(1);
   quadLineFit1112->GetXaxis()->SetLabelFont(42);
   quadLineFit1112->GetXaxis()->SetTitleOffset(1);
   quadLineFit1112->GetXaxis()->SetTitleFont(42);
   quadLineFit1112->GetYaxis()->SetLabelFont(42);
   quadLineFit1112->GetYaxis()->SetTitleFont(42);
   quadLineFit1112->SetParameter(0,-2.919055);
   quadLineFit1112->SetParError(0,0.0543711);
   quadLineFit1112->SetParLimits(0,0,0);
   quadLineFit1112->SetParameter(1,0.07938743);
   quadLineFit1112->SetParError(1,0.003008262);
   quadLineFit1112->SetParLimits(1,0,0);
   quadLineFit1112->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1112);
   gre->Draw("ap");
   
   TF1 *quadLineFit1113 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1113->SetFillColor(19);
   quadLineFit1113->SetFillStyle(0);
   quadLineFit1113->SetLineWidth(2);
   quadLineFit1113->SetChisquare(1.132309);
   quadLineFit1113->SetNDF(1);
   quadLineFit1113->GetXaxis()->SetLabelFont(42);
   quadLineFit1113->GetXaxis()->SetTitleOffset(1);
   quadLineFit1113->GetXaxis()->SetTitleFont(42);
   quadLineFit1113->GetYaxis()->SetLabelFont(42);
   quadLineFit1113->GetYaxis()->SetTitleFont(42);
   quadLineFit1113->SetParameter(0,-2.919055);
   quadLineFit1113->SetParError(0,0.0543711);
   quadLineFit1113->SetParLimits(0,0,0);
   quadLineFit1113->SetParameter(1,0.07938743);
   quadLineFit1113->SetParError(1,0.003008262);
   quadLineFit1113->SetParLimits(1,0,0);
   quadLineFit1113->Draw("same");
   
   Double_t 30.000000 ppm_fx1113[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1113[3] = {
   2.861762,
   2.538239,
   2.308539};
   Double_t 30.000000 ppm_fex1113[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1113[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,30.000000 ppm_fx1113,30.000000 ppm_fy1113,30.000000 ppm_fex1113,30.000000 ppm_fey1113);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1113 = new TH1F("Graph_30dO000000sPppm1113","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1113->SetMinimum(2.243007);
   Graph_30dO000000sPppm1113->SetMaximum(2.927294);
   Graph_30dO000000sPppm1113->SetDirectory(0);
   Graph_30dO000000sPppm1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1113->SetLineColor(ci);
   Graph_30dO000000sPppm1113->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1113->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1113->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1113->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1113->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1113->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1113->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1113);
   
   
   TF1 *quadLineFit1114 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1114->SetFillColor(19);
   quadLineFit1114->SetFillStyle(0);
   quadLineFit1114->SetLineColor(2);
   quadLineFit1114->SetLineWidth(2);
   quadLineFit1114->SetChisquare(20.26538);
   quadLineFit1114->SetNDF(1);
   quadLineFit1114->GetXaxis()->SetLabelFont(42);
   quadLineFit1114->GetXaxis()->SetTitleOffset(1);
   quadLineFit1114->GetXaxis()->SetTitleFont(42);
   quadLineFit1114->GetYaxis()->SetLabelFont(42);
   quadLineFit1114->GetYaxis()->SetTitleFont(42);
   quadLineFit1114->SetParameter(0,5.059015);
   quadLineFit1114->SetParError(0,0.05437122);
   quadLineFit1114->SetParLimits(0,0,0);
   quadLineFit1114->SetParameter(1,-0.1383056);
   quadLineFit1114->SetParError(1,0.003008269);
   quadLineFit1114->SetParLimits(1,0,0);
   quadLineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1114);
   gre->Draw("p ");
   
   TF1 *quadLineFit1115 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1115->SetFillColor(19);
   quadLineFit1115->SetFillStyle(0);
   quadLineFit1115->SetLineColor(2);
   quadLineFit1115->SetLineWidth(2);
   quadLineFit1115->SetChisquare(20.26538);
   quadLineFit1115->SetNDF(1);
   quadLineFit1115->GetXaxis()->SetLabelFont(42);
   quadLineFit1115->GetXaxis()->SetTitleOffset(1);
   quadLineFit1115->GetXaxis()->SetTitleFont(42);
   quadLineFit1115->GetYaxis()->SetLabelFont(42);
   quadLineFit1115->GetYaxis()->SetTitleFont(42);
   quadLineFit1115->SetParameter(0,5.059015);
   quadLineFit1115->SetParError(0,0.05437122);
   quadLineFit1115->SetParLimits(0,0,0);
   quadLineFit1115->SetParameter(1,-0.1383056);
   quadLineFit1115->SetParError(1,0.003008269);
   quadLineFit1115->SetParLimits(1,0,0);
   quadLineFit1115->Draw("same");
   
   Double_t 0.000000 ppm_fx1115[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1115[3] = {
   0.6200845,
   0.5284929,
   0.4635472};
   Double_t 0.000000 ppm_fex1115[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1115[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,0.000000 ppm_fx1115,0.000000 ppm_fy1115,0.000000 ppm_fex1115,0.000000 ppm_fey1115);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1115 = new TH1F("Graph_0dO000000sPppm1115","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1115->SetMinimum(0.437683);
   Graph_0dO000000sPppm1115->SetMaximum(0.6459486);
   Graph_0dO000000sPppm1115->SetDirectory(0);
   Graph_0dO000000sPppm1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1115->SetLineColor(ci);
   Graph_0dO000000sPppm1115->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1115->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1115->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1115->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1115->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1115->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1115->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1115);
   
   
   TF1 *quadLineFit1116 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1116->SetFillColor(19);
   quadLineFit1116->SetFillStyle(0);
   quadLineFit1116->SetLineColor(3);
   quadLineFit1116->SetLineWidth(2);
   quadLineFit1116->SetChisquare(1.634494);
   quadLineFit1116->SetNDF(1);
   quadLineFit1116->GetXaxis()->SetLabelFont(42);
   quadLineFit1116->GetXaxis()->SetTitleOffset(1);
   quadLineFit1116->GetXaxis()->SetTitleFont(42);
   quadLineFit1116->GetYaxis()->SetLabelFont(42);
   quadLineFit1116->GetYaxis()->SetTitleFont(42);
   quadLineFit1116->SetParameter(0,1.241793);
   quadLineFit1116->SetParError(0,0.0543703);
   quadLineFit1116->SetParLimits(0,0,0);
   quadLineFit1116->SetParameter(1,-0.03913433);
   quadLineFit1116->SetParError(1,0.003008218);
   quadLineFit1116->SetParLimits(1,0,0);
   quadLineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1116);
   gre->Draw("p ");
   
   TF1 *quadLineFit1117 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1117->SetFillColor(19);
   quadLineFit1117->SetFillStyle(0);
   quadLineFit1117->SetLineColor(3);
   quadLineFit1117->SetLineWidth(2);
   quadLineFit1117->SetChisquare(1.634494);
   quadLineFit1117->SetNDF(1);
   quadLineFit1117->GetXaxis()->SetLabelFont(42);
   quadLineFit1117->GetXaxis()->SetTitleOffset(1);
   quadLineFit1117->GetXaxis()->SetTitleFont(42);
   quadLineFit1117->GetYaxis()->SetLabelFont(42);
   quadLineFit1117->GetYaxis()->SetTitleFont(42);
   quadLineFit1117->SetParameter(0,1.241793);
   quadLineFit1117->SetParError(0,0.0543703);
   quadLineFit1117->SetParLimits(0,0,0);
   quadLineFit1117->SetParameter(1,-0.03913433);
   quadLineFit1117->SetParError(1,0.003008218);
   quadLineFit1117->SetParLimits(1,0,0);
   quadLineFit1117->Draw("same");
   
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
