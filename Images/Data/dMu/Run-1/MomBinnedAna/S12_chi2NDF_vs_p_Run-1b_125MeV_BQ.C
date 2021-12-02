void S12_chi2NDF_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7114,0.2698582,2730.075,1.840586);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[22] = {
   367.0103,
   456.7431,
   570.2428,
   695.0448,
   815.9725,
   938.712,
   1062.736,
   1188.27,
   1312.737,
   1435.93,
   1561.978,
   1685.239,
   1810.655,
   1935.234,
   2060.302,
   2185.134,
   2309.222,
   2432.985,
   2559.505,
   2679.171,
   2780.718,
   2888.448};
   Double_t Graph0_fy1020[22] = {
   1.817395,
   0.6344137,
   0.9874714,
   0.8416868,
   0.5931762,
   0.6983242,
   1.549235,
   1.095444,
   1.170374,
   0.8329203,
   1.526574,
   1.006618,
   0.7234221,
   0.8034904,
   0.4735704,
   0.6796347,
   1.252159,
   0.8719637,
   0.9409632,
   0.6851653,
   1.033693,
   21.987};
   Double_t Graph0_fex1020[22] = {
   0.2630727,
   0.1312423,
   0.08883135,
   0.05990632,
   0.04792126,
   0.04303468,
   0.04088577,
   0.03943381,
   0.03980589,
   0.03995167,
   0.042785,
   0.04490781,
   0.05025173,
   0.05495971,
   0.06262148,
   0.06895527,
   0.07940075,
   0.09524145,
   0.1140435,
   0.1306775,
   0.2611948,
   1.874823};
   Double_t Graph0_fey1020[22] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","S12",100,114.3897,3142.68);
   Graph_Graph01020->SetMinimum(0.426931);
   Graph_Graph01020->SetMaximum(1.683513);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01020->GetXaxis()->SetRange(21,79);
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
