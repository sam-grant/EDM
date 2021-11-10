void S12S18_g2_delta_prime_vs_p_900-2250MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-1.50409,2499.5,2.025817);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1107[11] = {
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
   2187};
   Double_t _fy1107[11] = {
   0.2608635,
   0.0649845,
   0.7878702,
   -0.0007804754,
   0.8300489,
   -0.6591656,
   0.2694041,
   0.1481028,
   -0.1070167,
   0.3978799,
   0.4642762};
   Double_t _fex1107[11] = {
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
   Double_t _fey1107[11] = {
   0.5134411,
   0.4172232,
   0.3578381,
   0.3257256,
   0.3055608,
   0.3078363,
   0.3065401,
   0.3332584,
   0.3618593,
   0.4213193,
   0.4934461};
   TGraphErrors *gre = new TGraphErrors(11,_fx1107,_fy1107,_fex1107,_fey1107);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","S12S18_",100,812,2312);
   Graph_Graph1107->SetMinimum(-1.1511);
   Graph_Graph1107->SetMaximum(1.672827);
   Graph_Graph1107->SetDirectory(0);
   Graph_Graph1107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1107->SetLineColor(ci);
   Graph_Graph1107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1107->GetXaxis()->CenterTitle(true);
   Graph_Graph1107->GetXaxis()->SetLabelFont(42);
   Graph_Graph1107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetXaxis()->SetTitleFont(42);
   Graph_Graph1107->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1107->GetYaxis()->CenterTitle(true);
   Graph_Graph1107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1107->GetYaxis()->SetLabelFont(42);
   Graph_Graph1107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1107->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetYaxis()->SetTitleFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelFont(42);
   Graph_Graph1107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1107);
   
   
   TF1 *pol01108 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01108->SetFillColor(19);
   pol01108->SetFillStyle(0);
   pol01108->SetLineColor(2);
   pol01108->SetLineWidth(2);
   pol01108->SetChisquare(16.54162);
   pol01108->SetNDF(10);
   pol01108->GetXaxis()->SetLabelFont(42);
   pol01108->GetXaxis()->SetTitleOffset(1);
   pol01108->GetXaxis()->SetTitleFont(42);
   pol01108->GetYaxis()->SetLabelFont(42);
   pol01108->GetYaxis()->SetTitleFont(42);
   pol01108->SetParameter(0,0.1995559);
   pol01108->SetParError(0,0.1084274);
   pol01108->SetParLimits(0,0,0);
   pol01108->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01108);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.2
#pm0.1
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
