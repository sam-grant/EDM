void S18_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.0648,-13.51005,2721.986,2.776857);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[22] = {
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
   Double_t Graph0_fy1027[22] = {
   -3.179879,
   -0.1556426,
   -0.01312826,
   -0.02539303,
   -0.03025909,
   -0.09656746,
   -0.09291419,
   -0.07083154,
   0.004176972,
   0.03532362,
   -0.0177708,
   -0.03218682,
   -0.06181063,
   -0.03416598,
   -0.02211111,
   0.007630777,
   0.02136449,
   -0.04979878,
   -0.03965641,
   -0.05740303,
   -0.293093,
   -9.395245};
   Double_t Graph0_fex1027[22] = {
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
   Double_t Graph0_fey1027[22] = {
   1.50663,
   0.1561558,
   0.07550082,
   0.04616578,
   0.0322776,
   0.02663502,
   0.02342025,
   0.02114648,
   0.01999773,
   0.01903015,
   0.019045,
   0.01855782,
   0.01939872,
   0.01969911,
   0.02087606,
   0.02141415,
   0.02273121,
   0.0247551,
   0.02654556,
   0.02923908,
   0.07586234,
   1.400319};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S18",100,114.3557,3137.695);
   Graph_Graph01027->SetMinimum(-11.88136);
   Graph_Graph01027->SetMaximum(1.148166);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(22,79);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
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
