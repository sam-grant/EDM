void S12_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7114,-0.02772865,2730.075,0.09616017);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
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
   Double_t Graph0_fy1018[22] = {
   0.3197148,
   0.4019087,
   0.3143618,
   0.06443047,
   0.0767649,
   0.0193473,
   0.05902322,
   -0.01817159,
   0.06292343,
   -0.01035315,
   0.02183737,
   0.01713358,
   0.0104021,
   0.04158061,
   0.04008914,
   0.0211518,
   0.0521713,
   0.04252349,
   -0.002260571,
   0.02155936,
   0.1500066,
   -6.087561};
   Double_t Graph0_fex1018[22] = {
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
   Double_t Graph0_fey1018[22] = {
   2.173129,
   0.1938497,
   0.095321,
   0.05665978,
   0.03885555,
   0.03176267,
   0.02796684,
   0.02518093,
   0.0235696,
   0.02220559,
   0.02220094,
   0.02138367,
   0.02206505,
   0.02218352,
   0.02306871,
   0.02331798,
   0.02433829,
   0.02611899,
   0.02782954,
   0.0299693,
   0.07220638,
   1.84086};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,114.3897,3142.68);
   Graph_Graph01018->SetMinimum(-0.01533977);
   Graph_Graph01018->SetMaximum(0.08377129);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(21,79);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
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
