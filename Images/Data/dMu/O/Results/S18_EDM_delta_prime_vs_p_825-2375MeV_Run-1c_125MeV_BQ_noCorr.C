void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.1177129,2655.75,0.1727114);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1171[12] = {
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
   Double_t _fy1171[12] = {
   0.02749927,
   0.009283538,
   -0.02156343,
   0.005503218,
   -0.012759,
   -0.03434157,
   -0.01791361,
   -0.03006793,
   -0.02593287,
   0.04222019,
   -0.03075241,
   0.01957218};
   Double_t _fex1171[12] = {
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
   Double_t _fey1171[12] = {
   0.04224353,
   0.03721926,
   0.03361137,
   0.03183875,
   0.03040513,
   0.03054381,
   0.0297013,
   0.03100127,
   0.03148928,
   0.03302665,
   0.03361586,
   0.03542367};
   TGraphErrors *gre = new TGraphErrors(12,_fx1171,_fy1171,_fex1171,_fey1171);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1171 = new TH1F("Graph_Graph1171","S18_",100,799.5,2449.5);
   Graph_Graph1171->SetMinimum(-0.08867043);
   Graph_Graph1171->SetMaximum(0.143669);
   Graph_Graph1171->SetDirectory(0);
   Graph_Graph1171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1171->SetLineColor(ci);
   Graph_Graph1171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1171->GetXaxis()->CenterTitle(true);
   Graph_Graph1171->GetXaxis()->SetLabelFont(42);
   Graph_Graph1171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1171->GetXaxis()->SetTitleFont(42);
   Graph_Graph1171->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1171->GetYaxis()->CenterTitle(true);
   Graph_Graph1171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1171->GetYaxis()->SetLabelFont(42);
   Graph_Graph1171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1171->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1171->GetYaxis()->SetTitleFont(42);
   Graph_Graph1171->GetZaxis()->SetLabelFont(42);
   Graph_Graph1171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1171);
   
   
   TF1 *pol01172 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01172->SetFillColor(19);
   pol01172->SetFillStyle(0);
   pol01172->SetLineColor(2);
   pol01172->SetLineWidth(2);
   pol01172->SetChisquare(6.349884);
   pol01172->SetNDF(11);
   pol01172->GetXaxis()->SetLabelFont(42);
   pol01172->GetXaxis()->SetTitleOffset(1);
   pol01172->GetXaxis()->SetTitleFont(42);
   pol01172->GetYaxis()->SetLabelFont(42);
   pol01172->GetYaxis()->SetTitleFont(42);
   pol01172->SetParameter(0,-0.008370098);
   pol01172->SetParError(0,0.009496409);
   pol01172->SetParLimits(0,0,0);
   pol01172->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01172);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0084
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
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
