void S12S18_AEDM_vs_p_overlay_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 10:31:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(867.4636,-0.0575,2679.032,0.1175);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1023[6] = {
   1127.491,
   1373.326,
   1619.953,
   1866.968,
   2116.15,
   2359.851};
   Double_t _fy1023[6] = {
   0.02932534,
   0.02522652,
   0.03152918,
   0.004320731,
   0.02944143,
   0.002477564};
   Double_t _fex1023[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[6] = {
   0.01555217,
   0.0135486,
   0.01299514,
   0.01329625,
   0.01406936,
   0.01539891};
   TGraphErrors *gre = new TGraphErrors(6,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,1004.256,2483.087);
   Graph_Graph1023->SetMinimum(-0.04);
   Graph_Graph1023->SetMaximum(0.1);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1023->GetXaxis()->SetRange(4,101);
   Graph_Graph1023->GetXaxis()->CenterTitle(true);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1023->GetYaxis()->CenterTitle(true);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   gre->Draw("ap");
   
   Double_t _fx1024[6] = {
   1127.491,
   1373.326,
   1619.953,
   1866.968,
   2116.15,
   2359.851};
   Double_t _fy1024[6] = {
   0.02932534,
   0.02522652,
   0.03152918,
   0.004320731,
   0.02944143,
   0.002477564};
   Double_t _fex1024[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1024[6] = {
   0.01555217,
   0.0135486,
   0.01299514,
   0.01329625,
   0.01406936,
   0.01539891};
   gre = new TGraphErrors(6,_fx1024,_fy1024,_fex1024,_fey1024);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10231024 = new TH1F("Graph_Graph_Graph10231024","",100,1004.256,2483.087);
   Graph_Graph_Graph10231024->SetMinimum(-0.04);
   Graph_Graph_Graph10231024->SetMaximum(0.1);
   Graph_Graph_Graph10231024->SetDirectory(0);
   Graph_Graph_Graph10231024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10231024->SetLineColor(ci);
   Graph_Graph_Graph10231024->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph_Graph10231024->GetXaxis()->SetRange(4,101);
   Graph_Graph_Graph10231024->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10231024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10231024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10231024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10231024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10231024->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph_Graph10231024->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10231024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10231024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10231024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10231024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10231024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10231024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10231024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10231024);
   
   gre->Draw("p ");
   
   Double_t _fx1025[6] = {
   1152.405,
   1398.258,
   1644.937,
   1891.797,
   2141.311,
   2384.524};
   Double_t _fy1025[6] = {
   0.03143813,
   0.01988616,
   0.01356499,
   0.009475396,
   0.02443705,
   0.02854857};
   Double_t _fex1025[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[6] = {
   0.01328349,
   0.01157177,
   0.011092,
   0.01137612,
   0.01204196,
   0.01316028};
   gre = new TGraphErrors(6,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,1029.193,2507.736);
   Graph_Graph1025->SetMinimum(-0.006562959);
   Graph_Graph1025->SetMaximum(0.04938385);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1025->GetXaxis()->CenterTitle(true);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1025->GetYaxis()->CenterTitle(true);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   gre->Draw("p ");
   
   Double_t _fx1026[6] = {
   1177.416,
   1423.269,
   1669.964,
   1916.889,
   2166.048,
   2409.597};
   Double_t _fy1026[6] = {
   0.04610975,
   0.03078388,
   0.04116056,
   0.04647455,
   0.02644097,
   0.03013141};
   Double_t _fex1026[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1026[6] = {
   0.01088782,
   0.009510925,
   0.009147846,
   0.009381221,
   0.00994353,
   0.01090103};
   gre = new TGraphErrors(6,_fx1026,_fy1026,_fex1026,_fey1026);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","",100,1054.198,2532.815);
   Graph_Graph1026->SetMinimum(0.01244743);
   Graph_Graph1026->SetMaximum(0.06104759);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1026->GetXaxis()->CenterTitle(true);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1026->GetYaxis()->CenterTitle(true);
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
   gre->Draw("p ");
   
   Double_t _fx1027[6] = {
   1202.258,
   1448.207,
   1694.861,
   1941.687,
   2190.945,
   2434.391};
   Double_t _fy1027[6] = {
   0.01783374,
   0.03350915,
   0.02248476,
   0.027985,
   0.02892483,
   0.02403656};
   Double_t _fex1027[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[6] = {
   0.00949102,
   0.008316378,
   0.008014203,
   0.008261358,
   0.00877323,
   0.009659553};
   gre = new TGraphErrors(6,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,1079.045,2557.605);
   Graph_Graph1027->SetMinimum(0.004994438);
   Graph_Graph1027->SetMaximum(0.04517381);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1027->GetXaxis()->CenterTitle(true);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1027->GetYaxis()->CenterTitle(true);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
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
