void S12_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:54:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7703,-1.536524,3047.665,1.318814);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1117[8] = {
   880.2527,
   1123.051,
   1371.173,
   1620.272,
   1866.762,
   2114.836,
   2362.621,
   2614.182};
   Double_t _fy1117[8] = {
   -0.108855,
   -0.4092729,
   0.2039286,
   -0.01899518,
   -0.4463085,
   0.3662967,
   0.1122272,
   -0.06431537};
   Double_t _fex1117[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1117[8] = {
   0.4153218,
   0.3435666,
   0.3233014,
   0.3271116,
   0.3598268,
   0.4342308,
   0.5748699,
   0.779372};
   TGraphErrors *gre = new TGraphErrors(8,_fx1117,_fy1117,_fex1117,_fey1117);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","",100,706.8598,2787.575);
   Graph_Graph1117->SetMinimum(-1.25099);
   Graph_Graph1117->SetMaximum(1.03328);
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
   Graph_Graph1117->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
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
   
   
   TF1 *pol01118 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01118->SetFillColor(19);
   pol01118->SetFillStyle(0);
   pol01118->SetLineColor(2);
   pol01118->SetLineWidth(2);
   pol01118->SetChisquare(3.929877);
   pol01118->SetNDF(7);
   pol01118->GetXaxis()->SetLabelFont(42);
   pol01118->GetXaxis()->SetTitleOffset(1);
   pol01118->GetXaxis()->SetTitleFont(42);
   pol01118->GetYaxis()->SetLabelFont(42);
   pol01118->GetYaxis()->SetTitleFont(42);
   pol01118->SetParameter(0,-0.070666);
   pol01118->SetParError(0,0.1401914);
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
   TLegendEntry *entry=leg->AddEntry("","Sim: trackTruth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.071
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
