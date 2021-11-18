void S18_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5135,10.26745,2721.882,22.61637);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[22] = {
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
   Double_t Graph0_fy1031[22] = {
   13.78727,
   13.48787,
   12.84214,
   12.59039,
   12.58281,
   12.55345,
   12.5345,
   12.50603,
   12.50365,
   12.50871,
   12.52996,
   12.52188,
   12.4974,
   12.44271,
   12.39814,
   12.36382,
   12.35839,
   12.34701,
   12.43818,
   12.66237,
   13.55167,
   18.46722};
   Double_t Graph0_fex1031[22] = {
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
   Double_t Graph0_fey1031[22] = {
   0.3226473,
   0.03342536,
   0.01803696,
   0.01238345,
   0.009927255,
   0.00890645,
   0.008465875,
   0.008212301,
   0.008313684,
   0.008487087,
   0.009113965,
   0.009709428,
   0.01094867,
   0.01203316,
   0.01371721,
   0.01524049,
   0.01770238,
   0.02140361,
   0.02548744,
   0.03208265,
   0.09671382,
   2.091};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","S18",100,114.9091,3137.487);
   Graph_Graph01031->SetMinimum(11.50234);
   Graph_Graph01031->SetMaximum(21.38148);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->SetRange(22,79);
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
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
