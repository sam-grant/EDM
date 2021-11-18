void S0S12S18_Ag2_vs_p_trackReco_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:35:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.445,-0.1969502,2741.892,0.514278);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[11] = {
   451.7878,
   653.297,
   880.2628,
   1123.041,
   1371.131,
   1620.23,
   1867.05,
   2115.573,
   2363,
   2614.02,
   2788.473};
   Double_t Graph0_fy1067[11] = {
   0.2871526,
   -0.04196172,
   -0.0351396,
   -0.03536899,
   0.004030641,
   0.002918707,
   0.00585763,
   0.003885048,
   0.02281085,
   0.01700218,
   0.003514628};
   Double_t Graph0_fex1067[11] = {
   0.08119398,
   0.06850249,
   0.04968388,
   0.04852857,
   0.05179955,
   0.05728211,
   0.06665397,
   0.08260849,
   0.1062446,
   0.1304436,
   0.1582851};
   Double_t Graph0_fey1067[11] = {
   0.1085874,
   0.03645047,
   0.02088327,
   0.01714574,
   0.01572323,
   0.01503963,
   0.01510879,
   0.01602015,
   0.01750863,
   0.0182004,
   0.04314563};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","S0S12S18_",100,218.0141,3022.323);
   Graph_Graph01067->SetMinimum(-0.1258274);
   Graph_Graph01067->SetMaximum(0.4431552);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01067->GetXaxis()->SetRange(19,82);
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
