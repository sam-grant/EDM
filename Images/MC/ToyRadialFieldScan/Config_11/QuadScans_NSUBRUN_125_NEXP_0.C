void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:23 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1033[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1033[3] = {
   -3.176647,
   -2.812671,
   -2.517734};
   Double_t -50.000000 ppm_fex1033[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1033[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1033,-50.000000 ppm_fy1033,-50.000000 ppm_fex1033,-50.000000 ppm_fey1033);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1033 = new TH1F("Graph_mI50dO000000sPppm1033","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1033->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1033->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1033->SetDirectory(0);
   Graph_mI50dO000000sPppm1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1033->SetLineColor(ci);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1033->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1033->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(4.556743);
   quadLineFit1034->SetNDF(1);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,-5.800791);
   quadLineFit1034->SetParError(0,0.08437165);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,0.1647282);
   quadLineFit1034->SetParError(1,0.004668143);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("ap");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(4.556743);
   quadLineFit1035->SetNDF(1);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,-5.800791);
   quadLineFit1035->SetParError(0,0.08437165);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,0.1647282);
   quadLineFit1035->SetParError(1,0.004668143);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t 50.000000 ppm_fx1035[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1035[3] = {
   4.341651,
   3.862174,
   3.498333};
   Double_t 50.000000 ppm_fex1035[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1035[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,50.000000 ppm_fx1035,50.000000 ppm_fy1035,50.000000 ppm_fex1035,50.000000 ppm_fey1035);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1035 = new TH1F("Graph_50dO000000sPppm1035","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1035->SetMinimum(3.398157);
   Graph_50dO000000sPppm1035->SetMaximum(4.441827);
   Graph_50dO000000sPppm1035->SetDirectory(0);
   Graph_50dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1035->SetLineColor(ci);
   Graph_50dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(2);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(12.78355);
   quadLineFit1036->SetNDF(1);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,7.695651);
   quadLineFit1036->SetParError(0,0.08437174);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,-0.2108295);
   quadLineFit1036->SetParError(1,0.004668148);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(2);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(12.78355);
   quadLineFit1037->SetNDF(1);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,7.695651);
   quadLineFit1037->SetParError(0,0.08437174);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,-0.2108295);
   quadLineFit1037->SetParError(1,0.004668148);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
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
