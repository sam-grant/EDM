void S12_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:40:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.213,-1.747143,3076.421,0.1716368);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1037[8] = {
   884.581,
   1123.521,
   1363.535,
   1601.503,
   1825.269,
   2100.54,
   2414.205,
   2638.053};
   Double_t _fy1037[8] = {
   -3.500509,
   -0.6690413,
   0.8524316,
   0.8477748,
   -3.443699,
   1.813141,
   0.2587738,
   2.692235};
   Double_t _fex1037[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[8] = {
   -2.538026,
   -0.9511628,
   -0.6981383,
   -0.7732228,
   -1.510747,
   -6.823266,
   -4.766373,
   -5.166834};
   TGraphErrors *gre = new TGraphErrors(8,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,709.2338,2813.4);
   Graph_Graph1037->SetMinimum(-1.555265);
   Graph_Graph1037->SetMaximum(-0.02024126);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1037->GetXaxis()->CenterTitle(true);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1037->GetYaxis()->CenterTitle(true);
   Graph_Graph1037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   
   TF1 *pol01038 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01038->SetFillColor(19);
   pol01038->SetFillStyle(0);
   pol01038->SetLineColor(2);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(36.44318);
   pol01038->SetNDF(7);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,-0.1436116);
   pol01038->SetParError(0,0.8067038);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.14
#pm0.8
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
