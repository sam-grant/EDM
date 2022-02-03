void S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0201,-6.937956e-06,3406.608,6.012448e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1134[11] = {
   452.0609,
   653.2722,
   880.5507,
   1123.017,
   1370.779,
   1619.705,
   1866.411,
   2115.026,
   2363.263,
   2612.185,
   2787.396};
   Double_t Graph0_fy1134[11] = {
   1.167268e-05,
   -2.975226e-07,
   -3.123572e-08,
   -4.738972e-08,
   -6.960614e-08,
   1.024868e-08,
   -5.84129e-08,
   8.105666e-08,
   7.506846e-07,
   6.986563e-08,
   8.325632e-06};
   Double_t Graph0_fex1134[11] = {
   0.1193482,
   0.1008813,
   0.0726896,
   0.07092989,
   0.07614717,
   0.08434879,
   0.09945954,
   0.1250774,
   0.1642086,
   0.1964878,
   0.2503732};
   Double_t Graph0_fey1134[11] = {
   1.390371e-06,
   9.214002e-08,
   3.144925e-08,
   2.777236e-08,
   3.440495e-08,
   4.790379e-08,
   8.220128e-08,
   1.745169e-07,
   4.368147e-07,
   9.620865e-07,
   2.939794e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1134,Graph0_fy1134,Graph0_fex1134,Graph0_fey1134);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01134 = new TH1F("Graph_Graph01134","S18_",100,218.3711,3021.216);
   Graph_Graph01134->SetMinimum(-2.31712e-07);
   Graph_Graph01134->SetMaximum(5.341824e-05);
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
