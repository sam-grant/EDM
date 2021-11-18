void S18_Ag2_vs_p_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:32:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.9126,-0.3277422,2745.365,0.927472);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[11] = {
   452.2534,
   653.3479,
   880.6543,
   1122.999,
   1370.952,
   1619.758,
   1866.475,
   2115.034,
   2363.281,
   2612.099,
   2791.813};
   Double_t Graph0_fy1047[11] = {
   0.5303796,
   -0.0398779,
   -0.08264094,
   0.01799824,
   0.01221345,
   0.04384618,
   0.0165432,
   0.02600492,
   0.02509009,
   0.07788827,
   0.0937919};
   Double_t Graph0_fex1047[11] = {
   0.1418395,
   0.1195206,
   0.08609712,
   0.08403163,
   0.09006856,
   0.09986921,
   0.1176419,
   0.1477182,
   0.1936432,
   0.231723,
   0.3524632};
   Double_t Graph0_fey1047[11] = {
   0.1878901,
   0.06296637,
   0.03589885,
   0.02939335,
   0.02713893,
   0.02609308,
   0.02647805,
   0.02844866,
   0.03156638,
   0.03244161,
   0.07754541};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","S18_",100,218.1061,3026.171);
   Graph_Graph01047->SetMinimum(-0.2022207);
   Graph_Graph01047->SetMaximum(0.8019506);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01047->GetXaxis()->SetRange(19,82);
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
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
