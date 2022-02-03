void S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4911,-0.0004601903,3407.421,0.0004781637);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1134[11] = {
   451.955,
   653.2003,
   880.4912,
   1123.059,
   1370.838,
   1619.616,
   1866.457,
   2115.103,
   2363.145,
   2612.952,
   2787.692};
   Double_t Graph0_fy1134[11] = {
   8.521234e-05,
   -4.920579e-07,
   -5.612418e-07,
   -5.503682e-07,
   -1.409084e-07,
   5.977575e-08,
   3.164938e-07,
   1.620441e-06,
   4.759869e-06,
   1.34591e-06,
   -0.0001308621};
   Double_t Graph0_fex1134[11] = {
   0.2619298,
   0.2197995,
   0.1585408,
   0.1542059,
   0.1651759,
   0.1833712,
   0.2162876,
   0.2717578,
   0.3567738,
   0.4271346,
   0.5445739};
   Double_t Graph0_fey1134[11] = {
   1.429215e-05,
   9.455453e-07,
   3.156624e-07,
   2.847642e-07,
   3.51912e-07,
   4.909097e-07,
   8.425321e-07,
   1.788972e-06,
   4.421478e-06,
   9.860095e-06,
   0.0003093351};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1134,Graph0_fy1134,Graph0_fex1134,Graph0_fey1134);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01134 = new TH1F("Graph_Graph01134","S18_",100,218.0387,3021.891);
   Graph_Graph01134->SetMinimum(-0.0003663549);
   Graph_Graph01134->SetMaximum(0.0003843283);
   Graph_Graph01134->SetDirectory(0);
   Graph_Graph01134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01134->SetLineColor(ci);
   Graph_Graph01134->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01134->GetXaxis()->SetRange(0,101);
   Graph_Graph01134->GetXaxis()->CenterTitle(true);
   Graph_Graph01134->GetXaxis()->SetLabelFont(42);
   Graph_Graph01134->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01134->GetXaxis()->SetTitleFont(42);
   Graph_Graph01134->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01134->GetYaxis()->CenterTitle(true);
   Graph_Graph01134->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01134->GetYaxis()->SetLabelFont(42);
   Graph_Graph01134->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01134->GetYaxis()->SetTitleFont(42);
   Graph_Graph01134->GetZaxis()->SetLabelFont(42);
   Graph_Graph01134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01134);
   
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
