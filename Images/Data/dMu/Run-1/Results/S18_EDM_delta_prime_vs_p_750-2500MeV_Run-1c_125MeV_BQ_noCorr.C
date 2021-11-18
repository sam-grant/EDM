void S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.06467152,2843.25,0.1559291);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1075[14] = {
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
   Double_t _fy1075[14] = {
   0.04562877,
   0.06144602,
   0.07507687,
   0.06715458,
   0.001468837,
   0.04492048,
   0.03153246,
   0.05718903,
   0.02826989,
   0.07672418,
   0.06765368,
   0.02649119,
   0.05621208,
   0.009716789};
   Double_t _fex1075[14] = {
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
   Double_t _fey1075[14] = {
   0.03208736,
   0.02648822,
   0.02333903,
   0.02109776,
   0.0199888,
   0.01903551,
   0.01909503,
   0.01861994,
   0.01946558,
   0.01970112,
   0.02071385,
   0.02118858,
   0.02217843,
   0.02388042};
   TGraphErrors *gre = new TGraphErrors(14,_fx1075,_fy1075,_fex1075,_fey1075);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1075 = new TH1F("Graph_Graph1075","S18_",100,649.5,2599.5);
   Graph_Graph1075->SetMinimum(-0.04261146);
   Graph_Graph1075->SetMaximum(0.133869);
   Graph_Graph1075->SetDirectory(0);
   Graph_Graph1075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1075->SetLineColor(ci);
   Graph_Graph1075->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1075->GetXaxis()->CenterTitle(true);
   Graph_Graph1075->GetXaxis()->SetLabelFont(42);
   Graph_Graph1075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetXaxis()->SetTitleFont(42);
   Graph_Graph1075->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1075->GetYaxis()->CenterTitle(true);
   Graph_Graph1075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1075->GetYaxis()->SetLabelFont(42);
   Graph_Graph1075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetYaxis()->SetTitleFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelFont(42);
   Graph_Graph1075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1075);
   
   
   TF1 *pol01076 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01076->SetFillColor(19);
   pol01076->SetFillStyle(0);
   pol01076->SetLineColor(2);
   pol01076->SetLineWidth(2);
   pol01076->SetChisquare(16.5217);
   pol01076->SetNDF(13);
   pol01076->GetXaxis()->SetLabelFont(42);
   pol01076->GetXaxis()->SetTitleOffset(1);
   pol01076->GetXaxis()->SetTitleFont(42);
   pol01076->GetYaxis()->SetLabelFont(42);
   pol01076->GetYaxis()->SetTitleFont(42);
   pol01076->SetParameter(0,0.04591075);
   pol01076->SetParError(0,0.00568617);
   pol01076->SetParLimits(0,0,0);
   pol01076->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01076);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.046
#pm0.006
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
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
