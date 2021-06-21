void c_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-374.6875,-0.675,3097.188,0.07500001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1268[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t S0_c_vs_p_fy1268[6] = {
   2.089632,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1268[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1268[6] = {
   76.21243,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(6,S0_c_vs_p_fx1268,S0_c_vs_p_fy1268,S0_c_vs_p_fex1268,S0_c_vs_p_fey1268);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1268 = new TH1F("Graph_S0_c_vs_p1268","",100,0,2750);
   Graph_S0_c_vs_p1268->SetMinimum(-0.6);
   Graph_S0_c_vs_p1268->SetMaximum(0);
   Graph_S0_c_vs_p1268->SetDirectory(0);
   Graph_S0_c_vs_p1268->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1268->SetLineColor(ci);
   Graph_S0_c_vs_p1268->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_c_vs_p1268->GetXaxis()->SetRange(0,100);
   Graph_S0_c_vs_p1268->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1268->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1268->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1268->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1268->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1268->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1268->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1268->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1268->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1268->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1268->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1268->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1268->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1268->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1268->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1268);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1269[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t S12_c_vs_p_fy1269[6] = {
   -0.466629,
   -0.3649382,
   -0.2141472,
   -0.1716474,
   -0.1241073,
   -0.1245081};
   Double_t S12_c_vs_p_fex1269[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1269[6] = {
   0.01283158,
   0.01271883,
   0.01264549,
   0.01392412,
   0.01787966,
   0.0289261};
   gre = new TGraphErrors(6,S12_c_vs_p_fx1269,S12_c_vs_p_fy1269,S12_c_vs_p_fex1269,S12_c_vs_p_fey1269);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1269 = new TH1F("Graph_S12_c_vs_p1269","S12",100,0,2750);
   Graph_S12_c_vs_p1269->SetMinimum(-0.5178485);
   Graph_S12_c_vs_p1269->SetMaximum(-0.05719409);
   Graph_S12_c_vs_p1269->SetDirectory(0);
   Graph_S12_c_vs_p1269->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1269->SetLineColor(ci);
   Graph_S12_c_vs_p1269->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_c_vs_p1269->GetXaxis()->SetRange(0,100);
   Graph_S12_c_vs_p1269->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1269->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1269->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1269->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1269->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1269->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1269->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1269->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1269->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1269->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1269->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1269->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1269->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1269->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1269->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1269);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1270[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t S18_c_vs_p_fy1270[6] = {
   -0.1164008,
   -0.1158604,
   -0.1162748,
   -0.1395087,
   -0.2459837,
   -0.2562234};
   Double_t S18_c_vs_p_fex1270[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1270[6] = {
   0.04422715,
   0.04431222,
   0.04570552,
   0.05035985,
   0.0626511,
   0.07832021};
   gre = new TGraphErrors(6,S18_c_vs_p_fx1270,S18_c_vs_p_fy1270,S18_c_vs_p_fex1270,S18_c_vs_p_fey1270);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1270 = new TH1F("Graph_S18_c_vs_p1270","S18",100,0,2750);
   Graph_S18_c_vs_p1270->SetMinimum(-0.3609411);
   Graph_S18_c_vs_p1270->SetMaximum(-0.04417188);
   Graph_S18_c_vs_p1270->SetDirectory(0);
   Graph_S18_c_vs_p1270->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1270->SetLineColor(ci);
   Graph_S18_c_vs_p1270->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_c_vs_p1270->GetXaxis()->SetRange(0,100);
   Graph_S18_c_vs_p1270->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1270->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1270->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1270->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1270->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1270->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1270->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1270->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1270->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1270->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1270->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1270->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1270->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1270->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1270->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1270);
   
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
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
