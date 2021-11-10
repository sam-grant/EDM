void S18_g2_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.1191789,2499.5,0.1078812);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1189[11] = {
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
   Double_t _fy1189[11] = {
   0.007491504,
   -0.0003961826,
   0.0003668152,
   -0.0158711,
   -0.06360696,
   0.005205247,
   0.01564275,
   0.01841187,
   0.01541668,
   0.05790036,
   -0.06863587};
   Double_t _fex1189[11] = {
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
   Double_t _fey1189[11] = {
   0.02764769,
   0.02434094,
   0.02204574,
   0.02092374,
   0.01993214,
   0.01995907,
   0.0194591,
   0.02042494,
   0.02073116,
   0.02181989,
   0.02226963};
   TGraphErrors *gre = new TGraphErrors(11,_fx1189,_fy1189,_fex1189,_fey1189);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1189 = new TH1F("Graph_Graph1189","S18_",100,812,2312);
   Graph_Graph1189->SetMinimum(-0.0964729);
   Graph_Graph1189->SetMaximum(0.08517522);
   Graph_Graph1189->SetDirectory(0);
   Graph_Graph1189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1189->SetLineColor(ci);
   Graph_Graph1189->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1189->GetXaxis()->CenterTitle(true);
   Graph_Graph1189->GetXaxis()->SetLabelFont(42);
   Graph_Graph1189->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1189->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1189->GetXaxis()->SetTitleFont(42);
   Graph_Graph1189->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1189->GetYaxis()->CenterTitle(true);
   Graph_Graph1189->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1189->GetYaxis()->SetLabelFont(42);
   Graph_Graph1189->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1189->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1189->GetYaxis()->SetTitleFont(42);
   Graph_Graph1189->GetZaxis()->SetLabelFont(42);
   Graph_Graph1189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1189);
   
   
   TF1 *pol01190 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01190->SetFillColor(19);
   pol01190->SetFillStyle(0);
   pol01190->SetLineColor(2);
   pol01190->SetLineWidth(2);
   pol01190->SetChisquare(29.25422);
   pol01190->SetNDF(10);
   pol01190->GetXaxis()->SetLabelFont(42);
   pol01190->GetXaxis()->SetTitleOffset(1);
   pol01190->GetXaxis()->SetTitleFont(42);
   pol01190->GetYaxis()->SetLabelFont(42);
   pol01190->GetYaxis()->SetTitleFont(42);
   pol01190->SetParameter(0,-0.002887996);
   pol01190->SetParError(0,0.006475709);
   pol01190->SetParLimits(0,0,0);
   pol01190->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01190);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0029
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
