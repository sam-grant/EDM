void BrVsRun_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 14 06:17:28 2022) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(24561,-4,24651,6);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t Graph0_fy1003[29] = {
   11.46302,
   10.97737,
   10.79217,
   10.5418,
   10.48421,
   10.48896,
   10.28753,
   10.06977,
   10.12737,
   10.05118,
   10.1042,
   10.01864,
   9.743307,
   9.755692,
   9.660474,
   9.403697,
   9.456113,
   9.455154,
   9.556997,
   9.661459,
   10.2824,
   10.10805,
   10.35865,
   11.64344,
   10.74347,
   11.27526,
   11.40664,
   11.57009,
   11.6507};
   Double_t Graph0_fex1003[29] = {
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
   Double_t Graph0_fey1003[29] = {
   3.138724,
   3.128264,
   3.126182,
   3.124323,
   3.122743,
   3.122828,
   3.120379,
   3.117803,
   3.118502,
   3.117485,
   3.118283,
   3.117152,
   3.113691,
   3.114556,
   3.112618,
   3.109953,
   3.109785,
   3.10968,
   3.111097,
   3.112564,
   3.120418,
   3.118565,
   3.121567,
   3.219184,
   3.126345,
   3.13115,
   3.13239,
   3.133977,
   3.134789};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTB_{r}#GT [ppm]");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3004);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,24570,24642);
   Graph_Graph1003->SetMinimum(-3);
   Graph_Graph1003->SetMaximum(5);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Run number");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("a3");
   
   Double_t Graph1_fx1004[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t Graph1_fy1004[29] = {
   11.46302,
   10.97737,
   10.79217,
   10.5418,
   10.48421,
   10.48896,
   10.28753,
   10.06977,
   10.12737,
   10.05118,
   10.1042,
   10.01864,
   9.743307,
   9.755692,
   9.660474,
   9.403697,
   9.456113,
   9.455154,
   9.556997,
   9.661459,
   10.2824,
   10.10805,
   10.35865,
   11.64344,
   10.74347,
   11.27526,
   11.40664,
   11.57009,
   11.6507};
   Double_t Graph1_fex1004[29] = {
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
   Double_t Graph1_fey1004[29] = {
   0.2091136,
   0.07758096,
   0.07260165,
   0.1069849,
   0.07199396,
   0.07339265,
   0.0684708,
   0.07138253,
   0.07096627,
   0.06708326,
   0.07397507,
   0.07058872,
   0.07380912,
   0.1010796,
   0.07498616,
   0.1071461,
   0.07307302,
   0.06863992,
   0.06925479,
   0.07187498,
   0.07320239,
   0.08404744,
   0.08399193,
   0.7632225,
   0.09976179,
   0.07052701,
   0.06798435,
   0.06893559,
   0.07154047};
   gre = new TGraphErrors(29,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3004);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,24570,24642);
   Graph_Graph1004->SetMinimum(8.98554);
   Graph_Graph1004->SetMaximum(12.71767);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p3 ");
   
   TLegend *leg = new TLegend(0.15,0.79,0.65,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph1","Uncorrelated errors","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Correlated errors","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);
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
