void S18_AEDM_vs_p_overlay_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 10:31:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(867.3167,-0.0575,2678.858,0.1175);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1014[6] = {
   1127.341,
   1373.07,
   1619.549,
   1866.692,
   2115.978,
   2359.682};
   Double_t _fy1014[6] = {
   0.03338816,
   -0.01262102,
   0.008183584,
   -0.007751027,
   0.03758502,
   -0.01528125};
   Double_t _fex1014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1014[6] = {
   0.02213635,
   0.01945838,
   0.01875806,
   0.01940599,
   0.02075556,
   0.02286428};
   TGraphErrors *gre = new TGraphErrors(6,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,1004.107,2482.916);
   Graph_Graph1014->SetMinimum(-0.04);
   Graph_Graph1014->SetMaximum(0.1);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1014->GetXaxis()->SetRange(4,101);
   Graph_Graph1014->GetXaxis()->CenterTitle(true);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1014->GetYaxis()->CenterTitle(true);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   gre->Draw("ap");
   
   Double_t _fx1015[6] = {
   1127.341,
   1373.07,
   1619.549,
   1866.692,
   2115.978,
   2359.682};
   Double_t _fy1015[6] = {
   0.03338816,
   -0.01262102,
   0.008183584,
   -0.007751027,
   0.03758502,
   -0.01528125};
   Double_t _fex1015[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[6] = {
   0.02213635,
   0.01945838,
   0.01875806,
   0.01940599,
   0.02075556,
   0.02286428};
   gre = new TGraphErrors(6,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10141015 = new TH1F("Graph_Graph_Graph10141015","",100,1004.107,2482.916);
   Graph_Graph_Graph10141015->SetMinimum(-0.04);
   Graph_Graph_Graph10141015->SetMaximum(0.1);
   Graph_Graph_Graph10141015->SetDirectory(0);
   Graph_Graph_Graph10141015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10141015->SetLineColor(ci);
   Graph_Graph_Graph10141015->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph_Graph10141015->GetXaxis()->SetRange(4,101);
   Graph_Graph_Graph10141015->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10141015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10141015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10141015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10141015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10141015->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph_Graph10141015->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10141015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10141015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10141015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10141015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10141015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10141015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10141015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10141015);
   
   gre->Draw("p ");
   
   Double_t _fx1016[6] = {
   1152.175,
   1397.867,
   1644.553,
   1891.461,
   2141.166,
   2384.269};
   Double_t _fy1016[6] = {
   0.0466427,
   0.01691321,
   0.006437529,
   0.001539099,
   0.02840641,
   0.02686575};
   Double_t _fex1016[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1016[6] = {
   0.01892456,
   0.01663659,
   0.01601976,
   0.01661455,
   0.01778192,
   0.01951646};
   gre = new TGraphErrors(6,_fx1016,_fy1016,_fex1016,_fey1016);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","",100,1028.966,2507.478);
   Graph_Graph1016->SetMinimum(-0.02313972);
   Graph_Graph1016->SetMaximum(0.07363153);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1016->GetXaxis()->CenterTitle(true);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1016->GetYaxis()->CenterTitle(true);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw("p ");
   
   Double_t _fx1017[6] = {
   1177.308,
   1422.915,
   1669.591,
   1916.595,
   2165.817,
   2409.484};
   Double_t _fy1017[6] = {
   0.05912866,
   0.009004961,
   0.03568672,
   0.04044022,
   0.02717575,
   0.03261073};
   Double_t _fex1017[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[6] = {
   0.01557598,
   0.01371347,
   0.01328514,
   0.01379134,
   0.01475017,
   0.01623919};
   gre = new TGraphErrors(6,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,1054.09,2532.702);
   Graph_Graph1017->SetMinimum(-0.01264982);
   Graph_Graph1017->SetMaximum(0.08264595);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1017->GetXaxis()->CenterTitle(true);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1017->GetYaxis()->CenterTitle(true);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("p ");
   
   Double_t _fx1018[6] = {
   1202.183,
   1447.834,
   1694.467,
   1941.49,
   2190.652,
   2434.14};
   Double_t _fy1018[6] = {
   0.0062249,
   0.04469992,
   0.0009619177,
   0.02989527,
   0.03788345,
   0.02135258};
   Double_t _fex1018[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1018[6] = {
   0.01359464,
   0.01201187,
   0.01163233,
   0.01213628,
   0.0130063,
   0.01440796};
   gre = new TGraphErrors(6,_fx1018,_fy1018,_fex1018,_fey1018);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,1078.987,2557.336);
   Graph_Graph1018->SetMinimum(-0.01740864);
   Graph_Graph1018->SetMaximum(0.06345);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1018->GetXaxis()->CenterTitle(true);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1018->GetYaxis()->CenterTitle(true);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.15,0.15,0.85,0.2,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
