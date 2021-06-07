void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-0.625,3605.25,0.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1549[15] = {
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
   Double_t S0_A_vs_p_fy1549[15] = {
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948};
   Double_t S0_A_vs_p_fex1549[15] = {
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
   Double_t S0_A_vs_p_fey1549[15] = {
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07};
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1549,S0_A_vs_p_fy1549,S0_A_vs_p_fex1549,S0_A_vs_p_fey1549);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1549 = new TH1F("Graph_S0_A_vs_p1549","",100,0,3300);
   Graph_S0_A_vs_p1549->SetMinimum(-0.5);
   Graph_S0_A_vs_p1549->SetMaximum(0.5);
   Graph_S0_A_vs_p1549->SetDirectory(0);
   Graph_S0_A_vs_p1549->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1549->SetLineColor(ci);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_A_vs_p1549->GetXaxis()->SetRange(0,97);
   Graph_S0_A_vs_p1549->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1549->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1549->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1549->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1549->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1549->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1549->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1549->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1549);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1550[15] = {
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
   Double_t S12_A_vs_p_fy1550[15] = {
   -5.14447,
   0.06526283,
   0.060324,
   0.05042513,
   0.06892665,
   0.03391975,
   0.04696574,
   0.07936876,
   0.01852031,
   0.02690308,
   0.03721293,
   0.01355607,
   -0.02948587,
   0.02917481,
   0.02399361};
   Double_t S12_A_vs_p_fex1550[15] = {
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
   Double_t S12_A_vs_p_fey1550[15] = {
   1.154299,
   0.14746,
   0.05321813,
   0.03402708,
   0.02641551,
   0.02275692,
   0.02025469,
   0.01884271,
   0.01803019,
   0.0178428,
   0.01788725,
   0.01823766,
   0.02040551,
   0.02090301,
   0.03196226};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1550,S12_A_vs_p_fy1550,S12_A_vs_p_fex1550,S12_A_vs_p_fey1550);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1550 = new TH1F("Graph_S12_A_vs_p1550","S12",100,0,3300);
   Graph_S12_A_vs_p1550->SetMinimum(-6.949918);
   Graph_S12_A_vs_p1550->SetMaximum(0.863872);
   Graph_S12_A_vs_p1550->SetDirectory(0);
   Graph_S12_A_vs_p1550->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1550->SetLineColor(ci);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_A_vs_p1550->GetXaxis()->SetRange(0,97);
   Graph_S12_A_vs_p1550->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1550->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1550->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1550->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1550->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1550->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1550->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1550->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1550);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1551[15] = {
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
   Double_t S18_A_vs_p_fy1551[15] = {
   0.8859694,
   0.1079249,
   -0.03814012,
   0.08123225,
   0.0384632,
   0.0395268,
   0.03771252,
   -0.001661406,
   0.03445449,
   -0.01209736,
   0.06272027,
   0.02397302,
   -0.02089356,
   0.001929053,
   0.03497765};
   Double_t S18_A_vs_p_fex1551[15] = {
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
   Double_t S18_A_vs_p_fey1551[15] = {
   1.331741,
   0.151824,
   0.05372697,
   0.03413764,
   0.02657502,
   0.02296125,
   0.02058562,
   0.01926545,
   0.01849529,
   0.01856916,
   0.01905086,
   0.01981373,
   0.02214876,
   0.02151025,
   0.03429433};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1551,S18_A_vs_p_fy1551,S18_A_vs_p_fex1551,S18_A_vs_p_fey1551);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1551 = new TH1F("Graph_S18_A_vs_p1551","S18",100,0,3300);
   Graph_S18_A_vs_p1551->SetMinimum(-0.7121197);
   Graph_S18_A_vs_p1551->SetMaximum(2.484059);
   Graph_S18_A_vs_p1551->SetDirectory(0);
   Graph_S18_A_vs_p1551->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1551->SetLineColor(ci);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_A_vs_p1551->GetXaxis()->SetRange(0,97);
   Graph_S18_A_vs_p1551->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1551->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1551->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1551->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1551->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1551->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1551->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1551->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1551);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
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
