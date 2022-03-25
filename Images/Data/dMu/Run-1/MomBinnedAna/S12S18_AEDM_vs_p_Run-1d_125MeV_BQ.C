void S12S18_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8762,-0.09620666,3032.589,0.09372973);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[22] = {
   367.2513,
   457.0513,
   570.1118,
   694.7888,
   815.8518,
   938.5172,
   1062.732,
   1188.224,
   1312.688,
   1435.771,
   1561.973,
   1685.085,
   1810.538,
   1935.019,
   2060.261,
   2184.905,
   2309.088,
   2433.055,
   2559.673,
   2678.6,
   2781.198,
   2885.782};
   Double_t Graph0_fy1172[22] = {
   0.3953716,
   -0.03815154,
   0.1022063,
   0.03989569,
   0.02525871,
   0.02729043,
   0.03354669,
   0.02723063,
   0.04831467,
   0.04175011,
   0.02876948,
   0.04242835,
   0.03814436,
   0.04505565,
   0.04666291,
   0.0404306,
   0.04288104,
   0.03039434,
   0.02991169,
   0.03258385,
   0.03071768,
   -0.1955793};
   Double_t Graph0_fex1172[22] = {
   0.109463,
   0.05479406,
   0.03651396,
   0.02514983,
   0.02028487,
   0.01833508,
   0.0173851,
   0.0168304,
   0.01713305,
   0.01722648,
   0.01854525,
   0.01956557,
   0.02210779,
   0.02422989,
   0.02774509,
   0.03065898,
   0.03552339,
   0.0428648,
   0.05104552,
   0.05848479,
   0.120145,
   0.6851676};
   Double_t Graph0_fey1172[22] = {
   0.8684242,
   0.07992164,
   0.03886131,
   0.0235647,
   0.01634639,
   0.01346128,
   0.01185626,
   0.01071711,
   0.01010177,
   0.009570799,
   0.009587193,
   0.009291849,
   0.00965667,
   0.009747435,
   0.01021233,
   0.01035743,
   0.01086036,
   0.01172084,
   0.01238671,
   0.01335243,
   0.0332033,
   0.3564532};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18",100,115.2092,3138.4);
   Graph_Graph01172->SetMinimum(-0.07721302);
   Graph_Graph01172->SetMaximum(0.07473609);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(21,88);
   Graph_Graph01172->GetXaxis()->CenterTitle(true);
   Graph_Graph01172->GetXaxis()->SetLabelFont(42);
   Graph_Graph01172->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01172->GetXaxis()->SetTitleFont(42);
   Graph_Graph01172->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01172->GetYaxis()->CenterTitle(true);
   Graph_Graph01172->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01172->GetYaxis()->SetLabelFont(42);
   Graph_Graph01172->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01172->GetYaxis()->SetTitleFont(42);
   Graph_Graph01172->GetZaxis()->SetLabelFont(42);
   Graph_Graph01172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01172);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
