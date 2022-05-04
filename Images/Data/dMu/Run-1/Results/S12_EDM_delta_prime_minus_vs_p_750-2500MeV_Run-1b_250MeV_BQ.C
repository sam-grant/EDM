void S12_EDM_delta_prime_minus_vs_p_750-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.4702,-1.119587,2728.594,2.584668);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1041[7] = {
   884.3242,
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74};
   Double_t _fy1041[7] = {
   0.5701978,
   0.2718506,
   0.3086716,
   0.2017052,
   0.336818,
   0.5141163,
   1.066631};
   Double_t _fex1041[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1041[7] = {
   0.319699,
   0.2710122,
   0.193578,
   0.1826332,
   0.2288602,
   0.3126853,
   0.3976119};
   TGraphErrors *gre = new TGraphErrors(7,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","S12",100,736.7826,2507.282);
   Graph_Graph1041->SetMinimum(-0.7491616);
   Graph_Graph1041->SetMaximum(2.214243);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1041->GetXaxis()->CenterTitle(true);
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1041->GetYaxis()->CenterTitle(true);
   Graph_Graph1041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1041->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
   
   TF1 *pol01042 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01042->SetFillColor(19);
   pol01042->SetFillStyle(0);
   pol01042->SetLineColor(2);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(4.770185);
   pol01042->SetNDF(6);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,0.3629747);
   pol01042->SetParError(0,0.09296331);
   pol01042->SetParLimits(0,0,0);
   pol01042->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.363
#pm0.09
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
