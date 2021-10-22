void c_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.7125,3500,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1274[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t S0_c_vs_p_fy1274[5] = {
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1274[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1274[5] = {
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(5,S0_c_vs_p_fx1274,S0_c_vs_p_fy1274,S0_c_vs_p_fex1274,S0_c_vs_p_fey1274);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1274 = new TH1F("Graph_S0_c_vs_p1274","",100,800,3200);
   Graph_S0_c_vs_p1274->SetMinimum(-0.6);
   Graph_S0_c_vs_p1274->SetMaximum(0.3);
   Graph_S0_c_vs_p1274->SetDirectory(0);
   Graph_S0_c_vs_p1274->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1274->SetLineColor(ci);
   Graph_S0_c_vs_p1274->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0_c_vs_p1274->GetXaxis()->SetRange(1,100);
   Graph_S0_c_vs_p1274->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1274->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1274->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1274->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1274->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1274->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1274->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1274->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1274->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1274->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1274->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1274->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1274->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1274->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1274->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1274);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1275[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t S12_c_vs_p_fy1275[5] = {
   -0.3203132,
   -0.3267955,
   -0.3512791,
   -0.4051936,
   -0.5462909};
   Double_t S12_c_vs_p_fex1275[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1275[5] = {
   0.01262762,
   0.01299102,
   0.01434071,
   0.01802057,
   0.02893851};
   gre = new TGraphErrors(5,S12_c_vs_p_fx1275,S12_c_vs_p_fy1275,S12_c_vs_p_fex1275,S12_c_vs_p_fey1275);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1275 = new TH1F("Graph_S12_c_vs_p1275","S12",100,800,3200);
   Graph_S12_c_vs_p1275->SetMinimum(-0.6019837);
   Graph_S12_c_vs_p1275->SetMaximum(-0.2809312);
   Graph_S12_c_vs_p1275->SetDirectory(0);
   Graph_S12_c_vs_p1275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1275->SetLineColor(ci);
   Graph_S12_c_vs_p1275->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S12_c_vs_p1275->GetXaxis()->SetRange(1,100);
   Graph_S12_c_vs_p1275->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1275->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1275->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1275->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1275->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1275->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1275->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1275->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1275->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1275->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1275->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1275->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1275->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1275->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1275);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1276[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t S18_c_vs_p_fy1276[5] = {
   -0.1093513,
   -0.09283524,
   -0.01533865,
   -0.04594333,
   -0.05980419};
   Double_t S18_c_vs_p_fex1276[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1276[5] = {
   0.04439783,
   0.04914643,
   0.06226879,
   0.09492867,
   0.1901859};
   gre = new TGraphErrors(5,S18_c_vs_p_fx1276,S18_c_vs_p_fy1276,S18_c_vs_p_fex1276,S18_c_vs_p_fey1276);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1276 = new TH1F("Graph_S18_c_vs_p1276","S18",100,800,3200);
   Graph_S18_c_vs_p1276->SetMinimum(-0.2880272);
   Graph_S18_c_vs_p1276->SetMaximum(0.1684188);
   Graph_S18_c_vs_p1276->SetDirectory(0);
   Graph_S18_c_vs_p1276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1276->SetLineColor(ci);
   Graph_S18_c_vs_p1276->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S18_c_vs_p1276->GetXaxis()->SetRange(1,100);
   Graph_S18_c_vs_p1276->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1276->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1276->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1276->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1276->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1276->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1276->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1276->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1276->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1276->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1276->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1276->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1276->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1276->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1276->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1276);
   
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
