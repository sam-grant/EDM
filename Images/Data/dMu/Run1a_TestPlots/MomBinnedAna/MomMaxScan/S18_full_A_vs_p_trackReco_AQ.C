void S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.000280381,3550,0.1383878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1328[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1328[12] = {
   0.03194811,
   0.03189394,
   0.03241182,
   0.03394971,
   0.03450706,
   0.03229642,
   0.03730462,
   0.03773561,
   0.04733337,
   0.05124037,
   0.05788361,
   0.08123225};
   Double_t Graph0_fex1328[12] = {
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
   Double_t Graph0_fey1328[12] = {
   0.007754402,
   0.007788705,
   0.007918619,
   0.008120987,
   0.008472102,
   0.008998139,
   0.00978892,
   0.01100027,
   0.01285889,
   0.01586812,
   0.02124322,
   0.03413764};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1328,Graph0_fy1328,Graph0_fex1328,Graph0_fey1328);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01328 = new TH1F("Graph_Graph01328","S18",100,580,3220);
   Graph_Graph01328->SetMinimum(0.01409112);
   Graph_Graph01328->SetMaximum(0.124577);
   Graph_Graph01328->SetDirectory(0);
   Graph_Graph01328->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01328->SetLineColor(ci);
   Graph_Graph01328->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01328->GetXaxis()->SetRange(1,100);
   Graph_Graph01328->GetXaxis()->CenterTitle(true);
   Graph_Graph01328->GetXaxis()->SetLabelFont(42);
   Graph_Graph01328->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01328->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01328->GetXaxis()->SetTitleFont(42);
   Graph_Graph01328->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01328->GetYaxis()->CenterTitle(true);
   Graph_Graph01328->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01328->GetYaxis()->SetLabelFont(42);
   Graph_Graph01328->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01328->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01328->GetYaxis()->SetTitleFont(42);
   Graph_Graph01328->GetZaxis()->SetLabelFont(42);
   Graph_Graph01328->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01328->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01328);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
