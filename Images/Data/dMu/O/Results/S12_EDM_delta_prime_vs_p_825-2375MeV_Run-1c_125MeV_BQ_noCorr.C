void S12_EDM_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.1405787,2655.75,0.1499479);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1169[12] = {
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
   Double_t _fy1169[12] = {
   0.002817895,
   0.07539597,
   0.01229585,
   -0.0373263,
   -0.00114078,
   -0.03150394,
   0.03716419,
   -0.05444756,
   0.01805247,
   -0.03442794,
   -0.02291435,
   0.01667662};
   Double_t _fex1169[12] = {
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
   Double_t _fey1169[12] = {
   0.04157962,
   0.03639939,
   0.03302736,
   0.03087898,
   0.02913559,
   0.02930354,
   0.02822112,
   0.02905006,
   0.02921451,
   0.03050803,
   0.03102217,
   0.03234425};
   TGraphErrors *gre = new TGraphErrors(12,_fx1169,_fy1169,_fex1169,_fey1169);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1169 = new TH1F("Graph_Graph1169","S12_",100,799.5,2449.5);
   Graph_Graph1169->SetMinimum(-0.1115261);
   Graph_Graph1169->SetMaximum(0.1208952);
   Graph_Graph1169->SetDirectory(0);
   Graph_Graph1169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1169->SetLineColor(ci);
   Graph_Graph1169->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1169->GetXaxis()->CenterTitle(true);
   Graph_Graph1169->GetXaxis()->SetLabelFont(42);
   Graph_Graph1169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1169->GetXaxis()->SetTitleFont(42);
   Graph_Graph1169->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1169->GetYaxis()->CenterTitle(true);
   Graph_Graph1169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1169->GetYaxis()->SetLabelFont(42);
   Graph_Graph1169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1169->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1169->GetYaxis()->SetTitleFont(42);
   Graph_Graph1169->GetZaxis()->SetLabelFont(42);
   Graph_Graph1169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1169);
   
   
   TF1 *pol01170 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01170->SetFillColor(19);
   pol01170->SetFillStyle(0);
   pol01170->SetLineColor(2);
   pol01170->SetLineWidth(2);
   pol01170->SetChisquare(14.57176);
   pol01170->SetNDF(11);
   pol01170->GetXaxis()->SetLabelFont(42);
   pol01170->GetXaxis()->SetTitleOffset(1);
   pol01170->GetXaxis()->SetTitleFont(42);
   pol01170->GetYaxis()->SetLabelFont(42);
   pol01170->GetYaxis()->SetTitleFont(42);
   pol01170->SetParameter(0,-0.003970863);
   pol01170->SetParError(0,0.00900832);
   pol01170->SetParLimits(0,0,0);
   pol01170->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01170);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.004
#pm0.009
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
