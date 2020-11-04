void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:08 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1025[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1025[2] = {
   -3.133391,
   -2.528122};
   Double_t -50.000000 ppm_fex1025[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1025[2] = {
   0.01477369,
   0.01477369};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1025,-50.000000 ppm_fy1025,-50.000000 ppm_fex1025,-50.000000 ppm_fey1025);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1025 = new TH1F("Graph_mI50dO000000sPppm1025","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1025->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1025->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1025->SetDirectory(0);
   Graph_mI50dO000000sPppm1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1025->SetLineColor(ci);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1025->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1025->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1025->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1025->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1025);
   
   
   TF1 *quadLineFit1026 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1026->SetFillColor(19);
   quadLineFit1026->SetFillStyle(0);
   quadLineFit1026->SetLineWidth(2);
   quadLineFit1026->SetChisquare(5.158626e-20);
   quadLineFit1026->SetNDF(0);
   quadLineFit1026->GetXaxis()->SetLabelFont(42);
   quadLineFit1026->GetXaxis()->SetTitleOffset(1);
   quadLineFit1026->GetXaxis()->SetTitleFont(42);
   quadLineFit1026->GetYaxis()->SetLabelFont(42);
   quadLineFit1026->GetYaxis()->SetTitleFont(42);
   quadLineFit1026->SetParameter(0,-5.554467);
   quadLineFit1026->SetParError(0,0.09459776);
   quadLineFit1026->SetParLimits(0,0,0);
   quadLineFit1026->SetParameter(1,0.1513172);
   quadLineFit1026->SetParError(1,0.005223287);
   quadLineFit1026->SetParLimits(1,0,0);
   quadLineFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1026);
   gre->Draw("ap");
   
   TF1 *quadLineFit1027 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1027->SetFillColor(19);
   quadLineFit1027->SetFillStyle(0);
   quadLineFit1027->SetLineWidth(2);
   quadLineFit1027->SetChisquare(5.158626e-20);
   quadLineFit1027->SetNDF(0);
   quadLineFit1027->GetXaxis()->SetLabelFont(42);
   quadLineFit1027->GetXaxis()->SetTitleOffset(1);
   quadLineFit1027->GetXaxis()->SetTitleFont(42);
   quadLineFit1027->GetYaxis()->SetLabelFont(42);
   quadLineFit1027->GetYaxis()->SetTitleFont(42);
   quadLineFit1027->SetParameter(0,-5.554467);
   quadLineFit1027->SetParError(0,0.09459776);
   quadLineFit1027->SetParLimits(0,0,0);
   quadLineFit1027->SetParameter(1,0.1513172);
   quadLineFit1027->SetParError(1,0.005223287);
   quadLineFit1027->SetParLimits(1,0,0);
   quadLineFit1027->Draw("same");
   
   Double_t 50.000000 ppm_fx1027[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1027[2] = {
   4.377192,
   3.495455};
   Double_t 50.000000 ppm_fex1027[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1027[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,50.000000 ppm_fx1027,50.000000 ppm_fy1027,50.000000 ppm_fex1027,50.000000 ppm_fey1027);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1027 = new TH1F("Graph_50dO000000sPppm1027","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1027->SetMinimum(3.389553);
   Graph_50dO000000sPppm1027->SetMaximum(4.483094);
   Graph_50dO000000sPppm1027->SetDirectory(0);
   Graph_50dO000000sPppm1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1027->SetLineColor(ci);
   Graph_50dO000000sPppm1027->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1027->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1027->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1027->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1027->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1027->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1027->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1027);
   
   
   TF1 *quadLineFit1028 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1028->SetFillColor(19);
   quadLineFit1028->SetFillStyle(0);
   quadLineFit1028->SetLineColor(2);
   quadLineFit1028->SetLineWidth(2);
   quadLineFit1028->SetChisquare(9.703261e-18);
   quadLineFit1028->SetNDF(0);
   quadLineFit1028->GetXaxis()->SetLabelFont(42);
   quadLineFit1028->GetXaxis()->SetTitleOffset(1);
   quadLineFit1028->GetXaxis()->SetTitleFont(42);
   quadLineFit1028->GetYaxis()->SetLabelFont(42);
   quadLineFit1028->GetYaxis()->SetTitleFont(42);
   quadLineFit1028->SetParameter(0,7.904139);
   quadLineFit1028->SetParError(0,0.09459775);
   quadLineFit1028->SetParLimits(0,0,0);
   quadLineFit1028->SetParameter(1,-0.2204342);
   quadLineFit1028->SetParError(1,0.005223287);
   quadLineFit1028->SetParLimits(1,0,0);
   quadLineFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1028);
   gre->Draw("p ");
   
   TF1 *quadLineFit1029 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1029->SetFillColor(19);
   quadLineFit1029->SetFillStyle(0);
   quadLineFit1029->SetLineColor(2);
   quadLineFit1029->SetLineWidth(2);
   quadLineFit1029->SetChisquare(9.703261e-18);
   quadLineFit1029->SetNDF(0);
   quadLineFit1029->GetXaxis()->SetLabelFont(42);
   quadLineFit1029->GetXaxis()->SetTitleOffset(1);
   quadLineFit1029->GetXaxis()->SetTitleFont(42);
   quadLineFit1029->GetYaxis()->SetLabelFont(42);
   quadLineFit1029->GetYaxis()->SetTitleFont(42);
   quadLineFit1029->SetParameter(0,7.904139);
   quadLineFit1029->SetParError(0,0.09459775);
   quadLineFit1029->SetParLimits(0,0,0);
   quadLineFit1029->SetParameter(1,-0.2204342);
   quadLineFit1029->SetParError(1,0.005223287);
   quadLineFit1029->SetParLimits(1,0,0);
   quadLineFit1029->Draw("same");
   
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
