void S12S18_g2_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.1106311,2655.75,0.09375999);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1179[12] = {
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
   Double_t _fy1179[12] = {
   -0.01782383,
   -0.02784241,
   -0.02142865,
   0.01530861,
   0.0007763859,
   0.02096064,
   0.001694696,
   0.04972687,
   0.008066557,
   -0.01656633,
   0.03032232,
   0.009508586};
   Double_t _fex1179[12] = {
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
   Double_t _fey1179[12] = {
   0.0263157,
   0.02313646,
   0.02094642,
   0.01973163,
   0.01870571,
   0.01877303,
   0.01820031,
   0.01887521,
   0.01905169,
   0.01996747,
   0.02030326,
   0.0212542};
   TGraphErrors *gre = new TGraphErrors(12,_fx1179,_fy1179,_fex1179,_fey1179);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1179 = new TH1F("Graph_Graph1179","S12S18_",100,799.5,2449.5);
   Graph_Graph1179->SetMinimum(-0.09019201);
   Graph_Graph1179->SetMaximum(0.07332088);
   Graph_Graph1179->SetDirectory(0);
   Graph_Graph1179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1179->SetLineColor(ci);
   Graph_Graph1179->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1179->GetXaxis()->CenterTitle(true);
   Graph_Graph1179->GetXaxis()->SetLabelFont(42);
   Graph_Graph1179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1179->GetXaxis()->SetTitleFont(42);
   Graph_Graph1179->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1179->GetYaxis()->CenterTitle(true);
   Graph_Graph1179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1179->GetYaxis()->SetLabelFont(42);
   Graph_Graph1179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1179->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1179->GetYaxis()->SetTitleFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelFont(42);
   Graph_Graph1179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1179);
   
   
   TF1 *pol01180 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01180->SetFillColor(19);
   pol01180->SetFillStyle(0);
   pol01180->SetLineColor(2);
   pol01180->SetLineWidth(2);
   pol01180->SetChisquare(13.77393);
   pol01180->SetNDF(11);
   pol01180->GetXaxis()->SetLabelFont(42);
   pol01180->GetXaxis()->SetTitleOffset(1);
   pol01180->GetXaxis()->SetTitleFont(42);
   pol01180->GetYaxis()->SetLabelFont(42);
   pol01180->GetYaxis()->SetTitleFont(42);
   pol01180->SetParameter(0,0.006570992);
   pol01180->SetParError(0,0.005813989);
   pol01180->SetParLimits(0,0,0);
   pol01180->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01180);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0066
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
