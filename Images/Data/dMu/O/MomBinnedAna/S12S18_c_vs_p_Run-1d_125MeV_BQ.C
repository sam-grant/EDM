void S12S18_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8227,-4.671904,2722.442,1.670833);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[22] = {
   367.2033,
   457.0147,
   570.1003,
   694.7422,
   815.8159,
   938.5085,
   1062.735,
   1188.193,
   1312.674,
   1435.759,
   1561.971,
   1685.095,
   1810.525,
   1934.999,
   2060.258,
   2184.864,
   2309.08,
   2433.07,
   2559.684,
   2678.57,
   2781.109,
   2885.371};
   Double_t Graph0_fy1033[22] = {
   -2.633995,
   -0.8825968,
   -0.7201345,
   -0.6211915,
   -0.5720678,
   -0.4831551,
   -0.4013014,
   -0.3544949,
   -0.3193838,
   -0.2886174,
   -0.2222443,
   -0.2132115,
   -0.204452,
   -0.1477729,
   -0.1531845,
   -0.1522449,
   -0.1225825,
   -0.1290765,
   -0.06285717,
   -0.05931176,
   -0.01219581,
   0.2933291};
   Double_t Graph0_fex1033[22] = {
   0.1223124,
   0.06036459,
   0.04024824,
   0.0277788,
   0.02243236,
   0.02027873,
   0.01924623,
   0.01865073,
   0.01899693,
   0.01911444,
   0.02059145,
   0.0217368,
   0.02457288,
   0.02694885,
   0.0308822,
   0.03415244,
   0.03960077,
   0.04777372,
   0.05698453,
   0.06530988,
   0.133844,
   0.8128393};
   Double_t Graph0_fey1033[22] = {
   0.980786,
   0.08967718,
   0.04372371,
   0.02647351,
   0.01842664,
   0.01517007,
   0.01335811,
   0.01209809,
   0.01139378,
   0.01079747,
   0.01082339,
   0.01049498,
   0.0109421,
   0.0110119,
   0.01156122,
   0.01173867,
   0.0123325,
   0.01331641,
   0.01407408,
   0.01520118,
   0.03756257,
   0.3203811};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","S12S18",100,115.1707,3138.094);
   Graph_Graph01033->SetMinimum(-4.03763);
   Graph_Graph01033->SetMaximum(1.036559);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01033->GetXaxis()->SetRange(22,79);
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
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
