void ChiSqr_vs_eMin_2750MeV_600000ns()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 27 07:04:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.49999,-0.96875,1737.5,3.71875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[6] = {
   250,
   500,
   750,
   1000,
   1250,
   1500};
   Double_t Graph0_fy1010[6] = {
   2.565394,
   0.5371547,
   0.4196893,
   0.4652159,
   0.5056115,
   0.1281302};
   Double_t Graph0_fex1010[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1010[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{min} [MeV];#chi^{2}/ndf");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,125,1625);
   Graph_Graph01010->SetMinimum(-0.5);
   Graph_Graph01010->SetMaximum(3.25);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("E_{min} [MeV]");
   Graph_Graph01010->GetXaxis()->SetRange(5,96);
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("#chi^{2}/ndf");
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
   
   Double_t Graph1_fx1011[6] = {
   250,
   500,
   750,
   1000,
   1250,
   1500};
   Double_t Graph1_fy1011[6] = {
   1.60936,
   1.844939,
   1.40776,
   1.236983,
   0.573777,
   0.4901529};
   Double_t Graph1_fex1011[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1011[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(6,Graph1_fx1011,Graph1_fy1011,Graph1_fex1011,Graph1_fey1011);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11011 = new TH1F("Graph_Graph11011","Graph",100,125,1625);
   Graph_Graph11011->SetMinimum(0.3546742);
   Graph_Graph11011->SetMaximum(1.980418);
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
   
   Double_t Graph2_fx1012[6] = {
   250,
   500,
   750,
   1000,
   1250,
   1500};
   Double_t Graph2_fy1012[6] = {
   2.353992,
   2.354669,
   1.458782,
   1.223612,
   0.6170996,
   0.6456341};
   Double_t Graph2_fex1012[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1012[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(6,Graph2_fx1012,Graph2_fy1012,Graph2_fex1012,Graph2_fey1012);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21012 = new TH1F("Graph_Graph21012","Graph",100,125,1625);
   Graph_Graph21012->SetMinimum(0.4433426);
   Graph_Graph21012->SetMaximum(2.528426);
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
   
   TLegend *leg = new TLegend(0.15,0.79,0.59,0.89,NULL,"brNDC");
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
   TLine *line = new TLine(185,1.5,1565,1.5);
   line->SetLineStyle(3);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(185,1,1565,1);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(185,0.5,1565,0.5);
   line->SetLineStyle(3);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
