void S12_EDM_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:47:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.8932,1.006942,3046.871,2.482754);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1087[8] = {
   875.2228,
   1123.964,
   1373.246,
   1622.237,
   1870.782,
   2119.254,
   2366.86,
   2612.541};
   Double_t _fy1087[8] = {
   1.719391,
   1.485506,
   1.806205,
   1.812404,
   1.933858,
   1.42927,
   1.396878,
   2.03733};
   Double_t _fex1087[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1087[8] = {
   0.1994865,
   0.1771722,
   0.1642496,
   0.1584827,
   0.1606715,
   0.1716438,
   0.193884,
   0.2382747};
   TGraphErrors *gre = new TGraphErrors(8,_fx1087,_fy1087,_fex1087,_fey1087);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","",100,701.4909,2786.273);
   Graph_Graph1087->SetMinimum(1.154523);
   Graph_Graph1087->SetMaximum(2.335173);
   Graph_Graph1087->SetDirectory(0);
   Graph_Graph1087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1087->SetLineColor(ci);
   Graph_Graph1087->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1087->GetXaxis()->CenterTitle(true);
   Graph_Graph1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph1087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph1087->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1087->GetYaxis()->CenterTitle(true);
   Graph_Graph1087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph1087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph1087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1087);
   
   
   TF1 *pol01088 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01088->SetFillColor(19);
   pol01088->SetFillStyle(0);
   pol01088->SetLineColor(2);
   pol01088->SetLineWidth(2);
   pol01088->SetChisquare(11.45096);
   pol01088->SetNDF(7);
   pol01088->GetXaxis()->SetLabelFont(42);
   pol01088->GetXaxis()->SetTitleOffset(1);
   pol01088->GetXaxis()->SetTitleFont(42);
   pol01088->GetYaxis()->SetLabelFont(42);
   pol01088->GetYaxis()->SetTitleFont(42);
   pol01088->SetParameter(0,1.699257);
   pol01088->SetParError(0,0.06314936);
   pol01088->SetParLimits(0,0,0);
   pol01088->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01088);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackReco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
