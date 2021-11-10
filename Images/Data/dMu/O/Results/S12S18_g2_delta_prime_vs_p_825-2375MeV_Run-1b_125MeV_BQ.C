void S12S18_g2_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-1.333247,2655.75,2.061582);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1119[12] = {
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
   Double_t _fy1119[12] = {
   0.5166218,
   0.05728228,
   -0.1196289,
   0.2242302,
   0.3251345,
   0.07516199,
   -0.338293,
   -0.1792185,
   0.1455898,
   -0.1299472,
   -0.1414091,
   -0.3123169};
   Double_t _fex1119[12] = {
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
   Double_t _fey1119[12] = {
   0.4383553,
   0.3562979,
   0.3052359,
   0.2782504,
   0.2608857,
   0.2624856,
   0.261543,
   0.2854128,
   0.3107105,
   0.3616139,
   0.4239063,
   0.5451581};
   TGraphErrors *gre = new TGraphErrors(12,_fx1119,_fy1119,_fex1119,_fey1119);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1119 = new TH1F("Graph_Graph1119","S12S18_",100,799.5,2449.5);
   Graph_Graph1119->SetMinimum(-0.9937645);
   Graph_Graph1119->SetMaximum(1.722099);
   Graph_Graph1119->SetDirectory(0);
   Graph_Graph1119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1119->SetLineColor(ci);
   Graph_Graph1119->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1119->GetXaxis()->CenterTitle(true);
   Graph_Graph1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph1119->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph1119->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1119->GetYaxis()->CenterTitle(true);
   Graph_Graph1119->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph1119->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1119->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph1119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1119);
   
   
   TF1 *pol01120 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01120->SetFillColor(19);
   pol01120->SetFillStyle(0);
   pol01120->SetLineColor(2);
   pol01120->SetLineWidth(2);
   pol01120->SetChisquare(6.669873);
   pol01120->SetNDF(11);
   pol01120->GetXaxis()->SetLabelFont(42);
   pol01120->GetXaxis()->SetTitleOffset(1);
   pol01120->GetXaxis()->SetTitleFont(42);
   pol01120->GetYaxis()->SetLabelFont(42);
   pol01120->GetYaxis()->SetTitleFont(42);
   pol01120->SetParameter(0,0.0179591);
   pol01120->SetParError(0,0.09137572);
   pol01120->SetParLimits(0,0,0);
   pol01120->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01120);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.018
#pm0.09
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
