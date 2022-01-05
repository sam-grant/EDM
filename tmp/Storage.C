void Storage()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan  3 14:37:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[11] = {
   50,
   40,
   30,
   20,
   10,
   0,
   -10,
   -20,
   -30,
   -40,
   -50};
   Double_t _fy1[11] = {
   0.00119,
   0.00122,
   0.00126,
   0.00127,
   0.00127,
   0.0013,
   0.00128,
   0.00126,
   0.00122,
   0.00117,
   0.00115};
   TGraph *graph = new TGraph(11,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle(";#LTB_{r}^{a}#GT [ppm];Storage fraction");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,-60,60);
   Graph_Graph1->SetMinimum(0.001135);
   Graph_Graph1->SetMaximum(0.001315);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("#LTB_{r}^{a}#GT [ppm]");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Storage fraction");
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
   
   graph->Draw("ap");
   
   TF1 *f11 = new TF1("f1","-4.68e-8*x*x+4.54e-7*x+1.28e-3",-50,50, TF1::EAddToList::kDefault);
   f11->SetFillColor(19);
   f11->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   f11->SetLineColor(ci);
   f11->SetLineWidth(2);
   f11->GetXaxis()->SetLabelFont(42);
   f11->GetXaxis()->SetTitleOffset(1);
   f11->GetXaxis()->SetTitleFont(42);
   f11->GetYaxis()->SetLabelFont(42);
   f11->GetYaxis()->SetTitleFont(42);
   f11->Draw("SAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f1","Fit: a#LTB_{r}^{a}#GT^{2}+b#LTB_{r}^{a}#GT+c","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("a = #minus4.68#times10^{-8} ppm^{-2}");
   pt_LaTex = pt->AddText("b = 4.54#times10^{-7} ppm^{-1}");
   pt_LaTex = pt->AddText("c = 1.28#times10^{-3}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
