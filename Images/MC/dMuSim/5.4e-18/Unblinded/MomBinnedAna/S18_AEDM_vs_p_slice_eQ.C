void S18_AEDM_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:07 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-3.330479,3378.375,1.316338);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[15] = {
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
   Double_t Graph0_fy1100[15] = {
   -1.541876,
   0.3885142,
   0.03992226,
   0.2091435,
   0.1288299,
   0.1135913,
   0.1855633,
   0.1882517,
   0.1705682,
   0.1317487,
   0.1649574,
   0.1241594,
   0.1346543,
   0.07115036,
   0.02376957};
   Double_t Graph0_fex1100[15] = {
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
   Double_t Graph0_fey1100[15] = {
   1.014134,
   0.1533544,
   0.05422984,
   0.04060318,
   0.03554101,
   0.03218403,
   0.0295637,
   0.02751323,
   0.02589959,
   0.02496517,
   0.02446885,
   0.02403522,
   0.02443198,
   0.02532668,
   0.03697939};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S18",100,0,3300);
   Graph_Graph01100->SetMinimum(-2.865798);
   Graph_Graph01100->SetMaximum(0.8516565);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01100->GetXaxis()->SetRange(1,91);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01100->GetYaxis()->CenterTitle(true);
   Graph_Graph01100->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01100->GetYaxis()->SetLabelFont(42);
   Graph_Graph01100->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01100->GetYaxis()->SetTitleFont(42);
   Graph_Graph01100->GetZaxis()->SetLabelFont(42);
   Graph_Graph01100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01100);
   
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
