void S12_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8816,-6.103113,2727.048,4.566375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[22] = {
   367.2763,
   456.6701,
   570.2384,
   695.014,
   815.941,
   938.5472,
   1062.657,
   1188.254,
   1312.768,
   1435.889,
   1561.964,
   1685.27,
   1810.577,
   1935.117,
   2060.28,
   2184.973,
   2309.128,
   2432.978,
   2559.529,
   2679.227,
   2781.166,
   2885.901};
   Double_t Graph0_fy1013[22] = {
   -2.944269,
   -0.7836192,
   -0.7784044,
   -0.5717657,
   -0.5079251,
   -0.4351194,
   -0.3173,
   -0.3217312,
   -0.3121571,
   -0.3049901,
   -0.2197105,
   -0.1790628,
   -0.1699712,
   -0.125672,
   -0.1486948,
   -0.1241537,
   -0.1235978,
   -0.1012037,
   -0.02670196,
   0.03748261,
   0.1605187,
   2.043135};
   Double_t Graph0_fex1013[22] = {
   0.1727402,
   0.08564447,
   0.05750668,
   0.03900971,
   0.03131764,
   0.02823439,
   0.02680342,
   0.02592069,
   0.02627859,
   0.0263654,
   0.02833862,
   0.02976529,
   0.03340781,
   0.03661848,
   0.04175349,
   0.04603796,
   0.05317634,
   0.06379139,
   0.07674565,
   0.08753628,
   0.1746818,
   1.164882};
   Double_t Graph0_fey1013[22] = {
   1.380596,
   0.1284924,
   0.06268183,
   0.03741982,
   0.02577497,
   0.02117717,
   0.01864857,
   0.0168583,
   0.0157996,
   0.01489297,
   0.01493757,
   0.01440072,
   0.01493483,
   0.01493877,
   0.015659,
   0.01581735,
   0.01657857,
   0.01788766,
   0.01904627,
   0.02053295,
   0.04970874,
   0.7449916};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","S12",100,115.1073,3139.062);
   Graph_Graph01013->SetMinimum(-5.036164);
   Graph_Graph01013->SetMaximum(3.499426);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01013->GetXaxis()->SetRange(21,79);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("alp");
   
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
