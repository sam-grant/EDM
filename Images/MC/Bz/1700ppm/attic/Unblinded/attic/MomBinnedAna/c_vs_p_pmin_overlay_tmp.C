void c_vs_p_pmin_overlay_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-2.5,2600,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_pmin_fx1507[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0_c_vs_p_pmin_fy1507[9] = {
   0.2508054,
   0.2984127,
   0.3521202,
   0.3582949,
   0.3404368,
   0.3008481,
   0.2643692,
   0.2708473,
   0.3191078};
   Double_t S0_c_vs_p_pmin_fex1507[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_pmin_fey1507[9] = {
   0.03255848,
   0.03192354,
   0.03178397,
   0.03211031,
   0.03297466,
   0.03457956,
   0.03718385,
   0.04098426,
   0.04732281};
   TGraphErrors *gre = new TGraphErrors(9,S0_c_vs_p_pmin_fx1507,S0_c_vs_p_pmin_fy1507,S0_c_vs_p_pmin_fex1507,S0_c_vs_p_pmin_fey1507);
   gre->SetName("S0_c_vs_p_pmin");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_pmin1507 = new TH1F("Graph_S0_c_vs_p_pmin1507","",100,440,2360);
   Graph_S0_c_vs_p_pmin1507->SetMinimum(-2);
   Graph_S0_c_vs_p_pmin1507->SetMaximum(2);
   Graph_S0_c_vs_p_pmin1507->SetDirectory(0);
   Graph_S0_c_vs_p_pmin1507->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_pmin1507->SetLineColor(ci);
   Graph_S0_c_vs_p_pmin1507->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S0_c_vs_p_pmin1507->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_pmin1507->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1507->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_pmin1507->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_pmin1507->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_pmin1507->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_pmin1507->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_pmin1507->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_pmin1507->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1507->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_pmin1507->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_pmin1507->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_pmin1507->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1507->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_pmin1507->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_pmin1507);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_pmin_fx1508[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12_c_vs_p_pmin_fy1508[9] = {
   0.6797454,
   0.9348525,
   1.123088,
   1.29294,
   1.343188,
   1.411965,
   1.43899,
   1.376144,
   1.358514};
   Double_t S12_c_vs_p_pmin_fex1508[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_pmin_fey1508[9] = {
   0.03277574,
   0.03220073,
   0.03211893,
   0.03249947,
   0.03345729,
   0.03504401,
   0.03753333,
   0.04152006,
   0.04760003};
   gre = new TGraphErrors(9,S12_c_vs_p_pmin_fx1508,S12_c_vs_p_pmin_fy1508,S12_c_vs_p_pmin_fex1508,S12_c_vs_p_pmin_fey1508);
   gre->SetName("S12_c_vs_p_pmin");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_pmin1508 = new TH1F("Graph_S12_c_vs_p_pmin1508","S12",100,440,2360);
   Graph_S12_c_vs_p_pmin1508->SetMinimum(0.5640142);
   Graph_S12_c_vs_p_pmin1508->SetMaximum(1.559479);
   Graph_S12_c_vs_p_pmin1508->SetDirectory(0);
   Graph_S12_c_vs_p_pmin1508->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_pmin1508->SetLineColor(ci);
   Graph_S12_c_vs_p_pmin1508->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S12_c_vs_p_pmin1508->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_pmin1508->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1508->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_pmin1508->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_pmin1508->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_pmin1508->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_pmin1508->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_pmin1508->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_pmin1508->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1508->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_pmin1508->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_pmin1508->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_pmin1508->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1508->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_pmin1508->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_pmin1508);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_pmin_fx1509[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S18_c_vs_p_pmin_fy1509[9] = {
   0.5692157,
   0.7537895,
   0.8883099,
   1.001631,
   1.102135,
   1.205361,
   1.200006,
   1.13077,
   1.03111};
   Double_t S18_c_vs_p_pmin_fex1509[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_pmin_fey1509[9] = {
   0.03307736,
   0.0325331,
   0.03237789,
   0.03267399,
   0.03358937,
   0.03522329,
   0.03785612,
   0.04206886,
   0.04844446};
   gre = new TGraphErrors(9,S18_c_vs_p_pmin_fx1509,S18_c_vs_p_pmin_fy1509,S18_c_vs_p_pmin_fex1509,S18_c_vs_p_pmin_fey1509);
   gre->SetName("S18_c_vs_p_pmin");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_pmin1509 = new TH1F("Graph_S18_c_vs_p_pmin1509","S18",100,440,2360);
   Graph_S18_c_vs_p_pmin1509->SetMinimum(0.4656938);
   Graph_S18_c_vs_p_pmin1509->SetMaximum(1.311028);
   Graph_S18_c_vs_p_pmin1509->SetDirectory(0);
   Graph_S18_c_vs_p_pmin1509->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_pmin1509->SetLineColor(ci);
   Graph_S18_c_vs_p_pmin1509->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S18_c_vs_p_pmin1509->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_pmin1509->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1509->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_pmin1509->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_pmin1509->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_pmin1509->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_pmin1509->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_pmin1509->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_pmin1509->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1509->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_pmin1509->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_pmin1509->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_pmin1509->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1509->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_pmin1509->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_pmin1509);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_pmin_fx1510[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12S18_c_vs_p_pmin_fy1510[9] = {
   0.6246702,
   0.8450176,
   1.007154,
   1.150136,
   1.226056,
   1.310897,
   1.32097,
   1.25334,
   1.197377};
   Double_t S12S18_c_vs_p_pmin_fex1510[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_c_vs_p_pmin_fey1510[9] = {
   0.02328671,
   0.02289159,
   0.02281037,
   0.02305495,
   0.02371919,
   0.02486156,
   0.02668081,
   0.02959397,
   0.03404826};
   gre = new TGraphErrors(9,S12S18_c_vs_p_pmin_fx1510,S12S18_c_vs_p_pmin_fy1510,S12S18_c_vs_p_pmin_fex1510,S12S18_c_vs_p_pmin_fey1510);
   gre->SetName("S12S18_c_vs_p_pmin");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_pmin1510 = new TH1F("Graph_S12S18_c_vs_p_pmin1510","S12S18",100,440,2360);
   Graph_S12S18_c_vs_p_pmin1510->SetMinimum(0.5267568);
   Graph_S12S18_c_vs_p_pmin1510->SetMaximum(1.422277);
   Graph_S12S18_c_vs_p_pmin1510->SetDirectory(0);
   Graph_S12S18_c_vs_p_pmin1510->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_pmin1510->SetLineColor(ci);
   Graph_S12S18_c_vs_p_pmin1510->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S12S18_c_vs_p_pmin1510->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_pmin1510->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1510->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_pmin1510->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_pmin1510->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_pmin1510->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_pmin1510->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_pmin1510->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_pmin1510->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1510->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_pmin1510->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_pmin1510->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_pmin1510->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1510->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_pmin1510->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_pmin1510);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_pmin_fx1511[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0S12S18_c_vs_p_pmin_fy1511[9] = {
   0.4983864,
   0.6598142,
   0.7851532,
   0.8810828,
   0.9257956,
   0.9686046,
   0.9612078,
   0.9168183,
   0.8964007};
   Double_t S0S12S18_c_vs_p_pmin_fex1511[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_c_vs_p_pmin_fey1511[9] = {
   0.01894487,
   0.01860914,
   0.01853991,
   0.01874047,
   0.01927426,
   0.02021526,
   0.02171633,
   0.02404215,
   0.02771363};
   gre = new TGraphErrors(9,S0S12S18_c_vs_p_pmin_fx1511,S0S12S18_c_vs_p_pmin_fy1511,S0S12S18_c_vs_p_pmin_fex1511,S0S12S18_c_vs_p_pmin_fey1511);
   gre->SetName("S0S12S18_c_vs_p_pmin");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_pmin1511 = new TH1F("Graph_S0S12S18_c_vs_p_pmin1511","S0S12S18",100,440,2360);
   Graph_S0S12S18_c_vs_p_pmin1511->SetMinimum(0.4285037);
   Graph_S0S12S18_c_vs_p_pmin1511->SetMaximum(1.039758);
   Graph_S0S12S18_c_vs_p_pmin1511->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_pmin1511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_pmin1511->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_pmin1511->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S0S12S18_c_vs_p_pmin1511->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_pmin1511->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1511->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_pmin1511->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_pmin1511->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_pmin1511->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_pmin1511->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_pmin1511->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_pmin1511->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1511->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_pmin1511->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_pmin1511->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_pmin1511->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1511->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_pmin1511->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_pmin1511);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_pmin","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_pmin","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_pmin","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p_pmin","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p_pmin","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
