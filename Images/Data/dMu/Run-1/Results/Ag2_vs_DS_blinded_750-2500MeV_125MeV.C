void Ag2_vs_DS_blinded_750-2500MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:47:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-310.0396,4.75,283.2457);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1005[4] = {
   -95.52048,
   -23.72547,
   3.512667,
   57.99663};
   Double_t _fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1005[4] = {
   103.4604,
   87.80323,
   72.38686,
   53.22814};
   TGraphErrors *gre = new TGraphErrors(4,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011005 = new TH1F("Graph_Graph_Graph10011005","",100,0.7,4.3);
   Graph_Graph_Graph10011005->SetMinimum(-250.7111);
   Graph_Graph_Graph10011005->SetMaximum(223.9172);
   Graph_Graph_Graph10011005->SetDirectory(0);
   Graph_Graph_Graph10011005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011005->SetLineColor(ci);
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10011005->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10011005->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10011005->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10011005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011005);
   
   gre->Draw("ap");
   
   TF1 *fit1005 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1005->SetFillColor(19);
   fit1005->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1005->SetLineColor(ci);
   fit1005->SetLineWidth(1);
   fit1005->GetXaxis()->SetLabelFont(42);
   fit1005->GetXaxis()->SetTitleOffset(1);
   fit1005->GetXaxis()->SetTitleFont(42);
   fit1005->GetYaxis()->SetLabelFont(42);
   fit1005->GetYaxis()->SetTitleFont(42);
   fit1005->SetParameter(0,-6.570172);
   fit1005->SetParError(0,26.21193);
   fit1005->SetParLimits(0,0,0);
   fit1005->Draw("same");
   
   TF1 *shift_-11006 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11006->SetFillColor(19);
   shift_-11006->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11006->SetLineColor(ci);
   shift_-11006->SetLineWidth(2);
   shift_-11006->SetLineStyle(2);
   shift_-11006->GetXaxis()->SetLabelFont(42);
   shift_-11006->GetXaxis()->SetTitleOffset(1);
   shift_-11006->GetXaxis()->SetTitleFont(42);
   shift_-11006->GetYaxis()->SetLabelFont(42);
   shift_-11006->GetYaxis()->SetTitleFont(42);
   shift_-11006->SetParameter(0,-32.7821);
   shift_-11006->SetParError(0,0);
   shift_-11006->SetParLimits(0,0,0);
   shift_-11006->Draw("same");
   
   TF1 *shift_11007 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11007->SetFillColor(19);
   shift_11007->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11007->SetLineColor(ci);
   shift_11007->SetLineWidth(2);
   shift_11007->SetLineStyle(2);
   shift_11007->GetXaxis()->SetLabelFont(42);
   shift_11007->GetXaxis()->SetTitleOffset(1);
   shift_11007->GetXaxis()->SetTitleFont(42);
   shift_11007->GetYaxis()->SetLabelFont(42);
   shift_11007->GetYaxis()->SetTitleFont(42);
   shift_11007->SetParameter(0,19.64176);
   shift_11007->SetParError(0,0);
   shift_11007->SetParLimits(0,0,0);
   shift_11007->Draw("same");
   
   Double_t _fx1006[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1006[4] = {
   -95.52048,
   -23.72547,
   3.512667,
   57.99663};
   Double_t _fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1006[4] = {
   103.4604,
   87.80323,
   72.38686,
   53.22814};
   gre = new TGraphErrors(4,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100110051006 = new TH1F("Graph_Graph_Graph_Graph100110051006","",100,0.7,4.3);
   Graph_Graph_Graph_Graph100110051006->SetMinimum(-250.7111);
   Graph_Graph_Graph_Graph100110051006->SetMaximum(223.9172);
   Graph_Graph_Graph_Graph100110051006->SetDirectory(0);
   Graph_Graph_Graph_Graph100110051006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph100110051006->SetLineColor(ci);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110051006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110051006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph100110051006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100110051006);
   
   gre->Draw("p ");
   
   Double_t _fx1007[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1007[4] = {
   62.68686,
   -111.4932,
   -13.99617,
   -27.11366};
   Double_t _fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1007[4] = {
   107.4869,
   92.06506,
   76.0679,
   56.02075};
   gre = new TGraphErrors(4,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10021007 = new TH1F("Graph_Graph_Graph10021007","S18",100,0.7,4.3);
   Graph_Graph_Graph10021007->SetMinimum(-240.9314);
   Graph_Graph_Graph10021007->SetMaximum(207.5469);
   Graph_Graph_Graph10021007->SetDirectory(0);
   Graph_Graph_Graph10021007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10021007->SetLineColor(ci);
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10021007->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10021007->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10021007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10021007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10021007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021007->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10021007->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10021007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10021007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10021007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10021007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10021007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10021007);
   
   gre->Draw("p ");
   
   Double_t _fx1008[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1008[4] = {
   -20.50818,
   -65.47703,
   -5.433042,
   18.26359};
   Double_t _fex1008[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1008[4] = {
   74.77978,
   63.65704,
   52.65802,
   38.65578};
   gre = new TGraphErrors(4,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10031008 = new TH1F("Graph_Graph_Graph10031008","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10031008->SetMinimum(-147.7394);
   Graph_Graph_Graph10031008->SetMaximum(75.52471);
   Graph_Graph_Graph10031008->SetDirectory(0);
   Graph_Graph_Graph10031008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10031008->SetLineColor(ci);
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10031008->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10031008->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10031008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10031008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10031008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031008->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10031008->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10031008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10031008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10031008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10031008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10031008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10031008);
   
   
   TF1 *pol01009 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01009->SetFillColor(19);
   pol01009->SetFillStyle(0);
   pol01009->SetLineColor(2);
   pol01009->SetLineWidth(0);
   pol01009->SetChisquare(1.304252);
   pol01009->SetNDF(3);
   pol01009->GetXaxis()->SetLabelFont(42);
   pol01009->GetXaxis()->SetTitleOffset(1);
   pol01009->GetXaxis()->SetTitleFont(42);
   pol01009->GetYaxis()->SetLabelFont(42);
   pol01009->GetYaxis()->SetTitleFont(42);
   pol01009->SetParameter(0,-6.570172);
   pol01009->SetParError(0,26.21193);
   pol01009->SetParLimits(0,0,0);
   pol01009->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01009);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.91,0.8,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","S12 & S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
