void S12_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 19:00:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-78.21509,3125,77.45213);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1151[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1151[9] = {
   -42.67281,
   -17.27504,
   -14.81755,
   -22.57575,
   -25.91318,
   -20.13554,
   -17.40416,
   -19.62639,
   -17.59053};
   Double_t Graph0_fex1151[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1151[9] = {
   7.44588,
   3.726221,
   2.822172,
   2.438307,
   2.329174,
   2.35948,
   2.480501,
   2.705021,
   3.133059};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1151,Graph0_fy1151,Graph0_fex1151,Graph0_fey1151);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01151 = new TH1F("Graph_Graph01151","S12",100,425,2825);
   Graph_Graph01151->SetMinimum(-62.64836);
   Graph_Graph01151->SetMaximum(61.88541);
   Graph_Graph01151->SetDirectory(0);
   Graph_Graph01151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01151->SetLineColor(ci);
   Graph_Graph01151->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01151->GetXaxis()->CenterTitle(true);
   Graph_Graph01151->GetXaxis()->SetLabelFont(42);
   Graph_Graph01151->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01151->GetXaxis()->SetTitleFont(42);
   Graph_Graph01151->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01151->GetYaxis()->CenterTitle(true);
   Graph_Graph01151->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01151->GetYaxis()->SetLabelFont(42);
   Graph_Graph01151->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01151->GetYaxis()->SetTitleFont(42);
   Graph_Graph01151->GetZaxis()->SetLabelFont(42);
   Graph_Graph01151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01151);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1152[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1152[9] = {
   44.89196,
   37.3515,
   26.18384,
   23.97607,
   20.86187,
   14.69585,
   11.1013,
   9.704993,
   6.114518};
   Double_t Graph1_fex1152[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1152[9] = {
   4.616371,
   2.269128,
   1.704171,
   1.453008,
   1.382008,
   1.392268,
   1.460483,
   1.586138,
   1.854838};
   gre = new TGraphErrors(9,Graph1_fx1152,Graph1_fy1152,Graph1_fex1152,Graph1_fey1152);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11152 = new TH1F("Graph_Graph11152","Graph",100,425,2825);
   Graph_Graph11152->SetMinimum(3.833712);
   Graph_Graph11152->SetMaximum(54.03319);
   Graph_Graph11152->SetDirectory(0);
   Graph_Graph11152->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11152->SetLineColor(ci);
   Graph_Graph11152->GetXaxis()->SetLabelFont(42);
   Graph_Graph11152->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11152->GetXaxis()->SetTitleFont(42);
   Graph_Graph11152->GetYaxis()->SetLabelFont(42);
   Graph_Graph11152->GetYaxis()->SetTitleFont(42);
   Graph_Graph11152->GetZaxis()->SetLabelFont(42);
   Graph_Graph11152->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11152->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11152);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1153[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1153[9] = {
   0.656019,
   0.1941307,
   -0.4415244,
   -0.5335301,
   -0.1820989,
   -0.04104271,
   -0.04689541,
   0.01937696,
   0.1305954};
   Double_t Graph2_fex1153[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1153[9] = {
   0.04925822,
   0.02487042,
   0.01894769,
   0.01648729,
   0.01581604,
   0.0160935,
   0.01698751,
   0.01862557,
   0.02151654};
   gre = new TGraphErrors(9,Graph2_fx1153,Graph2_fy1153,Graph2_fex1153,Graph2_fey1153);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21153 = new TH1F("Graph_Graph21153","Graph",100,425,2825);
   Graph_Graph21153->SetMinimum(-0.6755468);
   Graph_Graph21153->SetMaximum(0.8308067);
   Graph_Graph21153->SetDirectory(0);
   Graph_Graph21153->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21153->SetLineColor(ci);
   Graph_Graph21153->GetXaxis()->SetLabelFont(42);
   Graph_Graph21153->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21153->GetXaxis()->SetTitleFont(42);
   Graph_Graph21153->GetYaxis()->SetLabelFont(42);
   Graph_Graph21153->GetYaxis()->SetTitleFont(42);
   Graph_Graph21153->GetZaxis()->SetLabelFont(42);
   Graph_Graph21153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21153);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1c","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
