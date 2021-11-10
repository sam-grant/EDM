void S18_g2_delta_prime_vs_p_825-2375MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.2281135,2655.75,0.1832359);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1153[12] = {
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
   Double_t _fy1153[12] = {
   -0.04023285,
   -0.0534868,
   0.08889733,
   -0.02398247,
   0.04465899,
   -0.0320729,
   0.02989552,
   0.005781798,
   0.03882598,
   0.02215613,
   0.02372424,
   -0.03873032};
   Double_t _fex1153[12] = {
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
   Double_t _fey1153[12] = {
   0.05336207,
   0.04693365,
   0.04256289,
   0.04017483,
   0.03825829,
   0.03826339,
   0.03729798,
   0.03883369,
   0.03935893,
   0.04141934,
   0.04188742,
   0.04426422};
   TGraphErrors *gre = new TGraphErrors(12,_fx1153,_fy1153,_fex1153,_fey1153);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1153 = new TH1F("Graph_Graph1153","S18_",100,799.5,2449.5);
   Graph_Graph1153->SetMinimum(-0.1869785);
   Graph_Graph1153->SetMaximum(0.1421009);
   Graph_Graph1153->SetDirectory(0);
   Graph_Graph1153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1153->SetLineColor(ci);
   Graph_Graph1153->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1153->GetXaxis()->CenterTitle(true);
   Graph_Graph1153->GetXaxis()->SetLabelFont(42);
   Graph_Graph1153->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1153->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1153->GetXaxis()->SetTitleFont(42);
   Graph_Graph1153->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1153->GetYaxis()->CenterTitle(true);
   Graph_Graph1153->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1153->GetYaxis()->SetLabelFont(42);
   Graph_Graph1153->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1153->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1153->GetYaxis()->SetTitleFont(42);
   Graph_Graph1153->GetZaxis()->SetLabelFont(42);
   Graph_Graph1153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1153);
   
   
   TF1 *pol01154 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01154->SetFillColor(19);
   pol01154->SetFillStyle(0);
   pol01154->SetLineColor(2);
   pol01154->SetLineWidth(2);
   pol01154->SetChisquare(11.12421);
   pol01154->SetNDF(11);
   pol01154->GetXaxis()->SetLabelFont(42);
   pol01154->GetXaxis()->SetTitleOffset(1);
   pol01154->GetXaxis()->SetTitleFont(42);
   pol01154->GetYaxis()->SetLabelFont(42);
   pol01154->GetYaxis()->SetTitleFont(42);
   pol01154->SetParameter(0,0.008738345);
   pol01154->SetParError(0,0.01192367);
   pol01154->SetParLimits(0,0,0);
   pol01154->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01154);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0087
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
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
