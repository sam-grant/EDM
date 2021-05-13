void c_vs_p_overlay_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:33:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,-2.5,2877,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1162[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0_c_vs_p_fy1162[9] = {
   -0.2844286,
   -0.1723019,
   -0.2190988,
   -0.08786487,
   -0.1757591,
   -0.1264604,
   -0.07992391,
   0.0393289,
   -0.02721495};
   Double_t S0_c_vs_p_fex1162[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1162[9] = {
   0.06591673,
   0.03753275,
   0.03218427,
   0.02972352,
   0.02833083,
   0.02722689,
   0.02742224,
   0.02830675,
   0.02933989};
   TGraphErrors *gre = new TGraphErrors(9,S0_c_vs_p_fx1162,S0_c_vs_p_fy1162,S0_c_vs_p_fex1162,S0_c_vs_p_fey1162);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1162 = new TH1F("Graph_S0_c_vs_p1162","",100,420,2580);
   Graph_S0_c_vs_p1162->SetMinimum(-2);
   Graph_S0_c_vs_p1162->SetMaximum(2);
   Graph_S0_c_vs_p1162->SetDirectory(0);
   Graph_S0_c_vs_p1162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1162->SetLineColor(ci);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1162->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1162->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1162->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1162->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1162->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1162->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1162->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1162);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1163[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12_c_vs_p_fy1163[9] = {
   -0.6528888,
   -0.625001,
   -0.4776215,
   -0.481326,
   -0.3547866,
   -0.2520394,
   -0.1651632,
   -0.1276427,
   -0.1453984};
   Double_t S12_c_vs_p_fex1163[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1163[9] = {
   0.06579039,
   0.0374335,
   0.03209459,
   0.02955933,
   0.02828385,
   0.02746771,
   0.02803666,
   0.02969197,
   0.03183698};
   gre = new TGraphErrors(9,S12_c_vs_p_fx1163,S12_c_vs_p_fy1163,S12_c_vs_p_fex1163,S12_c_vs_p_fey1163);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1163 = new TH1F("Graph_S12_c_vs_p1163","S12",100,420,2580);
   Graph_S12_c_vs_p1163->SetMinimum(-0.780752);
   Graph_S12_c_vs_p1163->SetMaximum(-0.03587791);
   Graph_S12_c_vs_p1163->SetDirectory(0);
   Graph_S12_c_vs_p1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1163->SetLineColor(ci);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1163->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1163->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1163->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1163->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1163->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1163->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1163->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1163);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1164[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S18_c_vs_p_fy1164[9] = {
   -0.5005333,
   -0.5092863,
   -0.367322,
   -0.3493113,
   -0.3165967,
   -0.2276223,
   -0.2245396,
   -0.1281729,
   -0.1249778};
   Double_t S18_c_vs_p_fex1164[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1164[9] = {
   0.06550608,
   0.03719114,
   0.03189895,
   0.02962342,
   0.02838828,
   0.02788664,
   0.0286121,
   0.03006082,
   0.03286827};
   gre = new TGraphErrors(9,S18_c_vs_p_fx1164,S18_c_vs_p_fy1164,S18_c_vs_p_fex1164,S18_c_vs_p_fey1164);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1164 = new TH1F("Graph_S18_c_vs_p1164","S18",100,420,2580);
   Graph_S18_c_vs_p1164->SetMinimum(-0.6134324);
   Graph_S18_c_vs_p1164->SetMaximum(-0.04471656);
   Graph_S18_c_vs_p1164->SetDirectory(0);
   Graph_S18_c_vs_p1164->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1164->SetLineColor(ci);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1164->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1164->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1164->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1164->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1164->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1164->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1164->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1164->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1164);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_fx1165[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12S18_c_vs_p_fy1165[9] = {
   -0.5769245,
   -0.5672996,
   -0.4219537,
   -0.4155175,
   -0.3361969,
   -0.2411346,
   -0.1931539,
   -0.1296617,
   -0.1340394};
   Double_t S12S18_c_vs_p_fex1165[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_c_vs_p_fey1165[9] = {
   0.04644325,
   0.02638886,
   0.02262946,
   0.02092907,
   0.02004205,
   0.01957458,
   0.02003423,
   0.02113808,
   0.02289171};
   gre = new TGraphErrors(9,S12S18_c_vs_p_fx1165,S12S18_c_vs_p_fy1165,S12S18_c_vs_p_fex1165,S12S18_c_vs_p_fey1165);
   gre->SetName("S12S18_c_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p1165 = new TH1F("Graph_S12S18_c_vs_p1165","S12S18",100,420,2580);
   Graph_S12S18_c_vs_p1165->SetMinimum(-0.6748522);
   Graph_S12S18_c_vs_p1165->SetMaximum(-0.05703922);
   Graph_S12S18_c_vs_p1165->SetDirectory(0);
   Graph_S12S18_c_vs_p1165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p1165->SetLineColor(ci);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetRange(0,101);
   Graph_S12S18_c_vs_p1165->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p1165->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p1165);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1166[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0S12S18_c_vs_p_fy1166[9] = {
   -0.4784802,
   -0.4354095,
   -0.3546452,
   -0.3060443,
   -0.2824335,
   -0.2017568,
   -0.1539364,
   -0.06890351,
   -0.09474605};
   Double_t S0S12S18_c_vs_p_fex1166[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_c_vs_p_fey1166[9] = {
   0.03798226,
   0.02159127,
   0.01851438,
   0.01711594,
   0.01636486,
   0.01589658,
   0.01618174,
   0.01694435,
   0.01805986};
   gre = new TGraphErrors(9,S0S12S18_c_vs_p_fx1166,S0S12S18_c_vs_p_fy1166,S0S12S18_c_vs_p_fex1166,S0S12S18_c_vs_p_fey1166);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1166 = new TH1F("Graph_S0S12S18_c_vs_p1166","S0S12S18",100,420,2580);
   Graph_S0S12S18_c_vs_p1166->SetMinimum(-0.5629128);
   Graph_S0S12S18_c_vs_p1166->SetMaximum(-0.005508829);
   Graph_S0S12S18_c_vs_p1166->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1166->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1166->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1166);
   
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
   entry=leg->AddEntry("S12S18_c_vs_p","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
