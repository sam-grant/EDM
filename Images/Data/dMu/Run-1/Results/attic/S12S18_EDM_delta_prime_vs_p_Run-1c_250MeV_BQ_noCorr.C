void S12S18_EDM_delta_prime_vs_p_Run-1c_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.0148193,2750,0.08416825);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1077[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1077[7] = {
   0.03467447,
   0.05495355,
   0.04148765,
   0.04848809,
   0.05175661,
   0.03895586,
   0.04041485};
   Double_t _fex1077[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1077[7] = {
   0.01439819,
   0.01096449,
   0.009579158,
   0.009214645,
   0.009449649,
   0.01001759,
   0.01097918};
   TGraphErrors *gre = new TGraphErrors(7,_fx1077,_fy1077,_fex1077,_fey1077);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1077 = new TH1F("Graph_Graph1077","S12S18_",100,725,2525);
   Graph_Graph1077->SetMinimum(-0.004920547);
   Graph_Graph1077->SetMaximum(0.07426949);
   Graph_Graph1077->SetDirectory(0);
   Graph_Graph1077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1077->SetLineColor(ci);
   Graph_Graph1077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1077->GetXaxis()->CenterTitle(true);
   Graph_Graph1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph1077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph1077->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1077->GetYaxis()->CenterTitle(true);
   Graph_Graph1077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph1077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph1077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1077);
   
   
   TF1 *pol01078 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01078->SetFillColor(19);
   pol01078->SetFillStyle(0);
   pol01078->SetLineColor(2);
   pol01078->SetLineWidth(2);
   pol01078->SetChisquare(2.663145);
   pol01078->SetNDF(6);
   pol01078->GetXaxis()->SetLabelFont(42);
   pol01078->GetXaxis()->SetTitleOffset(1);
   pol01078->GetXaxis()->SetTitleFont(42);
   pol01078->GetYaxis()->SetLabelFont(42);
   pol01078->GetYaxis()->SetTitleFont(42);
   pol01078->SetParameter(0,0.04520203);
   pol01078->SetParError(0,0.003914007);
   pol01078->SetParLimits(0,0,0);
   pol01078->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01078);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.045
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
