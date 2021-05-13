void S18_ABz_vs_p_gQ_coarse()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  3 22:24:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,0.01603208,2877,0.3197999);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t Graph0_fy1103[9] = {
   0.1672784,
   0.2240412,
   0.1074181,
   0.1741959,
   0.1503306,
   0.1784636,
   0.1371265,
   0.1016758,
   0.139323};
   Double_t Graph0_fex1103[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1103[9] = {
   0.07013367,
   0.04513073,
   0.04075808,
   0.03748029,
   0.03496278,
   0.0331065,
   0.03208879,
   0.03174679,
   0.0318433};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","S18",100,420,2580);
   Graph_Graph01103->SetMinimum(0.04640887);
   Graph_Graph01103->SetMaximum(0.2894231);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01103->GetXaxis()->SetRange(0,101);
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
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
