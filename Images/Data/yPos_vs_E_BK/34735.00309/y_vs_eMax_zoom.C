void y_vs_eMax_zoom()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 17:02:00 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(120,73.84375,2880,75.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[5] = {
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t Graph0_fy1010[5] = {
   74.29419,
   74.43127,
   74.44531,
   74.47492,
   74.53685};
   Double_t Graph0_fex1010[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1010[5] = {
   0.1137029,
   0.08996918,
   0.07622544,
   0.06773027,
   0.06329514};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{max} [MeV];#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,300,2700);
   Graph_Graph01010->SetMinimum(74);
   Graph_Graph01010->SetMaximum(75.25);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("E_{max} [MeV]");
   Graph_Graph01010->GetXaxis()->SetRange(5,96);
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("#LT y_{calo} #GT [mm]");
   Graph_Graph01010->GetYaxis()->CenterTitle(true);
   Graph_Graph01010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1011[5] = {
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t Graph1_fy1011[5] = {
   74.55944,
   74.82937,
   74.85399,
   74.88757,
   74.94949};
   Double_t Graph1_fex1011[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1011[5] = {
   0.1805851,
   0.1296969,
   0.1050465,
   0.09122691,
   0.08440328};
   gre = new TGraphErrors(5,Graph1_fx1011,Graph1_fy1011,Graph1_fex1011,Graph1_fey1011);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11011 = new TH1F("Graph_Graph11011","Graph",100,300,2700);
   Graph_Graph11011->SetMinimum(74.31335);
   Graph_Graph11011->SetMaximum(75.0994);
   Graph_Graph11011->SetDirectory(0);
   Graph_Graph11011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11011->SetLineColor(ci);
   Graph_Graph11011->GetXaxis()->SetLabelFont(42);
   Graph_Graph11011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11011->GetXaxis()->SetTitleFont(42);
   Graph_Graph11011->GetYaxis()->SetLabelFont(42);
   Graph_Graph11011->GetYaxis()->SetTitleFont(42);
   Graph_Graph11011->GetZaxis()->SetLabelFont(42);
   Graph_Graph11011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11011);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1012[5] = {
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t Graph2_fy1012[5] = {
   74.45414,
   74.80046,
   74.84517,
   74.89358,
   74.95005};
   Double_t Graph2_fex1012[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1012[5] = {
   0.1913862,
   0.1374739,
   0.1114749,
   0.09675755,
   0.08947661};
   gre = new TGraphErrors(5,Graph2_fx1012,Graph2_fy1012,Graph2_fex1012,Graph2_fey1012);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21012 = new TH1F("Graph_Graph21012","Graph",100,300,2700);
   Graph_Graph21012->SetMinimum(74.18508);
   Graph_Graph21012->SetMaximum(75.11721);
   Graph_Graph21012->SetDirectory(0);
   Graph_Graph21012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21012->SetLineColor(ci);
   Graph_Graph21012->GetXaxis()->SetLabelFont(42);
   Graph_Graph21012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21012->GetXaxis()->SetTitleFont(42);
   Graph_Graph21012->GetYaxis()->SetLabelFont(42);
   Graph_Graph21012->GetYaxis()->SetTitleFont(42);
   Graph_Graph21012->GetZaxis()->SetLabelFont(42);
   Graph_Graph21012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21012);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.45,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","t > 0 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","t > 24 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","t > 30 #mus","lpf");
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
