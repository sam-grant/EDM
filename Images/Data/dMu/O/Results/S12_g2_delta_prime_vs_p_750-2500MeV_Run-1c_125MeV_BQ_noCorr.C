void S12_g2_delta_prime_vs_p_750-2500MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1857351,2843.25,0.1329969);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1079[14] = {
   812,
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
   2312,
   2437};
   Double_t _fy1079[14] = {
   -0.02975364,
   -0.01071999,
   -0.05591987,
   0.0003367091,
   0.03826506,
   0.0182756,
   0.02314371,
   -0.009111013,
   0.0688197,
   0.01451031,
   -0.008955948,
   0.05870424,
   0.007250745,
   -0.002339646};
   Double_t _fex1079[14] = {
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
   0,
   0,
   0};
   Double_t _fey1079[14] = {
   0.04513028,
   0.03691774,
   0.03236224,
   0.02938752,
   0.02751491,
   0.02592644,
   0.02602633,
   0.02507133,
   0.0258432,
   0.02597007,
   0.02711505,
   0.02746899,
   0.02869934,
   0.03100585};
   TGraphErrors *gre = new TGraphErrors(14,_fx1079,_fy1079,_fex1079,_fey1079);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1079 = new TH1F("Graph_Graph1079","S12_",100,649.5,2599.5);
   Graph_Graph1079->SetMinimum(-0.1538619);
   Graph_Graph1079->SetMaximum(0.1011237);
   Graph_Graph1079->SetDirectory(0);
   Graph_Graph1079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1079->SetLineColor(ci);
   Graph_Graph1079->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1079->GetXaxis()->CenterTitle(true);
   Graph_Graph1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph1079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph1079->GetYaxis()->SetTitle("#delta'_{c}^{} [mrad] / 125 MeV");
   Graph_Graph1079->GetYaxis()->CenterTitle(true);
   Graph_Graph1079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph1079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph1079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1079);
   
   
   TF1 *pol01080 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01080->SetFillColor(19);
   pol01080->SetFillStyle(0);
   pol01080->SetLineColor(2);
   pol01080->SetLineWidth(2);
   pol01080->SetChisquare(16.22217);
   pol01080->SetNDF(13);
   pol01080->GetXaxis()->SetLabelFont(42);
   pol01080->GetXaxis()->SetTitleOffset(1);
   pol01080->GetXaxis()->SetTitleFont(42);
   pol01080->GetYaxis()->SetLabelFont(42);
   pol01080->GetYaxis()->SetTitleFont(42);
   pol01080->SetParameter(0,0.01275168);
   pol01080->SetParError(0,0.007639837);
   pol01080->SetParLimits(0,0,0);
   pol01080->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01080);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.013
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
