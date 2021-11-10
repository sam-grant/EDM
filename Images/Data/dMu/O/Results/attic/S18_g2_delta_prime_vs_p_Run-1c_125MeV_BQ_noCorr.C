void S18_g2_delta_prime_vs_p_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 17:46:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1836509,2843.25,0.1281989);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1081[14] = {
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
   Double_t _fy1081[14] = {
   -0.027726,
   -0.02469592,
   0.001597395,
   -0.04414611,
   -0.009478812,
   -0.01796778,
   0.01826587,
   0.01400819,
   0.02768331,
   0.0004635672,
   -0.0253834,
   -0.004749388,
   0.01262453,
   -0.004503255};
   Double_t _fex1081[14] = {
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
   Double_t _fey1081[14] = {
   0.04535998,
   0.0375178,
   0.03308708,
   0.02986076,
   0.02830837,
   0.02701296,
   0.02710244,
   0.02646155,
   0.0276303,
   0.02802975,
   0.02951036,
   0.03013722,
   0.03162236,
   0.03431138};
   TGraphErrors *gre = new TGraphErrors(14,_fx1081,_fy1081,_fex1081,_fey1081);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1081 = new TH1F("Graph_Graph1081","S18_",100,649.5,2599.5);
   Graph_Graph1081->SetMinimum(-0.152466);
   Graph_Graph1081->SetMaximum(0.09701395);
   Graph_Graph1081->SetDirectory(0);
   Graph_Graph1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1081->SetLineColor(ci);
   Graph_Graph1081->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1081->GetXaxis()->CenterTitle(true);
   Graph_Graph1081->GetXaxis()->SetLabelFont(42);
   Graph_Graph1081->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetXaxis()->SetTitleFont(42);
   Graph_Graph1081->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1081->GetYaxis()->CenterTitle(true);
   Graph_Graph1081->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1081->GetYaxis()->SetLabelFont(42);
   Graph_Graph1081->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetYaxis()->SetTitleFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelFont(42);
   Graph_Graph1081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1081);
   
   
   TF1 *pol01082 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01082->SetFillColor(19);
   pol01082->SetFillStyle(0);
   pol01082->SetLineColor(2);
   pol01082->SetLineWidth(2);
   pol01082->SetChisquare(5.999217);
   pol01082->SetNDF(13);
   pol01082->GetXaxis()->SetLabelFont(42);
   pol01082->GetXaxis()->SetTitleOffset(1);
   pol01082->GetXaxis()->SetTitleFont(42);
   pol01082->GetYaxis()->SetLabelFont(42);
   pol01082->GetYaxis()->SetTitleFont(42);
   pol01082->SetParameter(0,-0.003875517);
   pol01082->SetParError(0,0.008079069);
   pol01082->SetParLimits(0,0,0);
   pol01082->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01082);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0039
#pm0.008
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
