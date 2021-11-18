void S12_EDM_delta_prime_vs_p_750-2500MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.04387309,2843.25,0.1143383);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1085[14] = {
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
   Double_t _fy1085[14] = {
   0.03523262,
   0.02861243,
   0.04348041,
   0.03145344,
   0.0552661,
   0.03003155,
   0.04649168,
   0.04645215,
   0.03770233,
   0.03580141,
   0.02522413,
   0.04966562,
   0.03371874,
   0.03115378};
   Double_t _fex1085[14] = {
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
   Double_t _fey1085[14] = {
   0.02301257,
   0.01888849,
   0.01664115,
   0.01502047,
   0.01407282,
   0.01327852,
   0.01329016,
   0.01281648,
   0.01322956,
   0.01330721,
   0.01388538,
   0.01404225,
   0.01468068,
   0.01581054};
   TGraphErrors *gre = new TGraphErrors(14,_fx1085,_fy1085,_fex1085,_fey1085);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1085 = new TH1F("Graph_Graph1085","S12_",100,649.5,2599.5);
   Graph_Graph1085->SetMinimum(-0.02805194);
   Graph_Graph1085->SetMaximum(0.09851718);
   Graph_Graph1085->SetDirectory(0);
   Graph_Graph1085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1085->SetLineColor(ci);
   Graph_Graph1085->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1085->GetXaxis()->CenterTitle(true);
   Graph_Graph1085->GetXaxis()->SetLabelFont(42);
   Graph_Graph1085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1085->GetXaxis()->SetTitleFont(42);
   Graph_Graph1085->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1085->GetYaxis()->CenterTitle(true);
   Graph_Graph1085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1085->GetYaxis()->SetLabelFont(42);
   Graph_Graph1085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1085->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1085->GetYaxis()->SetTitleFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelFont(42);
   Graph_Graph1085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1085);
   
   
   TF1 *pol01086 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01086->SetFillColor(19);
   pol01086->SetFillStyle(0);
   pol01086->SetLineColor(2);
   pol01086->SetLineWidth(2);
   pol01086->SetChisquare(5.08963);
   pol01086->SetNDF(13);
   pol01086->GetXaxis()->SetLabelFont(42);
   pol01086->GetXaxis()->SetTitleOffset(1);
   pol01086->GetXaxis()->SetTitleFont(42);
   pol01086->GetYaxis()->SetLabelFont(42);
   pol01086->GetYaxis()->SetTitleFont(42);
   pol01086->SetParameter(0,0.03849318);
   pol01086->SetParError(0,0.003908399);
   pol01086->SetParLimits(0,0,0);
   pol01086->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01086);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.038
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
