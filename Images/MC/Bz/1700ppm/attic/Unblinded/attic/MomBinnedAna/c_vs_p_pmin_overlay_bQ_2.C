void c_vs_p_pmin_overlay_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-2.5,2600,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_pmin_fx1417[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0_c_vs_p_pmin_fy1417[9] = {
   -0.1406063,
   -0.1312883,
   -0.1243356,
   -0.09743508,
   -0.09960941,
   -0.06457695,
   -0.02859579,
   0.01203978,
   -0.02721495};
   Double_t S0_c_vs_p_pmin_fex1417[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_pmin_fey1417[9] = {
   0.008440639,
   0.01190026,
   0.01204322,
   0.01250235,
   0.01330542,
   0.01458739,
   0.01675563,
   0.02060555,
   0.02933989};
   TGraphErrors *gre = new TGraphErrors(9,S0_c_vs_p_pmin_fx1417,S0_c_vs_p_pmin_fy1417,S0_c_vs_p_pmin_fex1417,S0_c_vs_p_pmin_fey1417);
   gre->SetName("S0_c_vs_p_pmin");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_pmin1417 = new TH1F("Graph_S0_c_vs_p_pmin1417","",100,440,2360);
   Graph_S0_c_vs_p_pmin1417->SetMinimum(-2);
   Graph_S0_c_vs_p_pmin1417->SetMaximum(2);
   Graph_S0_c_vs_p_pmin1417->SetDirectory(0);
   Graph_S0_c_vs_p_pmin1417->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_pmin1417->SetLineColor(ci);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_pmin1417->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1417->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_pmin1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_pmin1417);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_pmin_fx1418[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12_c_vs_p_pmin_fy1418[9] = {
   -0.4093672,
   -0.3916378,
   -0.3424788,
   -0.3017973,
   -0.238036,
   -0.187728,
   -0.1479781,
   -0.1343917,
   -0.1453984};
   Double_t S12_c_vs_p_pmin_fex1418[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_pmin_fey1418[9] = {
   0.008539696,
   0.01205415,
   0.01223303,
   0.01274144,
   0.01365521,
   0.01511244,
   0.01757099,
   0.02194258,
   0.03183698};
   gre = new TGraphErrors(9,S12_c_vs_p_pmin_fx1418,S12_c_vs_p_pmin_fy1418,S12_c_vs_p_pmin_fex1418,S12_c_vs_p_pmin_fey1418);
   gre->SetName("S12_c_vs_p_pmin");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_pmin1418 = new TH1F("Graph_S12_c_vs_p_pmin1418","S12",100,440,2360);
   Graph_S12_c_vs_p_pmin1418->SetMinimum(-0.4484527);
   Graph_S12_c_vs_p_pmin1418->SetMaximum(-0.08190329);
   Graph_S12_c_vs_p_pmin1418->SetDirectory(0);
   Graph_S12_c_vs_p_pmin1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_pmin1418->SetLineColor(ci);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_pmin1418->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1418->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_pmin1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_pmin1418);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_pmin_fx1419[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S18_c_vs_p_pmin_fy1419[9] = {
   -0.3403518,
   -0.3289484,
   -0.2891035,
   -0.2661906,
   -0.2348223,
   -0.1948893,
   -0.1735535,
   -0.1278126,
   -0.1249778};
   Double_t S18_c_vs_p_pmin_fex1419[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_pmin_fey1419[9] = {
   0.00860435,
   0.01215053,
   0.01236205,
   0.01292418,
   0.01387525,
   0.0154199,
   0.01794285,
   0.0223948,
   0.03286827};
   gre = new TGraphErrors(9,S18_c_vs_p_pmin_fx1419,S18_c_vs_p_pmin_fy1419,S18_c_vs_p_pmin_fex1419,S18_c_vs_p_pmin_fey1419);
   gre->SetName("S18_c_vs_p_pmin");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_pmin1419 = new TH1F("Graph_S18_c_vs_p_pmin1419","S18",100,440,2360);
   Graph_S18_c_vs_p_pmin1419->SetMinimum(-0.3746408);
   Graph_S18_c_vs_p_pmin1419->SetMaximum(-0.06642489);
   Graph_S18_c_vs_p_pmin1419->SetDirectory(0);
   Graph_S18_c_vs_p_pmin1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_pmin1419->SetLineColor(ci);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_pmin1419->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1419->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_pmin1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_pmin1419);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_pmin_fx1420[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12S18_c_vs_p_pmin_fy1420[9] = {
   -0.3750568,
   -0.3604708,
   -0.315972,
   -0.2842012,
   -0.236475,
   -0.1914077,
   -0.1604189,
   -0.1316402,
   -0.1340394};
   Double_t S12S18_c_vs_p_pmin_fex1420[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_c_vs_p_pmin_fey1420[9] = {
   0.006061489,
   0.008557888,
   0.008695854,
   0.009074115,
   0.009733366,
   0.01079455,
   0.01255657,
   0.01567861,
   0.02289171};
   gre = new TGraphErrors(9,S12S18_c_vs_p_pmin_fx1420,S12S18_c_vs_p_pmin_fy1420,S12S18_c_vs_p_pmin_fex1420,S12S18_c_vs_p_pmin_fey1420);
   gre->SetName("S12S18_c_vs_p_pmin");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_pmin1420 = new TH1F("Graph_S12S18_c_vs_p_pmin1420","S12S18",100,440,2360);
   Graph_S12S18_c_vs_p_pmin1420->SetMinimum(-0.4081153);
   Graph_S12S18_c_vs_p_pmin1420->SetMaximum(-0.08415064);
   Graph_S12S18_c_vs_p_pmin1420->SetDirectory(0);
   Graph_S12S18_c_vs_p_pmin1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_pmin1420->SetLineColor(ci);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_pmin1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_pmin1420);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_pmin_fx1421[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0S12S18_c_vs_p_pmin_fy1421[9] = {
   -0.2954084,
   -0.282573,
   -0.2505676,
   -0.2200535,
   -0.1890588,
   -0.1468705,
   -0.1133188,
   -0.07902666,
   -0.09474605};
   Double_t S0S12S18_c_vs_p_pmin_fex1421[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_c_vs_p_pmin_fey1421[9] = {
   0.004923752,
   0.006948309,
   0.007050561,
   0.007344269,
   0.007856433,
   0.008678123,
   0.01004986,
   0.01248072,
   0.01805986};
   gre = new TGraphErrors(9,S0S12S18_c_vs_p_pmin_fx1421,S0S12S18_c_vs_p_pmin_fy1421,S0S12S18_c_vs_p_pmin_fex1421,S0S12S18_c_vs_p_pmin_fey1421);
   gre->SetName("S0S12S18_c_vs_p_pmin");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_pmin1421 = new TH1F("Graph_S0S12S18_c_vs_p_pmin1421","S0S12S18",100,440,2360);
   Graph_S0S12S18_c_vs_p_pmin1421->SetMinimum(-0.3237108);
   Graph_S0S12S18_c_vs_p_pmin1421->SetMaximum(-0.04316731);
   Graph_S0S12S18_c_vs_p_pmin1421->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_pmin1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_pmin1421->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_pmin1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_pmin1421);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_pmin","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_pmin","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_pmin","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p_pmin","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p_pmin","S0S12S18","lpf");
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
