void S12S18_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:41:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7675,-0.03001221,3075.373,0.2701099);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1041[8] = {
   884.8685,
   1123.522,
   1363.588,
   1601.322,
   1825.172,
   2101.221,
   2411.982,
   2637.272};
   Double_t _fy1041[8] = {
   -2.157369,
   -0.427833,
   0.466635,
   1.018828,
   -1.488577,
   4.696252,
   -1.069891,
   -0.2039816};
   Double_t _fex1041[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1041[8] = {
   -0.8782261,
   -0.6204138,
   -0.5850318,
   -0.7190234,
   -1.450043,
   -6.184079,
   -2.866155,
   -1.352683};
   TGraphErrors *gre = new TGraphErrors(8,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,709.6281,2812.513);
   Graph_Graph1041->SetMinimum(0.2577525);
   Graph_Graph1041->SetMaximum(0.1200488);
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
   Graph_Graph1041->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
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
   
   
   TF1 *pol01042 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01042->SetFillColor(19);
   pol01042->SetFillStyle(0);
   pol01042->SetLineColor(2);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(31.463);
   pol01042->SetNDF(7);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,0.1042579);
   pol01042->SetParError(0,0.7495594);
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
   TLegendEntry *entry=leg->AddEntry("","Sim: trackRecoControl","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.1
#pm0.7
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
