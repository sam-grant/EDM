void S12S18_eAEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:17:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.7061,-0.02864591,3034.515,0.3619775);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1179[22] = {
   367.051,
   457.0974,
   570.1811,
   694.8088,
   815.8621,
   938.5384,
   1062.838,
   1188.304,
   1312.633,
   1435.871,
   1561.971,
   1685.2,
   1810.579,
   1935.045,
   2060.276,
   2184.955,
   2309.048,
   2433.116,
   2559.624,
   2678.406,
   2781.157,
   2887.23};
   Double_t Graph0_fy1179[22] = {
   1.230032,
   0.1128574,
   0.05477027,
   0.0331957,
   0.02299423,
   0.01889112,
   0.01659546,
   0.01500253,
   0.01413836,
   0.01339637,
   0.01341645,
   0.01300309,
   0.01348581,
   0.01360342,
   0.01421603,
   0.0144944,
   0.01514515,
   0.01631454,
   0.01729698,
   0.01885299,
   0.04706178,
   0.447308};
   Double_t Graph0_fex1179[22] = {
   0.157396,
   0.07733575,
   0.05143223,
   0.03551066,
   0.02849384,
   0.02573646,
   0.02436904,
   0.02364648,
   0.02402267,
   0.02416336,
   0.02602274,
   0.0274188,
   0.03095359,
   0.0338914,
   0.0388552,
   0.04300123,
   0.04965168,
   0.05984093,
   0.07146685,
   0.08238563,
   0.1688844,
   1.045133};
   Double_t Graph0_fey1179[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1179,Graph0_fy1179,Graph0_fex1179,Graph0_fey1179);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01179 = new TH1F("Graph_Graph01179","S12S18",100,114.7555,3140.413);
   Graph_Graph01179->SetMinimum(0.01041643);
   Graph_Graph01179->SetMaximum(0.3229151);
   Graph_Graph01179->SetDirectory(0);
   Graph_Graph01179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01179->SetLineColor(ci);
   Graph_Graph01179->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01179->GetXaxis()->SetRange(21,88);
   Graph_Graph01179->GetXaxis()->CenterTitle(true);
   Graph_Graph01179->GetXaxis()->SetLabelFont(42);
   Graph_Graph01179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01179->GetXaxis()->SetTitleFont(42);
   Graph_Graph01179->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01179->GetYaxis()->CenterTitle(true);
   Graph_Graph01179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01179->GetYaxis()->SetLabelFont(42);
   Graph_Graph01179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01179->GetYaxis()->SetTitleFont(42);
   Graph_Graph01179->GetZaxis()->SetLabelFont(42);
   Graph_Graph01179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01179);
   
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
