void S12S18_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.085,-1.571866,2728.5,1.912629);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1107[7] = {
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597};
   Double_t _fy1107[7] = {
   0.5933274,
   0.1120047,
   -0.07172074,
   -0.06902396,
   0.1057235,
   -0.3198102,
   -0.07765982};
   Double_t _fex1107[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1107[7] = {
   0.2208519,
   0.1647599,
   0.1317235,
   0.1148804,
   0.1221092,
   0.1536063,
   0.215408};
   TGraphErrors *gre = new TGraphErrors(7,_fx1107,_fy1107,_fex1107,_fey1107);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","S12S18",100,736.4265,2507.158);
   Graph_Graph1107->SetMinimum(-1.223417);
   Graph_Graph1107->SetMaximum(1.564179);
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
   Graph_Graph1107->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
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
   
   
   TF1 *pol01108 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01108->SetFillColor(19);
   pol01108->SetFillStyle(0);
   pol01108->SetLineColor(2);
   pol01108->SetLineWidth(2);
   pol01108->SetChisquare(13.54692);
   pol01108->SetNDF(6);
   pol01108->GetXaxis()->SetLabelFont(42);
   pol01108->GetXaxis()->SetTitleOffset(1);
   pol01108->GetXaxis()->SetTitleFont(42);
   pol01108->GetYaxis()->SetLabelFont(42);
   pol01108->GetYaxis()->SetTitleFont(42);
   pol01108->SetParameter(0,-0.003762367);
   pol01108->SetParError(0,0.0557499);
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
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00376
#pm0.06
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
