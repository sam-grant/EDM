void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:07 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1009[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1009[2] = {
   -3.148676,
   -2.547692};
   Double_t -50.000000 ppm_fex1009[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1009[2] = {
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1009,-50.000000 ppm_fy1009,-50.000000 ppm_fex1009,-50.000000 ppm_fey1009);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1009 = new TH1F("Graph_mI50dO000000sPppm1009","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1009->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1009->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1009->SetDirectory(0);
   Graph_mI50dO000000sPppm1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1009->SetLineColor(ci);
   Graph_mI50dO000000sPppm1009->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1009->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1009->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1009->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1009->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1009->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1009->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1009->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1009->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1009->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1009->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1009->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1009->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1009);
   
   
   TF1 *quadLineFit1010 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1010->SetFillColor(19);
   quadLineFit1010->SetFillStyle(0);
   quadLineFit1010->SetLineWidth(2);
   quadLineFit1010->SetChisquare(8.395976e-21);
   quadLineFit1010->SetNDF(0);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,-5.552609);
   quadLineFit1010->SetParError(0,0.1328027);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,0.1502458);
   quadLineFit1010->SetParError(1,0.007332801);
   quadLineFit1010->SetParLimits(1,0,0);
   quadLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1010);
   gre->Draw("ap");
   
   TF1 *quadLineFit1011 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1011->SetFillColor(19);
   quadLineFit1011->SetFillStyle(0);
   quadLineFit1011->SetLineWidth(2);
   quadLineFit1011->SetChisquare(8.395976e-21);
   quadLineFit1011->SetNDF(0);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,-5.552609);
   quadLineFit1011->SetParError(0,0.1328027);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,0.1502458);
   quadLineFit1011->SetParError(1,0.007332801);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t 50.000000 ppm_fx1011[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1011[2] = {
   4.392845,
   3.535526};
   Double_t 50.000000 ppm_fex1011[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1011[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,50.000000 ppm_fx1011,50.000000 ppm_fy1011,50.000000 ppm_fex1011,50.000000 ppm_fey1011);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1011 = new TH1F("Graph_50dO000000sPppm1011","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1011->SetMinimum(3.424906);
   Graph_50dO000000sPppm1011->SetMaximum(4.503465);
   Graph_50dO000000sPppm1011->SetDirectory(0);
   Graph_50dO000000sPppm1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1011->SetLineColor(ci);
   Graph_50dO000000sPppm1011->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1011->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1011->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1011->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineColor(2);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(4.265023e-21);
   quadLineFit1012->SetNDF(0);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,7.822119);
   quadLineFit1012->SetParError(0,0.1328027);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,-0.2143296);
   quadLineFit1012->SetParError(1,0.007332801);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(2);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(4.265023e-21);
   quadLineFit1013->SetNDF(0);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,7.822119);
   quadLineFit1013->SetParError(0,0.1328027);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,-0.2143296);
   quadLineFit1013->SetParError(1,0.007332801);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
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
