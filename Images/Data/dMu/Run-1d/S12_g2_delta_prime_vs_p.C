void S12_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.113217,2750,1.122605);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1175[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1175[7] = {
   0.3209206,
   0.2305324,
   0.3296221,
   0.03279271,
   -0.03953896,
   -0.05469528,
   -0.5481306};
   Double_t _fex1175[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1175[7] = {
   0.210219,
   0.1364028,
   0.1108914,
   0.107962,
   0.1220779,
   0.1605535,
   0.2732037};
   TGraphErrors *gre = new TGraphErrors(7,_fx1175,_fy1175,_fex1175,_fey1175);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1175 = new TH1F("Graph_Graph1175","",100,725,2525);
   Graph_Graph1175->SetMinimum(-0.8896352);
   Graph_Graph1175->SetMaximum(0.8990229);
   Graph_Graph1175->SetDirectory(0);
   Graph_Graph1175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1175->SetLineColor(ci);
   Graph_Graph1175->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1175->GetXaxis()->CenterTitle(true);
   Graph_Graph1175->GetXaxis()->SetLabelFont(42);
   Graph_Graph1175->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1175->GetXaxis()->SetTitleFont(42);
   Graph_Graph1175->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1175->GetYaxis()->CenterTitle(true);
   Graph_Graph1175->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1175->GetYaxis()->SetLabelFont(42);
   Graph_Graph1175->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1175->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1175->GetYaxis()->SetTitleFont(42);
   Graph_Graph1175->GetZaxis()->SetLabelFont(42);
   Graph_Graph1175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1175);
   
   
   TF1 *pol01176 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01176->SetFillColor(19);
   pol01176->SetFillStyle(0);
   pol01176->SetLineColor(2);
   pol01176->SetLineWidth(2);
   pol01176->SetChisquare(14.55622);
   pol01176->SetNDF(6);
   pol01176->GetXaxis()->SetLabelFont(42);
   pol01176->GetXaxis()->SetTitleOffset(1);
   pol01176->GetXaxis()->SetTitleFont(42);
   pol01176->GetYaxis()->SetLabelFont(42);
   pol01176->GetYaxis()->SetTitleFont(42);
   pol01176->SetParameter(0,0.1024099);
   pol01176->SetParError(0,0.05250211);
   pol01176->SetParLimits(0,0,0);
   pol01176->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01176);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.1
#pm0.05
 mrad","lpf");
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
