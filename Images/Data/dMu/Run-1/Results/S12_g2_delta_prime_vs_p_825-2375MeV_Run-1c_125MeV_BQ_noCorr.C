void S12_g2_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.08135948,2655.75,0.1421905);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1079[12] = {
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
   2312};
   Double_t _fy1079[12] = {
   0.04849444,
   0.01462698,
   0.02418636,
   0.01287343,
   -0.001875194,
   0.006331892,
   -0.03705956,
   0.003518555,
   0.005838234,
   -0.01609843,
   -0.02862264,
   0.004824578};
   Double_t _fex1079[12] = {
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
   Double_t _fey1079[12] = {
   0.0259422,
   0.02272704,
   0.02053435,
   0.01922309,
   0.01813127,
   0.01818208,
   0.01755594,
   0.01811045,
   0.01830092,
   0.01918185,
   0.01958153,
   0.02059825};
   TGraphErrors *gre = new TGraphErrors(12,_fx1079,_fy1079,_fex1079,_fey1079);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1079 = new TH1F("Graph_Graph1079","S12_",100,799.5,2449.5);
   Graph_Graph1079->SetMinimum(-0.05900448);
   Graph_Graph1079->SetMaximum(0.1198355);
   Graph_Graph1079->SetDirectory(0);
   Graph_Graph1079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1079->SetLineColor(ci);
   Graph_Graph1079->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1079->GetXaxis()->CenterTitle(true);
   Graph_Graph1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph1079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph1079->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1079->GetYaxis()->CenterTitle(true);
   Graph_Graph1079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph1079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph1079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1079);
   
   
   TF1 *pol01080 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01080->SetFillColor(19);
   pol01080->SetFillStyle(0);
   pol01080->SetLineColor(2);
   pol01080->SetLineWidth(2);
   pol01080->SetChisquare(13.36627);
   pol01080->SetNDF(11);
   pol01080->GetXaxis()->SetLabelFont(42);
   pol01080->GetXaxis()->SetTitleOffset(1);
   pol01080->GetXaxis()->SetTitleFont(42);
   pol01080->GetYaxis()->SetLabelFont(42);
   pol01080->GetYaxis()->SetTitleFont(42);
   pol01080->SetParameter(0,0.0002192256);
   pol01080->SetParError(0,0.005631828);
   pol01080->SetParLimits(0,0,0);
   pol01080->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01080);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.00022
#pm0.006
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
