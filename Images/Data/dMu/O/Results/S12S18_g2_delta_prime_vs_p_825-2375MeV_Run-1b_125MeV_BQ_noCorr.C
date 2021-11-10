void S12S18_g2_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.07869852,2655.75,0.1487569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1167[12] = {
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
   Double_t _fy1167[12] = {
   0.03780283,
   0.004536717,
   -0.009994451,
   0.01933039,
   0.0283482,
   0.006500795,
   -0.02845442,
   -0.01434698,
   0.01081939,
   -0.008692868,
   -0.008172424,
   -0.01468175};
   Double_t _fex1167[12] = {
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
   Double_t _fey1167[12] = {
   0.03207583,
   0.02821855,
   0.02550107,
   0.02398735,
   0.0227464,
   0.0227025,
   0.02199884,
   0.02284815,
   0.0230902,
   0.0241903,
   0.02449871,
   0.02562742};
   TGraphErrors *gre = new TGraphErrors(12,_fx1167,_fy1167,_fex1167,_fey1167);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1167 = new TH1F("Graph_Graph1167","S12S18_",100,799.5,2449.5);
   Graph_Graph1167->SetMinimum(-0.05595297);
   Graph_Graph1167->SetMaximum(0.1260114);
   Graph_Graph1167->SetDirectory(0);
   Graph_Graph1167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1167->SetLineColor(ci);
   Graph_Graph1167->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1167->GetXaxis()->CenterTitle(true);
   Graph_Graph1167->GetXaxis()->SetLabelFont(42);
   Graph_Graph1167->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1167->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1167->GetXaxis()->SetTitleFont(42);
   Graph_Graph1167->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1167->GetYaxis()->CenterTitle(true);
   Graph_Graph1167->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1167->GetYaxis()->SetLabelFont(42);
   Graph_Graph1167->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1167->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1167->GetYaxis()->SetTitleFont(42);
   Graph_Graph1167->GetZaxis()->SetLabelFont(42);
   Graph_Graph1167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1167);
   
   
   TF1 *pol01168 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01168->SetFillColor(19);
   pol01168->SetFillStyle(0);
   pol01168->SetLineColor(2);
   pol01168->SetLineWidth(2);
   pol01168->SetChisquare(6.702207);
   pol01168->SetNDF(11);
   pol01168->GetXaxis()->SetLabelFont(42);
   pol01168->GetXaxis()->SetTitleOffset(1);
   pol01168->GetXaxis()->SetTitleFont(42);
   pol01168->GetYaxis()->SetLabelFont(42);
   pol01168->GetYaxis()->SetTitleFont(42);
   pol01168->SetParameter(0,0.0005591524);
   pol01168->SetParError(0,0.007047914);
   pol01168->SetParLimits(0,0,0);
   pol01168->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01168);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.00056
#pm0.007
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
