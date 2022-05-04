void S12_EDM_delta_prime_plus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.2849,-0.8578065,2728.515,1.837653);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1111[7] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644};
   Double_t _fy1111[7] = {
   0.3318482,
   0.4821783,
   0.4528952,
   0.4829293,
   0.4683571,
   0.5893876,
   0.6066514};
   Double_t _fex1111[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1111[7] = {
   0.1701087,
   0.1463704,
   0.1051854,
   0.09939837,
   0.1245053,
   0.1657468,
   0.211456};
   TGraphErrors *gre = new TGraphErrors(7,_fx1111,_fy1111,_fex1111,_fey1111);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1111 = new TH1F("Graph_Graph1111","S12",100,736.608,2507.192);
   Graph_Graph1111->SetMinimum(-0.5882605);
   Graph_Graph1111->SetMaximum(1.568107);
   Graph_Graph1111->SetDirectory(0);
   Graph_Graph1111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1111->SetLineColor(ci);
   Graph_Graph1111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1111->GetXaxis()->CenterTitle(true);
   Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph1111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph1111->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1111->GetYaxis()->CenterTitle(true);
   Graph_Graph1111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph1111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1111->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph1111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1111);
   
   
   TF1 *pol01112 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01112->SetFillColor(19);
   pol01112->SetFillStyle(0);
   pol01112->SetLineColor(2);
   pol01112->SetLineWidth(2);
   pol01112->SetChisquare(1.625943);
   pol01112->SetNDF(6);
   pol01112->GetXaxis()->SetLabelFont(42);
   pol01112->GetXaxis()->SetTitleOffset(1);
   pol01112->GetXaxis()->SetTitleFont(42);
   pol01112->GetYaxis()->SetLabelFont(42);
   pol01112->GetYaxis()->SetTitleFont(42);
   pol01112->SetParameter(0,0.4772021);
   pol01112->SetParError(0,0.05024514);
   pol01112->SetParLimits(0,0,0);
   pol01112->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01112);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.477
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
