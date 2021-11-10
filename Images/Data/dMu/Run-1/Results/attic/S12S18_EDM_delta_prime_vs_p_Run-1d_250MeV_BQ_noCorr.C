void S12S18_EDM_delta_prime_vs_p_Run-1d_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.008273567,2750,0.06395022);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1089[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1089[7] = {
   0.02783833,
   0.03007556,
   0.04648788,
   0.03562916,
   0.0424413,
   0.04387692,
   0.03960998};
   Double_t _fex1089[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1089[7] = {
   0.01050528,
   0.008028229,
   0.007013999,
   0.006746379,
   0.006935597,
   0.007353567,
   0.008075808};
   TGraphErrors *gre = new TGraphErrors(7,_fx1089,_fy1089,_fex1089,_fey1089);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1089 = new TH1F("Graph_Graph1089","S12S18_",100,725,2525);
   Graph_Graph1089->SetMinimum(-0.001051188);
   Graph_Graph1089->SetMaximum(0.05672784);
   Graph_Graph1089->SetDirectory(0);
   Graph_Graph1089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1089->SetLineColor(ci);
   Graph_Graph1089->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1089->GetXaxis()->CenterTitle(true);
   Graph_Graph1089->GetXaxis()->SetLabelFont(42);
   Graph_Graph1089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1089->GetXaxis()->SetTitleFont(42);
   Graph_Graph1089->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1089->GetYaxis()->CenterTitle(true);
   Graph_Graph1089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1089->GetYaxis()->SetLabelFont(42);
   Graph_Graph1089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1089->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1089->GetYaxis()->SetTitleFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelFont(42);
   Graph_Graph1089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1089);
   
   
   TF1 *pol01090 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01090->SetFillColor(19);
   pol01090->SetFillStyle(0);
   pol01090->SetLineColor(2);
   pol01090->SetLineWidth(2);
   pol01090->SetChisquare(4.444916);
   pol01090->SetNDF(6);
   pol01090->GetXaxis()->SetLabelFont(42);
   pol01090->GetXaxis()->SetTitleOffset(1);
   pol01090->GetXaxis()->SetTitleFont(42);
   pol01090->GetYaxis()->SetLabelFont(42);
   pol01090->GetYaxis()->SetTitleFont(42);
   pol01090->SetParameter(0,0.03907919);
   pol01090->SetParError(0,0.002869);
   pol01090->SetParLimits(0,0,0);
   pol01090->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01090);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.039
#pm0.003
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
