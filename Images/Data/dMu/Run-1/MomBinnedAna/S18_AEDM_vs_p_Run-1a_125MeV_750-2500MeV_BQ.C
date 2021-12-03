void S18_AEDM_vs_p_Run-1a_125MeV_750-2500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:18:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0523,-0.04575074,3028.099,0.1093463);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[22] = {
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
   Double_t Graph0_fy1029[22] = {
   5.084025,
   -0.1644425,
   0.01975677,
   0.06089722,
   0.03613336,
   0.03469755,
   0.07919631,
   0.01520878,
   0.0313565,
   -0.03966531,
   0.01609801,
   0.02608905,
   0.01858589,
   -0.01804975,
   0.06062053,
   0.04331308,
   0.0004612355,
   0.02300802,
   0.02097876,
   -0.00897097,
   0.08309519,
   -8.615381};
   Double_t Graph0_fex1029[22] = {
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
   Double_t Graph0_fey1029[22] = {
   2.170941,
   0.2188066,
   0.106655,
   0.06524941,
   0.04563199,
   0.03765439,
   0.03316324,
   0.02993896,
   0.02835168,
   0.0269616,
   0.02693279,
   0.02624178,
   0.02736226,
   0.02767546,
   0.02921246,
   0.02959784,
   0.03121118,
   0.03350383,
   0.03502104,
   0.03773441,
   0.09503807,
   1.227487};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S18",100,114.3557,3137.695);
   Graph_Graph01029->SetMinimum(-0.03024104);
   Graph_Graph01029->SetMaximum(0.09383656);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(22,88);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
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
