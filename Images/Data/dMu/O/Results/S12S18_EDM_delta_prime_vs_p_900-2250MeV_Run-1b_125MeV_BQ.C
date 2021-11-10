void S12S18_EDM_delta_prime_vs_p_900-2250MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-2.172499,2499.5,1.451045);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1113[11] = {
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
   2187};
   Double_t _fy1113[11] = {
   -0.4564846,
   0.09153513,
   0.6600644,
   -0.09643165,
   -0.004532881,
   -0.3703128,
   0.007202596,
   0.347959,
   -0.01405434,
   -0.2638611,
   0.01140171};
   Double_t _fex1113[11] = {
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
   Double_t _fey1113[11] = {
   0.4922401,
   0.4010124,
   0.3429011,
   0.3121479,
   0.2935149,
   0.2952725,
   0.2945324,
   0.3204402,
   0.3484035,
   0.4055266,
   0.4768132};
   TGraphErrors *gre = new TGraphErrors(11,_fx1113,_fy1113,_fex1113,_fey1113);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1113 = new TH1F("Graph_Graph1113","S12S18_",100,812,2312);
   Graph_Graph1113->SetMinimum(-1.810145);
   Graph_Graph1113->SetMaximum(1.088691);
   Graph_Graph1113->SetDirectory(0);
   Graph_Graph1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1113->SetLineColor(ci);
   Graph_Graph1113->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1113->GetXaxis()->CenterTitle(true);
   Graph_Graph1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph1113->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph1113->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1113->GetYaxis()->CenterTitle(true);
   Graph_Graph1113->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph1113->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph1113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1113);
   
   
   TF1 *pol01114 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01114->SetFillColor(19);
   pol01114->SetFillStyle(0);
   pol01114->SetLineColor(2);
   pol01114->SetLineWidth(2);
   pol01114->SetChisquare(7.8842);
   pol01114->SetNDF(10);
   pol01114->GetXaxis()->SetLabelFont(42);
   pol01114->GetXaxis()->SetTitleOffset(1);
   pol01114->GetXaxis()->SetTitleFont(42);
   pol01114->GetYaxis()->SetLabelFont(42);
   pol01114->GetYaxis()->SetTitleFont(42);
   pol01114->SetParameter(0,0.008796945);
   pol01114->SetParError(0,0.1041584);
   pol01114->SetParLimits(0,0,0);
   pol01114->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01114);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0088
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
