void S18_g2_delta_prime_vs_p_900-2250MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.1536634,2499.5,0.1042715);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1177[11] = {
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
   Double_t _fy1177[11] = {
   -0.02469592,
   0.001597395,
   -0.04414611,
   -0.009478812,
   -0.01796778,
   0.01826587,
   0.01400819,
   0.02768331,
   0.0004635672,
   -0.0253834,
   -0.004749388};
   Double_t _fex1177[11] = {
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
   Double_t _fey1177[11] = {
   0.0375178,
   0.03308708,
   0.02986076,
   0.02830837,
   0.02701296,
   0.02710244,
   0.02646155,
   0.0276303,
   0.02802975,
   0.02951036,
   0.03013722};
   TGraphErrors *gre = new TGraphErrors(11,_fx1177,_fy1177,_fex1177,_fey1177);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","S18_",100,812,2312);
   Graph_Graph1177->SetMinimum(-0.1278699);
   Graph_Graph1177->SetMaximum(0.07847804);
   Graph_Graph1177->SetDirectory(0);
   Graph_Graph1177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1177->SetLineColor(ci);
   Graph_Graph1177->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1177->GetXaxis()->CenterTitle(true);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1177->GetYaxis()->CenterTitle(true);
   Graph_Graph1177->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1177);
   
   
   TF1 *pol01178 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01178->SetFillColor(19);
   pol01178->SetFillStyle(0);
   pol01178->SetLineColor(2);
   pol01178->SetLineWidth(2);
   pol01178->SetChisquare(5.448679);
   pol01178->SetNDF(10);
   pol01178->GetXaxis()->SetLabelFont(42);
   pol01178->GetXaxis()->SetTitleOffset(1);
   pol01178->GetXaxis()->SetTitleFont(42);
   pol01178->GetYaxis()->SetLabelFont(42);
   pol01178->GetYaxis()->SetTitleFont(42);
   pol01178->SetParameter(0,-0.004212475);
   pol01178->SetParError(0,0.008775581);
   pol01178->SetParLimits(0,0,0);
   pol01178->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01178);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0042
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
