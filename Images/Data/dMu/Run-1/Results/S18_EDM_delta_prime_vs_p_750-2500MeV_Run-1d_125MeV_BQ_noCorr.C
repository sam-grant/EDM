void S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.06456723,2843.25,0.1132992);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1087[14] = {
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
   Double_t _fy1087[14] = {
   0.01805824,
   0.02784711,
   0.02220036,
   0.02288404,
   0.03866309,
   0.0596767,
   0.01097898,
   0.03951378,
   0.04291255,
   0.05600223,
   0.07637524,
   0.02949093,
   0.05662603,
   0.03208828};
   Double_t _fex1087[14] = {
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
   Double_t _fey1087[14] = {
   0.02357775,
   0.01947332,
   0.01714292,
   0.01552079,
   0.01472477,
   0.014012,
   0.01404665,
   0.01369289,
   0.01434603,
   0.01453609,
   0.01530985,
   0.01558189,
   0.01640598,
   0.01776078};
   TGraphErrors *gre = new TGraphErrors(14,_fx1087,_fy1087,_fex1087,_fey1087);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","S18_",100,649.5,2599.5);
   Graph_Graph1087->SetMinimum(-0.04678058);
   Graph_Graph1087->SetMaximum(0.09551256);
   Graph_Graph1087->SetDirectory(0);
   Graph_Graph1087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1087->SetLineColor(ci);
   Graph_Graph1087->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1087->GetXaxis()->CenterTitle(true);
   Graph_Graph1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph1087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph1087->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1087->GetYaxis()->CenterTitle(true);
   Graph_Graph1087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph1087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph1087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1087);
   
   
   TF1 *pol01088 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01088->SetFillColor(19);
   pol01088->SetFillStyle(0);
   pol01088->SetLineColor(2);
   pol01088->SetLineWidth(2);
   pol01088->SetChisquare(18.37103);
   pol01088->SetNDF(13);
   pol01088->GetXaxis()->SetLabelFont(42);
   pol01088->GetXaxis()->SetTitleOffset(1);
   pol01088->GetXaxis()->SetTitleFont(42);
   pol01088->GetYaxis()->SetLabelFont(42);
   pol01088->GetYaxis()->SetTitleFont(42);
   pol01088->SetParameter(0,0.03964395);
   pol01088->SetParError(0,0.004190046);
   pol01088->SetParLimits(0,0,0);
   pol01088->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01088);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.04
#pm0.004
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
