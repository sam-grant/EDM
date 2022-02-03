void S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1427,-0.03069664,3406.662,0.3898282);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1178[11] = {
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
   Double_t Graph0_fy1178[11] = {
   0.1027289,
   0.03446851,
   0.01974829,
   0.01622147,
   0.01489962,
   0.01419481,
   0.01434319,
   0.01517488,
   0.01641172,
   0.01623436,
   0.03803255};
   Double_t Graph0_fex1178[11] = {
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
   Double_t Graph0_fey1178[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1178,Graph0_fy1178,Graph0_fex1178,Graph0_fey1178);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01178 = new TH1F("Graph_Graph01178","S12S18_",100,218.2676,3021.252);
   Graph_Graph01178->SetMinimum(0.01135585);
   Graph_Graph01178->SetMaximum(0.3477757);
   Graph_Graph01178->SetDirectory(0);
   Graph_Graph01178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01178->SetLineColor(ci);
   Graph_Graph01178->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01178->GetXaxis()->SetRange(0,101);
   Graph_Graph01178->GetXaxis()->CenterTitle(true);
   Graph_Graph01178->GetXaxis()->SetLabelFont(42);
   Graph_Graph01178->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01178->GetXaxis()->SetTitleFont(42);
   Graph_Graph01178->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01178->GetYaxis()->CenterTitle(true);
   Graph_Graph01178->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01178->GetYaxis()->SetLabelFont(42);
   Graph_Graph01178->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01178->GetYaxis()->SetTitleFont(42);
   Graph_Graph01178->GetZaxis()->SetLabelFont(42);
   Graph_Graph01178->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01178);
   
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
