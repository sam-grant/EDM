void S12_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:03 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-437.25,-2.014916,3605.25,1.736414);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1118[15] = {
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
   Double_t Graph0_fy1118[15] = {
   -0.1392509,
   -0.3466837,
   0.08313426,
   0.02545604,
   0.2790709,
   0.1875456,
   0.2302801,
   0.2165938,
   0.08895902,
   0.1535033,
   0.1173767,
   0.1462292,
   0.1578593,
   0.08515932,
   -0.108183};
   Double_t Graph0_fex1118[15] = {
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
   Double_t Graph0_fey1118[15] = {
   1.250443,
   0.2288447,
   0.07925081,
   0.06148555,
   0.05444342,
   0.05021075,
   0.04694235,
   0.04445378,
   0.04286078,
   0.04289036,
   0.04413062,
   0.04673528,
   0.05073197,
   0.05109218,
   0.07190474};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1118,Graph0_fy1118,Graph0_fex1118,Graph0_fey1118);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01118 = new TH1F("Graph_Graph01118","S12",100,0,3300);
   Graph_Graph01118->SetMinimum(-1.639783);
   Graph_Graph01118->SetMaximum(1.361281);
   Graph_Graph01118->SetDirectory(0);
   Graph_Graph01118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01118->SetLineColor(ci);
   Graph_Graph01118->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01118->GetXaxis()->SetRange(0,97);
   Graph_Graph01118->GetXaxis()->CenterTitle(true);
   Graph_Graph01118->GetXaxis()->SetLabelFont(42);
   Graph_Graph01118->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01118->GetXaxis()->SetTitleFont(42);
   Graph_Graph01118->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01118->GetYaxis()->CenterTitle(true);
   Graph_Graph01118->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01118->GetYaxis()->SetLabelFont(42);
   Graph_Graph01118->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01118->GetYaxis()->SetTitleFont(42);
   Graph_Graph01118->GetZaxis()->SetLabelFont(42);
   Graph_Graph01118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01118);
   
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
