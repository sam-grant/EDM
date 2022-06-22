void S12_AEDM_vs_p_overlay_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 10:31:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(867.6097,-0.0575,2679.17,0.1175);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[6] = {
   1127.636,
   1373.565,
   1620.32,
   1867.209,
   2116.296,
   2359.99};
   Double_t _fy1005[6] = {
   0.02551982,
   0.06023228,
   0.05287177,
   0.01498302,
   0.02300124,
   0.01676048};
   Double_t _fex1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[6] = {
   0.02185254,
   0.01887477,
   0.01801819,
   0.01825251,
   0.01913549,
   0.02082933};
   TGraphErrors *gre = new TGraphErrors(6,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,1004.401,2483.226);
   Graph_Graph1005->SetMinimum(-0.04);
   Graph_Graph1005->SetMaximum(0.1);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1005->GetXaxis()->SetRange(4,101);
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("ap");
   
   Double_t _fx1006[6] = {
   1127.636,
   1373.565,
   1620.32,
   1867.209,
   2116.296,
   2359.99};
   Double_t _fy1006[6] = {
   0.02551982,
   0.06023228,
   0.05287177,
   0.01498302,
   0.02300124,
   0.01676048};
   Double_t _fex1006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1006[6] = {
   0.02185254,
   0.01887477,
   0.01801819,
   0.01825251,
   0.01913549,
   0.02082933};
   gre = new TGraphErrors(6,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10051006 = new TH1F("Graph_Graph_Graph10051006","",100,1004.401,2483.226);
   Graph_Graph_Graph10051006->SetMinimum(-0.04);
   Graph_Graph_Graph10051006->SetMaximum(0.1);
   Graph_Graph_Graph10051006->SetDirectory(0);
   Graph_Graph_Graph10051006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10051006->SetLineColor(ci);
   Graph_Graph_Graph10051006->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph_Graph10051006->GetXaxis()->SetRange(4,101);
   Graph_Graph_Graph10051006->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10051006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10051006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10051006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051006->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph_Graph10051006->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10051006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10051006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10051006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10051006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10051006);
   
   gre->Draw("p ");
   
   Double_t _fx1007[6] = {
   1152.626,
   1398.621,
   1645.285,
   1892.089,
   2141.434,
   2384.734};
   Double_t _fy1007[6] = {
   0.01704036,
   0.0226374,
   0.01997968,
   0.0165679,
   0.02155399,
   0.02972729};
   Double_t _fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[6] = {
   0.01864917,
   0.01610561,
   0.01537201,
   0.01560827,
   0.01636462,
   0.01781933};
   gre = new TGraphErrors(6,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,1029.415,2507.945);
   Graph_Graph1007->SetMinimum(-0.006524352);
   Graph_Graph1007->SetMaximum(0.05246216);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1007->GetXaxis()->CenterTitle(true);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1007->GetYaxis()->CenterTitle(true);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw("p ");
   
   Double_t _fx1008[6] = {
   1177.519,
   1423.595,
   1670.298,
   1917.14,
   2166.241,
   2409.689};
   Double_t _fy1008[6] = {
   0.034,
   0.05081657,
   0.04616472,
   0.05190749,
   0.02653552,
   0.02752211};
   Double_t _fex1008[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1008[6] = {
   0.0152249,
   0.01320163,
   0.01261447,
   0.0127978,
   0.01346197,
   0.01470522};
   gre = new TGraphErrors(6,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,1054.302,2532.906);
   Graph_Graph1008->SetMinimum(0.007628053);
   Graph_Graph1008->SetMaximum(0.06989413);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1008->GetXaxis()->CenterTitle(true);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1008->GetYaxis()->CenterTitle(true);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw("p ");
   
   Double_t _fx1009[6] = {
   1202.329,
   1448.547,
   1695.212,
   1941.856,
   2191.19,
   2434.593};
   Double_t _fy1009[6] = {
   0.02892839,
   0.02328999,
   0.04173389,
   0.02647635,
   0.02200105,
   0.02592613};
   Double_t _fex1009[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[6] = {
   0.01325591,
   0.01152524,
   0.01105635,
   0.01127692,
   0.0118836,
   0.0130173};
   gre = new TGraphErrors(6,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,1079.102,2557.82);
   Graph_Graph1009->SetMinimum(0.005850171);
   Graph_Graph1009->SetMaximum(0.05705751);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
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
