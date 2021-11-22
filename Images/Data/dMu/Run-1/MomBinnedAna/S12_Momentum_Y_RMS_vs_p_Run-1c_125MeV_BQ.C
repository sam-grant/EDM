void S12_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,9.65892,2731.307,22.73299);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[22] = {
   367.0259,
   456.9839,
   570.3007,
   695.1502,
   816.0454,
   938.5665,
   1062.78,
   1188.405,
   1312.663,
   1436.01,
   1561.941,
   1685.362,
   1810.625,
   1935.174,
   2060.292,
   2185.104,
   2309.112,
   2432.873,
   2559.58,
   2678.767,
   2780.783,
   2890.136};
   Double_t Graph0_fy1022[22] = {
   13.14365,
   14.29326,
   15.21776,
   16.20003,
   16.6291,
   17.57906,
   18.33508,
   19.10926,
   19.75397,
   20.13503,
   20.53979,
   20.24195,
   20.07993,
   19.68678,
   19.23932,
   18.66278,
   17.90357,
   16.91183,
   15.78103,
   14.69913,
   13.83591,
   13.26874};
   Double_t Graph0_fex1022[22] = {
   0.22722,
   0.108819,
   0.0727687,
   0.04940617,
   0.03927278,
   0.03533284,
   0.03345619,
   0.03240199,
   0.03270933,
   0.03281037,
   0.03524654,
   0.03696425,
   0.04148184,
   0.04530472,
   0.05170377,
   0.05715965,
   0.06567884,
   0.07884463,
   0.09497755,
   0.1087666,
   0.2163104,
   1.498282};
   Double_t Graph0_fey1022[22] = {
   0.3342806,
   0.03646265,
   0.0221251,
   0.01602838,
   0.01291307,
   0.01216045,
   0.01206515,
   0.01219458,
   0.0126251,
   0.01302471,
   0.01418208,
   0.01475582,
   0.01632509,
   0.01756126,
   0.01948312,
   0.02096672,
   0.02310375,
   0.02625023,
   0.02944385,
   0.03341384,
   0.08509294,
   1.430805};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","S12",100,114.3151,3144.118);
   Graph_Graph01022->SetMinimum(10.96633);
   Graph_Graph01022->SetMaximum(21.42558);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01022->GetXaxis()->SetRange(21,79);
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
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
