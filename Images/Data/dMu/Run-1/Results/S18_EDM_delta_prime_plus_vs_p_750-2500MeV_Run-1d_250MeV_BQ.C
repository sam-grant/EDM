void S18_EDM_delta_prime_plus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.7396,-0.9381378,2728.088,2.210355);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1117[7] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196};
   Double_t _fy1117[7] = {
   0.3243074,
   0.392097,
   0.6049932,
   0.2899059,
   0.6152014,
   0.954933,
   0.6669242};
   Double_t _fex1117[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1117[7] = {
   0.1975959,
   0.1887334,
   0.1245873,
   0.1198403,
   0.1296766,
   0.1905727,
   0.1737025};
   TGraphErrors *gre = new TGraphErrors(7,_fx1117,_fy1117,_fex1117,_fey1117);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","S18",100,736.0744,2506.753);
   Graph_Graph1117->SetMinimum(-0.6232885);
   Graph_Graph1117->SetMaximum(1.895506);
   Graph_Graph1117->SetDirectory(0);
   Graph_Graph1117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1117->SetLineColor(ci);
   Graph_Graph1117->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1117->GetXaxis()->CenterTitle(true);
   Graph_Graph1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph1117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph1117->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1117->GetYaxis()->CenterTitle(true);
   Graph_Graph1117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph1117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1117->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph1117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1117);
   
   
   TF1 *pol01118 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01118->SetFillColor(19);
   pol01118->SetFillStyle(0);
   pol01118->SetLineColor(2);
   pol01118->SetLineWidth(2);
   pol01118->SetChisquare(12.01832);
   pol01118->SetNDF(6);
   pol01118->GetXaxis()->SetLabelFont(42);
   pol01118->GetXaxis()->SetTitleOffset(1);
   pol01118->GetXaxis()->SetTitleFont(42);
   pol01118->GetYaxis()->SetLabelFont(42);
   pol01118->GetYaxis()->SetTitleFont(42);
   pol01118->SetParameter(0,0.5309067);
   pol01118->SetParError(0,0.05699097);
   pol01118->SetParLimits(0,0,0);
   pol01118->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01118);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.531
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
