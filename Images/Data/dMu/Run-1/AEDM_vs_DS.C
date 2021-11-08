void AEDM_vs_DS()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 25 13:30:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-2.797178e-21,4.75,2.618307e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1011[4] = {
   1.846481e-18,
   1.012933e-18,
   1.946359e-18,
   1.631742e-18};
   Double_t _fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1011[4] = {
   3.398103e-19,
   2.85249e-19,
   2.480132e-19,
   1.845294e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10081011 = new TH1F("Graph_Graph_Graph10081011","",100,0.7,4.3);
   Graph_Graph_Graph10081011->SetMinimum(2.593133e-19);
   Graph_Graph_Graph10081011->SetMaximum(2.356197e-18);
   Graph_Graph_Graph10081011->SetDirectory(0);
   Graph_Graph_Graph10081011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10081011->SetLineColor(ci);
   Graph_Graph_Graph10081011->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10081011->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10081011->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10081011->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10081011->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10081011->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10081011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10081011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10081011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10081011->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10081011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10081011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10081011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10081011);
   
   gre->Draw("ap");
   
   Double_t _fx1012[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1012[4] = {
   1.846481e-18,
   1.012933e-18,
   1.946359e-18,
   1.631742e-18};
   Double_t _fex1012[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1012[4] = {
   3.398103e-19,
   2.85249e-19,
   2.480132e-19,
   1.845294e-19};
   gre = new TGraphErrors(4,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100810111012 = new TH1F("Graph_Graph_Graph_Graph100810111012","",100,0.7,4.3);
   Graph_Graph_Graph_Graph100810111012->SetMinimum(2.593133e-19);
   Graph_Graph_Graph_Graph100810111012->SetMaximum(2.356197e-18);
   Graph_Graph_Graph_Graph100810111012->SetDirectory(0);
   Graph_Graph_Graph_Graph100810111012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph100810111012->SetLineColor(ci);
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100810111012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100810111012->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph_Graph100810111012->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100810111012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph100810111012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100810111012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100810111012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph100810111012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100810111012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100810111012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph100810111012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100810111012);
   
   gre->Draw("p ");
   
   Double_t _fx1013[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1013[4] = {
   7.760218e-19,
   1.293058e-18,
   1.871683e-18,
   1.622619e-18};
   Double_t _fex1013[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1013[4] = {
   3.444724e-19,
   2.999644e-19,
   2.580067e-19,
   1.971617e-19};
   gre = new TGraphErrors(4,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10091013 = new TH1F("Graph_Graph_Graph10091013","S18",100,0.7,4.3);
   Graph_Graph_Graph10091013->SetMinimum(2.617355e-19);
   Graph_Graph_Graph10091013->SetMaximum(2.299503e-18);
   Graph_Graph_Graph10091013->SetDirectory(0);
   Graph_Graph_Graph10091013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10091013->SetLineColor(ci);
   Graph_Graph_Graph10091013->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10091013->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10091013->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10091013->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10091013->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10091013->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10091013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10091013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10091013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091013->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10091013->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10091013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10091013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10091013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10091013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10091013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10091013);
   
   gre->Draw("p ");
   
   Double_t _fx1014[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1014[4] = {
   1.337496e-18,
   1.145724e-18,
   1.912506e-18,
   1.627239e-18};
   Double_t _fex1014[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1014[4] = {
   2.452813e-19,
   2.107531e-19,
   1.899153e-19,
   1.458602e-19};
   gre = new TGraphErrors(4,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10101014 = new TH1F("Graph_Graph_Graph10101014","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10101014->SetMinimum(8.182258e-19);
   Graph_Graph_Graph10101014->SetMaximum(2.219167e-18);
   Graph_Graph_Graph10101014->SetDirectory(0);
   Graph_Graph_Graph10101014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10101014->SetLineColor(ci);
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10101014->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10101014->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10101014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10101014->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10101014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10101014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10101014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10101014);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.31,0.91,0.78,0.99,NULL,"brNDC");
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
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
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
