void Run_1d_graph()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 22:57:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-1815000,-8.133001,1.4883e+07,122.517);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[3] = {
   0,
   1.04e+07,
   1.32e+07};
   Double_t _fy1[3] = {
   100,
   6.44,
   5.48};
   TGraph *graph = new TGraph(3,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle(";Number of tracks;Percentage error [%]");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,1.452e+07);
   Graph_Graph1->SetMinimum(4.932);
   Graph_Graph1->SetMaximum(109.452);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Number of tracks");
   Graph_Graph1->GetXaxis()->SetRange(0,91);
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Percentage error [%]");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   
   TF1 *f12 = new TF1("f1","[0]/sqrt(x)",0,1.452e+07, TF1::EAddToList::kNo);
   f12->SetFillColor(19);
   f12->SetFillStyle(0);
   f12->SetLineColor(2);
   f12->SetLineWidth(2);
   f12->SetChisquare(5.99231e+307);
   f12->SetNDF(2);
   f12->GetXaxis()->SetLabelFont(42);
   f12->GetXaxis()->SetTitleOffset(1);
   f12->GetXaxis()->SetTitleFont(42);
   f12->GetYaxis()->SetLabelFont(42);
   f12->GetYaxis()->SetTitleFont(42);
   f12->SetParameter(0,22001.26);
   f12->SetParError(0,3.191823e+156);
   f12->SetParLimits(0,22000,23000);
   f12->SetParent(graph);
   graph->GetListOfFunctions()->Add(f12);
   graph->Draw("ap");
   
   TLegend *leg = new TLegend(0.69,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f1","220000/#sqrt{N}","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
