void ABz_vs_p_slice_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  7 06:35:24 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-4.625,3712.5,1.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_slice_fx1178[15] = {
   100,
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
   Double_t S0_ABz_vs_p_slice_fy1178[15] = {
   -1.982866,
   -0.1746324,
   0.06772579,
   0.1790689,
   0.2067459,
   0.1821672,
   0.1291381,
   0.1610842,
   0.226063,
   0.1776299,
   0.1588043,
   0.1291816,
   0.1252642,
   0.06220565,
   0.06795085};
   Double_t S0_ABz_vs_p_slice_fex1178[15] = {
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
   100,
   100};
   Double_t S0_ABz_vs_p_slice_fey1178[15] = {
   0.9764197,
   0.1577446,
   0.05435599,
   0.04088778,
   0.03552575,
   0.03207266,
   0.02944017,
   0.02740014,
   0.02585292,
   0.02503419,
   0.0247093,
   0.02482334,
   0.02550652,
   0.0275571,
   0.0419182};
   TGraphErrors *gre = new TGraphErrors(15,S0_ABz_vs_p_slice_fx1178,S0_ABz_vs_p_slice_fy1178,S0_ABz_vs_p_slice_fex1178,S0_ABz_vs_p_slice_fey1178);
   gre->SetName("S0_ABz_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_slice1178 = new TH1F("Graph_S0_ABz_vs_p_slice1178","",100,0,3300);
   Graph_S0_ABz_vs_p_slice1178->SetMinimum(-4);
   Graph_S0_ABz_vs_p_slice1178->SetMaximum(1);
   Graph_S0_ABz_vs_p_slice1178->SetDirectory(0);
   Graph_S0_ABz_vs_p_slice1178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_slice1178->SetLineColor(ci);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1178->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1178->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1178->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_slice1178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_slice1178);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_slice_fx1179[15] = {
   100,
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
   Double_t S12_ABz_vs_p_slice_fy1179[15] = {
   -2.295383,
   -0.4876669,
   0.01505797,
   0.0468549,
   0.2287792,
   0.1281954,
   0.2428136,
   0.1849427,
   0.1458978,
   0.1525162,
   0.07504055,
   0.1240295,
   0.08270234,
   0.13715,
   0.005693422};
   Double_t S12_ABz_vs_p_slice_fex1179[15] = {
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
   100,
   100};
   Double_t S12_ABz_vs_p_slice_fey1179[15] = {
   1.113408,
   0.1522147,
   0.05463239,
   0.04099317,
   0.03572398,
   0.03222595,
   0.02951619,
   0.02759944,
   0.02601946,
   0.0252515,
   0.02495649,
   0.02508976,
   0.02594339,
   0.02811711,
   0.04302251};
   gre = new TGraphErrors(15,S12_ABz_vs_p_slice_fx1179,S12_ABz_vs_p_slice_fy1179,S12_ABz_vs_p_slice_fex1179,S12_ABz_vs_p_slice_fey1179);
   gre->SetName("S12_ABz_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_slice1179 = new TH1F("Graph_S12_ABz_vs_p_slice1179","S12",100,0,3300);
   Graph_S12_ABz_vs_p_slice1179->SetMinimum(-3.776904);
   Graph_S12_ABz_vs_p_slice1179->SetMaximum(0.6404419);
   Graph_S12_ABz_vs_p_slice1179->SetDirectory(0);
   Graph_S12_ABz_vs_p_slice1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_slice1179->SetLineColor(ci);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_slice1179->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_slice1179->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1179->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_slice1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_slice1179);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_slice_fx1180[15] = {
   100,
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
   Double_t S18_ABz_vs_p_slice_fy1180[15] = {
   -0.8191729,
   -0.1042831,
   0.06681345,
   0.1344295,
   0.1819999,
   0.1722744,
   0.1617225,
   0.1431527,
   0.1398551,
   0.1319627,
   0.114148,
   0.1365346,
   0.1101815,
   0.04786025,
   0.004346341};
   Double_t S18_ABz_vs_p_slice_fex1180[15] = {
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
   100,
   100};
   Double_t S18_ABz_vs_p_slice_fey1180[15] = {
   1.063333,
   0.1565654,
   0.05474886,
   0.040983,
   0.03578683,
   0.03238903,
   0.02971526,
   0.02773032,
   0.02626092,
   0.02551019,
   0.02514394,
   0.02533294,
   0.02620495,
   0.02857696,
   0.04402873};
   gre = new TGraphErrors(15,S18_ABz_vs_p_slice_fx1180,S18_ABz_vs_p_slice_fy1180,S18_ABz_vs_p_slice_fex1180,S18_ABz_vs_p_slice_fey1180);
   gre->SetName("S18_ABz_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_slice1180 = new TH1F("Graph_S18_ABz_vs_p_slice1180","S18",100,0,3300);
   Graph_S18_ABz_vs_p_slice1180->SetMinimum(-2.095172);
   Graph_S18_ABz_vs_p_slice1180->SetMaximum(0.4568267);
   Graph_S18_ABz_vs_p_slice1180->SetDirectory(0);
   Graph_S18_ABz_vs_p_slice1180->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_slice1180->SetLineColor(ci);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_slice1180->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_slice1180->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1180->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_slice1180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_slice1180);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p_slice","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
