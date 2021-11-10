void S12_g2_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-2.156633,2655.75,2.074281);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1115[12] = {
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
   Double_t _fy1115[12] = {
   -0.04117598,
   -0.4185984,
   -0.5145312,
   0.3695082,
   0.8039528,
   0.1504842,
   -0.6794948,
   -0.2302962,
   0.1871226,
   0.06131876,
   -0.7963869,
   -0.1809776};
   Double_t _fex1115[12] = {
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
   Double_t _fey1115[12] = {
   0.6154057,
   0.5007723,
   0.4281327,
   0.3885127,
   0.3629731,
   0.3650836,
   0.3614742,
   0.3928855,
   0.4250652,
   0.4923163,
   0.5763658,
   0.7400658};
   TGraphErrors *gre = new TGraphErrors(12,_fx1115,_fy1115,_fex1115,_fey1115);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1115 = new TH1F("Graph_Graph1115","S12_",100,799.5,2449.5);
   Graph_Graph1115->SetMinimum(-1.733542);
   Graph_Graph1115->SetMaximum(1.65119);
   Graph_Graph1115->SetDirectory(0);
   Graph_Graph1115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1115->SetLineColor(ci);
   Graph_Graph1115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1115->GetXaxis()->CenterTitle(true);
   Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph1115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph1115->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1115->GetYaxis()->CenterTitle(true);
   Graph_Graph1115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph1115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1115->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph1115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1115);
   
   
   TF1 *pol01116 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01116->SetFillColor(19);
   pol01116->SetFillStyle(0);
   pol01116->SetLineColor(2);
   pol01116->SetLineWidth(2);
   pol01116->SetChisquare(14.03557);
   pol01116->SetNDF(11);
   pol01116->GetXaxis()->SetLabelFont(42);
   pol01116->GetXaxis()->SetTitleOffset(1);
   pol01116->GetXaxis()->SetTitleFont(42);
   pol01116->GetYaxis()->SetLabelFont(42);
   pol01116->GetYaxis()->SetTitleFont(42);
   pol01116->SetParameter(0,-0.04865089);
   pol01116->SetParError(0,0.1265622);
   pol01116->SetParLimits(0,0,0);
   pol01116->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01116);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.049
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
