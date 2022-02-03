void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1427,-1.792359e-06,3406.662,1.590982e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[11] = {
   451.9338,
   653.315,
   880.4423,
   1123.086,
   1370.96,
   1619.999,
   1866.598,
   2114.954,
   2362.913,
   2613.194,
   2787.496};
   Double_t Graph0_fy1173[11] = {
   1.583649e-07,
   4.471034e-08,
   -1.741763e-08,
   2.780178e-09,
   -4.052743e-09,
   2.214254e-09,
   -2.849794e-08,
   1.241792e-07,
   2.038456e-07,
   1.249716e-07,
   3.47369e-06};
   Double_t Graph0_fex1173[11] = {
   0.08421975,
   0.07114462,
   0.05140688,
   0.05018854,
   0.05365591,
   0.05937063,
   0.06960258,
   0.08736073,
   0.1143879,
   0.1387489,
   0.1730595};
   Double_t Graph0_fey1173[11] = {
   6.87705e-07,
   4.582962e-08,
   1.534772e-08,
   1.394702e-08,
   1.703534e-08,
   2.358257e-08,
   3.926867e-08,
   8.187805e-08,
   1.990858e-07,
   4.355327e-07,
   1.206581e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18_",100,218.2676,3021.252);
   Graph_Graph01173->SetMinimum(-2.2141e-08);
   Graph_Graph01173->SetMaximum(1.41396e-05);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(0,101);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
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
