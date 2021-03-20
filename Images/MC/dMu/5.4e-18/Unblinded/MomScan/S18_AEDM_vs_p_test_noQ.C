void S18_AEDM_vs_p_test_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Mar 20 17:27:51 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.9375,-0.3938665,3941.438,1.74997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[7] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250};
   Double_t Graph0_fy1048[7] = {
   0.04014777,
   0.1592502,
   0.1446877,
   0.1753299,
   0.1482946,
   0.08127121,
   1.225486};
   Double_t Graph0_fex1048[7] = {
   250,
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1048[7] = {
   0.07670825,
   0.02514962,
   0.01924776,
   0.01642773,
   0.01555735,
   0.0183489,
   0.1671773};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S18",100,0,3850);
   Graph_Graph01048->SetMinimum(-0.1794829);
   Graph_Graph01048->SetMaximum(1.535586);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01048->GetXaxis()->SetRange(1,91);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
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
