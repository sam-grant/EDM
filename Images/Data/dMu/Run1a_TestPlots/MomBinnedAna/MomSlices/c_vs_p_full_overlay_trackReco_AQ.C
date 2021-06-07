void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-5.25,3605.25,7.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1546[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0_c_vs_p_fy1546[15] = {
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06};
   Double_t S0_c_vs_p_fex1546[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1546[15] = {
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1546,S0_c_vs_p_fy1546,S0_c_vs_p_fex1546,S0_c_vs_p_fey1546);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1546 = new TH1F("Graph_S0_c_vs_p1546","",100,0,3300);
   Graph_S0_c_vs_p1546->SetMinimum(-4);
   Graph_S0_c_vs_p1546->SetMaximum(6);
   Graph_S0_c_vs_p1546->SetDirectory(0);
   Graph_S0_c_vs_p1546->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1546->SetLineColor(ci);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1546->GetXaxis()->SetRange(0,97);
   Graph_S0_c_vs_p1546->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1546->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1546->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1546->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1546->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1546->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1546->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1546->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1546);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1547[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12_c_vs_p_fy1547[15] = {
   2.364244,
   -4.900094,
   -0.8536541,
   0.4248039,
   0.7825565,
   -0.01140958,
   -0.4087725,
   -0.4094674,
   -0.3115913,
   -0.2251007,
   -0.1826228,
   -0.1816447,
   -0.03469728,
   0.1497963,
   0.3318349};
   Double_t S12_c_vs_p_fex1547[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1547[15] = {
   0.8329637,
   0.1042696,
   0.03770441,
   0.02407882,
   0.01867915,
   0.01608295,
   0.01430542,
   0.01329674,
   0.0127406,
   0.01267518,
   0.01283995,
   0.01324964,
   0.01523999,
   0.01649137,
   0.02686717};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1547,S12_c_vs_p_fy1547,S12_c_vs_p_fex1547,S12_c_vs_p_fey1547);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1547 = new TH1F("Graph_S12_c_vs_p1547","S12",100,0,3300);
   Graph_S12_c_vs_p1547->SetMinimum(-5.824521);
   Graph_S12_c_vs_p1547->SetMaximum(4.017364);
   Graph_S12_c_vs_p1547->SetDirectory(0);
   Graph_S12_c_vs_p1547->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1547->SetLineColor(ci);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1547->GetXaxis()->SetRange(0,97);
   Graph_S12_c_vs_p1547->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1547->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1547->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1547->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1547->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1547->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1547->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1547->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1547);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1548[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S18_c_vs_p_fy1548[15] = {
   1.309073,
   -4.693592,
   -0.6969483,
   0.5899622,
   0.8090822,
   0.02539072,
   -0.2231322,
   -0.1527298,
   -0.141434,
   -0.1041588,
   -0.09797481,
   0.003867353,
   -0.05731805,
   -0.03674395,
   -0.1699285};
   Double_t S18_c_vs_p_fex1548[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1548[15] = {
   0.9408825,
   0.1075066,
   0.03806482,
   0.02414818,
   0.01878238,
   0.01621019,
   0.0145264,
   0.01360248,
   0.01307178,
   0.01319355,
   0.01365403,
   0.01440593,
   0.01649906,
   0.01677422,
   0.02800221};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1548,S18_c_vs_p_fy1548,S18_c_vs_p_fex1548,S18_c_vs_p_fey1548);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1548 = new TH1F("Graph_S18_c_vs_p1548","S18",100,0,3300);
   Graph_S18_c_vs_p1548->SetMinimum(-5.506204);
   Graph_S18_c_vs_p1548->SetMaximum(2.955061);
   Graph_S18_c_vs_p1548->SetDirectory(0);
   Graph_S18_c_vs_p1548->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1548->SetLineColor(ci);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1548->GetXaxis()->SetRange(0,97);
   Graph_S18_c_vs_p1548->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1548->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1548->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1548->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1548->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1548->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1548->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1548->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1548);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
