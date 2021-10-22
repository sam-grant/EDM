void c_vs_p_full_overlay_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(2080,-0.7125,2920,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1287[4] = {
   2200,
   2400,
   2600,
   2800};
   Double_t S0_c_vs_p_fy1287[4] = {
   -0.02306873,
   0.006102064,
   0.04555892,
   0.08145083};
   Double_t S0_c_vs_p_fex1287[4] = {
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1287[4] = {
   0.01868992,
   0.02213764,
   0.02800765,
   0.04506318};
   TGraphErrors *gre = new TGraphErrors(4,S0_c_vs_p_fx1287,S0_c_vs_p_fy1287,S0_c_vs_p_fex1287,S0_c_vs_p_fey1287);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1287 = new TH1F("Graph_S0_c_vs_p1287","",100,2020,2980);
   Graph_S0_c_vs_p1287->SetMinimum(-0.6);
   Graph_S0_c_vs_p1287->SetMaximum(0.3);
   Graph_S0_c_vs_p1287->SetDirectory(0);
   Graph_S0_c_vs_p1287->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1287->SetLineColor(ci);
   Graph_S0_c_vs_p1287->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_c_vs_p1287->GetXaxis()->SetRange(16,85);
   Graph_S0_c_vs_p1287->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1287->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1287->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1287->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1287->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1287->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1287->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1287->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1287->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1287->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1287->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1287->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1287->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1287->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1287->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1287);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1288[4] = {
   2200,
   2400,
   2600,
   2800};
   Double_t S12_c_vs_p_fy1288[4] = {
   -0.1285845,
   -0.1180119,
   -0.1155192,
   -0.04322277};
   Double_t S12_c_vs_p_fex1288[4] = {
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1288[4] = {
   0.02011644,
   0.02414344,
   0.03067852,
   0.04928114};
   gre = new TGraphErrors(4,S12_c_vs_p_fx1288,S12_c_vs_p_fy1288,S12_c_vs_p_fex1288,S12_c_vs_p_fey1288);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1288 = new TH1F("Graph_S12_c_vs_p1288","S12",100,2020,2980);
   Graph_S12_c_vs_p1288->SetMinimum(-0.1641769);
   Graph_S12_c_vs_p1288->SetMaximum(0.02153431);
   Graph_S12_c_vs_p1288->SetDirectory(0);
   Graph_S12_c_vs_p1288->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1288->SetLineColor(ci);
   Graph_S12_c_vs_p1288->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_c_vs_p1288->GetXaxis()->SetRange(16,85);
   Graph_S12_c_vs_p1288->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1288->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1288->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1288->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1288->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1288->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1288->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1288->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1288->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1288->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1288->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1288->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1288->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1288->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1288->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1288);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1289[4] = {
   2200,
   2400,
   2600,
   2800};
   Double_t S18_c_vs_p_fy1289[4] = {
   -0.105058,
   -0.09600702,
   -0.1024856,
   -0.005100322};
   Double_t S18_c_vs_p_fex1289[4] = {
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1289[4] = {
   0.02064855,
   0.02460143,
   0.03099256,
   0.05193116};
   gre = new TGraphErrors(4,S18_c_vs_p_fx1289,S18_c_vs_p_fy1289,S18_c_vs_p_fex1289,S18_c_vs_p_fey1289);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1289 = new TH1F("Graph_S18_c_vs_p1289","S18",100,2020,2980);
   Graph_S18_c_vs_p1289->SetMinimum(-0.1515091);
   Graph_S18_c_vs_p1289->SetMaximum(0.06486175);
   Graph_S18_c_vs_p1289->SetDirectory(0);
   Graph_S18_c_vs_p1289->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1289->SetLineColor(ci);
   Graph_S18_c_vs_p1289->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_c_vs_p1289->GetXaxis()->SetRange(16,85);
   Graph_S18_c_vs_p1289->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1289->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1289->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1289->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1289->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1289->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1289->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1289->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1289->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1289->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1289->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1289->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1289->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1289->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1289->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1289);
   
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
