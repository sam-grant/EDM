void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.675,3468.85,0.07500001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1558[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S0_c_vs_p_fy1558[15] = {
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06};
   Double_t S0_c_vs_p_fex1558[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1558[15] = {
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1558,S0_c_vs_p_fy1558,S0_c_vs_p_fex1558,S0_c_vs_p_fey1558);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1558 = new TH1F("Graph_S0_c_vs_p1558","",100,0,3080);
   Graph_S0_c_vs_p1558->SetMinimum(-0.6);
   Graph_S0_c_vs_p1558->SetMaximum(0);
   Graph_S0_c_vs_p1558->SetDirectory(0);
   Graph_S0_c_vs_p1558->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1558->SetLineColor(ci);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_c_vs_p1558->GetXaxis()->SetRange(0,100);
   Graph_S0_c_vs_p1558->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1558->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1558->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1558->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1558->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1558->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1558->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1558->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1558);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1559[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S12_c_vs_p_fy1559[15] = {
   -0.1264052,
   -0.1265181,
   -0.08584448,
   -0.03931549,
   -0.0941968,
   -0.2392364,
   -0.2881813,
   -0.253479,
   -0.1973877,
   -0.1487762,
   -0.1089482,
   -0.05912916,
   0.05871637,
   0.1865607,
   0.3340106};
   Double_t S12_c_vs_p_fex1559[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1559[15] = {
   0.005477105,
   0.005476946,
   0.005450527,
   0.005314993,
   0.005223396,
   0.005250804,
   0.00536681,
   0.00558687,
   0.005928389,
   0.006460832,
   0.00725435,
   0.00850832,
   0.01071429,
   0.01430184,
   0.02689493};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1559,S12_c_vs_p_fy1559,S12_c_vs_p_fex1559,S12_c_vs_p_fey1559);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1559 = new TH1F("Graph_S12_c_vs_p1559","S12",100,0,3080);
   Graph_S12_c_vs_p1559->SetMinimum(-0.3589934);
   Graph_S12_c_vs_p1559->SetMaximum(0.4263509);
   Graph_S12_c_vs_p1559->SetDirectory(0);
   Graph_S12_c_vs_p1559->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1559->SetLineColor(ci);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_c_vs_p1559->GetXaxis()->SetRange(0,100);
   Graph_S12_c_vs_p1559->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1559->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1559->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1559->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1559->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1559->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1559->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1559->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1559);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1560[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S18_c_vs_p_fy1560[15] = {
   0.003067174,
   0.002924129,
   0.04208004,
   0.08834699,
   0.02695335,
   -0.1075209,
   -0.1372834,
   -0.1109843,
   -0.09463698,
   -0.07364519,
   -0.05557424,
   -0.02691294,
   -0.06001335,
   -0.06369348,
   -0.1709532};
   Double_t S18_c_vs_p_fex1560[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1560[15] = {
   0.005650002,
   0.005649906,
   0.005624859,
   0.005493489,
   0.005409917,
   0.005454828,
   0.005596425,
   0.005853043,
   0.006249338,
   0.006874013,
   0.00778925,
   0.009153645,
   0.01133522,
   0.01460182,
   0.02820413};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1560,S18_c_vs_p_fy1560,S18_c_vs_p_fex1560,S18_c_vs_p_fey1560);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1560 = new TH1F("Graph_S18_c_vs_p1560","S18",100,0,3080);
   Graph_S18_c_vs_p1560->SetMinimum(-0.2284571);
   Graph_S18_c_vs_p1560->SetMaximum(0.1231403);
   Graph_S18_c_vs_p1560->SetDirectory(0);
   Graph_S18_c_vs_p1560->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1560->SetLineColor(ci);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_c_vs_p1560->GetXaxis()->SetRange(0,100);
   Graph_S18_c_vs_p1560->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1560->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1560->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1560->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1560->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1560->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1560->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1560->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1560);
   
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
