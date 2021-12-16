void S18_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.7696,-0.5641383,3045.623,0.06455422);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1059[8] = {
   884.0785,
   1126.173,
   1373.702,
   1622.569,
   1870.669,
   2119.017,
   2366.486,
   2613.314};
   Double_t _fy1059[8] = {
   0.05959071,
   -0.100073,
   -0.0006587939,
   -0.08598281,
   0.2880831,
   -0.3518679,
   -0.903742,
   -0.6498317};
   Double_t _fex1059[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1059[8] = {
   -0.4682957,
   -0.3130859,
   -0.2528257,
   -0.2289463,
   -0.2291185,
   -0.256142,
   -0.3219784,
   -0.4948917};
   TGraphErrors *gre = new TGraphErrors(8,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","",100,711.1549,2786.238);
   Graph_Graph1059->SetMinimum(-0.5012691);
   Graph_Graph1059->SetMaximum(0.001684959);
   Graph_Graph1059->SetDirectory(0);
   Graph_Graph1059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1059->SetLineColor(ci);
   Graph_Graph1059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1059->GetXaxis()->CenterTitle(true);
   Graph_Graph1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph1059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph1059->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1059->GetYaxis()->CenterTitle(true);
   Graph_Graph1059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph1059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph1059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1059);
   
   
   TF1 *pol01060 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01060->SetFillColor(19);
   pol01060->SetFillStyle(0);
   pol01060->SetLineColor(2);
   pol01060->SetLineWidth(2);
   pol01060->SetChisquare(1.086391);
   pol01060->SetNDF(7);
   pol01060->GetXaxis()->SetLabelFont(42);
   pol01060->GetXaxis()->SetTitleOffset(1);
   pol01060->GetXaxis()->SetTitleFont(42);
   pol01060->GetYaxis()->SetLabelFont(42);
   pol01060->GetYaxis()->SetTitleFont(42);
   pol01060->SetParameter(0,-0.2180603);
   pol01060->SetParError(0,0.1392833);
   pol01060->SetParLimits(0,0,0);
   pol01060->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01060);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.22
#pm0.1
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
