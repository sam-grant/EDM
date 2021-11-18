void S18_AEDM_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.6871,-0.6718405,2741.172,0.4239166);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[11] = {
   452.1104,
   653.26,
   880.6366,
   1123.036,
   1370.834,
   1619.676,
   1866.35,
   2115.144,
   2363.227,
   2612.273,
   2787.595};
   Double_t Graph0_fy1046[11] = {
   -0.301382,
   0.1783619,
   0.07058386,
   0.1241013,
   0.1067685,
   0.1448058,
   0.1269618,
   0.06423257,
   0.06544209,
   0.1620809,
   0.03291642};
   Double_t Graph0_fex1046[11] = {
   0.1416981,
   0.119353,
   0.08608209,
   0.08397555,
   0.09008487,
   0.09987451,
   0.1176511,
   0.1481012,
   0.1939201,
   0.2319183,
   0.2963839};
   Double_t Graph0_fey1046[11] = {
   0.1878323,
   0.06292847,
   0.0359447,
   0.02949835,
   0.02721359,
   0.02599233,
   0.02643222,
   0.02798179,
   0.03035426,
   0.02983907,
   0.07052009};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S18_",100,218.3765,3021.483);
   Graph_Graph01046->SetMinimum(-0.5622648);
   Graph_Graph01046->SetMaximum(0.3143409);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01046->GetXaxis()->SetRange(19,82);
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
   gre->Draw("alp");
   
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
