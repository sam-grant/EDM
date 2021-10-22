void S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:19 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-4.794755,3605.25,9.787463);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1254[15] = {
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
   Double_t Graph0_fy1254[15] = {
   6.00073,
   -0.7292458,
   -1.522737,
   -0.5952373,
   0.04860795,
   0.125515,
   0.06454806,
   -0.1987599,
   -0.1742514,
   -0.251753,
   -0.2136067,
   -0.3241845,
   -0.5002898,
   -0.3403482,
   0.06935428};
   Double_t Graph0_fex1254[15] = {
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
   Double_t Graph0_fey1254[15] = {
   1.356363,
   1.462707,
   0.8416482,
   0.4566154,
   0.3298205,
   0.2823321,
   0.236054,
   0.2049065,
   0.1843345,
   0.176494,
   0.1728023,
   0.1724409,
   0.1634008,
   0.124726,
   0.1226072};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1254,Graph0_fy1254,Graph0_fex1254,Graph0_fey1254);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01254 = new TH1F("Graph_Graph01254","S18",100,0,3300);
   Graph_Graph01254->SetMinimum(-3.336533);
   Graph_Graph01254->SetMaximum(8.329241);
   Graph_Graph01254->SetDirectory(0);
   Graph_Graph01254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01254->SetLineColor(ci);
   Graph_Graph01254->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01254->GetXaxis()->SetRange(0,97);
   Graph_Graph01254->GetXaxis()->CenterTitle(true);
   Graph_Graph01254->GetXaxis()->SetLabelFont(42);
   Graph_Graph01254->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01254->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01254->GetXaxis()->SetTitleFont(42);
   Graph_Graph01254->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01254->GetYaxis()->CenterTitle(true);
   Graph_Graph01254->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01254->GetYaxis()->SetLabelFont(42);
   Graph_Graph01254->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01254->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01254->GetYaxis()->SetTitleFont(42);
   Graph_Graph01254->GetZaxis()->SetLabelFont(42);
   Graph_Graph01254->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01254->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01254);
   
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
