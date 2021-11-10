void Ag2_vs_DS_unblinded_825-2375MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-27.26543,4.75,46.2617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1059[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1059[4] = {
   21.80207,
   -5.307332,
   15.09546,
   0.8512524};
   Double_t _fex1059[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1059[4] = {
   11.40461,
   9.736923,
   8.005955,
   5.85496};
   TGraphErrors *gre = new TGraphErrors(4,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{c} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10551059 = new TH1F("Graph_Graph_Graph10551059","",100,0.7,4.3);
   Graph_Graph_Graph10551059->SetMinimum(-19.91272);
   Graph_Graph_Graph10551059->SetMaximum(38.90898);
   Graph_Graph_Graph10551059->SetDirectory(0);
   Graph_Graph_Graph10551059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10551059->SetLineColor(ci);
   Graph_Graph_Graph10551059->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10551059->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10551059->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10551059->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10551059->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10551059->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10551059->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph_Graph10551059->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10551059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10551059->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10551059->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10551059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10551059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10551059);
   
   gre->Draw("ap");
   
   TF1 *fit1059 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1059->SetFillColor(19);
   fit1059->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1059->SetLineColor(ci);
   fit1059->SetLineWidth(1);
   fit1059->GetXaxis()->SetLabelFont(42);
   fit1059->GetXaxis()->SetTitleOffset(1);
   fit1059->GetXaxis()->SetTitleFont(42);
   fit1059->GetYaxis()->SetLabelFont(42);
   fit1059->GetYaxis()->SetTitleFont(42);
   fit1059->SetParameter(0,3.623463);
   fit1059->SetParError(0,2.89549);
   fit1059->SetParLimits(0,0,0);
   fit1059->Draw("same");
   
   TF1 *shift_-11060 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11060->SetFillColor(19);
   shift_-11060->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11060->SetLineColor(ci);
   shift_-11060->SetLineWidth(2);
   shift_-11060->SetLineStyle(2);
   shift_-11060->GetXaxis()->SetLabelFont(42);
   shift_-11060->GetXaxis()->SetTitleOffset(1);
   shift_-11060->GetXaxis()->SetTitleFont(42);
   shift_-11060->GetYaxis()->SetLabelFont(42);
   shift_-11060->GetYaxis()->SetTitleFont(42);
   shift_-11060->SetParameter(0,0.7279735);
   shift_-11060->SetParError(0,0);
   shift_-11060->SetParLimits(0,0,0);
   shift_-11060->Draw("same");
   
   TF1 *shift_11061 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11061->SetFillColor(19);
   shift_11061->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11061->SetLineColor(ci);
   shift_11061->SetLineWidth(2);
   shift_11061->SetLineStyle(2);
   shift_11061->GetXaxis()->SetLabelFont(42);
   shift_11061->GetXaxis()->SetTitleOffset(1);
   shift_11061->GetXaxis()->SetTitleFont(42);
   shift_11061->GetYaxis()->SetLabelFont(42);
   shift_11061->GetYaxis()->SetTitleFont(42);
   shift_11061->SetParameter(0,6.518953);
   shift_11061->SetParError(0,0);
   shift_11061->SetParLimits(0,0,0);
   shift_11061->Draw("same");
   
   Double_t _fx1060[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1060[4] = {
   21.80207,
   -5.307332,
   15.09546,
   0.8512524};
   Double_t _fex1060[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1060[4] = {
   11.40461,
   9.736923,
   8.005955,
   5.85496};
   gre = new TGraphErrors(4,_fx1060,_fy1060,_fex1060,_fey1060);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{c} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph105510591060 = new TH1F("Graph_Graph_Graph_Graph105510591060","",100,0.7,4.3);
   Graph_Graph_Graph_Graph105510591060->SetMinimum(-19.91272);
   Graph_Graph_Graph_Graph105510591060->SetMaximum(38.90898);
   Graph_Graph_Graph_Graph105510591060->SetDirectory(0);
   Graph_Graph_Graph_Graph105510591060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph105510591060->SetLineColor(ci);
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105510591060->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105510591060->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph_Graph_Graph105510591060->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph105510591060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph105510591060->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105510591060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph105510591060->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph105510591060->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105510591060->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105510591060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph105510591060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph105510591060);
   
   gre->Draw("p ");
   
   Double_t _fx1061[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1061[4] = {
   8.738345,
   6.834432,
   -3.008528,
   -1.043445};
   Double_t _fex1061[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1061[4] = {
   11.92367,
   10.2131,
   8.456009,
   6.240786};
   gre = new TGraphErrors(4,_fx1061,_fy1061,_fex1061,_fey1061);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10561061 = new TH1F("Graph_Graph_Graph10561061","S18",100,0.7,4.3);
   Graph_Graph_Graph10561061->SetMinimum(-14.67719);
   Graph_Graph_Graph10561061->SetMaximum(23.87467);
   Graph_Graph_Graph10561061->SetDirectory(0);
   Graph_Graph_Graph10561061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10561061->SetLineColor(ci);
   Graph_Graph_Graph10561061->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10561061->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10561061->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10561061->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10561061->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10561061->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10561061->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10561061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10561061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10561061->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10561061->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph_Graph10561061->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10561061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10561061->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10561061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10561061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10561061->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10561061->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10561061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10561061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10561061);
   
   gre->Draw("p ");
   
   Double_t _fx1062[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1062[4] = {
   15.59739,
   0.5591524,
   6.570992,
   -0.05538315};
   Double_t _fex1062[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1062[4] = {
   8.242466,
   7.047914,
   5.813989,
   4.270142};
   gre = new TGraphErrors(4,_fx1062,_fy1062,_fex1062,_fey1062);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10571062 = new TH1F("Graph_Graph_Graph10571062","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10571062->SetMinimum(-9.521623);
   Graph_Graph_Graph10571062->SetMaximum(26.87271);
   Graph_Graph_Graph10571062->SetDirectory(0);
   Graph_Graph_Graph10571062->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10571062->SetLineColor(ci);
   Graph_Graph_Graph10571062->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10571062->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10571062->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10571062->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10571062->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10571062->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10571062->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10571062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10571062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10571062->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10571062->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph_Graph10571062->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10571062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10571062->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10571062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10571062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10571062->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10571062->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10571062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10571062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10571062);
   
   
   TF1 *pol01063 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01063->SetFillColor(19);
   pol01063->SetFillStyle(0);
   pol01063->SetLineColor(2);
   pol01063->SetLineWidth(0);
   pol01063->SetChisquare(3.298657);
   pol01063->SetNDF(3);
   pol01063->GetXaxis()->SetLabelFont(42);
   pol01063->GetXaxis()->SetTitleOffset(1);
   pol01063->GetXaxis()->SetTitleFont(42);
   pol01063->GetYaxis()->SetLabelFont(42);
   pol01063->GetYaxis()->SetTitleFont(42);
   pol01063->SetParameter(0,3.623463);
   pol01063->SetParError(0,2.89549);
   pol01063->SetParLimits(0,0,0);
   pol01063->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01063);
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
