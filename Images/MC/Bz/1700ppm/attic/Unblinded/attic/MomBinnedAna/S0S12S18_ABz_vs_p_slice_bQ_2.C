void S0S12S18_ABz_vs_p_slice_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 10:23:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-410,-1.057802,3690,0.5108931);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1236[14] = {
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
   Double_t Graph0_fy1236[14] = {
   -0.3161853,
   0.05712955,
   0.1198953,
   0.2188988,
   0.1442153,
   0.1643572,
   0.1636035,
   0.1582783,
   0.1706396,
   0.1448338,
   0.1752809,
   0.1120969,
   0.1164507,
   0.02124452};
   Double_t Graph0_fex1236[14] = {
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
   Double_t Graph0_fey1236[14] = {
   0.4801674,
   0.08682854,
   0.0434607,
   0.03054508,
   0.02618135,
   0.02420913,
   0.02315227,
   0.02247287,
   0.02288482,
   0.02400906,
   0.0255953,
   0.02733635,
   0.029027,
   0.09631491};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1236,Graph0_fy1236,Graph0_fex1236,Graph0_fey1236);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01236 = new TH1F("Graph_Graph01236","S0S12S18",100,0,3280);
   Graph_Graph01236->SetMinimum(-0.9009324);
   Graph_Graph01236->SetMaximum(0.3540236);
   Graph_Graph01236->SetDirectory(0);
   Graph_Graph01236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01236->SetLineColor(ci);
   Graph_Graph01236->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01236->GetXaxis()->CenterTitle(true);
   Graph_Graph01236->GetXaxis()->SetLabelFont(42);
   Graph_Graph01236->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01236->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01236->GetXaxis()->SetTitleFont(42);
   Graph_Graph01236->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01236->GetYaxis()->CenterTitle(true);
   Graph_Graph01236->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01236->GetYaxis()->SetLabelFont(42);
   Graph_Graph01236->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01236->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01236->GetYaxis()->SetTitleFont(42);
   Graph_Graph01236->GetZaxis()->SetLabelFont(42);
   Graph_Graph01236->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01236);
   
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
