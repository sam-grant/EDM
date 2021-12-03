void S18_c_vs_p_Run-1a_125MeV_750-2500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:18:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0523,-0.523176,3028.099,0.4295388);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   366.6108,
   457.0998,
   570.2671,
   694.5077,
   815.6456,
   938.5066,
   1062.791,
   1188.164,
   1312.63,
   1435.781,
   1561.983,
   1685.03,
   1810.398,
   1935.067,
   2060.343,
   2184.713,
   2309.137,
   2433.45,
   2559.784,
   2678.032,
   2781.338,
   2884.595};
   Double_t Graph0_fy1028[22] = {
   8.769439,
   2.728682,
   2.327266,
   -0.1788799,
   0.06452639,
   0.288316,
   -0.523939,
   -0.5069539,
   -0.5354834,
   -0.4274398,
   -0.3393532,
   -0.2131296,
   -0.1737235,
   -0.1162989,
   -0.1230382,
   -0.0596511,
   -0.03531497,
   -0.1044348,
   -0.06097015,
   -0.05221209,
   -0.3044694,
   -11.73759};
   Double_t Graph0_fex1028[22] = {
   0.3102122,
   0.1518093,
   0.1004353,
   0.06977992,
   0.0567256,
   0.05149815,
   0.04880985,
   0.04735213,
   0.04837734,
   0.04886203,
   0.05243069,
   0.05572119,
   0.06310108,
   0.06909388,
   0.07959302,
   0.08786508,
   0.1020153,
   0.1236492,
   0.1454163,
   0.1670066,
   0.352833,
   1.155309};
   Double_t Graph0_fey1028[22] = {
   1.51978,
   0.1552886,
   0.07539587,
   0.04615403,
   0.03226606,
   0.02663131,
   0.02341598,
   0.02114226,
   0.01999309,
   0.01902505,
   0.01904096,
   0.01855092,
   0.01939261,
   0.01969102,
   0.02086669,
   0.021399,
   0.0227099,
   0.02473646,
   0.02650418,
   0.02919815,
   0.07581419,
   1.469493};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,114.3557,3137.695);
   Graph_Graph01028->SetMinimum(-0.4279045);
   Graph_Graph01028->SetMaximum(0.3342674);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(22,88);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
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
