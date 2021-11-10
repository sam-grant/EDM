void S12S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-1.51802,2655.75,0.8580539);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1137[12] = {
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
   Double_t _fy1137[12] = {
   -0.4651157,
   -0.3521557,
   -0.05597561,
   -0.169734,
   -0.01703545,
   0.0002411046,
   -0.1417513,
   -0.4092561,
   -0.2915712,
   -0.2745507,
   0.2577722,
   -0.6829471};
   Double_t _fex1137[12] = {
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
   Double_t _fey1137[12] = {
   0.2964715,
   0.2413113,
   0.2069398,
   0.1890147,
   0.1770403,
   0.1790647,
   0.1784787,
   0.1953371,
   0.2120117,
   0.2470392,
   0.2901394,
   0.3745685};
   TGraphErrors *gre = new TGraphErrors(12,_fx1137,_fy1137,_fex1137,_fey1137);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1137 = new TH1F("Graph_Graph1137","S12S18_",100,799.5,2449.5);
   Graph_Graph1137->SetMinimum(-1.280412);
   Graph_Graph1137->SetMaximum(0.6204465);
   Graph_Graph1137->SetDirectory(0);
   Graph_Graph1137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1137->SetLineColor(ci);
   Graph_Graph1137->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1137->GetXaxis()->CenterTitle(true);
   Graph_Graph1137->GetXaxis()->SetLabelFont(42);
   Graph_Graph1137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1137->GetXaxis()->SetTitleFont(42);
   Graph_Graph1137->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1137->GetYaxis()->CenterTitle(true);
   Graph_Graph1137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1137->GetYaxis()->SetLabelFont(42);
   Graph_Graph1137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1137->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1137->GetYaxis()->SetTitleFont(42);
   Graph_Graph1137->GetZaxis()->SetLabelFont(42);
   Graph_Graph1137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1137);
   
   
   TF1 *pol01138 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01138->SetFillColor(19);
   pol01138->SetFillStyle(0);
   pol01138->SetLineColor(2);
   pol01138->SetLineWidth(2);
   pol01138->SetChisquare(9.581467);
   pol01138->SetNDF(11);
   pol01138->GetXaxis()->SetLabelFont(42);
   pol01138->GetXaxis()->SetTitleOffset(1);
   pol01138->GetXaxis()->SetTitleFont(42);
   pol01138->GetYaxis()->SetLabelFont(42);
   pol01138->GetYaxis()->SetTitleFont(42);
   pol01138->SetParameter(0,-0.1777522);
   pol01138->SetParError(0,0.06223022);
   pol01138->SetParLimits(0,0,0);
   pol01138->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01138);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.18
#pm0.06
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
