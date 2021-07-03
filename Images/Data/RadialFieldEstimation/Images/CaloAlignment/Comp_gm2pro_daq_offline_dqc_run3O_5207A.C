void Comp_gm2pro_daq_offline_dqc_run3O_5207A()
{
//=========Macro generated from canvas: gr_comp/c
//=========  (Fri May 28 14:08:00 2021) by ROOT version 6.12/04
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
   
   Double_t Run-3O_fx1002[23] = {
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
   Double_t Run-3O_fy1002[23] = {
   -0.3126947,
   0.8288182,
   0.05477756,
   1.437581,
   0.569792,
   1.058912,
   0.3206029,
   -0.5364001,
   -0.009380671,
   -0.411444,
   -0.2248319,
   0.3857239,
   -0.08261536,
   0.6851449,
   -0.0519443,
   0.7668162,
   0.9698572,
   -0.1287329,
   0.1455335,
   0.2233109,
   -0.5486491,
   0.1090346,
   0.3558018};
   Double_t Run-3O_fex1002[23] = {
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
   Double_t Run-3O_fey1002[23] = {
   0.01202929,
   0.01211011,
   0.01214322,
   0.01225588,
   0.01216371,
   0.0122524,
   0.01217494,
   0.01211834,
   0.01205115,
   0.01196341,
   0.01183236,
   0.01155563,
   0.01193054,
   0.01193973,
   0.01209129,
   0.01204522,
   0.01186872,
   0.01173543,
   0.01199432,
   0.01214738,
   0.01211574,
   0.01210856,
   0.01189685};
   gre = new TGraphErrors(23,Run-3O_fx1002,Run-3O_fy1002,Run-3O_fex1002,Run-3O_fey1002);
   gre->SetName("Run-3O");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RunmI3O1002 = new TH1F("Graph_RunmI3O1002","Graph",100,0,26.2);
   Graph_RunmI3O1002->SetMinimum(-0.761825);
   Graph_RunmI3O1002->SetMaximum(1.650897);
   Graph_RunmI3O1002->SetDirectory(0);
   Graph_RunmI3O1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RunmI3O1002->SetLineColor(ci);
   Graph_RunmI3O1002->GetXaxis()->SetLabelFont(42);
   Graph_RunmI3O1002->GetXaxis()->SetLabelSize(0.035);
   Graph_RunmI3O1002->GetXaxis()->SetTitleSize(0.035);
   Graph_RunmI3O1002->GetXaxis()->SetTitleFont(42);
   Graph_RunmI3O1002->GetYaxis()->SetLabelFont(42);
   Graph_RunmI3O1002->GetYaxis()->SetLabelSize(0.035);
   Graph_RunmI3O1002->GetYaxis()->SetTitleSize(0.035);
   Graph_RunmI3O1002->GetYaxis()->SetTitleOffset(0);
   Graph_RunmI3O1002->GetYaxis()->SetTitleFont(42);
   Graph_RunmI3O1002->GetZaxis()->SetLabelFont(42);
   Graph_RunmI3O1002->GetZaxis()->SetLabelSize(0.035);
   Graph_RunmI3O1002->GetZaxis()->SetTitleSize(0.035);
   Graph_RunmI3O1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Run-3O1002);
   
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
   entry=leg->AddEntry("Run-3O","Run-3O","lpf");
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
