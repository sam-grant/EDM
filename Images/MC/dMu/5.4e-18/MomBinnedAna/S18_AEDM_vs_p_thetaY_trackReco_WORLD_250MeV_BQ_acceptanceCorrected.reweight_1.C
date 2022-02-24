void S18_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0465,-0.9314534,3406.654,0.3439835);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1132[11] = {
   452.0383,
   653.2767,
   880.5616,
   1123.015,
   1370.8,
   1619.721,
   1866.492,
   2115.018,
   2363.349,
   2612.121,
   2787.449};
   Double_t Graph0_fy1132[11] = {
   -0.1630542,
   0.143825,
   0.1531861,
   0.1257243,
   0.1805435,
   0.1557965,
   0.1336563,
   0.08240069,
   0.09878969,
   0.1472673,
   0.02387424};
   Double_t Graph0_fex1132[11] = {
   0.1105323,
   0.09332027,
   0.06724064,
   0.0656172,
   0.07044104,
   0.07801539,
   0.09201272,
   0.1155807,
   0.1519345,
   0.1816586,
   0.2304013};
   Double_t Graph0_fey1132[11] = {
   0.1959147,
   0.06909731,
   0.04024742,
   0.03214841,
   0.02744316,
   0.02391433,
   0.02263712,
   0.02269495,
   0.02361672,
   0.02244198,
   0.05240284};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1132,Graph0_fy1132,Graph0_fex1132,Graph0_fey1132);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01132 = new TH1F("Graph_Graph01132","S18_",100,218.3526,3021.255);
   Graph_Graph01132->SetMinimum(-0.8039097);
   Graph_Graph01132->SetMaximum(0.2164398);
   Graph_Graph01132->SetDirectory(0);
   Graph_Graph01132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01132->SetLineColor(ci);
   Graph_Graph01132->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01132->GetXaxis()->SetRange(0,101);
   Graph_Graph01132->GetXaxis()->CenterTitle(true);
   Graph_Graph01132->GetXaxis()->SetLabelFont(42);
   Graph_Graph01132->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01132->GetXaxis()->SetTitleFont(42);
   Graph_Graph01132->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01132->GetYaxis()->CenterTitle(true);
   Graph_Graph01132->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01132->GetYaxis()->SetLabelFont(42);
   Graph_Graph01132->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01132->GetYaxis()->SetTitleFont(42);
   Graph_Graph01132->GetZaxis()->SetLabelFont(42);
   Graph_Graph01132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01132);
   
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
