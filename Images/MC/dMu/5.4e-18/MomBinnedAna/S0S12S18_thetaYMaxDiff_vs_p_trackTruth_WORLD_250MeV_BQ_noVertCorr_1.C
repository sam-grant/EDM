void S0S12S18_thetaYMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 13 12:27:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-377.6585,-45.15381,3398.926,222.6444);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1223[12] = {
   197.1837,
   451.9673,
   653.3489,
   880.33,
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045,
   2613.562,
   2792.136};
   Double_t Graph0_fy1223[12] = {
   0,
   177.4906,
   154.2916,
   120.782,
   99.79244,
   85.06293,
   71.80637,
   62.23219,
   53.02624,
   43.8203,
   34.98259,
   25.04017};
   Double_t Graph0_fex1223[12] = {
   0,
   0.06119317,
   0.05168435,
   0.03738165,
   0.03651084,
   0.03897018,
   0.04308696,
   0.05035664,
   0.06256782,
   0.08122338,
   0.09940193,
   0.1408526};
   Double_t Graph0_fey1223[12] = {
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
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1223,Graph0_fy1223,Graph0_fex1223,Graph0_fey1223);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01223 = new TH1F("Graph_Graph01223","S0S12S18_",100,0,3051.786);
   Graph_Graph01223->SetMinimum(-18.37398);
   Graph_Graph01223->SetMaximum(195.8646);
   Graph_Graph01223->SetDirectory(0);
   Graph_Graph01223->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01223->SetLineColor(ci);
   Graph_Graph01223->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01223->GetXaxis()->SetRange(1,99);
   Graph_Graph01223->GetXaxis()->CenterTitle(true);
   Graph_Graph01223->GetXaxis()->SetLabelFont(42);
   Graph_Graph01223->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01223->GetXaxis()->SetTitleFont(42);
   Graph_Graph01223->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01223->GetYaxis()->CenterTitle(true);
   Graph_Graph01223->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01223->GetYaxis()->SetLabelFont(42);
   Graph_Graph01223->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01223->GetYaxis()->SetTitleFont(42);
   Graph_Graph01223->GetZaxis()->SetLabelFont(42);
   Graph_Graph01223->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01223->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01223);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
