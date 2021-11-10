void S12S18_EDM_delta_prime_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 17:46:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-2.170793,2843.25,1.612003);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1029[14] = {
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
   Double_t _fy1029[14] = {
   -0.2793949,
   0.2017258,
   0.546178,
   -0.05111747,
   -0.1951143,
   -0.07769596,
   -0.3791968,
   0.1339701,
   -0.5359655,
   -0.02946702,
   0.004845226,
   -0.4657075,
   0.3814044,
   -0.4607736};
   Double_t _fex1029[14] = {
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
   Double_t _fey1029[14] = {
   0.5502248,
   0.4049983,
   0.3285919,
   0.2819834,
   0.2571378,
   0.2412808,
   0.2444932,
   0.2432392,
   0.264818,
   0.2882137,
   0.3350372,
   0.3945109,
   0.5081423,
   0.7467184};
   TGraphErrors *gre = new TGraphErrors(14,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","S12S18_",100,649.5,2599.5);
   Graph_Graph1029->SetMinimum(-1.792513);
   Graph_Graph1029->SetMaximum(1.233723);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1029->GetXaxis()->CenterTitle(true);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1029->GetYaxis()->CenterTitle(true);
   Graph_Graph1029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *pol01030 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01030->SetFillColor(19);
   pol01030->SetFillStyle(0);
   pol01030->SetLineColor(2);
   pol01030->SetLineWidth(2);
   pol01030->SetChisquare(11.78971);
   pol01030->SetNDF(13);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,-0.09647678);
   pol01030->SetParError(0,0.08319832);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.096
#pm0.08
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
