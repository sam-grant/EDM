void S12S18_eAEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 13 12:27:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-377.626,-5.249059,3398.634,47.24153);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1183[12] = {
   197.1837,
   452.0109,
   653.3666,
   880.43,
   1123.084,
   1371.063,
   1619.993,
   1866.796,
   2114.997,
   2363.005,
   2613.127,
   2791.874};
   Double_t Graph0_fy1183[12] = {
   38.17497,
   3.489797e-07,
   2.377735e-08,
   8.029327e-09,
   7.330072e-09,
   8.960788e-09,
   1.214578e-08,
   1.949862e-08,
   3.74678e-08,
   8.146964e-08,
   1.539861e-07,
   3.399567e-06};
   Double_t Graph0_fex1183[12] = {
   0,
   0.06819885,
   0.05757163,
   0.04157158,
   0.04058758,
   0.04335803,
   0.04795859,
   0.05629018,
   0.07044358,
   0.09237263,
   0.112246,
   0.1640369};
   Double_t Graph0_fey1183[12] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1183,Graph0_fy1183,Graph0_fex1183,Graph0_fey1183);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01183 = new TH1F("Graph_Graph01183","S12S18_",100,0,3051.523);
   Graph_Graph01183->SetMinimum(6.597065e-09);
   Graph_Graph01183->SetMaximum(41.99247);
   Graph_Graph01183->SetDirectory(0);
   Graph_Graph01183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01183->SetLineColor(ci);
   Graph_Graph01183->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01183->GetXaxis()->SetRange(1,99);
   Graph_Graph01183->GetXaxis()->CenterTitle(true);
   Graph_Graph01183->GetXaxis()->SetLabelFont(42);
   Graph_Graph01183->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01183->GetXaxis()->SetTitleFont(42);
   Graph_Graph01183->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01183->GetYaxis()->CenterTitle(true);
   Graph_Graph01183->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01183->GetYaxis()->SetLabelFont(42);
   Graph_Graph01183->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01183->GetYaxis()->SetTitleFont(42);
   Graph_Graph01183->GetZaxis()->SetLabelFont(42);
   Graph_Graph01183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01183);
   
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
