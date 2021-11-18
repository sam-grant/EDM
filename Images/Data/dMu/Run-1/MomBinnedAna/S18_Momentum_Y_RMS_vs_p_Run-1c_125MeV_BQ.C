void S18_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5135,10.14651,2721.882,22.4807);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[22] = {
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
   Double_t Graph0_fy1032[22] = {
   12.91834,
   14.16542,
   15.08812,
   16.08959,
   16.51328,
   17.46981,
   18.27895,
   19.0023,
   19.65249,
   20.07805,
   20.41016,
   20.13405,
   20.01534,
   19.65069,
   19.22109,
   18.68741,
   17.82171,
   16.73207,
   15.66492,
   14.54923,
   13.7623,
   13.76025};
   Double_t Graph0_fex1032[22] = {
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
   Double_t Graph0_fey1032[22] = {
   0.3023126,
   0.03510187,
   0.02119098,
   0.01582502,
   0.01302828,
   0.01239459,
   0.01234633,
   0.01247884,
   0.01306777,
   0.0136241,
   0.01484734,
   0.01561344,
   0.01753623,
   0.01900512,
   0.0212664,
   0.023036,
   0.0255286,
   0.02900541,
   0.03209957,
   0.03686387,
   0.09819196,
   1.558042};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S18",100,114.9091,3137.487);
   Graph_Graph01032->SetMinimum(11.37993);
   Graph_Graph01032->SetMaximum(21.24729);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01032->GetXaxis()->SetRange(22,79);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
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
