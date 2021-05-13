void c_vs_p_slice_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  7 06:35:24 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.325,3712.5,0.925);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_slice_fx1175[15] = {
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
   Double_t S0_c_vs_p_slice_fy1175[15] = {
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
   Double_t S0_c_vs_p_slice_fex1175[15] = {
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
   Double_t S0_c_vs_p_slice_fey1175[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_slice_fx1175,S0_c_vs_p_slice_fy1175,S0_c_vs_p_slice_fex1175,S0_c_vs_p_slice_fey1175);
   gre->SetName("S0_c_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_slice1175 = new TH1F("Graph_S0_c_vs_p_slice1175","",100,0,3300);
   Graph_S0_c_vs_p_slice1175->SetMinimum(-2);
   Graph_S0_c_vs_p_slice1175->SetMaximum(0.6);
   Graph_S0_c_vs_p_slice1175->SetDirectory(0);
   Graph_S0_c_vs_p_slice1175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_slice1175->SetLineColor(ci);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p_slice1175->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_slice1175->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1175->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1175->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_slice1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_slice1175);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_slice_fx1176[15] = {
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
   Double_t S12_c_vs_p_slice_fy1176[15] = {
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
   Double_t S12_c_vs_p_slice_fex1176[15] = {
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
   Double_t S12_c_vs_p_slice_fey1176[15] = {
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
   gre = new TGraphErrors(15,S12_c_vs_p_slice_fx1176,S12_c_vs_p_slice_fy1176,S12_c_vs_p_slice_fex1176,S12_c_vs_p_slice_fey1176);
   gre->SetName("S12_c_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_slice1176 = new TH1F("Graph_S12_c_vs_p_slice1176","S12",100,0,3300);
   Graph_S12_c_vs_p_slice1176->SetMinimum(-1.389673);
   Graph_S12_c_vs_p_slice1176->SetMaximum(0.6182107);
   Graph_S12_c_vs_p_slice1176->SetDirectory(0);
   Graph_S12_c_vs_p_slice1176->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_slice1176->SetLineColor(ci);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p_slice1176->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_slice1176->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1176->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1176->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_slice1176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_slice1176);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_slice_fx1177[15] = {
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
   Double_t S18_c_vs_p_slice_fy1177[15] = {
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
   Double_t S18_c_vs_p_slice_fex1177[15] = {
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
   Double_t S18_c_vs_p_slice_fey1177[15] = {
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
   gre = new TGraphErrors(15,S18_c_vs_p_slice_fx1177,S18_c_vs_p_slice_fy1177,S18_c_vs_p_slice_fex1177,S18_c_vs_p_slice_fey1177);
   gre->SetName("S18_c_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_slice1177 = new TH1F("Graph_S18_c_vs_p_slice1177","S18",100,0,3300);
   Graph_S18_c_vs_p_slice1177->SetMinimum(-1.965995);
   Graph_S18_c_vs_p_slice1177->SetMaximum(0.2139119);
   Graph_S18_c_vs_p_slice1177->SetDirectory(0);
   Graph_S18_c_vs_p_slice1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_slice1177->SetLineColor(ci);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p_slice1177->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_slice1177->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1177->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1177->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_slice1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_slice1177);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_slice","S18","lpf");
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
