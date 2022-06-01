void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.363,-0.002089144,3405.267,0.02945086);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1190[12] = {
   194.4445,
   428.4545,
   630.9718,
   875.1739,
   1123.98,
   1373.206,
   1622.299,
   1870.747,
   2119.212,
   2366.758,
   2612.558,
   2825.495};
   Double_t Graph0_fy1190[12] = {
   0.01767487,
   0.003947118,
   0.003863248,
   0.007119582,
   0.007928607,
   0.01023152,
   0.01064123,
   0.0115112,
   0.01173374,
   0.01196214,
   0.01249792,
   0.008798898};
   Double_t Graph0_fex1190[12] = {
   0.1644884,
   0.02888287,
   0.02243204,
   0.0215649,
   0.02191618,
   0.02263395,
   0.02384128,
   0.02587955,
   0.02915093,
   0.0343403,
   0.04346513,
   0.05528534};
   Double_t Graph0_fey1190[12] = {
   0.006519316,
   0.0007795956,
   0.0004467756,
   0.0004234232,
   0.00042946,
   0.0004436462,
   0.0004676331,
   0.0005078469,
   0.0005727701,
   0.0006771138,
   0.0008643396,
   0.001489491};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1190,Graph0_fy1190,Graph0_fex1190,Graph0_fey1190);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01190 = new TH1F("Graph_Graph01190","S12S18_",100,0,3088.677);
   Graph_Graph01190->SetMinimum(0.001064856);
   Graph_Graph01190->SetMaximum(0.02629686);
   Graph_Graph01190->SetDirectory(0);
   Graph_Graph01190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01190->SetLineColor(ci);
   Graph_Graph01190->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01190->GetXaxis()->SetRange(1,98);
   Graph_Graph01190->GetXaxis()->CenterTitle(true);
   Graph_Graph01190->GetXaxis()->SetLabelFont(42);
   Graph_Graph01190->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01190->GetXaxis()->SetTitleFont(42);
   Graph_Graph01190->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01190->GetYaxis()->CenterTitle(true);
   Graph_Graph01190->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01190->GetYaxis()->SetLabelFont(42);
   Graph_Graph01190->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01190->GetYaxis()->SetTitleFont(42);
   Graph_Graph01190->GetZaxis()->SetLabelFont(42);
   Graph_Graph01190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01190->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01190);
   
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
