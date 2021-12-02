void Comp_Run5_Nearline()
{
//=========Macro generated from canvas: gr_comp/c
//=========  (Tue Nov 16 10:42:06 2021) by ROOT version 6.12/04
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
   
   Double_t Run-5_fx1002[23] = {
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
   Double_t Run-5_fy1002[23] = {
   -0.2241669,
   1.158909,
   -0.9098312,
   0.8078262,
   -0.3236632,
   0.4773674,
   -0.6991251,
   -0.6355902,
   0.4193476,
   -0.2340982,
   -0.1684264,
   0.6313872,
   -0.3462897,
   0.8039022,
   -0.8539301,
   0.9660784,
   0.05414802,
   -1.183655,
   0.6194848,
   -0.06556572,
   -0.1006149,
   -0.2133386,
   0.3738177};
   Double_t Run-5_fex1002[23] = {
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
   Double_t Run-5_fey1002[23] = {
   0.02763704,
   0.02805077,
   0.02786197,
   0.02779629,
   0.02786925,
   0.02774589,
   0.02777379,
   0.02775634,
   0.02757294,
   0.02757962,
   0.02713164,
   0.02573727,
   0.0259196,
   0.02696853,
   0.02744581,
   0.02765859,
   0.02708797,
   0.02644506,
   0.02681031,
   0.02763994,
   0.0278871,
   0.0277272,
   0.02743928};
   gre = new TGraphErrors(23,Run-5_fx1002,Run-5_fy1002,Run-5_fex1002,Run-5_fey1002);
   gre->SetName("Run-5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RunmI51002 = new TH1F("Graph_RunmI51002","Graph",100,0,25.2);
   Graph_RunmI51002->SetMinimum(-1.449806);
   Graph_RunmI51002->SetMaximum(1.426665);
   Graph_RunmI51002->SetDirectory(0);
   Graph_RunmI51002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RunmI51002->SetLineColor(ci);
   Graph_RunmI51002->GetXaxis()->SetLabelFont(42);
   Graph_RunmI51002->GetXaxis()->SetLabelSize(0.035);
   Graph_RunmI51002->GetXaxis()->SetTitleSize(0.035);
   Graph_RunmI51002->GetXaxis()->SetTitleFont(42);
   Graph_RunmI51002->GetYaxis()->SetLabelFont(42);
   Graph_RunmI51002->GetYaxis()->SetLabelSize(0.035);
   Graph_RunmI51002->GetYaxis()->SetTitleSize(0.035);
   Graph_RunmI51002->GetYaxis()->SetTitleOffset(0);
   Graph_RunmI51002->GetYaxis()->SetTitleFont(42);
   Graph_RunmI51002->GetZaxis()->SetLabelFont(42);
   Graph_RunmI51002->GetZaxis()->SetLabelSize(0.035);
   Graph_RunmI51002->GetZaxis()->SetTitleSize(0.035);
   Graph_RunmI51002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Run-51002);
   
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
   entry=leg->AddEntry("Run-5","Run-5","lpf");
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
