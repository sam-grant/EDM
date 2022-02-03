void S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3826,-8.735943e-06,3406.967,7.888947e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1179[11] = {
   451.8173,
   653.2882,
   880.4177,
   1123.064,
   1371.036,
   1619.971,
   1866.583,
   2115.069,
   2362.842,
   2613.192,
   2787.647};
   Double_t Graph0_fy1179[11] = {
   1.620193e-06,
   1.074396e-07,
   3.640309e-08,
   3.320841e-08,
   4.07094e-08,
   5.524291e-08,
   8.883195e-08,
   1.704077e-07,
   3.697056e-07,
   7.002424e-07,
   1.729995e-05};
   Double_t Graph0_fex1179[11] = {
   0.11314,
   0.09526383,
   0.06881198,
   0.06717124,
   0.07180835,
   0.07951552,
   0.09313616,
   0.1168567,
   0.1525684,
   0.1856104,
   0.2333281};
   Double_t Graph0_fey1179[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1179,Graph0_fy1179,Graph0_fex1179,Graph0_fey1179);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01179 = new TH1F("Graph_Graph01179","S12S18_",100,218.0866,3021.498);
   Graph_Graph01179->SetMinimum(2.6599e-08);
   Graph_Graph01179->SetMaximum(7.012693e-05);
   Graph_Graph01179->SetDirectory(0);
   Graph_Graph01179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01179->SetLineColor(ci);
   Graph_Graph01179->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01179->GetXaxis()->SetRange(0,101);
   Graph_Graph01179->GetXaxis()->CenterTitle(true);
   Graph_Graph01179->GetXaxis()->SetLabelFont(42);
   Graph_Graph01179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01179->GetXaxis()->SetTitleFont(42);
   Graph_Graph01179->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01179->GetYaxis()->CenterTitle(true);
   Graph_Graph01179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01179->GetYaxis()->SetLabelFont(42);
   Graph_Graph01179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01179->GetYaxis()->SetTitleFont(42);
   Graph_Graph01179->GetZaxis()->SetLabelFont(42);
   Graph_Graph01179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01179);
   
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
