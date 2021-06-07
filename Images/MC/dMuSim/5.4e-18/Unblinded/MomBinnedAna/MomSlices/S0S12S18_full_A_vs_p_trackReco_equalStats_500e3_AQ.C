void S0S12S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(197,-0.1057761,2003,0.3071213);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1346[7] = {
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700};
   Double_t Graph0_fy1346[7] = {
   0.02237918,
   0.150578,
   0.1930331,
   0.1196579,
   0.1242513,
   0.201175,
   0.1389333};
   Double_t Graph0_fex1346[7] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1346[7] = {
   0.05933901,
   0.05206346,
   0.04527198,
   0.03958114,
   0.03483895,
   0.03072513,
   0.02714007};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1346,Graph0_fy1346,Graph0_fex1346,Graph0_fey1346);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01346 = new TH1F("Graph_Graph01346","S0S12S18",100,260,1940);
   Graph_Graph01346->SetMinimum(-0.06448632);
   Graph_Graph01346->SetMaximum(0.2658316);
   Graph_Graph01346->SetDirectory(0);
   Graph_Graph01346->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01346->SetLineColor(ci);
   Graph_Graph01346->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01346->GetXaxis()->SetRange(8,93);
   Graph_Graph01346->GetXaxis()->CenterTitle(true);
   Graph_Graph01346->GetXaxis()->SetLabelFont(42);
   Graph_Graph01346->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01346->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01346->GetXaxis()->SetTitleFont(42);
   Graph_Graph01346->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01346->GetYaxis()->CenterTitle(true);
   Graph_Graph01346->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01346->GetYaxis()->SetLabelFont(42);
   Graph_Graph01346->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01346->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01346->GetYaxis()->SetTitleFont(42);
   Graph_Graph01346->GetZaxis()->SetLabelFont(42);
   Graph_Graph01346->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01346->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01346);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
