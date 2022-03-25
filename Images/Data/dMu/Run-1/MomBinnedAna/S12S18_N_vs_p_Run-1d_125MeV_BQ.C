void S12S18_N_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8762,-662782.6,3032.589,6123515);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1178[22] = {
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
   Double_t Graph0_fy1178[22] = {
   3131,
   305623,
   939140,
   1968694,
   3117050,
   3883885,
   4273364,
   4538363,
   4471185,
   4334720,
   3788488,
   3366481,
   2668014,
   2197869,
   1694194,
   1374085,
   1027955,
   703277,
   497483,
   335505,
   45033,
   170};
   Double_t Graph0_fex1178[22] = {
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
   Double_t Graph0_fey1178[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1178,Graph0_fy1178,Graph0_fex1178,Graph0_fey1178);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01178 = new TH1F("Graph_Graph01178","S12S18",100,115.2092,3138.4);
   Graph_Graph01178->SetMinimum(15847.26);
   Graph_Graph01178->SetMaximum(5444885);
   Graph_Graph01178->SetDirectory(0);
   Graph_Graph01178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01178->SetLineColor(ci);
   Graph_Graph01178->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01178->GetXaxis()->SetRange(21,88);
   Graph_Graph01178->GetXaxis()->CenterTitle(true);
   Graph_Graph01178->GetXaxis()->SetLabelFont(42);
   Graph_Graph01178->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01178->GetXaxis()->SetTitleFont(42);
   Graph_Graph01178->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01178->GetYaxis()->CenterTitle(true);
   Graph_Graph01178->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01178->GetYaxis()->SetLabelFont(42);
   Graph_Graph01178->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01178->GetYaxis()->SetTitleFont(42);
   Graph_Graph01178->GetZaxis()->SetLabelFont(42);
   Graph_Graph01178->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01178);
   
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
