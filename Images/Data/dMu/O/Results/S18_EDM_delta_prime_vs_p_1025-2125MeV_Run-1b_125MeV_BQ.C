void S18_EDM_delta_prime_vs_p_1025-2125MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:39:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-2.049904,2312,1.873356);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1015[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1015[9] = {
   -0.08827402,
   0.2103958,
   -0.2722055,
   0.6197503,
   -0.2531557,
   -0.09478623,
   -0.09507457,
   -0.2867503,
   -0.2382673};
   Double_t _fex1015[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[9] = {
   0.570656,
   0.4893761,
   0.4468968,
   0.4221227,
   0.4240005,
   0.4259689,
   0.4652958,
   0.509087,
   0.5972906};
   TGraphErrors *gre = new TGraphErrors(9,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","S18_",100,962,2162);
   Graph_Graph1015->SetMinimum(-1.657578);
   Graph_Graph1015->SetMaximum(1.48103);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1015->GetXaxis()->CenterTitle(true);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetTitle("#delta'_{c}^{} [mrad] / 125 MeV");
   Graph_Graph1015->GetYaxis()->CenterTitle(true);
   Graph_Graph1015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *pol01016 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01016->SetFillColor(19);
   pol01016->SetFillStyle(0);
   pol01016->SetLineColor(2);
   pol01016->SetLineWidth(2);
   pol01016->SetChisquare(3.609226);
   pol01016->SetNDF(8);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,-0.03534143);
   pol01016->SetParError(0,0.1576816);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.035
#pm0.2
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
