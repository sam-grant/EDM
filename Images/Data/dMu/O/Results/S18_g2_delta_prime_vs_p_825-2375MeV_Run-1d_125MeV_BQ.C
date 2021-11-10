void S18_g2_delta_prime_vs_p_825-2375MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-2.037109,2655.75,1.641079);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1141[12] = {
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
   Double_t _fy1141[12] = {
   0.1023805,
   -0.005002349,
   0.004390607,
   -0.1841029,
   -0.7295284,
   0.0601829,
   0.1859758,
   0.2299961,
   0.2074527,
   0.8655359,
   -1.187621,
   0.4893606};
   Double_t _fex1141[12] = {
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
   Double_t _fey1141[12] = {
   0.3778394,
   0.3073378,
   0.2638772,
   0.2427128,
   0.228608,
   0.2307661,
   0.2313482,
   0.2551428,
   0.2789663,
   0.3261792,
   0.385336,
   0.4973911};
   TGraphErrors *gre = new TGraphErrors(12,_fx1141,_fy1141,_fex1141,_fey1141);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1141 = new TH1F("Graph_Graph1141","S18_",100,799.5,2449.5);
   Graph_Graph1141->SetMinimum(-1.669291);
   Graph_Graph1141->SetMaximum(1.27326);
   Graph_Graph1141->SetDirectory(0);
   Graph_Graph1141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1141->SetLineColor(ci);
   Graph_Graph1141->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1141->GetXaxis()->CenterTitle(true);
   Graph_Graph1141->GetXaxis()->SetLabelFont(42);
   Graph_Graph1141->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1141->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1141->GetXaxis()->SetTitleFont(42);
   Graph_Graph1141->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1141->GetYaxis()->CenterTitle(true);
   Graph_Graph1141->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1141->GetYaxis()->SetLabelFont(42);
   Graph_Graph1141->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1141->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1141->GetYaxis()->SetTitleFont(42);
   Graph_Graph1141->GetZaxis()->SetLabelFont(42);
   Graph_Graph1141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1141);
   
   
   TF1 *pol01142 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01142->SetFillColor(19);
   pol01142->SetFillStyle(0);
   pol01142->SetLineColor(2);
   pol01142->SetLineWidth(2);
   pol01142->SetChisquare(30.34427);
   pol01142->SetNDF(11);
   pol01142->GetXaxis()->SetLabelFont(42);
   pol01142->GetXaxis()->SetTitleOffset(1);
   pol01142->GetXaxis()->SetTitleFont(42);
   pol01142->GetYaxis()->SetLabelFont(42);
   pol01142->GetYaxis()->SetTitleFont(42);
   pol01142->SetParameter(0,-0.02234016);
   pol01142->SetParError(0,0.08060532);
   pol01142->SetParLimits(0,0,0);
   pol01142->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01142);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.022
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
