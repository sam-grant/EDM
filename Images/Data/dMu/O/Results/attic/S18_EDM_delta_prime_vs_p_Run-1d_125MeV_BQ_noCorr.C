void S18_EDM_delta_prime_vs_p_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 17:46:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1526277,2843.25,0.1063256);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1087[14] = {
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
   Double_t _fy1087[14] = {
   -0.02315107,
   -0.04874015,
   0.007438034,
   -0.01012589,
   0.02393875,
   0.02724898,
   0.01467536,
   -0.01322302,
   -0.03139649,
   -0.03987788,
   -0.008400007,
   -0.0002730862,
   -0.06918056,
   -0.03009295};
   Double_t _fex1087[14] = {
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
   Double_t _fey1087[14] = {
   0.03766594,
   0.03109656,
   0.02736926,
   0.02481281,
   0.02351051,
   0.02238099,
   0.02248709,
   0.02190235,
   0.02296244,
   0.02328545,
   0.0244794,
   0.02501238,
   0.02633441,
   0.02839551};
   TGraphErrors *gre = new TGraphErrors(14,_fx1087,_fy1087,_fex1087,_fey1087);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","S18_",100,649.5,2599.5);
   Graph_Graph1087->SetMinimum(-0.1267324);
   Graph_Graph1087->SetMaximum(0.08043026);
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
   Graph_Graph1087->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
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
   
   
   TF1 *pol01088 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01088->SetFillColor(19);
   pol01088->SetFillStyle(0);
   pol01088->SetLineColor(2);
   pol01088->SetLineWidth(2);
   pol01088->SetChisquare(16.32185);
   pol01088->SetNDF(13);
   pol01088->GetXaxis()->SetLabelFont(42);
   pol01088->GetXaxis()->SetTitleOffset(1);
   pol01088->GetXaxis()->SetTitleFont(42);
   pol01088->GetYaxis()->SetLabelFont(42);
   pol01088->GetYaxis()->SetTitleFont(42);
   pol01088->SetParameter(0,-0.01162365);
   pol01088->SetParError(0,0.006703095);
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
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.012
#pm0.007
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
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
