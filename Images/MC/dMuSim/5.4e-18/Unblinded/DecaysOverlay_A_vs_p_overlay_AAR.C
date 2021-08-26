void DecaysOverlay_A_vs_p_overlay_AAR()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul 29 10:32:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-420.75,-0.0005703392,3456.75,0.01012018);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AOverMaxDiff_vs_p_fx1001[15] = {
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
   Double_t AOverMaxDiff_vs_p_fy1001[15] = {
   0.0005541255,
   0.00234703,
   0.004414399,
   0.004507771,
   0.005596306,
   0.006405299,
   0.007097925,
   0.006992632,
   0.008278674,
   0.007611836,
   0.006780574,
   0.007833626,
   0.006735192,
   0.005635625,
   0.004574476};
   Double_t AOverMaxDiff_vs_p_fex1001[15] = {
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
   Double_t AOverMaxDiff_vs_p_fey1001[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,AOverMaxDiff_vs_p_fx1001,AOverMaxDiff_vs_p_fy1001,AOverMaxDiff_vs_p_fex1001,AOverMaxDiff_vs_p_fey1001);
   gre->SetName("AOverMaxDiff_vs_p");
   gre->SetTitle("LAB");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AOverMaxDiff_vs_p1001 = new TH1F("Graph_AOverMaxDiff_vs_p1001","LAB",100,0,3300);
   Graph_AOverMaxDiff_vs_p1001->SetMinimum(0.0004987129);
   Graph_AOverMaxDiff_vs_p1001->SetMaximum(0.009051129);
   Graph_AOverMaxDiff_vs_p1001->SetDirectory(0);
   Graph_AOverMaxDiff_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_AOverMaxDiff_vs_p1001->SetLineColor(ci);
   Graph_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_AOverMaxDiff_vs_p1001->GetXaxis()->SetRange(0,93);
   Graph_AOverMaxDiff_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_AOverMaxDiff_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_AOverMaxDiff_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_AOverMaxDiff_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AOverMaxDiff_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t AOverMaxDiff_vs_p_fx1002[15] = {
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
   Double_t AOverMaxDiff_vs_p_fy1002[15] = {
   0.0004900409,
   0.002216174,
   0.002926844,
   0.003950129,
   0.004857154,
   0.005485279,
   0.006519537,
   0.006558328,
   0.006784409,
   0.007404387,
   0.00754026,
   0.007526007,
   0.006518731,
   0.006907642,
   0.003720004};
   Double_t AOverMaxDiff_vs_p_fex1002[15] = {
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
   Double_t AOverMaxDiff_vs_p_fey1002[15] = {
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
   gre = new TGraphErrors(15,AOverMaxDiff_vs_p_fx1002,AOverMaxDiff_vs_p_fy1002,AOverMaxDiff_vs_p_fex1002,AOverMaxDiff_vs_p_fey1002);
   gre->SetName("AOverMaxDiff_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AOverMaxDiff_vs_p1002 = new TH1F("Graph_AOverMaxDiff_vs_p1002","",100,0,3300);
   Graph_AOverMaxDiff_vs_p1002->SetMinimum(0.0004410368);
   Graph_AOverMaxDiff_vs_p1002->SetMaximum(0.008245282);
   Graph_AOverMaxDiff_vs_p1002->SetDirectory(0);
   Graph_AOverMaxDiff_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_AOverMaxDiff_vs_p1002->SetLineColor(ci);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetRange(0,93);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_AOverMaxDiff_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AOverMaxDiff_vs_p1002);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_AOverMaxDiff_vs_p_fx1003[15] = {
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
   Double_t S0S12S18_AOverMaxDiff_vs_p_fy1003[15] = {
   -0.001504155,
   0.0007282493,
   0.0001753064,
   0.0004462497,
   0.0006889375,
   0.0004705993,
   0.0004935418,
   0.001216747,
   0.0004345394,
   0.001379392,
   0.0005582774,
   0.0005908809,
   0.0005149915,
   0.0005293413,
   0.0007891567};
   Double_t S0S12S18_AOverMaxDiff_vs_p_fex1003[15] = {
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
   Double_t S0S12S18_AOverMaxDiff_vs_p_fey1003[15] = {
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
   gre = new TGraphErrors(15,S0S12S18_AOverMaxDiff_vs_p_fx1003,S0S12S18_AOverMaxDiff_vs_p_fy1003,S0S12S18_AOverMaxDiff_vs_p_fex1003,S0S12S18_AOverMaxDiff_vs_p_fey1003);
   gre->SetName("S0S12S18_AOverMaxDiff_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AOverMaxDiff_vs_p1003 = new TH1F("Graph_S0S12S18_AOverMaxDiff_vs_p1003","",100,0,3300);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->SetMinimum(-0.001792509);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->SetMaximum(0.001667747);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->SetDirectory(0);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->SetLineColor(ci);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetXaxis()->SetRange(0,97);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AOverMaxDiff_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AOverMaxDiff_vs_p1003);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.11,0.79,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AOverMaxDiff_vs_p","Truth (all decays)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("AOverMaxDiff_vs_p","Truth (track decays)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_AOverMaxDiff_vs_p","Track reco","lpf");
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
   
   TPaveText *pt = new TPaveText(0.4529397,0.94,0.5470603,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("LAB");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
