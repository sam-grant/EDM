void S18_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.6398,-1.742769,2728.454,2.128062);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1101[7] = {
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485};
   Double_t _fy1101[7] = {
   0.6917468,
   -0.03629618,
   -0.1905339,
   0.05807469,
   0.1291731,
   -0.3092132,
   -0.3152548};
   Double_t _fex1101[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1101[7] = {
   0.2992324,
   0.2818425,
   0.185278,
   0.1784545,
   0.1939897,
   0.2964731,
   0.2752405};
   TGraphErrors *gre = new TGraphErrors(7,_fx1101,_fy1101,_fex1101,_fey1101);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1101 = new TH1F("Graph_Graph1101","S18",100,736.0212,2507.073);
   Graph_Graph1101->SetMinimum(-1.355686);
   Graph_Graph1101->SetMaximum(1.740979);
   Graph_Graph1101->SetDirectory(0);
   Graph_Graph1101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1101->SetLineColor(ci);
   Graph_Graph1101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1101->GetXaxis()->CenterTitle(true);
   Graph_Graph1101->GetXaxis()->SetLabelFont(42);
   Graph_Graph1101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1101->GetXaxis()->SetTitleFont(42);
   Graph_Graph1101->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1101->GetYaxis()->CenterTitle(true);
   Graph_Graph1101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1101->GetYaxis()->SetLabelFont(42);
   Graph_Graph1101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1101->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1101->GetYaxis()->SetTitleFont(42);
   Graph_Graph1101->GetZaxis()->SetLabelFont(42);
   Graph_Graph1101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1101);
   
   
   TF1 *pol01102 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01102->SetFillColor(19);
   pol01102->SetFillStyle(0);
   pol01102->SetLineColor(2);
   pol01102->SetLineWidth(2);
   pol01102->SetChisquare(9.36357);
   pol01102->SetNDF(6);
   pol01102->GetXaxis()->SetLabelFont(42);
   pol01102->GetXaxis()->SetTitleOffset(1);
   pol01102->GetXaxis()->SetTitleFont(42);
   pol01102->GetYaxis()->SetLabelFont(42);
   pol01102->GetYaxis()->SetTitleFont(42);
   pol01102->SetParameter(0,-0.005204863);
   pol01102->SetParError(0,0.08592664);
   pol01102->SetParLimits(0,0,0);
   pol01102->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01102);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0052
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
