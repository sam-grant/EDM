void A_vs_p_min_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May 15 17:54:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-292,-0.059375,3308,0.284375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_A_vs_p_fx1005[15] = {
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
   Double_t S0S12S18_A_vs_p_fy1005[15] = {
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
   Double_t S0S12S18_A_vs_p_fex1005[15] = {
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
   Double_t S0S12S18_A_vs_p_fey1005[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1005,S0S12S18_A_vs_p_fy1005,S0S12S18_A_vs_p_fex1005,S0S12S18_A_vs_p_fey1005);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1005 = new TH1F("Graph_S0S12S18_A_vs_p1005","",100,-400,3200);
   Graph_S0S12S18_A_vs_p1005->SetMinimum(-0.025);
   Graph_S0S12S18_A_vs_p1005->SetMaximum(0.25);
   Graph_S0S12S18_A_vs_p1005->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1005->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetRange(14,93);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1005);
   
   gre->Draw("ap");
   
   Double_t A_vs_p_fx1006[15] = {
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
   Double_t A_vs_p_fy1006[15] = {
   0.1992737,
   0.2048576,
   0.2138018,
   0.2220986,
   0.2207802,
   0.2137843,
   0.2057435,
   0.192597,
   0.1796529,
   0.165916,
   0.1470432,
   0.12705,
   0.1020448,
   0.0813866,
   0.04017675};
   Double_t A_vs_p_fex1006[15] = {
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
   Double_t A_vs_p_fey1006[15] = {
   0.002987834,
   0.002970662,
   0.002928228,
   0.002856898,
   0.002764086,
   0.002701575,
   0.002676715,
   0.002687599,
   0.002739465,
   0.002838987,
   0.00299204,
   0.003222612,
   0.003575711,
   0.004176714,
   0.005416881};
   gre = new TGraphErrors(15,A_vs_p_fx1006,A_vs_p_fy1006,A_vs_p_fex1006,A_vs_p_fey1006);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1006 = new TH1F("Graph_A_vs_p1006","",100,-400,3200);
   Graph_A_vs_p1006->SetMinimum(0.0157403);
   Graph_A_vs_p1006->SetMaximum(0.2439751);
   Graph_A_vs_p1006->SetDirectory(0);
   Graph_A_vs_p1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1006->SetLineColor(ci);
   Graph_A_vs_p1006->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1006->GetXaxis()->SetRange(8,93);
   Graph_A_vs_p1006->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1006->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1006->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1006->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1006->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1006->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1006->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1006->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1006->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1006->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1006->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1006->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1006);
   
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
