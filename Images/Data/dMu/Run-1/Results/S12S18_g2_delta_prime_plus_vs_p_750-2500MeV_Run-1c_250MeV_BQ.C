void S12S18_g2_delta_prime_plus_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.085,-1.49824,2728.5,1.811569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1105[7] = {
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597};
   Double_t _fy1105[7] = {
   0.5324109,
   0.1016144,
   -0.06527097,
   -0.06277516,
   0.09598787,
   -0.2818737,
   -0.0685078};
   Double_t _fex1105[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1105[7] = {
   0.1981772,
   0.1494756,
   0.1198777,
   0.1044801,
   0.1108646,
   0.1353852,
   0.1900227};
   TGraphErrors *gre = new TGraphErrors(7,_fx1105,_fy1105,_fex1105,_fey1105);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1105 = new TH1F("Graph_Graph1105","S12S18",100,736.4265,2507.158);
   Graph_Graph1105->SetMinimum(-1.167259);
   Graph_Graph1105->SetMaximum(1.480588);
   Graph_Graph1105->SetDirectory(0);
   Graph_Graph1105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1105->SetLineColor(ci);
   Graph_Graph1105->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1105->GetXaxis()->CenterTitle(true);
   Graph_Graph1105->GetXaxis()->SetLabelFont(42);
   Graph_Graph1105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1105->GetXaxis()->SetTitleFont(42);
   Graph_Graph1105->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1105->GetYaxis()->CenterTitle(true);
   Graph_Graph1105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1105->GetYaxis()->SetLabelFont(42);
   Graph_Graph1105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1105->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1105->GetYaxis()->SetTitleFont(42);
   Graph_Graph1105->GetZaxis()->SetLabelFont(42);
   Graph_Graph1105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1105);
   
   
   TF1 *pol01106 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01106->SetFillColor(19);
   pol01106->SetFillStyle(0);
   pol01106->SetLineColor(2);
   pol01106->SetLineWidth(2);
   pol01106->SetChisquare(13.54454);
   pol01106->SetNDF(6);
   pol01106->GetXaxis()->SetLabelFont(42);
   pol01106->GetXaxis()->SetTitleOffset(1);
   pol01106->GetXaxis()->SetTitleFont(42);
   pol01106->GetYaxis()->SetLabelFont(42);
   pol01106->GetYaxis()->SetTitleFont(42);
   pol01106->SetParameter(0,-0.004188428);
   pol01106->SetParError(0,0.05031384);
   pol01106->SetParLimits(0,0,0);
   pol01106->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01106);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00419
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
