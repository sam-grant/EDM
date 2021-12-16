void S18_EDM_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:41:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.7696,-0.3869479,3045.623,3.482531);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1049[8] = {
   884.0785,
   1126.173,
   1373.702,
   1622.569,
   1870.669,
   2119.017,
   2366.486,
   2613.314};
   Double_t _fy1049[8] = {
   1.685037,
   1.51134,
   1.863021,
   1.743173,
   1.737432,
   1.664707,
   1.400582,
   2.016884};
   Double_t _fex1049[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1049[8] = {
   -0.4681019,
   -0.3128099,
   -0.2521834,
   -0.2271965,
   -0.2264059,
   -0.2492946,
   -0.3049828,
   -0.4475203};
   TGraphErrors *gre = new TGraphErrors(8,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,711.1549,2786.238);
   Graph_Graph1049->SetMinimum(1.781811);
   Graph_Graph1049->SetMaximum(1.547792);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1049->GetXaxis()->CenterTitle(true);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1049->GetYaxis()->CenterTitle(true);
   Graph_Graph1049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   
   TF1 *pol01050 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01050->SetFillColor(19);
   pol01050->SetFillStyle(0);
   pol01050->SetLineColor(2);
   pol01050->SetLineWidth(2);
   pol01050->SetChisquare(0.2569084);
   pol01050->SetNDF(7);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,1.702772);
   pol01050->SetParError(0,0.06773219);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackRecoControl","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
#pm0.07
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
