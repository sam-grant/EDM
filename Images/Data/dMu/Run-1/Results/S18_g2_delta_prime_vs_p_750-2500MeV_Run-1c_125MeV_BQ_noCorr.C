void S18_g2_delta_prime_vs_p_750-2500MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.08588986,2843.25,0.1343139);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1081[14] = {
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
   Double_t _fy1081[14] = {
   0.02421203,
   0.06328783,
   -0.02009271,
   0.01687823,
   0.008546005,
   -0.0361317,
   -0.006004685,
   0.01812815,
   0.01839081,
   -0.003338,
   -0.01665176,
   -0.01721801,
   -0.02353343,
   -0.006967683};
   Double_t _fex1081[14] = {
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
   Double_t _fey1081[14] = {
   0.03202964,
   0.02646238,
   0.02324654,
   0.02101562,
   0.01990375,
   0.01899452,
   0.01902836,
   0.01855123,
   0.01942862,
   0.01981654,
   0.02089607,
   0.02148698,
   0.0228182,
   0.02497072};
   TGraphErrors *gre = new TGraphErrors(14,_fx1081,_fy1081,_fex1081,_fey1081);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1081 = new TH1F("Graph_Graph1081","S18_",100,649.5,2599.5);
   Graph_Graph1081->SetMinimum(-0.06386948);
   Graph_Graph1081->SetMaximum(0.1122935);
   Graph_Graph1081->SetDirectory(0);
   Graph_Graph1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1081->SetLineColor(ci);
   Graph_Graph1081->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1081->GetXaxis()->CenterTitle(true);
   Graph_Graph1081->GetXaxis()->SetLabelFont(42);
   Graph_Graph1081->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetXaxis()->SetTitleFont(42);
   Graph_Graph1081->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1081->GetYaxis()->CenterTitle(true);
   Graph_Graph1081->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1081->GetYaxis()->SetLabelFont(42);
   Graph_Graph1081->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetYaxis()->SetTitleFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelFont(42);
   Graph_Graph1081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1081);
   
   
   TF1 *pol01082 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01082->SetFillColor(19);
   pol01082->SetFillStyle(0);
   pol01082->SetLineColor(2);
   pol01082->SetLineWidth(2);
   pol01082->SetChisquare(15.87184);
   pol01082->SetNDF(13);
   pol01082->GetXaxis()->SetLabelFont(42);
   pol01082->GetXaxis()->SetTitleOffset(1);
   pol01082->GetXaxis()->SetTitleFont(42);
   pol01082->GetYaxis()->SetLabelFont(42);
   pol01082->GetYaxis()->SetTitleFont(42);
   pol01082->SetParameter(0,-0.0006213736);
   pol01082->SetParError(0,0.005711287);
   pol01082->SetParLimits(0,0,0);
   pol01082->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01082);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00062
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
