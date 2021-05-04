void ChiSqr_vs_eMin_2750()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 27 01:01:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405,-0.96875,1095,3.71875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[3] = {
   500,
   750,
   1000};
   Double_t Graph0_fy1004[3] = {
   0.5364223,
   0.4180841,
   0.4682035};
   Double_t Graph0_fex1004[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1004[3] = {
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{min} [MeV];#chi^{2}/NDF");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","",100,450,1050);
   Graph_Graph01004->SetMinimum(-0.5);
   Graph_Graph01004->SetMaximum(3.25);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetTitle("E_{min} [MeV]");
   Graph_Graph01004->GetXaxis()->SetRange(5,96);
   Graph_Graph01004->GetXaxis()->CenterTitle(true);
   Graph_Graph01004->GetXaxis()->SetLabelFont(42);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetXaxis()->SetTitleFont(42);
   Graph_Graph01004->GetYaxis()->SetTitle("#chi^{2}/NDF");
   Graph_Graph01004->GetYaxis()->CenterTitle(true);
   Graph_Graph01004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01004->GetYaxis()->SetLabelFont(42);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetYaxis()->SetTitleFont(42);
   Graph_Graph01004->GetZaxis()->SetLabelFont(42);
   Graph_Graph01004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1005[3] = {
   500,
   750,
   1000};
   Double_t Graph1_fy1005[3] = {
   1.873937,
   1.421747,
   1.267187};
   Double_t Graph1_fex1005[3] = {
   0,
   0,
   0};
   Double_t Graph1_fey1005[3] = {
   0,
   0,
   0};
   gre = new TGraphErrors(3,Graph1_fx1005,Graph1_fy1005,Graph1_fex1005,Graph1_fey1005);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11005 = new TH1F("Graph_Graph11005","Graph",100,450,1050);
   Graph_Graph11005->SetMinimum(1.206512);
   Graph_Graph11005->SetMaximum(1.934612);
   Graph_Graph11005->SetDirectory(0);
   Graph_Graph11005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11005->SetLineColor(ci);
   Graph_Graph11005->GetXaxis()->SetLabelFont(42);
   Graph_Graph11005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11005->GetXaxis()->SetTitleFont(42);
   Graph_Graph11005->GetYaxis()->SetLabelFont(42);
   Graph_Graph11005->GetYaxis()->SetTitleFont(42);
   Graph_Graph11005->GetZaxis()->SetLabelFont(42);
   Graph_Graph11005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11005);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1006[3] = {
   500,
   750,
   1000};
   Double_t Graph2_fy1006[3] = {
   2.331768,
   1.396408,
   1.224662};
   Double_t Graph2_fex1006[3] = {
   0,
   0,
   0};
   Double_t Graph2_fey1006[3] = {
   0,
   0,
   0};
   gre = new TGraphErrors(3,Graph2_fx1006,Graph2_fy1006,Graph2_fex1006,Graph2_fey1006);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21006 = new TH1F("Graph_Graph21006","Graph",100,450,1050);
   Graph_Graph21006->SetMinimum(1.113951);
   Graph_Graph21006->SetMaximum(2.442478);
   Graph_Graph21006->SetDirectory(0);
   Graph_Graph21006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21006->SetLineColor(ci);
   Graph_Graph21006->GetXaxis()->SetLabelFont(42);
   Graph_Graph21006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21006->GetXaxis()->SetTitleFont(42);
   Graph_Graph21006->GetYaxis()->SetLabelFont(42);
   Graph_Graph21006->GetYaxis()->SetTitleFont(42);
   Graph_Graph21006->GetZaxis()->SetLabelFont(42);
   Graph_Graph21006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21006);
   
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
   TLine *line = new TLine(474,1.5,1026,1.5);
   line->SetLineStyle(3);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(474,1,1026,1);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(474,0.5,1026,0.5);
   line->SetLineStyle(3);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
