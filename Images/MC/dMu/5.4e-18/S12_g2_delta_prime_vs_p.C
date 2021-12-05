void S12_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:12:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7139,-1.556297,3047.74,1.378697);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1133[8] = {
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236};
   Double_t _fy1133[8] = {
   -0.08048388,
   -0.325396,
   -0.023189,
   0.06197902,
   -0.3366483,
   0.2642843,
   0.2462971,
   -0.3186992};
   Double_t _fex1133[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1133[8] = {
   0.4238842,
   0.3475111,
   0.3245142,
   0.3258912,
   0.3560147,
   0.4281244,
   0.5617711,
   0.7552785};
   TGraphErrors *gre = new TGraphErrors(8,_fx1133,_fy1133,_fex1133,_fey1133);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1133 = new TH1F("Graph_Graph1133","",100,706.8166,2787.638);
   Graph_Graph1133->SetMinimum(-1.262797);
   Graph_Graph1133->SetMaximum(1.085198);
   Graph_Graph1133->SetDirectory(0);
   Graph_Graph1133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1133->SetLineColor(ci);
   Graph_Graph1133->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1133->GetXaxis()->CenterTitle(true);
   Graph_Graph1133->GetXaxis()->SetLabelFont(42);
   Graph_Graph1133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1133->GetXaxis()->SetTitleFont(42);
   Graph_Graph1133->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1133->GetYaxis()->CenterTitle(true);
   Graph_Graph1133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1133->GetYaxis()->SetLabelFont(42);
   Graph_Graph1133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1133->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1133->GetYaxis()->SetTitleFont(42);
   Graph_Graph1133->GetZaxis()->SetLabelFont(42);
   Graph_Graph1133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1133);
   
   
   TF1 *pol01134 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01134->SetFillColor(19);
   pol01134->SetFillStyle(0);
   pol01134->SetLineColor(2);
   pol01134->SetLineWidth(2);
   pol01134->SetChisquare(2.32084);
   pol01134->SetNDF(7);
   pol01134->GetXaxis()->SetLabelFont(42);
   pol01134->GetXaxis()->SetTitleOffset(1);
   pol01134->GetXaxis()->SetTitleFont(42);
   pol01134->GetYaxis()->SetLabelFont(42);
   pol01134->GetYaxis()->SetTitleFont(42);
   pol01134->SetParameter(0,-0.07391405);
   pol01134->SetParError(0,0.1399937);
   pol01134->SetParLimits(0,0,0);
   pol01134->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01134);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackReco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.074
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
