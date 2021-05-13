void S0_c_vs_p_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:23 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.646737,3378.375,5.323861);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[30] = {
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
   Double_t Graph0_fy1071[30] = {
   3.054978,
   0.3140047,
   2.236949,
   -0.9194385,
   -1.264462,
   -0.6875489,
   -0.1541867,
   -0.09492828,
   -0.04956804,
   -0.01197091,
   0.03815234,
   -0.0203849,
   0.03010755,
   -0.0007456281,
   0.04177481,
   0.06865365,
   0.03852551,
   0.05394285,
   -0.007418336,
   0.02285422,
   0.004791843,
   0.03538509,
   -0.009062943,
   0.00295177,
   -0.02549154,
   0.01743444,
   -0.03366487,
   0.004191849,
   -0.04715645,
   0.2136516};
   Double_t Graph0_fex1071[30] = {
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
   Double_t Graph0_fey1071[30] = {
   0.9404499,
   0.6290024,
   0.2766765,
   0.09816879,
   0.05384174,
   0.04121318,
   0.03603541,
   0.03292896,
   0.03040026,
   0.02849059,
   0.02683307,
   0.02540767,
   0.02412511,
   0.02303792,
   0.02206754,
   0.02126347,
   0.02058606,
   0.01997403,
   0.01952187,
   0.01923582,
   0.01895715,
   0.01873012,
   0.01863798,
   0.01866398,
   0.0188054,
   0.01896758,
   0.01932843,
   0.02017561,
   0.0226162,
   0.0509729};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S0",100,0,3300);
   Graph_Graph01071->SetMinimum(-1.849677);
   Graph_Graph01071->SetMaximum(4.526801);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01071->GetXaxis()->SetRange(1,91);
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
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
