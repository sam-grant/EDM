void S12S18_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:36:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-106.302,3125,63.08994);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1368[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1368[9] = {
   -66.23109,
   -39.24108,
   -35.27097,
   -39.13353,
   -40.74296,
   -38.14864,
   -31.96736,
   -32.17447,
   -33.14448};
   Double_t Graph0_fex1368[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1368[9] = {
   5.25913,
   2.694252,
   2.056562,
   1.794385,
   1.725425,
   1.773675,
   1.882378,
   2.069495,
   2.365873};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1368,Graph0_fy1368,Graph0_fex1368,Graph0_fey1368);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01368 = new TH1F("Graph_Graph01368","S12S18",100,425,2825);
   Graph_Graph01368->SetMinimum(-89.36277);
   Graph_Graph01368->SetMaximum(46.15075);
   Graph_Graph01368->SetDirectory(0);
   Graph_Graph01368->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01368->SetLineColor(ci);
   Graph_Graph01368->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01368->GetXaxis()->CenterTitle(true);
   Graph_Graph01368->GetXaxis()->SetLabelFont(42);
   Graph_Graph01368->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01368->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01368->GetXaxis()->SetTitleFont(42);
   Graph_Graph01368->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01368->GetYaxis()->CenterTitle(true);
   Graph_Graph01368->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01368->GetYaxis()->SetLabelFont(42);
   Graph_Graph01368->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01368->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01368->GetYaxis()->SetTitleFont(42);
   Graph_Graph01368->GetZaxis()->SetLabelFont(42);
   Graph_Graph01368->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01368->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01368);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1369[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1369[9] = {
   34.92217,
   28.02347,
   20.45419,
   16.96331,
   15.63385,
   11.86006,
   8.232799,
   7.431975,
   5.177016};
   Double_t Graph1_fex1369[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1369[9] = {
   1.99843,
   1.014753,
   0.7684985,
   0.6639392,
   0.634322,
   0.6467956,
   0.684481,
   0.7507102,
   0.8633904};
   gre = new TGraphErrors(9,Graph1_fx1369,Graph1_fy1369,Graph1_fex1369,Graph1_fey1369);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11369 = new TH1F("Graph_Graph11369","Graph",100,425,2825);
   Graph_Graph11369->SetMinimum(1.052928);
   Graph_Graph11369->SetMaximum(40.1813);
   Graph_Graph11369->SetDirectory(0);
   Graph_Graph11369->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11369->SetLineColor(ci);
   Graph_Graph11369->GetXaxis()->SetLabelFont(42);
   Graph_Graph11369->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11369->GetXaxis()->SetTitleFont(42);
   Graph_Graph11369->GetYaxis()->SetLabelFont(42);
   Graph_Graph11369->GetYaxis()->SetTitleFont(42);
   Graph_Graph11369->GetZaxis()->SetLabelFont(42);
   Graph_Graph11369->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11369->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11369);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1370[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1370[9] = {
   0.2716496,
   -0.1219547,
   -0.6774683,
   -0.6470285,
   -0.3099234,
   -0.1421885,
   -0.1084002,
   -0.05654847,
   0.07708884};
   Double_t Graph2_fex1370[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1370[9] = {
   0.03038912,
   0.01564188,
   0.0119908,
   0.01051451,
   0.01014063,
   0.01047052,
   0.0111454,
   0.01229309,
   0.01405173};
   gre = new TGraphErrors(9,Graph2_fx1370,Graph2_fy1370,Graph2_fex1370,Graph2_fey1370);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21370 = new TH1F("Graph_Graph21370","Graph",100,425,2825);
   Graph_Graph21370->SetMinimum(-0.7886089);
   Graph_Graph21370->SetMaximum(0.4011885);
   Graph_Graph21370->SetDirectory(0);
   Graph_Graph21370->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21370->SetLineColor(ci);
   Graph_Graph21370->GetXaxis()->SetLabelFont(42);
   Graph_Graph21370->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21370->GetXaxis()->SetTitleFont(42);
   Graph_Graph21370->GetYaxis()->SetLabelFont(42);
   Graph_Graph21370->GetYaxis()->SetTitleFont(42);
   Graph_Graph21370->GetZaxis()->SetLabelFont(42);
   Graph_Graph21370->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21370->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21370);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1d","h");
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
