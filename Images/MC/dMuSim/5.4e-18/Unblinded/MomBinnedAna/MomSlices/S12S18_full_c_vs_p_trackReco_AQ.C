void S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-3.158881,3456.75,0.6419446);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1281[15] = {
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
   Double_t Graph0_fy1281[15] = {
   -0.8804673,
   -2.411707,
   -1.372023,
   -0.490361,
   -0.3235468,
   -0.268097,
   -0.1964469,
   -0.2104337,
   -0.1754032,
   -0.1407413,
   -0.08121582,
   -0.1263627,
   -0.1114426,
   -0.1338849,
   -0.02772992};
   Double_t Graph0_fex1281[15] = {
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
   Double_t Graph0_fey1281[15] = {
   0.6395144,
   0.1137035,
   0.03941333,
   0.03054971,
   0.02704264,
   0.02500512,
   0.02336273,
   0.02214948,
   0.02145854,
   0.02147434,
   0.02211025,
   0.02358002,
   0.02558953,
   0.02614856,
   0.03620349};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1281,Graph0_fy1281,Graph0_fex1281,Graph0_fey1281);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01281 = new TH1F("Graph_Graph01281","S12S18",100,0,3300);
   Graph_Graph01281->SetMinimum(-2.778799);
   Graph_Graph01281->SetMaximum(0.261862);
   Graph_Graph01281->SetDirectory(0);
   Graph_Graph01281->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01281->SetLineColor(ci);
   Graph_Graph01281->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01281->GetXaxis()->SetRange(0,93);
   Graph_Graph01281->GetXaxis()->CenterTitle(true);
   Graph_Graph01281->GetXaxis()->SetLabelFont(42);
   Graph_Graph01281->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01281->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01281->GetXaxis()->SetTitleFont(42);
   Graph_Graph01281->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01281->GetYaxis()->CenterTitle(true);
   Graph_Graph01281->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01281->GetYaxis()->SetLabelFont(42);
   Graph_Graph01281->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01281->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01281->GetYaxis()->SetTitleFont(42);
   Graph_Graph01281->GetZaxis()->SetLabelFont(42);
   Graph_Graph01281->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01281->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01281);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
