void S12_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:57:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-7.926642,3605.25,1.840596);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1148[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1148[15] = {
   -5.14447,
   0.06526283,
   0.060324,
   0.05042513,
   0.06892665,
   0.03391975,
   0.04696574,
   0.07936876,
   0.01852031,
   0.02690308,
   0.03721293,
   0.01355607,
   -0.02948587,
   0.02917481,
   0.02399361};
   Double_t Graph0_fex1148[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1148[15] = {
   1.154299,
   0.14746,
   0.05321813,
   0.03402708,
   0.02641551,
   0.02275692,
   0.02025469,
   0.01884271,
   0.01803019,
   0.0178428,
   0.01788725,
   0.01823766,
   0.02040551,
   0.02090301,
   0.03196226};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1148,Graph0_fy1148,Graph0_fex1148,Graph0_fey1148);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01148 = new TH1F("Graph_Graph01148","S12",100,0,3300);
   Graph_Graph01148->SetMinimum(-6.949918);
   Graph_Graph01148->SetMaximum(0.863872);
   Graph_Graph01148->SetDirectory(0);
   Graph_Graph01148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01148->SetLineColor(ci);
   Graph_Graph01148->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01148->GetXaxis()->SetRange(0,97);
   Graph_Graph01148->GetXaxis()->CenterTitle(true);
   Graph_Graph01148->GetXaxis()->SetLabelFont(42);
   Graph_Graph01148->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01148->GetXaxis()->SetTitleFont(42);
   Graph_Graph01148->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01148->GetYaxis()->CenterTitle(true);
   Graph_Graph01148->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01148->GetYaxis()->SetLabelFont(42);
   Graph_Graph01148->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01148->GetYaxis()->SetTitleFont(42);
   Graph_Graph01148->GetZaxis()->SetLabelFont(42);
   Graph_Graph01148->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01148);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
