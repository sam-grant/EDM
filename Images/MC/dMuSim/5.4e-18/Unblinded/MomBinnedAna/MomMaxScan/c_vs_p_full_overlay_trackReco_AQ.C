void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.7125,3550,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1564[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S0_c_vs_p_fy1564[12] = {
   -0.03195753,
   -0.03270321,
   -0.03400223,
   -0.03472915,
   -0.03336451,
   -0.03554447,
   -0.03246194,
   -0.03965287,
   -0.04745646,
   -0.05547769,
   -0.07564213,
   -0.1677722};
   Double_t S0_c_vs_p_fex1564[12] = {
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
   Double_t S0_c_vs_p_fey1564[12] = {
   0.01242512,
   0.01249701,
   0.01269668,
   0.0130182,
   0.01353703,
   0.01430315,
   0.01539972,
   0.01697334,
   0.01927231,
   0.02280972,
   0.0289572,
   0.04325791};
   TGraphErrors *gre = new TGraphErrors(12,S0_c_vs_p_fx1564,S0_c_vs_p_fy1564,S0_c_vs_p_fex1564,S0_c_vs_p_fey1564);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1564 = new TH1F("Graph_S0_c_vs_p1564","",100,580,3220);
   Graph_S0_c_vs_p1564->SetMinimum(-0.6);
   Graph_S0_c_vs_p1564->SetMaximum(0.3);
   Graph_S0_c_vs_p1564->SetDirectory(0);
   Graph_S0_c_vs_p1564->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1564->SetLineColor(ci);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0_c_vs_p1564->GetXaxis()->SetRange(1,100);
   Graph_S0_c_vs_p1564->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1564->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1564->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1564->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1564->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1564->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1564->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1564);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1565[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S12_c_vs_p_fy1565[12] = {
   -0.3188215,
   -0.320372,
   -0.3233753,
   -0.3280048,
   -0.3355759,
   -0.350173,
   -0.367605,
   -0.3885471,
   -0.4178487,
   -0.4615399,
   -0.5452506,
   -0.6608705};
   Double_t S12_c_vs_p_fex1565[12] = {
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
   Double_t S12_c_vs_p_fey1565[12] = {
   0.01258473,
   0.01264423,
   0.01282486,
   0.01310848,
   0.01357697,
   0.01430347,
   0.01538209,
   0.01694823,
   0.01925002,
   0.02277806,
   0.02889877,
   0.04316291};
   gre = new TGraphErrors(12,S12_c_vs_p_fx1565,S12_c_vs_p_fy1565,S12_c_vs_p_fex1565,S12_c_vs_p_fey1565);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1565 = new TH1F("Graph_S12_c_vs_p1565","S12",100,580,3220);
   Graph_S12_c_vs_p1565->SetMinimum(-0.7438131);
   Graph_S12_c_vs_p1565->SetMaximum(-0.2664571);
   Graph_S12_c_vs_p1565->SetDirectory(0);
   Graph_S12_c_vs_p1565->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1565->SetLineColor(ci);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S12_c_vs_p1565->GetXaxis()->SetRange(1,100);
   Graph_S12_c_vs_p1565->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1565->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1565->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1565->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1565->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1565->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1565->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1565);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1566[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S18_c_vs_p_fy1566[12] = {
   -0.1968867,
   -0.1978858,
   -0.199012,
   -0.2004617,
   -0.2037864,
   -0.2128998,
   -0.2208485,
   -0.2331067,
   -0.2404476,
   -0.2680316,
   -0.2706533,
   -0.319896};
   Double_t S18_c_vs_p_fex1566[12] = {
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
   Double_t S18_c_vs_p_fey1566[12] = {
   0.01271283,
   0.01276951,
   0.01294799,
   0.01322186,
   0.01366263,
   0.01436327,
   0.0154095,
   0.01696603,
   0.01925624,
   0.02278555,
   0.0289087,
   0.04322965};
   gre = new TGraphErrors(12,S18_c_vs_p_fx1566,S18_c_vs_p_fy1566,S18_c_vs_p_fex1566,S18_c_vs_p_fey1566);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1566 = new TH1F("Graph_S18_c_vs_p1566","S18",100,580,3220);
   Graph_S18_c_vs_p1566->SetMinimum(-0.3810208);
   Graph_S18_c_vs_p1566->SetMaximum(-0.1662786);
   Graph_S18_c_vs_p1566->SetDirectory(0);
   Graph_S18_c_vs_p1566->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1566->SetLineColor(ci);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S18_c_vs_p1566->GetXaxis()->SetRange(1,100);
   Graph_S18_c_vs_p1566->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1566->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1566->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1566->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1566->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1566->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1566->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1566);
   
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
