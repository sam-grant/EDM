void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.7125,3335,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1423[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S0_c_vs_p_fy1423[15] = {
   -0.1648593,
   -0.1648968,
   -0.1441464,
   -0.03195323,
   -0.005026884,
   -0.01228761,
   -0.01426306,
   -0.01313667,
   -0.0189081,
   -0.03424414,
   -0.01675593,
   -0.02306873,
   0.006102064,
   0.04555892,
   0.08145083};
   Double_t S0_c_vs_p_fex1423[15] = {
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
   Double_t S0_c_vs_p_fey1423[15] = {
   0.01264703,
   0.01264673,
   0.0126125,
   0.01242492,
   0.01229086,
   0.01232406,
   0.012545,
   0.01299,
   0.01370976,
   0.0147733,
   0.01634334,
   0.01868992,
   0.02213764,
   0.02800765,
   0.04506318};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1423,S0_c_vs_p_fy1423,S0_c_vs_p_fex1423,S0_c_vs_p_fey1423);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1423 = new TH1F("Graph_S0_c_vs_p1423","",100,-400,3200);
   Graph_S0_c_vs_p1423->SetMinimum(-0.6);
   Graph_S0_c_vs_p1423->SetMaximum(0.3);
   Graph_S0_c_vs_p1423->SetDirectory(0);
   Graph_S0_c_vs_p1423->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1423->SetLineColor(ci);
   Graph_S0_c_vs_p1423->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_c_vs_p1423->GetXaxis()->SetRange(8,93);
   Graph_S0_c_vs_p1423->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1423->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1423->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1423->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1423->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1423->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1423->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1423->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1423->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1423->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1423->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1423->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1423->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1423->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1423);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1424[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S12_c_vs_p_fy1424[15] = {
   -0.4653324,
   -0.4652657,
   -0.4338406,
   -0.3188264,
   -0.2533834,
   -0.2123839,
   -0.1952546,
   -0.1789194,
   -0.1622421,
   -0.1348213,
   -0.1200764,
   -0.1285845,
   -0.1180119,
   -0.1155192,
   -0.04322277};
   Double_t S12_c_vs_p_fex1424[15] = {
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
   Double_t S12_c_vs_p_fey1424[15] = {
   0.0127967,
   0.01279667,
   0.01276639,
   0.01258462,
   0.01248763,
   0.01257198,
   0.01284902,
   0.01337908,
   0.01423469,
   0.01551919,
   0.01740946,
   0.02011644,
   0.02414344,
   0.03067852,
   0.04928114};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1424,S12_c_vs_p_fy1424,S12_c_vs_p_fex1424,S12_c_vs_p_fey1424);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1424 = new TH1F("Graph_S12_c_vs_p1424","S12",100,-400,3200);
   Graph_S12_c_vs_p1424->SetMinimum(-0.5265478);
   Graph_S12_c_vs_p1424->SetMaximum(0.05447712);
   Graph_S12_c_vs_p1424->SetDirectory(0);
   Graph_S12_c_vs_p1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1424->SetLineColor(ci);
   Graph_S12_c_vs_p1424->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_c_vs_p1424->GetXaxis()->SetRange(8,93);
   Graph_S12_c_vs_p1424->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1424->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1424->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1424->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1424->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1424->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1424->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1424->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1424->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1424->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1424->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1424->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1424->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1424->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1424);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1425[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S18_c_vs_p_fy1425[15] = {
   -0.3588698,
   -0.3587317,
   -0.3302415,
   -0.196883,
   -0.1720979,
   -0.1606014,
   -0.1335571,
   -0.1325124,
   -0.1114054,
   -0.09591302,
   -0.08466487,
   -0.105058,
   -0.09600702,
   -0.1024856,
   -0.005100322};
   Double_t S18_c_vs_p_fex1425[15] = {
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
   Double_t S18_c_vs_p_fey1425[15] = {
   0.01291183,
   0.012912,
   0.01287964,
   0.01271276,
   0.01261846,
   0.01271948,
   0.01303535,
   0.01362646,
   0.01453805,
   0.01591995,
   0.0178669,
   0.02064855,
   0.02460143,
   0.03099256,
   0.05193116};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1425,S18_c_vs_p_fy1425,S18_c_vs_p_fex1425,S18_c_vs_p_fey1425);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1425 = new TH1F("Graph_S18_c_vs_p1425","S18",100,-400,3200);
   Graph_S18_c_vs_p1425->SetMinimum(-0.4136429);
   Graph_S18_c_vs_p1425->SetMaximum(0.08869209);
   Graph_S18_c_vs_p1425->SetDirectory(0);
   Graph_S18_c_vs_p1425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1425->SetLineColor(ci);
   Graph_S18_c_vs_p1425->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_c_vs_p1425->GetXaxis()->SetRange(8,93);
   Graph_S18_c_vs_p1425->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1425->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1425->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1425->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1425->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1425->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1425->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1425->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1425->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1425->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1425->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1425->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1425->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1425->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1425->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1425);
   
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
