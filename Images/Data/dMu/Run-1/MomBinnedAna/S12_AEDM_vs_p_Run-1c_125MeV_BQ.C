void S12_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,-2.047851,2731.307,5.228892);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
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
   Double_t Graph0_fy1018[22] = {
   2.118977,
   0.1934523,
   0.09525756,
   0.06934725,
   0.006394752,
   0.02184606,
   0.02368496,
   0.05714909,
   0.07904803,
   0.04480512,
   0.04751548,
   0.05557429,
   0.05921683,
   0.05301736,
   0.04234242,
   0.01839398,
   0.07024325,
   -0.001563807,
   0.06286791,
   0.02024832,
   -0.007089224,
   -0.3187168};
   Double_t Graph0_fex1018[22] = {
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
   Double_t Graph0_fey1018[22] = {
   1.897124,
   0.1611769,
   0.07798628,
   0.04648352,
   0.03184685,
   0.02602371,
   0.02279836,
   0.02061525,
   0.01932321,
   0.01822307,
   0.01823216,
   0.01757444,
   0.01810588,
   0.0182047,
   0.01894701,
   0.01925739,
   0.02008576,
   0.02165577,
   0.02312745,
   0.02511702,
   0.06138108,
   0.5163439};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,114.3151,3144.118);
   Graph_Graph01018->SetMinimum(-1.320177);
   Graph_Graph01018->SetMaximum(4.501218);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(21,79);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
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
