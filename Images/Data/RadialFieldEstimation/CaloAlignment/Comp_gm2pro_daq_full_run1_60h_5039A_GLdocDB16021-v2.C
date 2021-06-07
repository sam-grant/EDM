void Comp_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2()
{
//=========Macro generated from canvas: gr_comp/c
//=========  (Fri May 28 14:09:44 2021) by ROOT version 6.12/04
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
   
   Double_t Run-1a_fx1002[23] = {
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
   Double_t Run-1a_fy1002[23] = {
   -0.5883327,
   0.9468075,
   0.1934024,
   1.706382,
   0.7869013,
   1.311446,
   0.3514128,
   -0.3715163,
   0.0351295,
   -0.3789026,
   -0.4206487,
   0.2313947,
   -0.03258479,
   0.2262473,
   -0.1333736,
   0.5937826,
   0.9181863,
   -0.2826412,
   0.2654812,
   0.2656849,
   0.9184378,
   -0.06892606,
   0.4438596};
   Double_t Run-1a_fex1002[23] = {
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
   Double_t Run-1a_fey1002[23] = {
   0.007349983,
   0.006743831,
   0.006759802,
   0.006896073,
   0.006797275,
   0.006771499,
   0.006755332,
   0.006996331,
   0.006698025,
   0.006662764,
   0.006618266,
   0.006450881,
   0.006663305,
   0.006703884,
   0.006761305,
   0.006713783,
   0.006616036,
   0.006487681,
   0.006696905,
   0.006780042,
   0.006823219,
   0.006698223,
   0.00677755};
   gre = new TGraphErrors(23,Run-1a_fx1002,Run-1a_fy1002,Run-1a_fex1002,Run-1a_fey1002);
   gre->SetName("Run-1a");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RunmI1a1002 = new TH1F("Graph_RunmI1a1002","Graph",100,0,26.2);
   Graph_RunmI1a1002->SetMinimum(-0.8265788);
   Graph_RunmI1a1002->SetMaximum(1.944174);
   Graph_RunmI1a1002->SetDirectory(0);
   Graph_RunmI1a1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RunmI1a1002->SetLineColor(ci);
   Graph_RunmI1a1002->GetXaxis()->SetLabelFont(42);
   Graph_RunmI1a1002->GetXaxis()->SetLabelSize(0.035);
   Graph_RunmI1a1002->GetXaxis()->SetTitleSize(0.035);
   Graph_RunmI1a1002->GetXaxis()->SetTitleFont(42);
   Graph_RunmI1a1002->GetYaxis()->SetLabelFont(42);
   Graph_RunmI1a1002->GetYaxis()->SetLabelSize(0.035);
   Graph_RunmI1a1002->GetYaxis()->SetTitleSize(0.035);
   Graph_RunmI1a1002->GetYaxis()->SetTitleOffset(0);
   Graph_RunmI1a1002->GetYaxis()->SetTitleFont(42);
   Graph_RunmI1a1002->GetZaxis()->SetLabelFont(42);
   Graph_RunmI1a1002->GetZaxis()->SetLabelSize(0.035);
   Graph_RunmI1a1002->GetZaxis()->SetTitleSize(0.035);
   Graph_RunmI1a1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Run-1a1002);
   
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
   entry=leg->AddEntry("Run-1a","Run-1a","lpf");
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
