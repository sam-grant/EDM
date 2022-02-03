void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ.4_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:36:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1445,-2.338833e-05,3406.661,4.186301e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[11] = {
   451.9321,
   653.3151,
   880.441,
   1123.088,
   1370.959,
   1620.001,
   1866.599,
   2114.953,
   2362.908,
   2613.197,
   2787.495};
   Double_t Graph0_fy1171[11] = {
   7.784424e-06,
   -1.200298e-07,
   -4.7739e-08,
   -3.848177e-08,
   -5.971837e-08,
   -3.105023e-08,
   -3.389559e-08,
   8.469526e-08,
   3.156084e-08,
   -1.96009e-07,
   -6.194431e-06};
   Double_t Graph0_fex1171[11] = {
   0.08422585,
   0.07114437,
   0.05140669,
   0.05018896,
   0.05365579,
   0.05937024,
   0.06960067,
   0.08736012,
   0.1143839,
   0.1387502,
   0.1730443};
   Double_t Graph0_fey1171[11] = {
   4.868303e-07,
   3.244014e-08,
   1.086323e-08,
   9.841191e-09,
   1.230493e-08,
   1.669046e-08,
   2.815286e-08,
   5.960521e-08,
   1.48701e-07,
   3.341522e-07,
   9.434073e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18_",100,218.2659,3021.25);
   Graph_Graph01171->SetMinimum(-1.686319e-05);
   Graph_Graph01171->SetMaximum(3.533788e-05);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(0,101);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
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
