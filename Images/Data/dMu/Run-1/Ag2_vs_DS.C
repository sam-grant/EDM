void Ag2_vs_DS()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 25 13:30:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-287.7484,4.75,292.9274);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1004[4] = {
   -50.74566,
   11.72717,
   37.93846,
   102.4099};
   Double_t _fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1004[4] = {
   103.2991,
   87.86738,
   72.31994,
   53.35209};
   TGraphErrors *gre = new TGraphErrors(4,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011004 = new TH1F("Graph_Graph_Graph10011004","",100,0.7,4.3);
   Graph_Graph_Graph10011004->SetMinimum(-229.6809);
   Graph_Graph_Graph10011004->SetMaximum(234.8598);
   Graph_Graph_Graph10011004->SetDirectory(0);
   Graph_Graph_Graph10011004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011004->SetLineColor(ci);
   Graph_Graph_Graph10011004->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10011004->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10011004->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10011004->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10011004->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10011004->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10011004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10011004->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10011004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10011004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011004);
   
   gre->Draw("ap");
   
   Double_t _fx1005[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1005[4] = {
   -50.74566,
   11.72717,
   37.93846,
   102.4099};
   Double_t _fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1005[4] = {
   103.2991,
   87.86738,
   72.31994,
   53.35209};
   gre = new TGraphErrors(4,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100110041005 = new TH1F("Graph_Graph_Graph_Graph100110041005","",100,0.7,4.3);
   Graph_Graph_Graph_Graph100110041005->SetMinimum(-229.6809);
   Graph_Graph_Graph_Graph100110041005->SetMaximum(234.8598);
   Graph_Graph_Graph_Graph100110041005->SetDirectory(0);
   Graph_Graph_Graph_Graph100110041005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph100110041005->SetLineColor(ci);
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100110041005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110041005->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph_Graph100110041005->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100110041005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph100110041005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110041005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100110041005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph100110041005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110041005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110041005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph100110041005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100110041005);
   
   gre->Draw("p ");
   
   Double_t _fx1006[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1006[4] = {
   73.31242,
   -91.63358,
   17.27038,
   9.538233};
   Double_t _fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1006[4] = {
   107.6982,
   92.03152,
   76.06445,
   55.99073};
   gre = new TGraphErrors(4,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10021006 = new TH1F("Graph_Graph_Graph10021006","S18",100,0.7,4.3);
   Graph_Graph_Graph10021006->SetMinimum(-220.1327);
   Graph_Graph_Graph10021006->SetMaximum(217.4782);
   Graph_Graph_Graph10021006->SetDirectory(0);
   Graph_Graph_Graph10021006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10021006->SetLineColor(ci);
   Graph_Graph_Graph10021006->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10021006->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10021006->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10021006->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10021006->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10021006->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10021006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10021006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10021006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021006->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10021006->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10021006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10021006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10021006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10021006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10021006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10021006);
   
   gre->Draw("p ");
   
   Double_t _fx1007[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1007[4] = {
   7.587099,
   -37.5807,
   28.20283,
   58.78277};
   Double_t _fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1007[4] = {
   74.78537,
   63.632,
   52.56351,
   38.69857};
   gre = new TGraphErrors(4,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10031007 = new TH1F("Graph_Graph_Graph10031007","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10031007->SetMinimum(-121.0821);
   Graph_Graph_Graph10031007->SetMaximum(117.3507);
   Graph_Graph_Graph10031007->SetDirectory(0);
   Graph_Graph_Graph10031007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10031007->SetLineColor(ci);
   Graph_Graph_Graph10031007->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10031007->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10031007->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10031007->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10031007->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10031007->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10031007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10031007->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10031007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10031007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10031007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10031007);
   
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
