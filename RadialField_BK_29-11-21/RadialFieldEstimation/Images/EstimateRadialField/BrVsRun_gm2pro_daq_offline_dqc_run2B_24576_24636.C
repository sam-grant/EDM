void BrVsRun_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 13 02:55:06 2022) by ROOT version 6.12/04
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
   12.52961,
   12.00042,
   11.79861,
   11.52579,
   11.46304,
   11.46822,
   11.24873,
   11.01145,
   11.07421,
   10.99119,
   11.04897,
   10.95573,
   10.65572,
   10.66921,
   10.56546,
   10.28566,
   10.34277,
   10.34173,
   10.4527,
   10.56653,
   11.24314,
   11.05316,
   11.32623,
   12.7262,
   11.74555,
   12.32501,
   12.46817,
   12.64627,
   12.73412};
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
   3.442902,
   3.430194,
   3.427454,
   3.424818,
   3.42296,
   3.423063,
   3.419931,
   3.416644,
   3.417531,
   3.416258,
   3.417241,
   3.415825,
   3.411492,
   3.41246,
   3.41016,
   3.406781,
   3.406691,
   3.406574,
   3.408306,
   3.410103,
   3.419961,
   3.417557,
   3.421386,
   3.531038,
   3.427511,
   3.43413,
   3.435844,
   3.438035,
   3.439151};
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
   12.52961,
   12.00042,
   11.79861,
   11.52579,
   11.46304,
   11.46822,
   11.24873,
   11.01145,
   11.07421,
   10.99119,
   11.04897,
   10.95573,
   10.65572,
   10.66921,
   10.56546,
   10.28566,
   10.34277,
   10.34173,
   10.4527,
   10.56653,
   11.24314,
   11.05316,
   11.32623,
   12.7262,
   11.74555,
   12.32501,
   12.46817,
   12.64627,
   12.73412};
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
   0.2278615,
   0.0845364,
   0.07911068,
   0.1165765,
   0.07844851,
   0.0799726,
   0.07460948,
   0.07778225,
   0.07732868,
   0.07309754,
   0.08060723,
   0.07691728,
   0.0804264,
   0.1101418,
   0.08170897,
   0.1167522,
   0.07962431,
   0.07479376,
   0.07546375,
   0.07831886,
   0.07976528,
   0.09158263,
   0.09152214,
   0.8316484,
   0.1087058,
   0.07685004,
   0.07407942,
   0.07511594,
   0.07795436};
   gre = new TGraphErrors(29,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3004);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,24570,24642);
   Graph_Graph1004->SetMinimum(9.830013);
   Graph_Graph1004->SetMaximum(13.89674);
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
