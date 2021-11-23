void S12S18_AverageCorrectedVerticalOffsetVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:59:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(496.872,-0.019375,2726.427,0.024375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_c_vs_p_fx1001[22] = {
   367.2399,
   457.0435,
   570.1011,
   694.7916,
   815.8541,
   938.5214,
   1062.733,
   1188.227,
   1312.688,
   1435.772,
   1561.976,
   1685.084,
   1810.538,
   1935.021,
   2060.267,
   2184.908,
   2309.091,
   2433.063,
   2559.665,
   2678.604,
   2781.208,
   2885.708};
   Double_t S12S18_c_vs_p_fy1001[22] = {
   0.7816696,
   0.007830424,
   0.005742383,
   0.00571158,
   0.004394749,
   0.003582422,
   0.002858446,
   0.0005749442,
   -0.00126542,
   0.001026229,
   -0.001600005,
   3.62915e-05,
   0.0002929062,
   0.002533544,
   0.0001873547,
   0.0005805441,
   0.003671905,
   0.004156959,
   -0.001099602,
   -0.0001977935,
   0.01896761,
   -0.575354};
   Double_t S12S18_c_vs_p_fex1001[22] = {
   0.1103772,
   0.05519008,
   0.03677606,
   0.02532856,
   0.02042765,
   0.01846339,
   0.01750614,
   0.01694737,
   0.01725058,
   0.01734431,
   0.01867097,
   0.01969749,
   0.02225594,
   0.02439127,
   0.02792707,
   0.03086148,
   0.03575833,
   0.04314539,
   0.05137337,
   0.05886294,
   0.1209443,
   0.6931524};
   Double_t S12S18_c_vs_p_fey1001[22] = {
   0.6315626,
   0.05716739,
   0.02774831,
   0.01680685,
   0.01164547,
   0.009586333,
   0.008433626,
   0.007615894,
   0.007177874,
   0.006801976,
   0.006816019,
   0.006615307,
   0.00689776,
   0.00698257,
   0.007356072,
   0.007515267,
   0.007960382,
   0.00871772,
   0.009398378,
   0.01045111,
   0.02668734,
   0.2436922};
   TGraphErrors *gre = new TGraphErrors(22,S12S18_c_vs_p_fx1001,S12S18_c_vs_p_fy1001,S12S18_c_vs_p_fex1001,S12S18_c_vs_p_fey1001);
   gre->SetName("S12S18_c_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p1001 = new TH1F("Graph_S12S18_c_vs_p1001","S12S18",100,115.2023,3138.328);
   Graph_S12S18_c_vs_p1001->SetMinimum(-0.015);
   Graph_S12S18_c_vs_p1001->SetMaximum(0.02);
   Graph_S12S18_c_vs_p1001->SetDirectory(0);
   Graph_S12S18_c_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p1001->SetLineColor(ci);
   Graph_S12S18_c_vs_p1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_c_vs_p1001->GetXaxis()->SetRange(21,79);
   Graph_S12S18_c_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1001->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_S12S18_c_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p1001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   TLine *line = new TLine(719.8275,0,2503.472,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t S12S18_c_vs_p_fx1002[22] = {
   367.2399,
   457.0435,
   570.1011,
   694.7916,
   815.8541,
   938.5214,
   1062.733,
   1188.227,
   1312.688,
   1435.772,
   1561.976,
   1685.084,
   1810.538,
   1935.021,
   2060.267,
   2184.908,
   2309.091,
   2433.063,
   2559.665,
   2678.604,
   2781.208,
   2885.708};
   Double_t S12S18_c_vs_p_fy1002[22] = {
   0.7816696,
   0.007830424,
   0.005742383,
   0.00571158,
   0.004394749,
   0.003582422,
   0.002858446,
   0.0005749442,
   -0.00126542,
   0.001026229,
   -0.001600005,
   3.62915e-05,
   0.0002929062,
   0.002533544,
   0.0001873547,
   0.0005805441,
   0.003671905,
   0.004156959,
   -0.001099602,
   -0.0001977935,
   0.01896761,
   -0.575354};
   Double_t S12S18_c_vs_p_fex1002[22] = {
   0.1103772,
   0.05519008,
   0.03677606,
   0.02532856,
   0.02042765,
   0.01846339,
   0.01750614,
   0.01694737,
   0.01725058,
   0.01734431,
   0.01867097,
   0.01969749,
   0.02225594,
   0.02439127,
   0.02792707,
   0.03086148,
   0.03575833,
   0.04314539,
   0.05137337,
   0.05886294,
   0.1209443,
   0.6931524};
   Double_t S12S18_c_vs_p_fey1002[22] = {
   0.6315626,
   0.05716739,
   0.02774831,
   0.01680685,
   0.01164547,
   0.009586333,
   0.008433626,
   0.007615894,
   0.007177874,
   0.006801976,
   0.006816019,
   0.006615307,
   0.00689776,
   0.00698257,
   0.007356072,
   0.007515267,
   0.007960382,
   0.00871772,
   0.009398378,
   0.01045111,
   0.02668734,
   0.2436922};
   gre = new TGraphErrors(22,S12S18_c_vs_p_fx1002,S12S18_c_vs_p_fy1002,S12S18_c_vs_p_fex1002,S12S18_c_vs_p_fey1002);
   gre->SetName("S12S18_c_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12S18_c_vs_p10011002 = new TH1F("Graph_Graph_S12S18_c_vs_p10011002","S12S18",100,115.2023,3138.328);
   Graph_Graph_S12S18_c_vs_p10011002->SetMinimum(-0.015);
   Graph_Graph_S12S18_c_vs_p10011002->SetMaximum(0.02);
   Graph_Graph_S12S18_c_vs_p10011002->SetDirectory(0);
   Graph_Graph_S12S18_c_vs_p10011002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S12S18_c_vs_p10011002->SetLineColor(ci);
   Graph_Graph_S12S18_c_vs_p10011002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12S18_c_vs_p10011002->GetXaxis()->SetRange(21,79);
   Graph_Graph_S12S18_c_vs_p10011002->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12S18_c_vs_p10011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_c_vs_p10011002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_c_vs_p10011002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12S18_c_vs_p10011002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_c_vs_p10011002->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_S12S18_c_vs_p10011002->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12S18_c_vs_p10011002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12S18_c_vs_p10011002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_c_vs_p10011002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_c_vs_p10011002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12S18_c_vs_p10011002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_c_vs_p10011002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_c_vs_p10011002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12S18_c_vs_p10011002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12S18_c_vs_p10011002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_c_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
