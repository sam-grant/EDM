void S12S18_g2_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.06196072,2655.75,0.1043833);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1071[12] = {
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
   Double_t _fy1071[12] = {
   0.02578385,
   -0.009512193,
   -0.02292978,
   0.004995031,
   0.003716951,
   0.01228303,
   0.0191494,
   -0.0240339,
   -0.02145969,
   -0.01704372,
   -0.002168372,
   0.0007617967};
   Double_t _fex1071[12] = {
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
   Double_t _fey1071[12] = {
   0.02253275,
   0.01985582,
   0.01791723,
   0.01680573,
   0.01597003,
   0.01592627,
   0.01547295,
   0.01607053,
   0.01627425,
   0.01712712,
   0.01752748,
   0.01845218};
   TGraphErrors *gre = new TGraphErrors(12,_fx1071,_fy1071,_fex1071,_fey1071);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1071 = new TH1F("Graph_Graph1071","S12S18_",100,799.5,2449.5);
   Graph_Graph1071->SetMinimum(-0.04532632);
   Graph_Graph1071->SetMaximum(0.08774893);
   Graph_Graph1071->SetDirectory(0);
   Graph_Graph1071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1071->SetLineColor(ci);
   Graph_Graph1071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1071->GetXaxis()->CenterTitle(true);
   Graph_Graph1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph1071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph1071->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1071->GetYaxis()->CenterTitle(true);
   Graph_Graph1071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph1071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1071->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph1071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1071);
   
   
   TF1 *pol01072 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01072->SetFillColor(19);
   pol01072->SetFillStyle(0);
   pol01072->SetLineColor(2);
   pol01072->SetLineWidth(2);
   pol01072->SetChisquare(10.06575);
   pol01072->SetNDF(11);
   pol01072->GetXaxis()->SetLabelFont(42);
   pol01072->GetXaxis()->SetTitleOffset(1);
   pol01072->GetXaxis()->SetTitleFont(42);
   pol01072->GetYaxis()->SetLabelFont(42);
   pol01072->GetYaxis()->SetTitleFont(42);
   pol01072->SetParameter(0,-0.002993974);
   pol01072->SetParError(0,0.004972057);
   pol01072->SetParLimits(0,0,0);
   pol01072->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01072);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.003
#pm0.005
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
