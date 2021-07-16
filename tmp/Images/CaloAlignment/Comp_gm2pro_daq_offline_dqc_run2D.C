void Comp_gm2pro_daq_offline_dqc_run2D()
{
//=========Macro generated from canvas: gr_comp/c
//=========  (Fri Jul  2 05:20:53 2021) by ROOT version 6.12/04
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
   
   Double_t Run-2d_fx1002[23] = {
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
   Double_t Run-2d_fy1002[23] = {
   -0.2057501,
   1.295112,
   -0.8696984,
   1.249288,
   -0.7786487,
   0.7259865,
   -1.594298,
   -0.02883448,
   0.4315868,
   -0.276179,
   -0.2275064,
   0.6744176,
   -0.347741,
   0.8407847,
   -0.7981883,
   0.811467,
   0.2821646,
   -1.223331,
   0.5932715,
   -0.1566459,
   -0.1995334,
   -0.06240693,
   0.4835942};
   Double_t Run-2d_fex1002[23] = {
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
   Double_t Run-2d_fey1002[23] = {
   0.01062716,
   0.01048679,
   0.01054841,
   0.01058866,
   0.01068246,
   0.0106828,
   0.01064196,
   0.01094458,
   0.01090799,
   0.01049599,
   0.01039528,
   0.009995942,
   0.01004546,
   0.01039778,
   0.01046238,
   0.01051862,
   0.0103504,
   0.01005532,
   0.01021982,
   0.01066476,
   0.01090647,
   0.01079463,
   0.01041491};
   gre = new TGraphErrors(23,Run-2d_fx1002,Run-2d_fy1002,Run-2d_fex1002,Run-2d_fey1002);
   gre->SetName("Run-2d");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RunmI2d1002 = new TH1F("Graph_RunmI2d1002","Graph",100,0,25.2);
   Graph_RunmI2d1002->SetMinimum(-1.895993);
   Graph_RunmI2d1002->SetMaximum(1.596652);
   Graph_RunmI2d1002->SetDirectory(0);
   Graph_RunmI2d1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RunmI2d1002->SetLineColor(ci);
   Graph_RunmI2d1002->GetXaxis()->SetLabelFont(42);
   Graph_RunmI2d1002->GetXaxis()->SetLabelSize(0.035);
   Graph_RunmI2d1002->GetXaxis()->SetTitleSize(0.035);
   Graph_RunmI2d1002->GetXaxis()->SetTitleFont(42);
   Graph_RunmI2d1002->GetYaxis()->SetLabelFont(42);
   Graph_RunmI2d1002->GetYaxis()->SetLabelSize(0.035);
   Graph_RunmI2d1002->GetYaxis()->SetTitleSize(0.035);
   Graph_RunmI2d1002->GetYaxis()->SetTitleOffset(0);
   Graph_RunmI2d1002->GetYaxis()->SetTitleFont(42);
   Graph_RunmI2d1002->GetZaxis()->SetLabelFont(42);
   Graph_RunmI2d1002->GetZaxis()->SetLabelSize(0.035);
   Graph_RunmI2d1002->GetZaxis()->SetTitleSize(0.035);
   Graph_RunmI2d1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Run-2d1002);
   
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
   entry=leg->AddEntry("Run-2d","Run-2d","lpf");
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
