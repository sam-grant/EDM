void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.04316215,2655.75,0.154501);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1075[12] = {
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
   Double_t _fy1075[12] = {
   0.06189029,
   0.07450924,
   0.06724944,
   0.001589816,
   0.04517964,
   0.03169131,
   0.05773454,
   0.02754824,
   0.07665979,
   0.06826909,
   0.02668262,
   0.05665149};
   Double_t _fex1075[12] = {
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
   Double_t _fey1075[12] = {
   0.02648885,
   0.02333851,
   0.02109749,
   0.01998853,
   0.01903576,
   0.01909435,
   0.01862015,
   0.01946615,
   0.0197014,
   0.0207143,
   0.02118858,
   0.02217879};
   TGraphErrors *gre = new TGraphErrors(12,_fx1075,_fy1075,_fex1075,_fey1075);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1075 = new TH1F("Graph_Graph1075","S18_",100,799.5,2449.5);
   Graph_Graph1075->SetMinimum(-0.02339584);
   Graph_Graph1075->SetMaximum(0.1347346);
   Graph_Graph1075->SetDirectory(0);
   Graph_Graph1075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1075->SetLineColor(ci);
   Graph_Graph1075->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1075->GetXaxis()->CenterTitle(true);
   Graph_Graph1075->GetXaxis()->SetLabelFont(42);
   Graph_Graph1075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetXaxis()->SetTitleFont(42);
   Graph_Graph1075->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1075->GetYaxis()->CenterTitle(true);
   Graph_Graph1075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1075->GetYaxis()->SetLabelFont(42);
   Graph_Graph1075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetYaxis()->SetTitleFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelFont(42);
   Graph_Graph1075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1075);
   
   
   TF1 *pol01076 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01076->SetFillColor(19);
   pol01076->SetFillStyle(0);
   pol01076->SetLineColor(2);
   pol01076->SetLineWidth(2);
   pol01076->SetChisquare(14.15273);
   pol01076->SetNDF(11);
   pol01076->GetXaxis()->SetLabelFont(42);
   pol01076->GetXaxis()->SetTitleOffset(1);
   pol01076->GetXaxis()->SetTitleFont(42);
   pol01076->GetYaxis()->SetLabelFont(42);
   pol01076->GetYaxis()->SetTitleFont(42);
   pol01076->SetParameter(0,0.0482952);
   pol01076->SetParError(0,0.005954532);
   pol01076->SetParLimits(0,0,0);
   pol01076->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01076);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.048
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
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
