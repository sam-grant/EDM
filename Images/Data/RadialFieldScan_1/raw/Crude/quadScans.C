void quadScans()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Dec  9 16:25:06 2020) by ROOT version 6.22/02
   TCanvas *c1 = new TCanvas("c1", "c1",1120,480,800,600);
   c1->Range(0.05124717,71.125,0.07845805,79.875);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetRightMargin(0.2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[2] = {
   0.07142857,
   0.05555556};
   Double_t Graph0_fy1001[2] = {
   77.5427,
   76.9278};
   Double_t Graph0_fex1001[2] = {
   0,
   0};
   Double_t Graph0_fey1001[2] = {
   0.0170837,
   0.0163027};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,0.05396825,0.07301587);
   Graph_Graph01001->SetMinimum(72);
   Graph_Graph01001->SetMaximum(79);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *quadFit11002 = new TF1("quadFit1","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadFit11002->SetFillColor(19);
   quadFit11002->SetFillStyle(0);
   quadFit11002->SetLineColor(2);
   quadFit11002->SetLineWidth(2);
   quadFit11002->SetChisquare(9.980973e-16);
   quadFit11002->SetNDF(0);
   quadFit11002->GetXaxis()->SetLabelFont(42);
   quadFit11002->GetXaxis()->SetTitleOffset(1);
   quadFit11002->GetXaxis()->SetTitleFont(42);
   quadFit11002->GetYaxis()->SetLabelFont(42);
   quadFit11002->GetYaxis()->SetTitleFont(42);
   quadFit11002->SetParameter(0,74.77565);
   quadFit11002->SetParError(0,0.0946425);
   quadFit11002->SetParLimits(0,0,0);
   quadFit11002->SetParameter(1,38.7387);
   quadFit11002->SetParError(1,1.487695);
   quadFit11002->SetParLimits(1,0,0);
   quadFit11002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit11002);
   gre->Draw("ap");
   
   Double_t Graph1_fx1003[2] = {
   0.07142857,
   0.05555556};
   Double_t Graph1_fy1003[2] = {
   73.8099,
   74.0176};
   Double_t Graph1_fex1003[2] = {
   0,
   0};
   Double_t Graph1_fey1003[2] = {
   0.0184163,
   0.0165531};
   gre = new TGraphErrors(2,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,0.05396825,0.07301587);
   Graph_Graph11003->SetMinimum(73.76722);
   Graph_Graph11003->SetMaximum(74.05842);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   
   TF1 *quadFit21004 = new TF1("quadFit2","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadFit21004->SetFillColor(19);
   quadFit21004->SetFillStyle(0);
   quadFit21004->SetLineColor(2);
   quadFit21004->SetLineWidth(2);
   quadFit21004->SetChisquare(1.034841e-15);
   quadFit21004->SetNDF(0);
   quadFit21004->GetXaxis()->SetLabelFont(42);
   quadFit21004->GetXaxis()->SetTitleOffset(1);
   quadFit21004->GetXaxis()->SetTitleFont(42);
   quadFit21004->GetYaxis()->SetLabelFont(42);
   quadFit21004->GetYaxis()->SetTitleFont(42);
   quadFit21004->SetParameter(0,74.74455);
   quadFit21004->SetParError(0,0.09850541);
   quadFit21004->SetParLimits(0,0,0);
   quadFit21004->SetParameter(1,-13.0851);
   quadFit21004->SetParError(1,1.560017);
   quadFit21004->SetParLimits(1,0,0);
   quadFit21004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit21004);
   gre->Draw("p ");
   
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
   entry=leg->AddEntry("Graph0","+30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","#minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
