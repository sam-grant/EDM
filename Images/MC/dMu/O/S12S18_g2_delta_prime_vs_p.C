void S12S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-4.987191,2843.25,6.150704);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1017[14] = {
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437};
   Double_t _fy1017[14] = {
   0.2927077,
   0.2957603,
   -1.928146,
   0.2273655,
   0.6774457,
   -0.0856923,
   0.105628,
   1.027176,
   1.304765,
   -1.824824,
   0.75655,
   -0.0447559,
   3.276634,
   -1.365398};
   Double_t _fex1017[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[14] = {
   1.361659,
   1.040459,
   0.8745302,
   0.780329,
   0.7276815,
   0.6987596,
   0.6891317,
   0.6925052,
   0.7311781,
   0.80865,
   0.9226669,
   1.099057,
   1.408225,
   2.006403};
   TGraphErrors *gre = new TGraphErrors(14,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 62 < p < p #plus 62;#delta'_{g#minus2} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,649.5,2599.5);
   Graph_Graph1017->SetMinimum(-3.873401);
   Graph_Graph1017->SetMaximum(5.036914);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62");
   Graph_Graph1017->GetXaxis()->CenterTitle(true);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   Graph_Graph1017->GetYaxis()->CenterTitle(true);
   Graph_Graph1017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *pol01018 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01018->SetFillColor(19);
   pol01018->SetFillStyle(0);
   pol01018->SetLineColor(2);
   pol01018->SetLineWidth(2);
   pol01018->SetChisquare(22.32576);
   pol01018->SetNDF(13);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,0.1907543);
   pol01018->SetParError(0,0.2312777);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.19
#pm0.2
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
