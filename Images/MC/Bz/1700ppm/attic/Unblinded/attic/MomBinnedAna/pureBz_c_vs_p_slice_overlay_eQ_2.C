void pureBz_c_vs_p_slice_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.69375,3690,0.24375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_pureBz_c_vs_p_slice_fx1327[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0_pureBz_c_vs_p_slice_fy1327[14] = {
   -2.018615,
   -1.264614,
   -0.152138,
   -0.04343978,
   -0.05577416,
   0.005565176,
   -0.01727127,
   -0.04506873,
   -0.0340808,
   0.02387308,
   0.0186075,
   0.01449449,
   -0.02300133,
   -0.01396744};
   Double_t S0_pureBz_c_vs_p_slice_fex1327[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_pureBz_c_vs_p_slice_fey1327[14] = {
   0.1116615,
   0.03846341,
   0.02892428,
   0.02509511,
   0.02265805,
   0.02080101,
   0.01937097,
   0.0182926,
   0.01771432,
   0.01745131,
   0.01751849,
   0.01797593,
   0.01947199,
   0.02933248};
   TGraphErrors *gre = new TGraphErrors(14,S0_pureBz_c_vs_p_slice_fx1327,S0_pureBz_c_vs_p_slice_fy1327,S0_pureBz_c_vs_p_slice_fex1327,S0_pureBz_c_vs_p_slice_fey1327);
   gre->SetName("S0_pureBz_c_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_pureBz_c_vs_p_slice1327 = new TH1F("Graph_S0_pureBz_c_vs_p_slice1327","",100,0,3280);
   Graph_S0_pureBz_c_vs_p_slice1327->SetMinimum(-0.6);
   Graph_S0_pureBz_c_vs_p_slice1327->SetMaximum(0.15);
   Graph_S0_pureBz_c_vs_p_slice1327->SetDirectory(0);
   Graph_S0_pureBz_c_vs_p_slice1327->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_pureBz_c_vs_p_slice1327->SetLineColor(ci);
   Graph_S0_pureBz_c_vs_p_slice1327->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_pureBz_c_vs_p_slice1327->GetXaxis()->CenterTitle(true);
   Graph_S0_pureBz_c_vs_p_slice1327->GetXaxis()->SetLabelFont(42);
   Graph_S0_pureBz_c_vs_p_slice1327->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_pureBz_c_vs_p_slice1327->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_pureBz_c_vs_p_slice1327->GetXaxis()->SetTitleFont(42);
   Graph_S0_pureBz_c_vs_p_slice1327->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_pureBz_c_vs_p_slice1327->GetYaxis()->CenterTitle(true);
   Graph_S0_pureBz_c_vs_p_slice1327->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_pureBz_c_vs_p_slice1327->GetYaxis()->SetLabelFont(42);
   Graph_S0_pureBz_c_vs_p_slice1327->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_pureBz_c_vs_p_slice1327->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_pureBz_c_vs_p_slice1327->GetYaxis()->SetTitleFont(42);
   Graph_S0_pureBz_c_vs_p_slice1327->GetZaxis()->SetLabelFont(42);
   Graph_S0_pureBz_c_vs_p_slice1327->GetZaxis()->SetTitleOffset(1);
   Graph_S0_pureBz_c_vs_p_slice1327->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_pureBz_c_vs_p_slice1327);
   
   gre->Draw("ap");
   
   Double_t S12_pureBz_c_vs_p_slice_fx1328[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12_pureBz_c_vs_p_slice_fy1328[14] = {
   -2.771757,
   -1.561755,
   -0.5899002,
   -0.4047823,
   -0.3213625,
   -0.2577429,
   -0.1956321,
   -0.1630899,
   -0.1379199,
   -0.09723359,
   -0.071754,
   -0.07049857,
   -0.05065551,
   -0.06204431};
   Double_t S12_pureBz_c_vs_p_slice_fex1328[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_pureBz_c_vs_p_slice_fey1328[14] = {
   0.1078036,
   0.03863012,
   0.02896623,
   0.02524059,
   0.02278365,
   0.0208805,
   0.01949341,
   0.01840151,
   0.01786589,
   0.0176366,
   0.017671,
   0.01831355,
   0.01994284,
   0.03061484};
   gre = new TGraphErrors(14,S12_pureBz_c_vs_p_slice_fx1328,S12_pureBz_c_vs_p_slice_fy1328,S12_pureBz_c_vs_p_slice_fex1328,S12_pureBz_c_vs_p_slice_fey1328);
   gre->SetName("S12_pureBz_c_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_pureBz_c_vs_p_slice1328 = new TH1F("Graph_S12_pureBz_c_vs_p_slice1328","S12",100,0,3280);
   Graph_S12_pureBz_c_vs_p_slice1328->SetMinimum(-3.164446);
   Graph_S12_pureBz_c_vs_p_slice1328->SetMaximum(0.2541722);
   Graph_S12_pureBz_c_vs_p_slice1328->SetDirectory(0);
   Graph_S12_pureBz_c_vs_p_slice1328->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_pureBz_c_vs_p_slice1328->SetLineColor(ci);
   Graph_S12_pureBz_c_vs_p_slice1328->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_pureBz_c_vs_p_slice1328->GetXaxis()->CenterTitle(true);
   Graph_S12_pureBz_c_vs_p_slice1328->GetXaxis()->SetLabelFont(42);
   Graph_S12_pureBz_c_vs_p_slice1328->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_pureBz_c_vs_p_slice1328->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_pureBz_c_vs_p_slice1328->GetXaxis()->SetTitleFont(42);
   Graph_S12_pureBz_c_vs_p_slice1328->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_pureBz_c_vs_p_slice1328->GetYaxis()->CenterTitle(true);
   Graph_S12_pureBz_c_vs_p_slice1328->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_pureBz_c_vs_p_slice1328->GetYaxis()->SetLabelFont(42);
   Graph_S12_pureBz_c_vs_p_slice1328->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_pureBz_c_vs_p_slice1328->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_pureBz_c_vs_p_slice1328->GetYaxis()->SetTitleFont(42);
   Graph_S12_pureBz_c_vs_p_slice1328->GetZaxis()->SetLabelFont(42);
   Graph_S12_pureBz_c_vs_p_slice1328->GetZaxis()->SetTitleOffset(1);
   Graph_S12_pureBz_c_vs_p_slice1328->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_pureBz_c_vs_p_slice1328);
   
   gre->Draw("p ");
   
   Double_t S18_pureBz_c_vs_p_slice_fx1329[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S18_pureBz_c_vs_p_slice_fy1329[14] = {
   -2.590603,
   -1.424755,
   -0.4895338,
   -0.3129777,
   -0.2244996,
   -0.1990926,
   -0.1700211,
   -0.1321145,
   -0.1055892,
   -0.08901576,
   -0.07779269,
   -0.04253511,
   -0.0799359,
   0.0177747};
   Double_t S18_pureBz_c_vs_p_slice_fex1329[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_pureBz_c_vs_p_slice_fey1329[14] = {
   0.1102635,
   0.03872448,
   0.02896128,
   0.0252791,
   0.02287657,
   0.02102475,
   0.01959839,
   0.01856794,
   0.01799688,
   0.01774218,
   0.01789917,
   0.01855843,
   0.02033556,
   0.03120682};
   gre = new TGraphErrors(14,S18_pureBz_c_vs_p_slice_fx1329,S18_pureBz_c_vs_p_slice_fy1329,S18_pureBz_c_vs_p_slice_fex1329,S18_pureBz_c_vs_p_slice_fey1329);
   gre->SetName("S18_pureBz_c_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_pureBz_c_vs_p_slice1329 = new TH1F("Graph_S18_pureBz_c_vs_p_slice1329","S18",100,0,3280);
   Graph_S18_pureBz_c_vs_p_slice1329->SetMinimum(-2.975851);
   Graph_S18_pureBz_c_vs_p_slice1329->SetMaximum(0.3239663);
   Graph_S18_pureBz_c_vs_p_slice1329->SetDirectory(0);
   Graph_S18_pureBz_c_vs_p_slice1329->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_pureBz_c_vs_p_slice1329->SetLineColor(ci);
   Graph_S18_pureBz_c_vs_p_slice1329->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_pureBz_c_vs_p_slice1329->GetXaxis()->CenterTitle(true);
   Graph_S18_pureBz_c_vs_p_slice1329->GetXaxis()->SetLabelFont(42);
   Graph_S18_pureBz_c_vs_p_slice1329->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_pureBz_c_vs_p_slice1329->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_pureBz_c_vs_p_slice1329->GetXaxis()->SetTitleFont(42);
   Graph_S18_pureBz_c_vs_p_slice1329->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_pureBz_c_vs_p_slice1329->GetYaxis()->CenterTitle(true);
   Graph_S18_pureBz_c_vs_p_slice1329->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_pureBz_c_vs_p_slice1329->GetYaxis()->SetLabelFont(42);
   Graph_S18_pureBz_c_vs_p_slice1329->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_pureBz_c_vs_p_slice1329->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_pureBz_c_vs_p_slice1329->GetYaxis()->SetTitleFont(42);
   Graph_S18_pureBz_c_vs_p_slice1329->GetZaxis()->SetLabelFont(42);
   Graph_S18_pureBz_c_vs_p_slice1329->GetZaxis()->SetTitleOffset(1);
   Graph_S18_pureBz_c_vs_p_slice1329->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_pureBz_c_vs_p_slice1329);
   
   gre->Draw("p ");
   
   Double_t S12S18_pureBz_c_vs_p_slice_fx1330[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12S18_pureBz_c_vs_p_slice_fy1330[14] = {
   -2.680444,
   -1.493436,
   -0.5397869,
   -0.3590096,
   -0.2734893,
   -0.2285422,
   -0.1831723,
   -0.147878,
   -0.1218425,
   -0.09319532,
   -0.0746783,
   -0.05614879,
   -0.06477614,
   -0.02544569};
   Double_t S12S18_pureBz_c_vs_p_slice_fex1330[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_pureBz_c_vs_p_slice_fey1330[14] = {
   0.07714915,
   0.0273522,
   0.02048251,
   0.017863,
   0.01614503,
   0.01481688,
   0.01382267,
   0.01307167,
   0.01268137,
   0.01251053,
   0.0125793,
   0.01304286,
   0.01425517,
   0.02204437};
   gre = new TGraphErrors(14,S12S18_pureBz_c_vs_p_slice_fx1330,S12S18_pureBz_c_vs_p_slice_fy1330,S12S18_pureBz_c_vs_p_slice_fex1330,S12S18_pureBz_c_vs_p_slice_fey1330);
   gre->SetName("S12S18_pureBz_c_vs_p_slice");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_pureBz_c_vs_p_slice1330 = new TH1F("Graph_S12S18_pureBz_c_vs_p_slice1330","S12S18",100,0,3280);
   Graph_S12S18_pureBz_c_vs_p_slice1330->SetMinimum(-3.033012);
   Graph_S12S18_pureBz_c_vs_p_slice1330->SetMaximum(0.2720179);
   Graph_S12S18_pureBz_c_vs_p_slice1330->SetDirectory(0);
   Graph_S12S18_pureBz_c_vs_p_slice1330->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_pureBz_c_vs_p_slice1330->SetLineColor(ci);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetXaxis()->CenterTitle(true);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetYaxis()->CenterTitle(true);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_pureBz_c_vs_p_slice1330->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_pureBz_c_vs_p_slice1330);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_pureBz_c_vs_p_slice_fx1331[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0S12S18_pureBz_c_vs_p_slice_fy1331[14] = {
   -2.461192,
   -1.415652,
   -0.4092943,
   -0.2525227,
   -0.1999265,
   -0.1494786,
   -0.1270976,
   -0.1128788,
   -0.09214021,
   -0.0534741,
   -0.04278015,
   -0.03201734,
   -0.05025223,
   -0.01980648};
   Double_t S0S12S18_pureBz_c_vs_p_slice_fex1331[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_pureBz_c_vs_p_slice_fey1331[14] = {
   0.06350528,
   0.02229283,
   0.01671723,
   0.01455392,
   0.01314959,
   0.01206947,
   0.01125281,
   0.01063642,
   0.01031266,
   0.01016911,
   0.01021978,
   0.01056083,
   0.01150944,
   0.01774234};
   gre = new TGraphErrors(14,S0S12S18_pureBz_c_vs_p_slice_fx1331,S0S12S18_pureBz_c_vs_p_slice_fy1331,S0S12S18_pureBz_c_vs_p_slice_fex1331,S0S12S18_pureBz_c_vs_p_slice_fey1331);
   gre->SetName("S0S12S18_pureBz_c_vs_p_slice");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_pureBz_c_vs_p_slice1331 = new TH1F("Graph_S0S12S18_pureBz_c_vs_p_slice1331","S0S12S18",100,0,3280);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->SetMinimum(-2.77696);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->SetMaximum(0.2501992);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->SetDirectory(0);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->SetLineColor(ci);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_pureBz_c_vs_p_slice1331->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_pureBz_c_vs_p_slice1331);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_pureBz_c_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_pureBz_c_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_pureBz_c_vs_p_slice","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_pureBz_c_vs_p_slice","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_pureBz_c_vs_p_slice","S0S12S18","lpf");
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
