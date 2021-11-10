void S18_g2_delta_prime_vs_p_900-2250MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-1.488889,2499.5,3.290787);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1117[11] = {
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
   Double_t _fy1117[11] = {
   1.095459,
   0.5496762,
   0.2838737,
   0.06372497,
   -0.1989826,
   -0.00704636,
   0.036698,
   -0.1125471,
   0.09073429,
   -0.3449937,
   0.6191555};
   Double_t _fex1117[11] = {
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
   Double_t _fey1117[11] = {
   0.6244945,
   0.5069992,
   0.4352479,
   0.398648,
   0.3751883,
   0.3775892,
   0.3788534,
   0.4152435,
   0.4552397,
   0.5327424,
   0.6255173};
   TGraphErrors *gre = new TGraphErrors(11,_fx1117,_fy1117,_fex1117,_fey1117);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","S18_",100,812,2312);
   Graph_Graph1117->SetMinimum(-1.010922);
   Graph_Graph1117->SetMaximum(2.812819);
   Graph_Graph1117->SetDirectory(0);
   Graph_Graph1117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1117->SetLineColor(ci);
   Graph_Graph1117->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1117->GetXaxis()->CenterTitle(true);
   Graph_Graph1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph1117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph1117->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1117->GetYaxis()->CenterTitle(true);
   Graph_Graph1117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph1117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1117->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph1117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1117);
   
   
   TF1 *pol01118 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01118->SetFillColor(19);
   pol01118->SetFillStyle(0);
   pol01118->SetLineColor(2);
   pol01118->SetLineWidth(2);
   pol01118->SetChisquare(5.905809);
   pol01118->SetNDF(10);
   pol01118->GetXaxis()->SetLabelFont(42);
   pol01118->GetXaxis()->SetTitleOffset(1);
   pol01118->GetXaxis()->SetTitleFont(42);
   pol01118->GetYaxis()->SetLabelFont(42);
   pol01118->GetYaxis()->SetTitleFont(42);
   pol01118->SetParameter(0,0.103762);
   pol01118->SetParError(0,0.1338522);
   pol01118->SetParLimits(0,0,0);
   pol01118->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01118);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.1
#pm0.1
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
