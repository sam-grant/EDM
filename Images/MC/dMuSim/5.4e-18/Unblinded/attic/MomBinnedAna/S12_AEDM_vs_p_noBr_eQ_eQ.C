void S12_AEDM_vs_p_noBr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 29 10:23:29 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.2153009,2850.5,0.5927701);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t Graph0_fy1082[17] = {
   0.01608685,
   0.3678824,
   0.08595697,
   0.0576399,
   0.05968952,
   -0.004784053,
   0.09962713,
   0.0190823,
   0.1608197,
   0.2166841,
   0.05092707,
   0.05193578,
   0.2012067,
   0.07795911,
   0.1854511,
   0.1775439,
   0.2205477};
   Double_t Graph0_fex1082[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1082[17] = {
   0.09670922,
   0.09020914,
   0.08487494,
   0.08085614,
   0.0769107,
   0.07401344,
   0.07111282,
   0.06847736,
   0.06616684,
   0.0643873,
   0.0629208,
   0.06153451,
   0.06057164,
   0.05985347,
   0.05956301,
   0.05905074,
   0.05895248};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S12",100,530,2570);
   Graph_Graph01082->SetMinimum(-0.1344938);
   Graph_Graph01082->SetMaximum(0.511963);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01082->GetXaxis()->SetRange(0,101);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
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
