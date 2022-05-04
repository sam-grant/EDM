void S12S18_g2_delta_prime_plus_vs_p_750-2500MeV_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.9475,-2.137882,2728.833,1.681354);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1073[7] = {
   883.9284,
   1127.495,
   1373.325,
   1619.956,
   1866.969,
   2116.15,
   2359.852};
   Double_t _fy1073[7] = {
   0.3555043,
   -0.02982431,
   0.1777233,
   -0.06623198,
   -0.1433723,
   -0.1459965,
   -0.6622418};
   Double_t _fex1073[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1073[7] = {
   0.1939258,
   0.1610293,
   0.1408101,
   0.1409657,
   0.2125796,
   0.1630674,
   0.3437163};
   TGraphErrors *gre = new TGraphErrors(7,_fx1073,_fy1073,_fex1073,_fey1073);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1073 = new TH1F("Graph_Graph1073","S12S18",100,736.336,2507.445);
   Graph_Graph1073->SetMinimum(-1.755958);
   Graph_Graph1073->SetMaximum(1.29943);
   Graph_Graph1073->SetDirectory(0);
   Graph_Graph1073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1073->SetLineColor(ci);
   Graph_Graph1073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1073->GetXaxis()->CenterTitle(true);
   Graph_Graph1073->GetXaxis()->SetLabelFont(42);
   Graph_Graph1073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1073->GetXaxis()->SetTitleFont(42);
   Graph_Graph1073->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1073->GetYaxis()->CenterTitle(true);
   Graph_Graph1073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1073->GetYaxis()->SetLabelFont(42);
   Graph_Graph1073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1073->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1073->GetYaxis()->SetTitleFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelFont(42);
   Graph_Graph1073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1073);
   
   
   TF1 *pol01074 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01074->SetFillColor(19);
   pol01074->SetFillStyle(0);
   pol01074->SetLineColor(2);
   pol01074->SetLineWidth(2);
   pol01074->SetChisquare(10.17688);
   pol01074->SetNDF(6);
   pol01074->GetXaxis()->SetLabelFont(42);
   pol01074->GetXaxis()->SetTitleOffset(1);
   pol01074->GetXaxis()->SetTitleFont(42);
   pol01074->GetYaxis()->SetLabelFont(42);
   pol01074->GetYaxis()->SetTitleFont(42);
   pol01074->SetParameter(0,-0.001432075);
   pol01074->SetParError(0,0.06535611);
   pol01074->SetParLimits(0,0,0);
   pol01074->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01074);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00143
#pm0.07
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
