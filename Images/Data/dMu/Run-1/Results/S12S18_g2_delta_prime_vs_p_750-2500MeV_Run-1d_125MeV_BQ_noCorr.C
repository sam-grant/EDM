void S12S18_g2_delta_prime_vs_p_750-2500MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:06:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.05285163,2843.25,0.09835738);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1095[14] = {
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
   Double_t _fy1095[14] = {
   0.03805121,
   0.01032208,
   0.01917957,
   0.004552582,
   0.01576655,
   0.005527849,
   -0.006112779,
   0.01643569,
   -0.009486165,
   -0.0196371,
   0.00599614,
   0.006725321,
   -0.007848578,
   -0.02234743};
   Double_t _fex1095[14] = {
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
   Double_t _fey1095[14] = {
   0.01643101,
   0.01353187,
   0.01190265,
   0.01074309,
   0.01012794,
   0.009599661,
   0.009617961,
   0.009335091,
   0.009741136,
   0.009856664,
   0.01038332,
   0.01061176,
   0.01123605,
   0.01230663};
   TGraphErrors *gre = new TGraphErrors(14,_fx1095,_fy1095,_fex1095,_fey1095);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1095 = new TH1F("Graph_Graph1095","S12S18_",100,649.5,2599.5);
   Graph_Graph1095->SetMinimum(-0.03773072);
   Graph_Graph1095->SetMaximum(0.08323648);
   Graph_Graph1095->SetDirectory(0);
   Graph_Graph1095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1095->SetLineColor(ci);
   Graph_Graph1095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1095->GetXaxis()->CenterTitle(true);
   Graph_Graph1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph1095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph1095->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1095->GetYaxis()->CenterTitle(true);
   Graph_Graph1095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph1095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1095->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1095);
   
   
   TF1 *pol01096 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01096->SetFillColor(19);
   pol01096->SetFillStyle(0);
   pol01096->SetLineColor(2);
   pol01096->SetLineWidth(2);
   pol01096->SetChisquare(23.61575);
   pol01096->SetNDF(13);
   pol01096->GetXaxis()->SetLabelFont(42);
   pol01096->GetXaxis()->SetTitleOffset(1);
   pol01096->GetXaxis()->SetTitleFont(42);
   pol01096->GetYaxis()->SetLabelFont(42);
   pol01096->GetYaxis()->SetTitleFont(42);
   pol01096->SetParameter(0,0.002571443);
   pol01096->SetParError(0,0.002871423);
   pol01096->SetParLimits(0,0,0);
   pol01096->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01096);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0026
#pm0.003
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
