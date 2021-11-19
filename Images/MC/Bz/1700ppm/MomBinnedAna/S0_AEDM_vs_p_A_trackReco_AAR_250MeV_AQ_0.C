void S0_AEDM_vs_p_A_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:39:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.5052,-0.001297967,3337.977,0.006226993);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[12] = {
   177.9576,
   433.3462,
   628.2616,
   873.0121,
   1121.62,
   1371.471,
   1620.486,
   1868.641,
   2117.771,
   2364.099,
   2613.028,
   2828.705};
   Double_t Graph0_fy1040[12] = {
   0.002722588,
   5.63204e-06,
   1.533932e-06,
   1.383497e-06,
   1.369003e-06,
   1.680336e-06,
   2.716912e-06,
   5.772505e-06,
   5.403579e-06,
   1.818194e-05,
   3.149346e-05,
   1.004932e-05};
   Double_t Graph0_fex1040[12] = {
   1.2686,
   0.1197282,
   0.1082326,
   0.1088648,
   0.1169708,
   0.126421,
   0.13867,
   0.1576269,
   0.1843168,
   0.2260863,
   0.2983604,
   0.3582004};
   Double_t Graph0_fey1040[12] = {
   0.002250245,
   1.983301e-06,
   4.315066e-07,
   4.305286e-07,
   5.22941e-07,
   6.618692e-07,
   8.837771e-07,
   1.336247e-06,
   2.293768e-06,
   4.671322e-06,
   1.166935e-05,
   5.385669e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S0_",100,0,3094.301);
   Graph_Graph01040->SetMinimum(-0.0005454714);
   Graph_Graph01040->SetMaximum(0.005474497);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(2,96);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM}");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
