void S0_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:51:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.1177,-0.1173669,3048.889,4.201853);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1105[8] = {
   879.913,
   1123.018,
   1371.498,
   1620.743,
   1868.042,
   2116.557,
   2363.191,
   2615.094};
   Double_t _fy1105[8] = {
   1.444236,
   1.627046,
   1.917918,
   2.12621,
   1.296307,
   1.553942,
   1.308654,
   2.549299};
   Double_t _fex1105[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1105[8] = {
   0.4107929,
   0.3122026,
   0.279184,
   0.274826,
   0.297948,
   0.3656945,
   0.5157444,
   0.976506};
   TGraphErrors *gre = new TGraphErrors(8,_fx1105,_fy1105,_fex1105,_fey1105);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1105 = new TH1F("Graph_Graph1105","",100,706.3949,2788.612);
   Graph_Graph1105->SetMinimum(0.3145552);
   Graph_Graph1105->SetMaximum(3.769931);
   Graph_Graph1105->SetDirectory(0);
   Graph_Graph1105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1105->SetLineColor(ci);
   Graph_Graph1105->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1105->GetXaxis()->CenterTitle(true);
   Graph_Graph1105->GetXaxis()->SetLabelFont(42);
   Graph_Graph1105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1105->GetXaxis()->SetTitleFont(42);
   Graph_Graph1105->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1105->GetYaxis()->CenterTitle(true);
   Graph_Graph1105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1105->GetYaxis()->SetLabelFont(42);
   Graph_Graph1105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1105->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1105->GetYaxis()->SetTitleFont(42);
   Graph_Graph1105->GetZaxis()->SetLabelFont(42);
   Graph_Graph1105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1105);
   
   
   TF1 *pol01106 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01106->SetFillColor(19);
   pol01106->SetFillStyle(0);
   pol01106->SetLineColor(2);
   pol01106->SetLineWidth(2);
   pol01106->SetChisquare(6.784083);
   pol01106->SetNDF(7);
   pol01106->GetXaxis()->SetLabelFont(42);
   pol01106->GetXaxis()->SetTitleOffset(1);
   pol01106->GetXaxis()->SetTitleFont(42);
   pol01106->GetYaxis()->SetLabelFont(42);
   pol01106->GetYaxis()->SetTitleFont(42);
   pol01106->SetParameter(0,1.699308);
   pol01106->SetParError(0,0.1232732);
   pol01106->SetParLimits(0,0,0);
   pol01106->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01106);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
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
