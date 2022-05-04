void S12S18_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0162,-1.541256,2728.333,1.558173);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1143[7] = {
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447};
   Double_t _fy1143[7] = {
   0.3370035,
   0.162632,
   0.1126536,
   0.05564803,
   -0.1895677,
   0.09020833,
   -0.3231004};
   Double_t _fex1143[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1143[7] = {
   0.1612262,
   0.1205811,
   0.09646057,
   0.08408811,
   0.08968663,
   0.1128015,
   0.1582128};
   TGraphErrors *gre = new TGraphErrors(7,_fx1143,_fy1143,_fex1143,_fey1143);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1143 = new TH1F("Graph_Graph1143","S12S18",100,736.348,2507.002);
   Graph_Graph1143->SetMinimum(-1.231313);
   Graph_Graph1143->SetMaximum(1.24823);
   Graph_Graph1143->SetDirectory(0);
   Graph_Graph1143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1143->SetLineColor(ci);
   Graph_Graph1143->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1143->GetXaxis()->CenterTitle(true);
   Graph_Graph1143->GetXaxis()->SetLabelFont(42);
   Graph_Graph1143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1143->GetXaxis()->SetTitleFont(42);
   Graph_Graph1143->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1143->GetYaxis()->CenterTitle(true);
   Graph_Graph1143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1143->GetYaxis()->SetLabelFont(42);
   Graph_Graph1143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1143->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1143->GetYaxis()->SetTitleFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelFont(42);
   Graph_Graph1143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1143);
   
   
   TF1 *pol01144 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01144->SetFillColor(19);
   pol01144->SetFillStyle(0);
   pol01144->SetLineColor(2);
   pol01144->SetLineWidth(2);
   pol01144->SetChisquare(16.90499);
   pol01144->SetNDF(6);
   pol01144->GetXaxis()->SetLabelFont(42);
   pol01144->GetXaxis()->SetTitleOffset(1);
   pol01144->GetXaxis()->SetTitleFont(42);
   pol01144->GetYaxis()->SetLabelFont(42);
   pol01144->GetYaxis()->SetTitleFont(42);
   pol01144->SetParameter(0,0.02461032);
   pol01144->SetParError(0,0.0408586);
   pol01144->SetParLimits(0,0,0);
   pol01144->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01144);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0246
#pm0.04
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
