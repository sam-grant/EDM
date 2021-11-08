void S0S12S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,0.7496824,2750,2.81064);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1121[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1121[7] = {
   1.780161,
   1.685654,
   1.567984,
   1.796987,
   1.726622,
   1.681374,
   1.66456};
   Double_t _fex1121[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1121[7] = {
   0.2997757,
   0.2099395,
   0.1806875,
   0.1747722,
   0.1936322,
   0.2509748,
   0.4072856};
   TGraphErrors *gre = new TGraphErrors(7,_fx1121,_fy1121,_fex1121,_fey1121);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","",100,725,2525);
   Graph_Graph1121->SetMinimum(0.9557781);
   Graph_Graph1121->SetMaximum(2.604544);
   Graph_Graph1121->SetDirectory(0);
   Graph_Graph1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1121->SetLineColor(ci);
   Graph_Graph1121->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1121->GetXaxis()->CenterTitle(true);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetTitle("#delta'_{EDM} [mrad]");
   Graph_Graph1121->GetYaxis()->CenterTitle(true);
   Graph_Graph1121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1121);
   
   
   TF1 *pol01122 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01122->SetFillColor(19);
   pol01122->SetFillStyle(0);
   pol01122->SetLineColor(2);
   pol01122->SetLineWidth(2);
   pol01122->SetChisquare(0.9498624);
   pol01122->SetNDF(6);
   pol01122->GetXaxis()->SetLabelFont(42);
   pol01122->GetXaxis()->SetTitleOffset(1);
   pol01122->GetXaxis()->SetTitleFont(42);
   pol01122->GetYaxis()->SetLabelFont(42);
   pol01122->GetYaxis()->SetTitleFont(42);
   pol01122->SetParameter(0,1.699306);
   pol01122->SetParError(0,0.08282862);
   pol01122->SetParLimits(0,0,0);
   pol01122->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01122);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: Tracks","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
#pm0.08
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
