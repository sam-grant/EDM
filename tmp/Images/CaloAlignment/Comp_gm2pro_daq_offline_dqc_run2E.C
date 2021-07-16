void Comp_gm2pro_daq_offline_dqc_run2E()
{
//=========Macro generated from canvas: gr_comp/c
//=========  (Fri Jul  2 05:21:13 2021) by ROOT version 6.12/04
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
   
   Double_t Run-2e_fx1002[23] = {
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
   Double_t Run-2e_fy1002[23] = {
   -0.2496827,
   1.311869,
   -0.9430394,
   1.089848,
   -0.5837177,
   0.7273463,
   -0.8729204,
   -0.7223939,
   0.4370387,
   -0.2815648,
   -0.2123947,
   0.7832154,
   -0.444367,
   0.8400529,
   -0.831787,
   0.8408281,
   0.2725509,
   -1.163894,
   0.5373958,
   -0.1648332,
   -0.015352,
   -0.2333249,
   0.4911542};
   Double_t Run-2e_fex1002[23] = {
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
   Double_t Run-2e_fey1002[23] = {
   0.01286291,
   0.01268121,
   0.01279654,
   0.0127705,
   0.01281334,
   0.01292701,
   0.01289024,
   0.01329041,
   0.01327024,
   0.01273754,
   0.0125218,
   0.01198992,
   0.0120666,
   0.01251624,
   0.01263549,
   0.01269887,
   0.01248924,
   0.01208846,
   0.01228464,
   0.01284111,
   0.01288053,
   0.01274374,
   0.01257129};
   gre = new TGraphErrors(23,Run-2e_fx1002,Run-2e_fy1002,Run-2e_fex1002,Run-2e_fey1002);
   gre->SetName("Run-2e");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RunmI2e1002 = new TH1F("Graph_RunmI2e1002","Graph",100,0,25.2);
   Graph_RunmI2e1002->SetMinimum(-1.426035);
   Graph_RunmI2e1002->SetMaximum(1.574604);
   Graph_RunmI2e1002->SetDirectory(0);
   Graph_RunmI2e1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RunmI2e1002->SetLineColor(ci);
   Graph_RunmI2e1002->GetXaxis()->SetLabelFont(42);
   Graph_RunmI2e1002->GetXaxis()->SetLabelSize(0.035);
   Graph_RunmI2e1002->GetXaxis()->SetTitleSize(0.035);
   Graph_RunmI2e1002->GetXaxis()->SetTitleFont(42);
   Graph_RunmI2e1002->GetYaxis()->SetLabelFont(42);
   Graph_RunmI2e1002->GetYaxis()->SetLabelSize(0.035);
   Graph_RunmI2e1002->GetYaxis()->SetTitleSize(0.035);
   Graph_RunmI2e1002->GetYaxis()->SetTitleOffset(0);
   Graph_RunmI2e1002->GetYaxis()->SetTitleFont(42);
   Graph_RunmI2e1002->GetZaxis()->SetLabelFont(42);
   Graph_RunmI2e1002->GetZaxis()->SetLabelSize(0.035);
   Graph_RunmI2e1002->GetZaxis()->SetTitleSize(0.035);
   Graph_RunmI2e1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Run-2e1002);
   
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
   entry=leg->AddEntry("Run-2e","Run-2e","lpf");
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
