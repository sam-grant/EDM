void S18_AEDM_vs_p_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 12:42:25 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-25.18405,3378.375,5.848556);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[30] = {
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
   Double_t Graph0_fy1006[30] = {
   -19.1074,
   -0.185251,
   0.03096464,
   0.3594317,
   0.04041422,
   0.1181781,
   0.1610607,
   0.1834004,
   0.1338186,
   0.2495636,
   0.08287085,
   0.1600456,
   0.2224331,
   0.168596,
   0.1689119,
   0.2038032,
   0.1558427,
   0.1995925,
   0.1276634,
   0.150205,
   0.1774915,
   0.1645016,
   0.1188822,
   0.1455238,
   0.1009802,
   0.1345073,
   0.0764958,
   0.0490871,
   0.04374607,
   -0.08702402};
   Double_t Graph0_fex1006[30] = {
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
   Double_t Graph0_fey1006[30] = {
   0.9045503,
   0.861706,
   0.3784494,
   0.137126,
   0.07658784,
   0.05825273,
   0.05073053,
   0.04637882,
   0.04301635,
   0.04020392,
   0.0380111,
   0.03609827,
   0.03429943,
   0.03272594,
   0.03137705,
   0.0302863,
   0.02920709,
   0.02848084,
   0.02794273,
   0.02739279,
   0.02721561,
   0.0268956,
   0.02677784,
   0.02696498,
   0.02722327,
   0.02780089,
   0.02829733,
   0.02957371,
   0.03451894,
   0.07986737};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","S18",100,0,3300);
   Graph_Graph01006->SetMinimum(-22.08079);
   Graph_Graph01006->SetMaximum(2.745295);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01006->GetXaxis()->SetRange(1,91);
   Graph_Graph01006->GetXaxis()->CenterTitle(true);
   Graph_Graph01006->GetXaxis()->SetLabelFont(42);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetXaxis()->SetTitleFont(42);
   Graph_Graph01006->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01006->GetYaxis()->CenterTitle(true);
   Graph_Graph01006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01006->GetYaxis()->SetLabelFont(42);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01006->GetYaxis()->SetTitleFont(42);
   Graph_Graph01006->GetZaxis()->SetLabelFont(42);
   Graph_Graph01006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01006);
   
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
