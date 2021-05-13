void A_vs_p_simple_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-2.5,3650,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1422[15] = {
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
   Double_t S0_A_vs_p_fy1422[15] = {
   0.1326831,
   0.1332197,
   0.1405908,
   0.1666104,
   0.1738679,
   0.156291,
   0.1603658,
   0.1780813,
   0.1876973,
   0.1767209,
   0.1550914,
   0.136559,
   0.1066648,
   0.1006997,
   0.07128144};
   Double_t S0_A_vs_p_fex1422[15] = {
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
   Double_t S0_A_vs_p_fey1422[15] = {
   0.01801158,
   0.01801194,
   0.01796328,
   0.01767869,
   0.01747349,
   0.01752249,
   0.01783322,
   0.01846554,
   0.01946193,
   0.02099303,
   0.0232297,
   0.02647529,
   0.03148604,
   0.04014371,
   0.06250171};
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1422,S0_A_vs_p_fy1422,S0_A_vs_p_fex1422,S0_A_vs_p_fey1422);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1422 = new TH1F("Graph_S0_A_vs_p1422","",100,-400,3200);
   Graph_S0_A_vs_p1422->SetMinimum(-2);
   Graph_S0_A_vs_p1422->SetMaximum(2);
   Graph_S0_A_vs_p1422->SetDirectory(0);
   Graph_S0_A_vs_p1422->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1422->SetLineColor(ci);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1422->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1422->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_A_vs_p1422->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1422->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1422->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1422->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1422->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1422);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1423[15] = {
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
   Double_t S12_A_vs_p_fy1423[15] = {
   0.09690662,
   0.09709932,
   0.1088277,
   0.1363019,
   0.1712136,
   0.1553722,
   0.1548112,
   0.1375915,
   0.1143614,
   0.1292392,
   0.1209015,
   0.1182541,
   0.1067347,
   0.04103616,
   -0.1126406};
   Double_t S12_A_vs_p_fex1423[15] = {
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
   Double_t S12_A_vs_p_fey1423[15] = {
   0.0182449,
   0.01824466,
   0.01819614,
   0.0179367,
   0.01777162,
   0.01786923,
   0.01826333,
   0.01901393,
   0.02022622,
   0.02208906,
   0.02475517,
   0.0286045,
   0.03411236,
   0.04293159,
   0.07177156};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1423,S12_A_vs_p_fy1423,S12_A_vs_p_fex1423,S12_A_vs_p_fey1423);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1423 = new TH1F("Graph_S12_A_vs_p1423","S12",100,-400,3200);
   Graph_S12_A_vs_p1423->SetMinimum(-0.221752);
   Graph_S12_A_vs_p1423->SetMaximum(0.226325);
   Graph_S12_A_vs_p1423->SetDirectory(0);
   Graph_S12_A_vs_p1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1423->SetLineColor(ci);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1423->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1423->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_A_vs_p1423->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1423->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1423->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1423->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1423->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1423);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1424[15] = {
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
   Double_t S18_A_vs_p_fy1424[15] = {
   0.1011735,
   0.1010917,
   0.1093628,
   0.1265002,
   0.1499298,
   0.1385852,
   0.1476078,
   0.1495192,
   0.146297,
   0.1135982,
   0.1023283,
   0.1336023,
   0.08402839,
   0.03101734,
   -0.008783503};
   Double_t S18_A_vs_p_fex1424[15] = {
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
   Double_t S18_A_vs_p_fey1424[15] = {
   0.01837525,
   0.01837515,
   0.01832473,
   0.0180734,
   0.01794544,
   0.01809446,
   0.01854754,
   0.0193761,
   0.02069729,
   0.02263998,
   0.0254624,
   0.02942176,
   0.03479246,
   0.0440691,
   0.07225522};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1424,S18_A_vs_p_fy1424,S18_A_vs_p_fex1424,S18_A_vs_p_fey1424);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1424 = new TH1F("Graph_S18_A_vs_p1424","S18",100,-400,3200);
   Graph_S18_A_vs_p1424->SetMinimum(-0.1060321);
   Graph_S18_A_vs_p1424->SetMaximum(0.1938886);
   Graph_S18_A_vs_p1424->SetDirectory(0);
   Graph_S18_A_vs_p1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1424->SetLineColor(ci);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1424->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1424->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_A_vs_p1424->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1424->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1424->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1424->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1424->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1424);
   
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
