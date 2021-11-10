void S18_g2_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.06833542,2499.5,0.09554294);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1093[11] = {
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
   Double_t _fy1093[11] = {
   0.02571151,
   0.002253736,
   0.007477001,
   -0.009200799,
   -0.008150576,
   0.01216526,
   0.00413064,
   -0.02105223,
   -0.03369399,
   0.02042469,
   0.016379};
   Double_t _fex1093[11] = {
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
   Double_t _fey1093[11] = {
   0.01943403,
   0.01709563,
   0.01544861,
   0.01466259,
   0.01395819,
   0.01400539,
   0.01365995,
   0.01436495,
   0.01460288,
   0.01544787,
   0.01590071};
   TGraphErrors *gre = new TGraphErrors(11,_fx1093,_fy1093,_fex1093,_fey1093);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1093 = new TH1F("Graph_Graph1093","S18_",100,812,2312);
   Graph_Graph1093->SetMinimum(-0.05194758);
   Graph_Graph1093->SetMaximum(0.0791551);
   Graph_Graph1093->SetDirectory(0);
   Graph_Graph1093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1093->SetLineColor(ci);
   Graph_Graph1093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1093->GetXaxis()->CenterTitle(true);
   Graph_Graph1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph1093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph1093->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1093->GetYaxis()->CenterTitle(true);
   Graph_Graph1093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph1093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1093->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1093);
   
   
   TF1 *pol01094 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01094->SetFillColor(19);
   pol01094->SetFillStyle(0);
   pol01094->SetLineColor(2);
   pol01094->SetLineWidth(2);
   pol01094->SetChisquare(13.8633);
   pol01094->SetNDF(10);
   pol01094->GetXaxis()->SetLabelFont(42);
   pol01094->GetXaxis()->SetTitleOffset(1);
   pol01094->GetXaxis()->SetTitleFont(42);
   pol01094->GetYaxis()->SetLabelFont(42);
   pol01094->GetYaxis()->SetTitleFont(42);
   pol01094->SetParameter(0,-6.251644e-05);
   pol01094->SetParError(0,0.004555728);
   pol01094->SetParLimits(0,0,0);
   pol01094->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01094);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -6.3e-05
#pm0.005
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
