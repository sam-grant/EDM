void S12S18_AEDM_vs_p_A_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.9196,-0.0001872869,3410.609,0.0008829051);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[11] = {
   452.9199,
   656.5542,
   884.8685,
   1123.522,
   1363.588,
   1601.322,
   1825.172,
   2101.221,
   2411.982,
   2637.272,
   2790.613};
   Double_t Graph0_fy1172[11] = {
   -2.692907e-05,
   1.053911e-07,
   7.265454e-08,
   2.699076e-07,
   3.730251e-07,
   8.726448e-07,
   4.530269e-06,
   0.000649425,
   -2.004442e-05,
   1.359329e-05,
   0.0001653484};
   Double_t Graph0_fex1172[11] = {
   0.2021944,
   0.150332,
   0.1006761,
   0.09254361,
   0.1066246,
   0.151529,
   0.3161417,
   1.816055,
   0.7409915,
   0.4041897,
   0.3585213};
   Double_t Graph0_fey1172[11] = {
   9.028915e-06,
   4.439909e-07,
   1.160316e-07,
   8.753738e-08,
   1.375356e-07,
   4.392683e-07,
   5.895524e-06,
   0.0003929954,
   5.431891e-05,
   7.516498e-06,
   5.262925e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18_",100,218.8923,3024.797);
   Graph_Graph01172->SetMinimum(-8.026772e-05);
   Graph_Graph01172->SetMaximum(0.0007758859);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(0,101);
   Graph_Graph01172->GetXaxis()->CenterTitle(true);
   Graph_Graph01172->GetXaxis()->SetLabelFont(42);
   Graph_Graph01172->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01172->GetXaxis()->SetTitleFont(42);
   Graph_Graph01172->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01172->GetYaxis()->CenterTitle(true);
   Graph_Graph01172->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01172->GetYaxis()->SetLabelFont(42);
   Graph_Graph01172->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01172->GetYaxis()->SetTitleFont(42);
   Graph_Graph01172->GetZaxis()->SetLabelFont(42);
   Graph_Graph01172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01172);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
