void S18_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5135,-5.032667,2721.882,1.69986);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   367.0021,
   457.2349,
   570.0318,
   694.4706,
   815.6729,
   938.5321,
   1062.883,
   1188.197,
   1312.61,
   1435.711,
   1561.996,
   1685.036,
   1810.508,
   1934.917,
   2060.262,
   2184.766,
   2309.001,
   2433.43,
   2559.663,
   2677.98,
   2781.675,
   2884.375};
   Double_t Graph0_fy1028[22] = {
   -2.194088,
   0.07241643,
   0.05487635,
   0.07524968,
   0.04541076,
   0.06196962,
   0.07409719,
   0.0665177,
   0.001057678,
   0.0441911,
   0.03055468,
   0.05639863,
   0.0278344,
   0.07615408,
   0.06754314,
   0.02524858,
   0.05509502,
   0.007585109,
   0.07499509,
   0.02883919,
   0.06491406,
   0.1274326};
   Double_t Graph0_fex1028[22] = {
   0.2114459,
   0.1061715,
   0.07025293,
   0.04927527,
   0.03993018,
   0.03621172,
   0.03428821,
   0.03333799,
   0.03409397,
   0.03439993,
   0.03714179,
   0.03934393,
   0.04472775,
   0.04911804,
   0.05664353,
   0.06272883,
   0.07289786,
   0.08826086,
   0.1042874,
   0.1212594,
   0.2592488,
   1.230174};
   Double_t Graph0_fey1028[22] = {
   1.716491,
   0.1542843,
   0.07450748,
   0.04584305,
   0.03208772,
   0.02648821,
   0.023339,
   0.02109746,
   0.019989,
   0.01903564,
   0.01909467,
   0.01862007,
   0.01946668,
   0.01970117,
   0.02071342,
   0.02118627,
   0.02217903,
   0.02388295,
   0.02512135,
   0.0275402,
   0.07061645,
   0.4503395};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,114.9091,3137.487);
   Graph_Graph01028->SetMinimum(-4.359414);
   Graph_Graph01028->SetMaximum(1.026607);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(22,79);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
   gre->Draw("alp");
   
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
