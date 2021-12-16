void S0_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.1189,-0.6046235,3046.401,0.2364639);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1055[8] = {
   883.6659,
   1126.229,
   1373.859,
   1622.425,
   1870.722,
   2119.361,
   2367.038,
   2613.854};
   Double_t _fy1055[8] = {
   -0.5983428,
   -0.6600132,
   0.4484598,
   -0.7859752,
   0.04223911,
   -0.01888275,
   -0.4126665,
   -0.364692};
   Double_t _fex1055[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1055[8] = {
   -0.4667247,
   -0.3013676,
   -0.2368837,
   -0.2123683,
   -0.2120091,
   -0.2382858,
   -0.3095006,
   -0.5069612};
   TGraphErrors *gre = new TGraphErrors(8,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,710.6471,2786.873);
   Graph_Graph1055->SetMinimum(-0.5205148);
   Graph_Graph1055->SetMaximum(0.1523551);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1055->GetXaxis()->CenterTitle(true);
   Graph_Graph1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph1055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph1055->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1055->GetYaxis()->CenterTitle(true);
   Graph_Graph1055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph1055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1055->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph1055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1055);
   
   
   TF1 *pol01056 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01056->SetFillColor(19);
   pol01056->SetFillStyle(0);
   pol01056->SetLineColor(2);
   pol01056->SetLineWidth(2);
   pol01056->SetChisquare(1.227701);
   pol01056->SetNDF(7);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,-0.2937342);
   pol01056->SetParError(0,0.148065);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackRecoControl","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.29
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
