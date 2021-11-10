void S12_EDM_delta_prime_vs_p_750-2500MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.2140813,2843.25,0.08563719);
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
   -0.08273688,
   -0.02041369,
   -0.06097956,
   0.0005059371,
   -0.04988926,
   -0.02730915,
   -0.01300603,
   -0.01082924,
   -0.03391418,
   -0.006136235,
   -0.02715741,
   0.02741952,
   -0.002365789,
   -0.01642232};
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
   0.03686276,
   0.03027729,
   0.02669665,
   0.02410142,
   0.0226035,
   0.02131648,
   0.02136003,
   0.02061472,
   0.02135115,
   0.02139654,
   0.02239871,
   0.02259665,
   0.02367667,
   0.02549207};
   TGraphErrors *gre = new TGraphErrors(14,_fx1085,_fy1085,_fex1085,_fey1085);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1085 = new TH1F("Graph_Graph1085","S12_",100,649.5,2599.5);
   Graph_Graph1085->SetMinimum(-0.1841095);
   Graph_Graph1085->SetMaximum(0.05566533);
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
   Graph_Graph1085->GetYaxis()->SetTitle("#delta'_{s}^{} [mrad] / 125 MeV");
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
   pol01086->SetChisquare(14.06979);
   pol01086->SetNDF(13);
   pol01086->GetXaxis()->SetLabelFont(42);
   pol01086->GetXaxis()->SetTitleOffset(1);
   pol01086->GetXaxis()->SetTitleFont(42);
   pol01086->GetYaxis()->SetLabelFont(42);
   pol01086->GetYaxis()->SetTitleFont(42);
   pol01086->SetParameter(0,-0.01965103);
   pol01086->SetParError(0,0.006286135);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.02
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
