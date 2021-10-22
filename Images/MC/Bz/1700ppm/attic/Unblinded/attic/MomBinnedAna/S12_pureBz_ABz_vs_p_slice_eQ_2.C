void S12_pureBz_ABz_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.6642728,3690,0.4601219);
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
   -0.3244835,
   0.05579922,
   0.05169974,
   0.2281411,
   0.1276182,
   0.2432068,
   0.1850447,
   0.1451084,
   0.1518044,
   0.07489377,
   0.124059,
   0.08236399,
   0.1332341,
   -0.005670101};
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
   0.1523901,
   0.05466079,
   0.04098984,
   0.03572095,
   0.03222504,
   0.02951595,
   0.02759995,
   0.02601751,
   0.02525132,
   0.02495504,
   0.02508781,
   0.0259448,
   0.02811803,
   0.04299848};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1236,Graph0_fy1236,Graph0_fex1236,Graph0_fey1236);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01236 = new TH1F("Graph_Graph01236","S12",100,0,3280);
   Graph_Graph01236->SetMinimum(-0.5518333);
   Graph_Graph01236->SetMaximum(0.3476824);
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
