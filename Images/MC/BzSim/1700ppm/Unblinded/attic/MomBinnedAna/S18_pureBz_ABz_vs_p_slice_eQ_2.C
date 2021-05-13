void S18_pureBz_ABz_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.3567105,3690,0.333553);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1266[14] = {
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
   Double_t Graph0_fy1266[14] = {
   -0.08498581,
   0.09679071,
   0.1427293,
   0.1827238,
   0.1717321,
   0.1600356,
   0.1434386,
   0.140226,
   0.132739,
   0.1144485,
   0.136694,
   0.1092057,
   0.04974424,
   -0.001221467};
   Double_t Graph0_fex1266[14] = {
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
   Double_t Graph0_fey1266[14] = {
   0.1566808,
   0.05477412,
   0.04097944,
   0.03578529,
   0.0323875,
   0.02971511,
   0.02772902,
   0.02626013,
   0.02550829,
   0.02514384,
   0.02533455,
   0.02620137,
   0.02857897,
   0.0440188};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1266,Graph0_fy1266,Graph0_fex1266,Graph0_fey1266);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01266 = new TH1F("Graph_Graph01266","S18",100,0,3280);
   Graph_Graph01266->SetMinimum(-0.2876842);
   Graph_Graph01266->SetMaximum(0.2645266);
   Graph_Graph01266->SetDirectory(0);
   Graph_Graph01266->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01266->SetLineColor(ci);
   Graph_Graph01266->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01266->GetXaxis()->CenterTitle(true);
   Graph_Graph01266->GetXaxis()->SetLabelFont(42);
   Graph_Graph01266->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01266->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01266->GetXaxis()->SetTitleFont(42);
   Graph_Graph01266->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01266->GetYaxis()->CenterTitle(true);
   Graph_Graph01266->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01266->GetYaxis()->SetLabelFont(42);
   Graph_Graph01266->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01266->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01266->GetYaxis()->SetTitleFont(42);
   Graph_Graph01266->GetZaxis()->SetLabelFont(42);
   Graph_Graph01266->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01266->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01266);
   
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
