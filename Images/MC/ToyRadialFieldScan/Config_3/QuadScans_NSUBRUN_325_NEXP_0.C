void QuadScans_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:15 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1097[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1097[2] = {
   -3.152526,
   -2.539721};
   Double_t -50.000000 ppm_fex1097[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1097[2] = {
   0.008174905,
   0.008174905};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1097,-50.000000 ppm_fy1097,-50.000000 ppm_fex1097,-50.000000 ppm_fey1097);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1097 = new TH1F("Graph_mI50dO000000sPppm1097","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1097->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1097->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1097->SetDirectory(0);
   Graph_mI50dO000000sPppm1097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1097->SetLineColor(ci);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1097->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1097->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1097);
   
   
   TF1 *quadLineFit1098 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1098->SetFillColor(19);
   quadLineFit1098->SetFillStyle(0);
   quadLineFit1098->SetLineWidth(2);
   quadLineFit1098->SetChisquare(1.940884e-18);
   quadLineFit1098->SetNDF(0);
   quadLineFit1098->GetXaxis()->SetLabelFont(42);
   quadLineFit1098->GetXaxis()->SetTitleOffset(1);
   quadLineFit1098->GetXaxis()->SetTitleFont(42);
   quadLineFit1098->GetYaxis()->SetLabelFont(42);
   quadLineFit1098->GetYaxis()->SetTitleFont(42);
   quadLineFit1098->SetParameter(0,-5.603746);
   quadLineFit1098->SetParError(0,0.05234493);
   quadLineFit1098->SetParLimits(0,0,0);
   quadLineFit1098->SetParameter(1,0.1532012);
   quadLineFit1098->SetParError(1,0.002890265);
   quadLineFit1098->SetParLimits(1,0,0);
   quadLineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1098);
   gre->Draw("ap");
   
   TF1 *quadLineFit1099 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1099->SetFillColor(19);
   quadLineFit1099->SetFillStyle(0);
   quadLineFit1099->SetLineWidth(2);
   quadLineFit1099->SetChisquare(1.940884e-18);
   quadLineFit1099->SetNDF(0);
   quadLineFit1099->GetXaxis()->SetLabelFont(42);
   quadLineFit1099->GetXaxis()->SetTitleOffset(1);
   quadLineFit1099->GetXaxis()->SetTitleFont(42);
   quadLineFit1099->GetYaxis()->SetLabelFont(42);
   quadLineFit1099->GetYaxis()->SetTitleFont(42);
   quadLineFit1099->SetParameter(0,-5.603746);
   quadLineFit1099->SetParError(0,0.05234493);
   quadLineFit1099->SetParLimits(0,0,0);
   quadLineFit1099->SetParameter(1,0.1532012);
   quadLineFit1099->SetParError(1,0.002890265);
   quadLineFit1099->SetParLimits(1,0,0);
   quadLineFit1099->Draw("same");
   
   Double_t 50.000000 ppm_fx1099[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1099[2] = {
   4.360236,
   3.490971};
   Double_t 50.000000 ppm_fex1099[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1099[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,50.000000 ppm_fx1099,50.000000 ppm_fy1099,50.000000 ppm_fex1099,50.000000 ppm_fey1099);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1099 = new TH1F("Graph_50dO000000sPppm1099","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1099->SetMinimum(3.394234);
   Graph_50dO000000sPppm1099->SetMaximum(4.456972);
   Graph_50dO000000sPppm1099->SetDirectory(0);
   Graph_50dO000000sPppm1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1099->SetLineColor(ci);
   Graph_50dO000000sPppm1099->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1099->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1099->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1099->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1099->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1099->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1099->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1099);
   
   
   TF1 *quadLineFit1100 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1100->SetFillColor(19);
   quadLineFit1100->SetFillStyle(0);
   quadLineFit1100->SetLineColor(2);
   quadLineFit1100->SetLineWidth(2);
   quadLineFit1100->SetChisquare(1.018468e-19);
   quadLineFit1100->SetNDF(0);
   quadLineFit1100->GetXaxis()->SetLabelFont(42);
   quadLineFit1100->GetXaxis()->SetTitleOffset(1);
   quadLineFit1100->GetXaxis()->SetTitleFont(42);
   quadLineFit1100->GetYaxis()->SetLabelFont(42);
   quadLineFit1100->GetYaxis()->SetTitleFont(42);
   quadLineFit1100->SetParameter(0,7.837297);
   quadLineFit1100->SetParError(0,0.05234493);
   quadLineFit1100->SetParLimits(0,0,0);
   quadLineFit1100->SetParameter(1,-0.2173163);
   quadLineFit1100->SetParError(1,0.002890265);
   quadLineFit1100->SetParLimits(1,0,0);
   quadLineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1100);
   gre->Draw("p ");
   
   TF1 *quadLineFit1101 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1101->SetFillColor(19);
   quadLineFit1101->SetFillStyle(0);
   quadLineFit1101->SetLineColor(2);
   quadLineFit1101->SetLineWidth(2);
   quadLineFit1101->SetChisquare(1.018468e-19);
   quadLineFit1101->SetNDF(0);
   quadLineFit1101->GetXaxis()->SetLabelFont(42);
   quadLineFit1101->GetXaxis()->SetTitleOffset(1);
   quadLineFit1101->GetXaxis()->SetTitleFont(42);
   quadLineFit1101->GetYaxis()->SetLabelFont(42);
   quadLineFit1101->GetYaxis()->SetTitleFont(42);
   quadLineFit1101->SetParameter(0,7.837297);
   quadLineFit1101->SetParError(0,0.05234493);
   quadLineFit1101->SetParLimits(0,0,0);
   quadLineFit1101->SetParameter(1,-0.2173163);
   quadLineFit1101->SetParError(1,0.002890265);
   quadLineFit1101->SetParLimits(1,0,0);
   quadLineFit1101->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
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
