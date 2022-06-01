void S12S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3528,-0.2907515,3405.175,0.6982337);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1178[12] = {
   184.1649,
   431.3202,
   629.5098,
   873.9769,
   1122.573,
   1372.115,
   1620.821,
   1869.113,
   2116.82,
   2364.417,
   2614.913,
   2824.458};
   Double_t Graph0_fy1178[12] = {
   0.2250365,
   -0.09634007,
   -0.02629081,
   -0.02675372,
   -0.01700482,
   -0.01798913,
   -0.02724878,
   -0.01037076,
   -0.01676969,
   -0.01378489,
   0.0006940332,
   -0.01004939};
   Double_t Graph0_fex1178[12] = {
   0.1970694,
   0.03028048,
   0.02630282,
   0.02583387,
   0.02707349,
   0.02878414,
   0.03120768,
   0.03514953,
   0.04135757,
   0.05218349,
   0.06590072,
   0.07954507};
   Double_t Graph0_fey1178[12] = {
   0.3083663,
   0.02958057,
   0.01469738,
   0.01176931,
   0.01037484,
   0.009393935,
   0.008749366,
   0.008496919,
   0.008645169,
   0.009359278,
   0.009765374,
   0.01298498};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1178,Graph0_fy1178,Graph0_fex1178,Graph0_fey1178);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01178 = new TH1F("Graph_Graph01178","S12S18_",100,0,3088.594);
   Graph_Graph01178->SetMinimum(-0.191853);
   Graph_Graph01178->SetMaximum(0.5993351);
   Graph_Graph01178->SetDirectory(0);
   Graph_Graph01178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01178->SetLineColor(ci);
   Graph_Graph01178->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01178->GetXaxis()->SetRange(1,98);
   Graph_Graph01178->GetXaxis()->CenterTitle(true);
   Graph_Graph01178->GetXaxis()->SetLabelFont(42);
   Graph_Graph01178->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01178->GetXaxis()->SetTitleFont(42);
   Graph_Graph01178->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
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
