void S12_AEDM_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1d_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:18:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-0.1163153,3407.936,0.1926524);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t Graph0_fy1048[12] = {
   -0.02468624,
   0.1194397,
   0.03172757,
   0.06281012,
   0.08440174,
   0.09069056,
   0.09687749,
   0.1001339,
   0.06253278,
   0.08084658,
   0.06218677,
   0.03802922};
   Double_t Graph0_fex1048[12] = {
   0.02908963,
   0.02973433,
   0.03055162,
   0.03167911,
   0.03320863,
   0.0352714,
   0.03796636,
   0.04164352,
   0.04682622,
   0.05470628,
   0.06824828,
   0.09707939};
   Double_t Graph0_fey1048[12] = {
   0.04013446,
   0.02171812,
   0.007835433,
   0.007331573,
   0.00704142,
   0.006954939,
   0.00661466,
   0.006416441,
   0.006030634,
   0.006065966,
   0.006942888,
   0.008524017};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S12_",100,0,3122.965);
   Graph_Graph01048->SetMinimum(-0.08541855);
   Graph_Graph01048->SetMaximum(0.1617557);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->SetRange(1,97);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("alp");
   
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
