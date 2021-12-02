void Comp_gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3()
{
//=========Macro generated from canvas: gr_comp/c
//=========  (Fri Jul  2 05:19:13 2021) by ROOT version 6.12/04
   TCanvas *gr_comp = new TCanvas("gr_comp", "c",0,0,800,600);
   gr_comp->SetHighLightColor(2);
   gr_comp->Range(-3.15,-1.375,28.35,2.375);
   gr_comp->SetFillColor(0);
   gr_comp->SetBorderMode(0);
   gr_comp->SetBorderSize(2);
   gr_comp->SetFrameBorderMode(0);
   gr_comp->SetFrameBorderMode(0);
   
   Double_t Run-4_fx1001[23] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23};
   Double_t Run-4_fy1001[23] = {
   -0.3775018,
   1.148504,
   -0.9203161,
   1.146136,
   -0.4307777,
   0.4097943,
   -0.697443,
   -0.6150108,
   0.4413807,
   -0.4576447,
   0.1797437,
   0.628307,
   -0.5444395,
   0.8335329,
   -0.825145,
   0.9074943,
   0.186827,
   -0.9662316,
   0.1487633,
   0.04360515,
   -0.05511206,
   -0.186201,
   0.3988316};
   Double_t Run-4_fex1001[23] = {
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
   Double_t Run-4_fey1001[23] = {
   0.003606182,
   0.003696062,
   0.003717074,
   0.003715124,
   0.003714199,
   0.003722916,
   0.003733515,
   0.003713029,
   0.003700589,
   0.003668315,
   0.003602213,
   0.00346236,
   0.003467726,
   0.003595243,
   0.003655585,
   0.003675175,
   0.003610692,
   0.003501073,
   0.003536888,
   0.00367325,
   0.003722208,
   0.003696476,
   0.003634978};
   TGraphErrors *gre = new TGraphErrors(23,Run-4_fx1001,Run-4_fy1001,Run-4_fex1001,Run-4_fey1001);
   gre->SetName("Run-4");
   gre->SetTitle(";Calo number, n;#LTy_{n+1}#GT #minus #LTy_{n}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,25.2);
   Graph_Graph1001->SetMinimum(-1);
   Graph_Graph1001->SetMaximum(2);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Calo number, n");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LTy_{n+1}#GT #minus #LTy_{n}#GT [mm]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t Run-1b_fx1002[23] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23};
   Double_t Run-1b_fy1002[23] = {
   -0.6143122,
   1.560328,
   -0.7663561,
   1.596093,
   -0.9883604,
   0.5650811,
   -0.9563352,
   -0.7369015,
   0.4625166,
   -0.4254511,
   -0.04010467,
   0.6053522,
   -0.188317,
   0.2565585,
   -0.3502234,
   0.7097373,
   0.3058385,
   -1.262027,
   0.6364629,
   -0.02956429,
   0.634023,
   -1.003321,
   0.4761023};
   Double_t Run-1b_fex1002[23] = {
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
   Double_t Run-1b_fey1002[23] = {
   0.006212393,
   0.006314149,
   0.005828715,
   0.005956982,
   0.005989285,
   0.005885027,
   0.005849123,
   0.006046648,
   0.005996123,
   0.005717551,
   0.00564682,
   0.005446395,
   0.005496287,
   0.005723421,
   0.00580131,
   0.005816483,
   0.005697882,
   0.005492751,
   0.005571659,
   0.005831832,
   0.00593667,
   0.005871151,
   0.005811498};
   gre = new TGraphErrors(23,Run-1b_fx1002,Run-1b_fy1002,Run-1b_fex1002,Run-1b_fey1002);
   gre->SetName("Run-1b");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RunmI1b1002 = new TH1F("Graph_RunmI1b1002","Graph",100,0,25.2);
   Graph_RunmI1b1002->SetMinimum(-1.554477);
   Graph_RunmI1b1002->SetMaximum(1.889007);
   Graph_RunmI1b1002->SetDirectory(0);
   Graph_RunmI1b1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RunmI1b1002->SetLineColor(ci);
   Graph_RunmI1b1002->GetXaxis()->SetLabelFont(42);
   Graph_RunmI1b1002->GetXaxis()->SetLabelSize(0.035);
   Graph_RunmI1b1002->GetXaxis()->SetTitleSize(0.035);
   Graph_RunmI1b1002->GetXaxis()->SetTitleFont(42);
   Graph_RunmI1b1002->GetYaxis()->SetLabelFont(42);
   Graph_RunmI1b1002->GetYaxis()->SetLabelSize(0.035);
   Graph_RunmI1b1002->GetYaxis()->SetTitleSize(0.035);
   Graph_RunmI1b1002->GetYaxis()->SetTitleOffset(0);
   Graph_RunmI1b1002->GetYaxis()->SetTitleFont(42);
   Graph_RunmI1b1002->GetZaxis()->SetLabelFont(42);
   Graph_RunmI1b1002->GetZaxis()->SetLabelSize(0.035);
   Graph_RunmI1b1002->GetZaxis()->SetTitleSize(0.035);
   Graph_RunmI1b1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Run-1b1002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Run-4","Run-4","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Run-1b","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   gr_comp->Modified();
   gr_comp->cd();
   gr_comp->SetSelected(gr_comp);
}
