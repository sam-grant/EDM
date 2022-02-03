void DataSetOverlay()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 14:19:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(3785870,4.858209,1.645657e+07,9.828358);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[4] = {
   5792064,
   8156705,
   1.042782e+07,
   1.318330e+07};
   Double_t _fy1[4] = {
   9,
   6.992424,
   6.588235,
   5.686567};
   TGraph *graph = new TGraph(4,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle(";Number of tracks;Dilution uncertainty [%]");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#352a86");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#352a86");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,5052940,1.392243e+07);
   Graph_Graph1->SetMinimum(5.355224);
   Graph_Graph1->SetMaximum(9.331343);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Number of tracks");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Dilution uncertainty [%]");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap plc pmc");
   
   Double_t _fx2[4] = {
   5792064,
   8156705,
   1.042782e+07,
   1.318330e+07};
   Double_t _fy2[4] = {
   8.828125,
   6.966387,
   6.483871,
   5.552846};
   graph = new TGraph(4,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0a98cd");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0a98cd");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,5052940,1.392243e+07);
   Graph_Graph2->SetMinimum(5.225318);
   Graph_Graph2->SetMaximum(9.155653);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("p plc pmc ");
   
   Double_t _fx3[4] = {
   5792064,
   8156705,
   1.042782e+07,
   1.318330e+07};
   Double_t _fy3[4] = {
   8.457944,
   6.852792,
   6.25,
   5.285714};
   graph = new TGraph(4,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#a0bd6c");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#a0bd6c");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,5052940,1.392243e+07);
   Graph_Graph3->SetMinimum(4.968491);
   Graph_Graph3->SetMaximum(8.775167);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("p plc pmc ");
   
   Double_t _fx4[4] = {
   5792064,
   8156705,
   1.042782e+07,
   1.318330e+07};
   Double_t _fy4[4] = {
   8.806818,
   7.080745,
   6.453488,
   5.421965};
   graph = new TGraph(4,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f90e");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#f9f90e");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,5052940,1.392243e+07);
   Graph_Graph4->SetMinimum(5.08348);
   Graph_Graph4->SetMaximum(9.145303);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("p plc pmc ");
   
   TLegend *leg = new TLegend(0.81,0.15,0.99,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1a","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#352a86");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#352a86");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0a98cd");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0a98cd");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#a0bd6c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#a0bd6c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f90e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#f9f90e");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
