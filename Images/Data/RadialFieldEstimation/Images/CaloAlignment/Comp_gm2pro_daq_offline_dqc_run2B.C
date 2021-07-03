void Comp_gm2pro_daq_offline_dqc_run2B()
{
//=========Macro generated from canvas: gr_comp/c
//=========  (Fri May 28 14:06:33 2021) by ROOT version 6.12/04
   TCanvas *gr_comp = new TCanvas("gr_comp", "c",0,0,800,600);
   gr_comp->SetHighLightColor(2);
   gr_comp->Range(-3.275,-1.375,29.475,2.375);
   gr_comp->SetFillColor(0);
   gr_comp->SetBorderMode(0);
   gr_comp->SetBorderSize(2);
   gr_comp->SetFrameBorderMode(0);
   gr_comp->SetFrameBorderMode(0);
   
   Double_t Run-4_fx1001[23] = {
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
   23,
   24};
   Double_t Run-4_fy1001[23] = {
   -0.377654,
   0.7715347,
   -0.1488592,
   0.9972225,
   0.5664609,
   0.9763969,
   0.2786522,
   -0.3363587,
   0.1050221,
   -0.3526227,
   -0.172879,
   0.455428,
   -0.08901151,
   0.7445214,
   -0.08062357,
   0.8270818,
   1.013909,
   0.04767717,
   0.1964405,
   0.2400456,
   0.1849336,
   -0.001267469,
   0.3975642};
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
   0.003605843,
   0.003640453,
   0.003627373,
   0.003638436,
   0.003626414,
   0.003647339,
   0.003637308,
   0.003626705,
   0.003624608,
   0.003593768,
   0.003557695,
   0.003453573,
   0.003562917,
   0.003581594,
   0.003623798,
   0.003602393,
   0.003544762,
   0.003492513,
   0.00358014,
   0.003630543,
   0.003630353,
   0.003604157,
   0.003567715};
   TGraphErrors *gre = new TGraphErrors(23,Run-4_fx1001,Run-4_fy1001,Run-4_fex1001,Run-4_fey1001);
   gre->SetName("Run-4");
   gre->SetTitle(";Calo number;#LTy_{n}#GT #minus #LTy_{1}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,26.2);
   Graph_Graph1001->SetMinimum(-1);
   Graph_Graph1001->SetMaximum(2);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Calo number");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LTy_{n}#GT #minus #LTy_{1}#GT [mm]");
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
   
   Double_t Run-2b_fx1002[23] = {
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
   23,
   24};
   Double_t Run-2b_fy1002[23] = {
   -0.2065775,
   1.067022,
   0.1879451,
   1.420514,
   0.6623495,
   1.385815,
   0.4901173,
   -0.2143077,
   0.1998352,
   -0.08371753,
   -0.2603161,
   0.4493384,
   0.01494,
   0.8617621,
   0.03678094,
   0.9012968,
   1.167355,
   0.02874208,
   0.5305211,
   0.3757124,
   0.381627,
   0.1339655,
   0.6382313};
   Double_t Run-2b_fex1002[23] = {
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
   Double_t Run-2b_fey1002[23] = {
   0.01178813,
   0.01188728,
   0.01186016,
   0.01192575,
   0.01198029,
   0.01189387,
   0.01186575,
   0.01227618,
   0.01187692,
   0.01180495,
   0.01170658,
   0.01135362,
   0.01174331,
   0.01176909,
   0.01184813,
   0.01179577,
   0.01167264,
   0.01149702,
   0.01179728,
   0.01196605,
   0.01185059,
   0.01183991,
   0.01172576};
   gre = new TGraphErrors(23,Run-2b_fx1002,Run-2b_fy1002,Run-2b_fex1002,Run-2b_fey1002);
   gre->SetName("Run-2b");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RunmI2b1002 = new TH1F("Graph_RunmI2b1002","Graph",100,0,26.2);
   Graph_RunmI2b1002->SetMinimum(-0.4424688);
   Graph_RunmI2b1002->SetMaximum(1.602886);
   Graph_RunmI2b1002->SetDirectory(0);
   Graph_RunmI2b1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RunmI2b1002->SetLineColor(ci);
   Graph_RunmI2b1002->GetXaxis()->SetLabelFont(42);
   Graph_RunmI2b1002->GetXaxis()->SetLabelSize(0.035);
   Graph_RunmI2b1002->GetXaxis()->SetTitleSize(0.035);
   Graph_RunmI2b1002->GetXaxis()->SetTitleFont(42);
   Graph_RunmI2b1002->GetYaxis()->SetLabelFont(42);
   Graph_RunmI2b1002->GetYaxis()->SetLabelSize(0.035);
   Graph_RunmI2b1002->GetYaxis()->SetTitleSize(0.035);
   Graph_RunmI2b1002->GetYaxis()->SetTitleOffset(0);
   Graph_RunmI2b1002->GetYaxis()->SetTitleFont(42);
   Graph_RunmI2b1002->GetZaxis()->SetLabelFont(42);
   Graph_RunmI2b1002->GetZaxis()->SetLabelSize(0.035);
   Graph_RunmI2b1002->GetZaxis()->SetTitleSize(0.035);
   Graph_RunmI2b1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Run-2b1002);
   
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
   entry=leg->AddEntry("Run-2b","Run-2b","lpf");
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
