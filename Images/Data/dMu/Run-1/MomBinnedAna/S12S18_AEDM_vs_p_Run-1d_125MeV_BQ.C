void S12S18_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:18:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8618,0.007793951,3032.519,0.1073997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[22] = {
   367.2399,
   457.0435,
   570.1011,
   694.7916,
   815.8541,
   938.5214,
   1062.733,
   1188.227,
   1312.688,
   1435.772,
   1561.976,
   1685.084,
   1810.538,
   1935.021,
   2060.267,
   2184.908,
   2309.091,
   2433.063,
   2559.665,
   2678.604,
   2781.208,
   2885.708};
   Double_t Graph0_fy1172[22] = {
   0.6152808,
   -0.04208408,
   0.1032758,
   0.03999451,
   0.02754362,
   0.02915032,
   0.03459645,
   0.02806965,
   0.04830403,
   0.04472523,
   0.03087323,
   0.04366267,
   0.04027721,
   0.04559883,
   0.04830976,
   0.04125975,
   0.04444966,
   0.03218909,
   0.03373445,
   0.03508271,
   0.0220396,
   0.127193};
   Double_t Graph0_fex1172[22] = {
   0.1103772,
   0.05519008,
   0.03677606,
   0.02532856,
   0.02042765,
   0.01846339,
   0.01750614,
   0.01694737,
   0.01725058,
   0.01734431,
   0.01867097,
   0.01969749,
   0.02225594,
   0.02439127,
   0.02792707,
   0.03086148,
   0.03575833,
   0.04314539,
   0.05137337,
   0.05886294,
   0.1209443,
   0.6931524};
   Double_t Graph0_fey1172[22] = {
   0.8857597,
   0.08048629,
   0.03913667,
   0.02373057,
   0.01646057,
   0.01355478,
   0.01193778,
   0.01079099,
   0.01017096,
   0.009635824,
   0.009651441,
   0.009354577,
   0.009721679,
   0.009810727,
   0.01028004,
   0.01042426,
   0.01093169,
   0.01179773,
   0.01246739,
   0.01343945,
   0.03340347,
   0.3039261};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18",100,115.2023,3138.328);
   Graph_Graph01172->SetMinimum(0.01775452);
   Graph_Graph01172->SetMaximum(0.09743908);
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
