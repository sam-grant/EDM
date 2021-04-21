void S0_AEDM_vs_p_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:23 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.651131,3378.375,2.450254);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t Graph0_fy1072[30] = {
   0.3856238,
   -0.9099532,
   -0.4675315,
   0.203904,
   -0.167289,
   0.1508865,
   0.1471637,
   0.1663952,
   0.1976378,
   0.2211135,
   0.1541205,
   0.1571147,
   0.1264281,
   0.2257035,
   0.1607465,
   0.1778346,
   0.1425368,
   0.1589054,
   0.1761501,
   0.2067777,
   0.1494684,
   0.1288783,
   0.1758387,
   0.156987,
   0.1080999,
   0.1096496,
   0.05963739,
   0.04824491,
   0.04352566,
   -0.007582705};
   Double_t Graph0_fex1072[30] = {
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
   Double_t Graph0_fey1072[30] = {
   1.214399,
   0.8909465,
   0.391125,
   0.1387844,
   0.07616369,
   0.05838911,
   0.0510142,
   0.04660164,
   0.04302446,
   0.04030541,
   0.03794426,
   0.03592564,
   0.03411848,
   0.03256544,
   0.03118163,
   0.03004009,
   0.0291321,
   0.02818194,
   0.02754665,
   0.02719711,
   0.02680379,
   0.02647517,
   0.02636858,
   0.02634855,
   0.02659779,
   0.02679685,
   0.02719116,
   0.02850689,
   0.03195086,
   0.07137481};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S0",100,0,3300);
   Graph_Graph01072->SetMinimum(-2.140992);
   Graph_Graph01072->SetMaximum(1.940116);
   Graph_Graph01072->SetDirectory(0);
   Graph_Graph01072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01072->SetLineColor(ci);
   Graph_Graph01072->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01072->GetXaxis()->SetRange(1,91);
   Graph_Graph01072->GetXaxis()->CenterTitle(true);
   Graph_Graph01072->GetXaxis()->SetLabelFont(42);
   Graph_Graph01072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01072->GetXaxis()->SetTitleFont(42);
   Graph_Graph01072->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01072->GetYaxis()->CenterTitle(true);
   Graph_Graph01072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01072->GetYaxis()->SetLabelFont(42);
   Graph_Graph01072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01072->GetYaxis()->SetTitleFont(42);
   Graph_Graph01072->GetZaxis()->SetLabelFont(42);
   Graph_Graph01072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01072);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
