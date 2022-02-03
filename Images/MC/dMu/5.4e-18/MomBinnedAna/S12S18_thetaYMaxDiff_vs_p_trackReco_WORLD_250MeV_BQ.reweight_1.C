void S12S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1427,-44.87799,3406.662,289.9025);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1180[11] = {
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
   Double_t Graph0_fy1180[11] = {
   164.2341,
   146.1904,
   124.4644,
   102.7383,
   106.0525,
   92.79592,
   71.80637,
   63.70514,
   51.18505,
   40.87439,
   25.04017};
   Double_t Graph0_fex1180[11] = {
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
   Double_t Graph0_fey1180[11] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1180,Graph0_fy1180,Graph0_fex1180,Graph0_fey1180);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01180 = new TH1F("Graph_Graph01180","S12S18_",100,218.2676,3021.252);
   Graph_Graph01180->SetMinimum(-11.39994);
   Graph_Graph01180->SetMaximum(256.4244);
   Graph_Graph01180->SetDirectory(0);
   Graph_Graph01180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01180->SetLineColor(ci);
   Graph_Graph01180->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01180->GetXaxis()->SetRange(0,101);
   Graph_Graph01180->GetXaxis()->CenterTitle(true);
   Graph_Graph01180->GetXaxis()->SetLabelFont(42);
   Graph_Graph01180->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01180->GetXaxis()->SetTitleFont(42);
   Graph_Graph01180->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01180->GetYaxis()->CenterTitle(true);
   Graph_Graph01180->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01180->GetYaxis()->SetLabelFont(42);
   Graph_Graph01180->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01180->GetYaxis()->SetTitleFont(42);
   Graph_Graph01180->GetZaxis()->SetLabelFont(42);
   Graph_Graph01180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01180);
   
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
