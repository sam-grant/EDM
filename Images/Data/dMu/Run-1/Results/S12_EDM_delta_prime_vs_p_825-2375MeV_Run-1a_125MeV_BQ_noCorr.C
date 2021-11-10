void S12_EDM_delta_prime_vs_p_825-2375MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.05167081,2655.75,0.2291749);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1049[12] = {
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
   Double_t _fy1049[12] = {
   0.09840153,
   0.03006057,
   0.03670997,
   0.07902868,
   0.05765398,
   0.06210012,
   0.03359725,
   0.01889163,
   0.02151322,
   0.04071403,
   0.01055524,
   0.02123452};
   Double_t _fex1049[12] = {
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
   Double_t _fey1049[12] = {
   0.03734139,
   0.03282074,
   0.02953832,
   0.02756743,
   0.02612152,
   0.02605292,
   0.02508025,
   0.02588927,
   0.02588472,
   0.02698183,
   0.02731318,
   0.02844495};
   TGraphErrors *gre = new TGraphErrors(12,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","S12_",100,799.5,2449.5);
   Graph_Graph1049->SetMinimum(-0.02358624);
   Graph_Graph1049->SetMaximum(0.2010904);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1049->GetXaxis()->CenterTitle(true);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1049->GetYaxis()->CenterTitle(true);
   Graph_Graph1049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   
   TF1 *pol01050 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01050->SetFillColor(19);
   pol01050->SetFillStyle(0);
   pol01050->SetLineColor(2);
   pol01050->SetLineWidth(2);
   pol01050->SetChisquare(8.565148);
   pol01050->SetNDF(11);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,0.04049642);
   pol01050->SetParError(0,0.008013982);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.04
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
