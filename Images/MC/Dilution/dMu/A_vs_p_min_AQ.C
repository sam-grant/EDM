void A_vs_p_min_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:43:40 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-300.3,-0.059375,3318.7,0.284375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1005[15] = {
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
   Double_t A_vs_p_fy1005[15] = {
   0.1992729,
   0.2048568,
   0.2138009,
   0.2220977,
   0.2207812,
   0.2137848,
   0.2057431,
   0.1925967,
   0.1796515,
   0.1659169,
   0.1470428,
   0.1270463,
   0.1020451,
   0.08139041,
   0.04016593};
   Double_t A_vs_p_fex1005[15] = {
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
   Double_t A_vs_p_fey1005[15] = {
   0.002987834,
   0.002970663,
   0.002928228,
   0.002856899,
   0.002764086,
   0.002701575,
   0.002676715,
   0.002687599,
   0.002739465,
   0.002838987,
   0.002992041,
   0.003222612,
   0.003575712,
   0.004176715,
   0.005416875};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1005,A_vs_p_fy1005,A_vs_p_fex1005,A_vs_p_fey1005);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1005 = new TH1F("Graph_A_vs_p1005","",100,0,3080);
   Graph_A_vs_p1005->SetMinimum(-0.025);
   Graph_A_vs_p1005->SetMaximum(0.25);
   Graph_A_vs_p1005->SetDirectory(0);
   Graph_A_vs_p1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1005->SetLineColor(ci);
   Graph_A_vs_p1005->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1005->GetXaxis()->SetRange(3,96);
   Graph_A_vs_p1005->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1005->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1005->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1005->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1005->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1005->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1005);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1006[15] = {
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
   Double_t S0S12S18_A_vs_p_fy1006[15] = {
   0.1530641,
   0.1536256,
   0.1554924,
   0.1708641,
   0.1642295,
   0.1467522,
   0.1516034,
   0.1470205,
   0.1335394,
   0.1291265,
   0.1181647,
   0.1062946,
   0.09506827,
   0.06996007,
   0.0300586};
   Double_t S0S12S18_A_vs_p_fex1006[15] = {
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
   Double_t S0S12S18_A_vs_p_fey1006[15] = {
   0.0103934,
   0.01039331,
   0.01036469,
   0.01020615,
   0.01009415,
   0.0101186,
   0.01029404,
   0.01064425,
   0.0112143,
   0.01205959,
   0.01326371,
   0.01494486,
   0.01736332,
   0.02124101,
   0.03342033};
   gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1006,S0S12S18_A_vs_p_fy1006,S0S12S18_A_vs_p_fex1006,S0S12S18_A_vs_p_fey1006);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1006 = new TH1F("Graph_S0S12S18_A_vs_p1006","S0S12S18",100,0,3080);
   Graph_S0S12S18_A_vs_p1006->SetMinimum(-0.02180494);
   Graph_S0S12S18_A_vs_p1006->SetMaximum(0.1995135);
   Graph_S0S12S18_A_vs_p1006->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1006->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1006->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_A_vs_p1006->GetXaxis()->SetRange(3,96);
   Graph_S0S12S18_A_vs_p1006->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1006->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1006->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1006->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1006->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1006->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1006->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1006->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1006->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1006->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1006->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1006->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1006);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","Reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
