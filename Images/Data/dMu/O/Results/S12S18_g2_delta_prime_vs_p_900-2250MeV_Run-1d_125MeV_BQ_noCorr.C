void S12S18_g2_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.06799441,2499.5,0.06877742);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1191[11] = {
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
   Double_t _fy1191[11] = {
   0.00207807,
   0.02718634,
   0.0002639365,
   -0.0009509494,
   -0.03279337,
   0.0005933682,
   0.0009865404,
   0.01386068,
   0.00930895,
   0.01652548,
   -0.03564338};
   Double_t _fex1191[11] = {
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
   Double_t _fey1191[11] = {
   0.01928079,
   0.01696353,
   0.01536349,
   0.01447682,
   0.01372767,
   0.01375118,
   0.01333512,
   0.01388889,
   0.01402005,
   0.01469114,
   0.01493908};
   TGraphErrors *gre = new TGraphErrors(11,_fx1191,_fy1191,_fex1191,_fey1191);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1191 = new TH1F("Graph_Graph1191","S12S18_",100,812,2312);
   Graph_Graph1191->SetMinimum(-0.05431723);
   Graph_Graph1191->SetMaximum(0.05510024);
   Graph_Graph1191->SetDirectory(0);
   Graph_Graph1191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1191->SetLineColor(ci);
   Graph_Graph1191->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1191->GetXaxis()->CenterTitle(true);
   Graph_Graph1191->GetXaxis()->SetLabelFont(42);
   Graph_Graph1191->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1191->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetXaxis()->SetTitleFont(42);
   Graph_Graph1191->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1191->GetYaxis()->CenterTitle(true);
   Graph_Graph1191->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1191->GetYaxis()->SetLabelFont(42);
   Graph_Graph1191->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1191->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetYaxis()->SetTitleFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelFont(42);
   Graph_Graph1191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1191);
   
   
   TF1 *pol01192 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01192->SetFillColor(19);
   pol01192->SetFillStyle(0);
   pol01192->SetLineColor(2);
   pol01192->SetLineWidth(2);
   pol01192->SetChisquare(16.67237);
   pol01192->SetNDF(10);
   pol01192->GetXaxis()->SetLabelFont(42);
   pol01192->GetXaxis()->SetTitleOffset(1);
   pol01192->GetXaxis()->SetTitleFont(42);
   pol01192->GetYaxis()->SetLabelFont(42);
   pol01192->GetYaxis()->SetTitleFont(42);
   pol01192->SetParameter(0,-0.0006423238);
   pol01192->SetParError(0,0.004437786);
   pol01192->SetParLimits(0,0,0);
   pol01192->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01192);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00064
#pm0.004
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
