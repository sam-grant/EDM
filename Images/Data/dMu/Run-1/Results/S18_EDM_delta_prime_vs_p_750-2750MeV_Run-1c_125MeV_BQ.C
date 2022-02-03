void S18_EDM_delta_prime_vs_p_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:53:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.1055,-1.122503,3143.568,2.627497);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1027[16] = {
   815.6827,
   938.5171,
   1062.885,
   1188.2,
   1312.605,
   1435.72,
   1562.001,
   1685.025,
   1810.514,
   1934.906,
   2060.262,
   2184.773,
   2308.971,
   2433.427,
   2559.674,
   2677.991};
   Double_t _fy1027[16] = {
   0.686498,
   1.06717,
   1.127518,
   1.092819,
   0.02689619,
   0.7612871,
   0.633614,
   0.9248837,
   0.4128041,
   1.18221,
   1.117649,
   0.4357585,
   0.8901407,
   0.1078981,
   1.221867,
   0.4011686};
   Double_t _fex1027[16] = {
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
   Double_t _fey1027[16] = {
   0.5058992,
   0.4177732,
   0.3680344,
   0.3326807,
   0.3152219,
   0.3002868,
   0.3010392,
   0.293585,
   0.3069049,
   0.3106881,
   0.3264963,
   0.3339073,
   0.3495869,
   0.3762006,
   0.3957716,
   0.4334358};
   TGraphErrors *gre = new TGraphErrors(16,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","S18",100,629.4518,2864.222);
   Graph_Graph1027->SetMinimum(-0.7475027);
   Graph_Graph1027->SetMaximum(2.252497);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1027->GetXaxis()->CenterTitle(true);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1027->GetYaxis()->CenterTitle(true);
   Graph_Graph1027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   
   TF1 *pol01028 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01028->SetFillColor(19);
   pol01028->SetFillStyle(0);
   pol01028->SetLineColor(2);
   pol01028->SetLineWidth(2);
   pol01028->SetChisquare(18.91246);
   pol01028->SetNDF(15);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,0.7524973);
   pol01028->SetParError(0,0.08570917);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.75
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
