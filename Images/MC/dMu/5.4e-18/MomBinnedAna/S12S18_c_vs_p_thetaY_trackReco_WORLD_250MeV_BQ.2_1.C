void S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3826,-0.1724649,3406.967,0.04941403);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1168[11] = {
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
   Double_t Graph0_fy1168[11] = {
   -0.04333937,
   0.00942073,
   0.02271289,
   -0.006599563,
   -0.0242516,
   -0.001406166,
   -0.0177869,
   0.0037553,
   -0.004211851,
   0.002687878,
   0.00715466};
   Double_t Graph0_fex1168[11] = {
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
   Double_t Graph0_fey1168[11] = {
   0.1063204,
   0.0356537,
   0.02039179,
   0.01673464,
   0.01537824,
   0.01470455,
   0.01494734,
   0.01600008,
   0.01769035,
   0.01834138,
   0.04535243};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1168,Graph0_fy1168,Graph0_fex1168,Graph0_fey1168);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01168 = new TH1F("Graph_Graph01168","S12S18_",100,218.0866,3021.498);
   Graph_Graph01168->SetMinimum(-0.150277);
   Graph_Graph01168->SetMaximum(0.02722613);
   Graph_Graph01168->SetDirectory(0);
   Graph_Graph01168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01168->SetLineColor(ci);
   Graph_Graph01168->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01168->GetXaxis()->SetRange(0,101);
   Graph_Graph01168->GetXaxis()->CenterTitle(true);
   Graph_Graph01168->GetXaxis()->SetLabelFont(42);
   Graph_Graph01168->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01168->GetXaxis()->SetTitleFont(42);
   Graph_Graph01168->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01168->GetYaxis()->CenterTitle(true);
   Graph_Graph01168->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01168->GetYaxis()->SetLabelFont(42);
   Graph_Graph01168->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01168->GetYaxis()->SetTitleFont(42);
   Graph_Graph01168->GetZaxis()->SetLabelFont(42);
   Graph_Graph01168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01168);
   
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
