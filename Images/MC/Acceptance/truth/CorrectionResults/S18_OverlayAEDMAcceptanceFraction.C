void S18_OverlayAEDMAcceptanceFraction()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 18:45:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(811.7217,-0.18125,2678.365,1.13125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_gr_ratio_nominal_fx1010[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t S18_gr_ratio_nominal_fy1010[6] = {
   0.3753683,
   0.4958012,
   0.6032882,
   0.4247337,
   0.4595643,
   0.3390797};
   Double_t S18_gr_ratio_nominal_fex1010[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_gr_ratio_nominal_fey1010[6] = {
   0.1023468,
   0.1039348,
   0.1107299,
   0.1202592,
   0.1769445,
   0.1976935};
   TGraphErrors *gre = new TGraphErrors(6,S18_gr_ratio_nominal_fx1010,S18_gr_ratio_nominal_fy1010,S18_gr_ratio_nominal_fex1010,S18_gr_ratio_nominal_fey1010);
   gre->SetName("S18_gr_ratio_nominal");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ratio_nominal1010 = new TH1F("Graph_S18_gr_ratio_nominal1010","S18",100,998.3861,2491.701);
   Graph_S18_gr_ratio_nominal1010->SetMinimum(-0.05);
   Graph_S18_gr_ratio_nominal1010->SetMaximum(1);
   Graph_S18_gr_ratio_nominal1010->SetDirectory(0);
   Graph_S18_gr_ratio_nominal1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ratio_nominal1010->SetLineColor(ci);
   Graph_S18_gr_ratio_nominal1010->GetXaxis()->SetTitle("Decay vertex momentum (nominal) [MeV]");
   Graph_S18_gr_ratio_nominal1010->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_ratio_nominal1010->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_nominal1010->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ratio_nominal1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_ratio_nominal1010->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_nominal1010->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   Graph_S18_gr_ratio_nominal1010->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_ratio_nominal1010->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_ratio_nominal1010->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_nominal1010->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ratio_nominal1010->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_ratio_nominal1010->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_nominal1010->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_nominal1010->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ratio_nominal1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ratio_nominal1010);
   
   gre->Draw("ap");
   
   Double_t S18_gr_ratio_shift_fx1011[6] = {
   1147.829,
   1397.245,
   1646.478,
   1895.594,
   2144.355,
   2392.258};
   Double_t S18_gr_ratio_shift_fy1011[6] = {
   0.2146341,
   0.510215,
   0.5505272,
   0.4468589,
   0.5456281,
   0.2707352};
   Double_t S18_gr_ratio_shift_fex1011[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_gr_ratio_shift_fey1011[6] = {
   0.1355594,
   0.1387432,
   0.1469687,
   0.1621286,
   0.2399353,
   0.2702071};
   gre = new TGraphErrors(6,S18_gr_ratio_shift_fx1011,S18_gr_ratio_shift_fy1011,S18_gr_ratio_shift_fex1011,S18_gr_ratio_shift_fey1011);
   gre->SetName("S18_gr_ratio_shift");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ratio_shift1011 = new TH1F("Graph_S18_gr_ratio_shift1011","",100,1023.386,2516.701);
   Graph_S18_gr_ratio_shift1011->SetMinimum(0.0004753375);
   Graph_S18_gr_ratio_shift1011->SetMaximum(0.8640668);
   Graph_S18_gr_ratio_shift1011->SetDirectory(0);
   Graph_S18_gr_ratio_shift1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ratio_shift1011->SetLineColor(ci);
   Graph_S18_gr_ratio_shift1011->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_shift1011->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_ratio_shift1011->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_shift1011->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_shift1011->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_shift1011->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_shift1011->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ratio_shift1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ratio_shift1011);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.11,0.79,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_gr_ratio_nominal","Truth vertices (nominal)","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_gr_ratio_shift","Truth vertices (#minus1 mm)","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
