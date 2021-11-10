void S12_EDM_delta_prime_vs_p_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.2928771,2750,1.314984);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1037[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1037[7] = {
   0.4471205,
   0.4659203,
   0.4877574,
   0.5391702,
   0.469706,
   0.5533278,
   0.8237788};
   Double_t _fex1037[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[7] = {
   0.2106223,
   0.1369953,
   0.1113891,
   0.1083363,
   0.1217459,
   0.1585682,
   0.2643353};
   TGraphErrors *gre = new TGraphErrors(7,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","S12_",100,725,2525);
   Graph_Graph1037->SetMinimum(-0.132091);
   Graph_Graph1037->SetMaximum(1.154198);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1037->GetXaxis()->CenterTitle(true);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1037->GetYaxis()->CenterTitle(true);
   Graph_Graph1037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   
   TF1 *pol01038 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01038->SetFillColor(19);
   pol01038->SetFillStyle(0);
   pol01038->SetLineColor(2);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(1.897826);
   pol01038->SetNDF(6);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,0.5111619);
   pol01038->SetParError(0,0.05247385);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.51
#pm0.05
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
