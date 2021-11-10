void S12_EDM_delta_prime_vs_p_825-2375MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.2144937,2655.75,0.2249066);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1145[12] = {
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
   Double_t _fy1145[12] = {
   0.01758526,
   -0.02247815,
   0.01206428,
   -0.02862572,
   -0.09557811,
   0.01850904,
   -0.01846881,
   -0.1188271,
   0.007712939,
   -0.03616552,
   0.06898029,
   -0.03344359};
   Double_t _fex1145[12] = {
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
   Double_t _fey1145[12] = {
   0.05941138,
   0.05224258,
   0.04727634,
   0.04398997,
   0.04173698,
   0.04176009,
   0.04025059,
   0.04138125,
   0.04162108,
   0.04336358,
   0.04384121,
   0.04562816};
   TGraphErrors *gre = new TGraphErrors(12,_fx1145,_fy1145,_fex1145,_fey1145);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1145 = new TH1F("Graph_Graph1145","S12_",100,799.5,2449.5);
   Graph_Graph1145->SetMinimum(-0.1705536);
   Graph_Graph1145->SetMaximum(0.1809666);
   Graph_Graph1145->SetDirectory(0);
   Graph_Graph1145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1145->SetLineColor(ci);
   Graph_Graph1145->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1145->GetXaxis()->CenterTitle(true);
   Graph_Graph1145->GetXaxis()->SetLabelFont(42);
   Graph_Graph1145->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1145->GetXaxis()->SetTitleFont(42);
   Graph_Graph1145->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1145->GetYaxis()->CenterTitle(true);
   Graph_Graph1145->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1145->GetYaxis()->SetLabelFont(42);
   Graph_Graph1145->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1145->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1145->GetYaxis()->SetTitleFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelFont(42);
   Graph_Graph1145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1145);
   
   
   TF1 *pol01146 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01146->SetFillColor(19);
   pol01146->SetFillStyle(0);
   pol01146->SetLineColor(2);
   pol01146->SetLineWidth(2);
   pol01146->SetChisquare(15.50307);
   pol01146->SetNDF(11);
   pol01146->GetXaxis()->SetLabelFont(42);
   pol01146->GetXaxis()->SetTitleOffset(1);
   pol01146->GetXaxis()->SetTitleFont(42);
   pol01146->GetYaxis()->SetLabelFont(42);
   pol01146->GetYaxis()->SetTitleFont(42);
   pol01146->SetParameter(0,-0.02184524);
   pol01146->SetParError(0,0.01283291);
   pol01146->SetParLimits(0,0,0);
   pol01146->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01146);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.022
#pm0.01
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
