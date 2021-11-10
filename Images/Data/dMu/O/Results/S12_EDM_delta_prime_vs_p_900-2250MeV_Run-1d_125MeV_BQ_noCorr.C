void S12_EDM_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.1244919,2499.5,0.08366449);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1181[11] = {
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
   Double_t _fy1181[11] = {
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
   0.02741952};
   Double_t _fex1181[11] = {
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
   Double_t _fey1181[11] = {
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
   0.02259665};
   TGraphErrors *gre = new TGraphErrors(11,_fx1181,_fy1181,_fex1181,_fey1181);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1181 = new TH1F("Graph_Graph1181","S12_",100,812,2312);
   Graph_Graph1181->SetMinimum(-0.1036762);
   Graph_Graph1181->SetMaximum(0.06284885);
   Graph_Graph1181->SetDirectory(0);
   Graph_Graph1181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1181->SetLineColor(ci);
   Graph_Graph1181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1181->GetXaxis()->CenterTitle(true);
   Graph_Graph1181->GetXaxis()->SetLabelFont(42);
   Graph_Graph1181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1181->GetXaxis()->SetTitleFont(42);
   Graph_Graph1181->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1181->GetYaxis()->CenterTitle(true);
   Graph_Graph1181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1181->GetYaxis()->SetLabelFont(42);
   Graph_Graph1181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1181->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1181->GetYaxis()->SetTitleFont(42);
   Graph_Graph1181->GetZaxis()->SetLabelFont(42);
   Graph_Graph1181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1181);
   
   
   TF1 *pol01182 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01182->SetFillColor(19);
   pol01182->SetFillStyle(0);
   pol01182->SetLineColor(2);
   pol01182->SetLineWidth(2);
   pol01182->SetChisquare(10.58667);
   pol01182->SetNDF(10);
   pol01182->GetXaxis()->SetLabelFont(42);
   pol01182->GetXaxis()->SetTitleOffset(1);
   pol01182->GetXaxis()->SetTitleFont(42);
   pol01182->GetYaxis()->SetLabelFont(42);
   pol01182->GetYaxis()->SetTitleFont(42);
   pol01182->SetParameter(0,-0.01915109);
   pol01182->SetParError(0,0.006860275);
   pol01182->SetParLimits(0,0,0);
   pol01182->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01182);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.019
#pm0.007
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
