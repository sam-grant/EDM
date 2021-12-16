void S12S18_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:36:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-69.90601,3218.25,65.78547);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1059[18] = {
   -26.96106,
   -35.81821,
   -20.3266,
   -18.07325,
   -18.0621,
   -17.65764,
   -23.27389,
   -21.85041,
   -33.02108,
   -23.40439,
   -21.86129,
   -18.62319,
   -21.17094,
   -21.49271,
   -27.34352,
   -19.28978,
   -22.47929,
   -24.08753};
   Double_t Graph0_fex1059[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1059[18] = {
   15.29605,
   9.251273,
   6.407926,
   5.264076,
   4.621912,
   4.177471,
   3.932354,
   3.728802,
   3.735437,
   3.617193,
   3.750277,
   3.786738,
   3.95804,
   4.040112,
   4.213459,
   4.557842,
   4.817228,
   5.275345};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S12S18",100,349.5,2899.5);
   Graph_Graph01059->SetMinimum(-56.33686);
   Graph_Graph01059->SetMaximum(52.21632);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1060[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph1_fy1060[18] = {
   22.27429,
   35.5405,
   31.93552,
   27.81467,
   21.72712,
   18.88248,
   18.6368,
   17.69709,
   19.8691,
   12.88724,
   10.59494,
   8.946545,
   10.52719,
   7.293734,
   7.955334,
   6.767264,
   7.837762,
   1.80226};
   Double_t Graph1_fex1060[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1060[18] = {
   10.43677,
   6.23256,
   4.31065,
   3.533964,
   3.10077,
   2.786879,
   2.605426,
   2.468376,
   2.466599,
   2.380372,
   2.457335,
   2.47289,
   2.585194,
   2.633075,
   2.734829,
   2.947517,
   3.141506,
   3.448169};
   gre = new TGraphErrors(18,Graph1_fx1060,Graph1_fy1060,Graph1_fex1060,Graph1_fey1060);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11060 = new TH1F("Graph_Graph11060","Graph",100,349.5,2899.5);
   Graph_Graph11060->SetMinimum(-5.987806);
   Graph_Graph11060->SetMaximum(46.11495);
   Graph_Graph11060->SetDirectory(0);
   Graph_Graph11060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11060->SetLineColor(ci);
   Graph_Graph11060->GetXaxis()->SetLabelFont(42);
   Graph_Graph11060->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11060->GetXaxis()->SetTitleFont(42);
   Graph_Graph11060->GetYaxis()->SetLabelFont(42);
   Graph_Graph11060->GetYaxis()->SetTitleFont(42);
   Graph_Graph11060->GetZaxis()->SetLabelFont(42);
   Graph_Graph11060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11060);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1061[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph2_fy1061[18] = {
   2.20653,
   -0.2099251,
   -0.05253261,
   0.2745755,
   -0.4990559,
   -0.4705366,
   -0.5579709,
   -0.4472516,
   -0.2211037,
   -0.1530305,
   -0.1055478,
   -0.03122295,
   -0.06275168,
   -0.02729153,
   0.04377813,
   -0.001304415,
   0.05443472,
   0.1587099};
   Double_t Graph2_fex1061[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1061[18] = {
   0.08433809,
   0.05121364,
   0.0355682,
   0.02925885,
   0.02572792,
   0.02331086,
   0.02200587,
   0.02089652,
   0.02096808,
   0.02030961,
   0.0211026,
   0.0213356,
   0.02235096,
   0.02283924,
   0.02389562,
   0.02588418,
   0.02724604,
   0.02988005};
   gre = new TGraphErrors(18,Graph2_fx1061,Graph2_fy1061,Graph2_fex1061,Graph2_fey1061);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21061 = new TH1F("Graph_Graph21061","Graph",100,349.5,2899.5);
   Graph_Graph21061->SetMinimum(-0.8670612);
   Graph_Graph21061->SetMaximum(2.577953);
   Graph_Graph21061->SetDirectory(0);
   Graph_Graph21061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21061->SetLineColor(ci);
   Graph_Graph21061->GetXaxis()->SetLabelFont(42);
   Graph_Graph21061->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21061->GetXaxis()->SetTitleFont(42);
   Graph_Graph21061->GetYaxis()->SetLabelFont(42);
   Graph_Graph21061->GetYaxis()->SetTitleFont(42);
   Graph_Graph21061->GetZaxis()->SetLabelFont(42);
   Graph_Graph21061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21061);
   
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
