void c_vs_p_slice_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 18:46:04 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.079375,3378.375,0.064375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1175[15] = {
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
   Double_t S0_c_vs_p_fy1175[15] = {
   -0.602746,
   -0.8600585,
   -0.3399308,
   -0.01263132,
   -0.001263667,
   7.648356e-05,
   -0.0002285755,
   -0.0001502822,
   8.142465e-05,
   -8.852112e-05,
   -0.000742613,
   0.0007099673,
   -0.001128681,
   0.0006211733,
   -0.005841266};
   Double_t S0_c_vs_p_fex1175[15] = {
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
   Double_t S0_c_vs_p_fey1175[15] = {
   0.7156543,
   0.1116236,
   0.03844582,
   0.0289286,
   0.02509875,
   0.02266112,
   0.02080484,
   0.01937444,
   0.01829605,
   0.01771662,
   0.01745506,
   0.01752217,
   0.01798177,
   0.01948443,
   0.02934235};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1175,S0_c_vs_p_fy1175,S0_c_vs_p_fex1175,S0_c_vs_p_fey1175);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1175 = new TH1F("Graph_S0_c_vs_p1175","",100,0,3300);
   Graph_S0_c_vs_p1175->SetMinimum(-0.065);
   Graph_S0_c_vs_p1175->SetMaximum(0.05);
   Graph_S0_c_vs_p1175->SetDirectory(0);
   Graph_S0_c_vs_p1175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1175->SetLineColor(ci);
   Graph_S0_c_vs_p1175->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1175->GetXaxis()->SetRange(1,91);
   Graph_S0_c_vs_p1175->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1175->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1175->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1175->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1175->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1175->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1175->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1175->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1175->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1175->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1175->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1175->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1175->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1175->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1175);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1176[15] = {
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
   Double_t S12_c_vs_p_fy1176[15] = {
   -0.3448457,
   -1.114606,
   -0.3988548,
   -0.04232994,
   -0.002522492,
   -0.0007493658,
   -0.001463513,
   0.0007312622,
   0.000897565,
   0.0002102601,
   -8.675344e-05,
   0.001315613,
   -0.0016036,
   0.0003983723,
   0.01374128};
   Double_t S12_c_vs_p_fex1176[15] = {
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
   Double_t S12_c_vs_p_fey1176[15] = {
   0.7957327,
   0.1077438,
   0.03861322,
   0.0289706,
   0.0252455,
   0.02278999,
   0.02088397,
   0.01949539,
   0.01840478,
   0.01787083,
   0.01763934,
   0.0176769,
   0.01831887,
   0.01994191,
   0.03063708};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1176,S12_c_vs_p_fy1176,S12_c_vs_p_fex1176,S12_c_vs_p_fey1176);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1176 = new TH1F("Graph_S12_c_vs_p1176","S12",100,0,3300);
   Graph_S12_c_vs_p1176->SetMinimum(-1.389673);
   Graph_S12_c_vs_p1176->SetMaximum(0.6182107);
   Graph_S12_c_vs_p1176->SetDirectory(0);
   Graph_S12_c_vs_p1176->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1176->SetLineColor(ci);
   Graph_S12_c_vs_p1176->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1176->GetXaxis()->SetRange(1,91);
   Graph_S12_c_vs_p1176->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1176->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1176->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1176->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1176->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1176->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1176->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1176->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1176->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1176->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1176->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1176->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1176->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1176->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1176);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1177[15] = {
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
   Double_t S18_c_vs_p_fy1177[15] = {
   -1.051057,
   -1.044809,
   -0.3432839,
   -0.03254808,
   -0.00236312,
   -0.00054958,
   -3.559711e-05,
   -0.0001238277,
   0.0006505783,
   0.0007923636,
   0.0001806324,
   0.0001823832,
   -0.0007680623,
   0.0008412194,
   0.001035531};
   Double_t S18_c_vs_p_fex1177[15] = {
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
   Double_t S18_c_vs_p_fey1177[15] = {
   0.7332789,
   0.1102647,
   0.03871202,
   0.02896567,
   0.02528232,
   0.02287933,
   0.02102719,
   0.01960149,
   0.01857188,
   0.01800116,
   0.01774612,
   0.0178995,
   0.018564,
   0.02034258,
   0.03121747};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1177,S18_c_vs_p_fy1177,S18_c_vs_p_fex1177,S18_c_vs_p_fey1177);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1177 = new TH1F("Graph_S18_c_vs_p1177","S18",100,0,3300);
   Graph_S18_c_vs_p1177->SetMinimum(-1.965995);
   Graph_S18_c_vs_p1177->SetMaximum(0.2139119);
   Graph_S18_c_vs_p1177->SetDirectory(0);
   Graph_S18_c_vs_p1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1177->SetLineColor(ci);
   Graph_S18_c_vs_p1177->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1177->GetXaxis()->SetRange(1,91);
   Graph_S18_c_vs_p1177->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1177->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1177->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1177->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1177->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1177->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1177->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1177->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1177->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1177->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1177->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1177->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1177->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1177);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_fx1178[15] = {
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
   Double_t S12S18_c_vs_p_fy1178[15] = {
   -0.9849689,
   -1.078756,
   -0.3711072,
   -0.03738191,
   -0.002326325,
   -0.0007394046,
   -0.0005396107,
   6.791931e-05,
   0.0006513621,
   0.0005556486,
   -2.847334e-05,
   0.0007667315,
   -0.000550823,
   0.001044414,
   0.005089336};
   Double_t S12S18_c_vs_p_fex1178[15] = {
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
   Double_t S12S18_c_vs_p_fey1178[15] = {
   0.5797161,
   0.07712432,
   0.02734185,
   0.0204855,
   0.0178658,
   0.01614804,
   0.0148189,
   0.01382445,
   0.01307421,
   0.01268461,
   0.01251282,
   0.01258133,
   0.01304662,
   0.01425716,
   0.02204914};
   gre = new TGraphErrors(15,S12S18_c_vs_p_fx1178,S12S18_c_vs_p_fy1178,S12S18_c_vs_p_fex1178,S12S18_c_vs_p_fey1178);
   gre->SetName("S12S18_c_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p1178 = new TH1F("Graph_S12S18_c_vs_p1178","S12S18",100,0,3300);
   Graph_S12S18_c_vs_p1178->SetMinimum(-1.723867);
   Graph_S12S18_c_vs_p1178->SetMaximum(0.1863208);
   Graph_S12S18_c_vs_p1178->SetDirectory(0);
   Graph_S12S18_c_vs_p1178->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p1178->SetLineColor(ci);
   Graph_S12S18_c_vs_p1178->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12S18_c_vs_p1178->GetXaxis()->SetRange(1,91);
   Graph_S12S18_c_vs_p1178->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1178->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1178->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1178->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p1178->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1178->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p1178->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1178->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p1178->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1178->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1178->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p1178->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1178->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1178->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p1178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p1178);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1179[15] = {
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
   Double_t S0S12S18_c_vs_p_fy1179[15] = {
   -0.7054971,
   -1.004939,
   -0.3602721,
   -0.02893046,
   -0.00216711,
   -0.0006995681,
   -0.0005230743,
   -0.0001735042,
   0.0005736698,
   0.000254481,
   -0.000371705,
   0.0008542132,
   -0.001026489,
   0.0009713901,
   0.003392085};
   Double_t S0S12S18_c_vs_p_fex1179[15] = {
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
   Double_t S0S12S18_c_vs_p_fey1179[15] = {
   0.4794171,
   0.0634826,
   0.02228361,
   0.01671927,
   0.01455581,
   0.01315162,
   0.01207105,
   0.01125428,
   0.01063838,
   0.01031475,
   0.01017091,
   0.01022149,
   0.01056389,
   0.01151297,
   0.01774608};
   gre = new TGraphErrors(15,S0S12S18_c_vs_p_fx1179,S0S12S18_c_vs_p_fy1179,S0S12S18_c_vs_p_fex1179,S0S12S18_c_vs_p_fey1179);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1179 = new TH1F("Graph_S0S12S18_c_vs_p1179","S0S12S18",100,0,3300);
   Graph_S0S12S18_c_vs_p1179->SetMinimum(-1.305519);
   Graph_S0S12S18_c_vs_p1179->SetMaximum(0.1417434);
   Graph_S0S12S18_c_vs_p1179->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1179->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1179->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_c_vs_p1179->GetXaxis()->SetRange(1,91);
   Graph_S0S12S18_c_vs_p1179->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1179->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1179->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1179->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1179->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1179->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1179->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1179->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1179->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1179->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1179->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1179->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1179->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1179->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1179);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
