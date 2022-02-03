void S12_g2_delta_prime_vs_p_750-2750MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:54:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.1915,-1.834745,3144.996,1.915255);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1043[16] = {
   815.9922,
   938.5583,
   1062.66,
   1188.291,
   1312.787,
   1435.903,
   1561.974,
   1685.264,
   1810.607,
   1935.13,
   2060.293,
   2185.026,
   2309.146,
   2432.958,
   2559.535,
   2679.195};
   Double_t _fy1043[16] = {
   0.5526183,
   -0.06286163,
   0.371444,
   -0.009837279,
   0.4197098,
   0.1833686,
   -0.3243777,
   0.3073583,
   -0.03876943,
   -0.1510344,
   -0.126655,
   -0.06306276,
   -0.3113385,
   -0.7127562,
   -0.5515413,
   0.3063946};
   Double_t _fex1043[16] = {
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
   0,
   0,
   0};
   Double_t _fey1043[16] = {
   0.2519888,
   0.2101459,
   0.1883098,
   0.1735431,
   0.1667405,
   0.1619776,
   0.1675657,
   0.1680501,
   0.1818233,
   0.1923534,
   0.213448,
   0.2310102,
   0.2626642,
   0.3115751,
   0.3746911,
   0.4627083};
   TGraphErrors *gre = new TGraphErrors(16,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","S12",100,629.672,2865.515);
   Graph_Graph1043->SetMinimum(-1.459745);
   Graph_Graph1043->SetMaximum(1.540255);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1043->GetXaxis()->CenterTitle(true);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1043->GetYaxis()->CenterTitle(true);
   Graph_Graph1043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *pol01044 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01044->SetFillColor(19);
   pol01044->SetFillStyle(0);
   pol01044->SetLineColor(2);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(33.21996);
   pol01044->SetNDF(15);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,0.04025537);
   pol01044->SetParError(0,0.0513357);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.04
#pm0.05
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
