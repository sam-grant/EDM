void S18_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9393,-0.005618444,2726.713,0.1002208);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[22] = {
   367.4384,
   456.6742,
   569.9843,
   694.4365,
   815.6608,
   938.5888,
   1062.745,
   1187.919,
   1312.68,
   1435.613,
   1562.048,
   1684.958,
   1810.533,
   1934.893,
   2060.323,
   2184.82,
   2308.919,
   2433.329,
   2560.044,
   2678.053,
   2781.14,
   2885.139};
   Double_t Graph0_fy1029[22] = {
   0.6280807,
   0.2227518,
   0.05448047,
   0.07567509,
   0.08177283,
   0.06228397,
   0.05758363,
   0.05179312,
   0.00827323,
   0.05482311,
   0.02278788,
   0.01224153,
   0.01084333,
   0.01410953,
   0.0768472,
   0.00341038,
   0.05388363,
   0.04055335,
   0.03209901,
   -0.0445898,
   0.1940507,
   -0.6596697};
   Double_t Graph0_fex1029[22] = {
   0.2542597,
   0.1282116,
   0.08547603,
   0.05911733,
   0.04831604,
   0.04372754,
   0.04164599,
   0.04029718,
   0.04118659,
   0.04161464,
   0.04467129,
   0.04750509,
   0.05365686,
   0.05907108,
   0.06800638,
   0.07506477,
   0.08707378,
   0.1057475,
   0.124273,
   0.1422437,
   0.2927081,
   1.562872};
   Double_t Graph0_fey1029[22] = {
   2.039865,
   0.1844981,
   0.09046901,
   0.05526622,
   0.03885886,
   0.03216675,
   0.02833367,
   0.02560082,
   0.02420386,
   0.02308529,
   0.02299085,
   0.02242842,
   0.02334747,
   0.02375971,
   0.02502995,
   0.02537273,
   0.02657489,
   0.02871579,
   0.03003081,
   0.03234222,
   0.08186925,
   1.556701};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S18",100,115.2323,3138.654);
   Graph_Graph01029->SetMinimum(0.004965483);
   Graph_Graph01029->SetMaximum(0.08963689);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(21,79);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
