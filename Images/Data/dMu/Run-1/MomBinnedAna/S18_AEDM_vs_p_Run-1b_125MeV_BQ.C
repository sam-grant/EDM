void S18_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:46:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.9306,-0.06461599,3032.834,0.262406);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[22] = {
   367.4445,
   456.6744,
   569.9789,
   694.4389,
   815.6606,
   938.5876,
   1062.746,
   1187.917,
   1312.682,
   1435.616,
   1562.048,
   1684.958,
   1810.531,
   1934.89,
   2060.321,
   2184.823,
   2308.917,
   2433.332,
   2560.037,
   2678.052,
   2781.147,
   2885.139};
   Double_t Graph0_fy1029[22] = {
   -0.1544636,
   0.2099252,
   0.04801987,
   0.0770859,
   0.08049401,
   0.06018397,
   0.05580004,
   0.04860521,
   0.007182361,
   0.05301761,
   0.02145068,
   0.01196942,
   0.01115417,
   0.01384463,
   0.07525879,
   0.004097605,
   0.05285007,
   0.03957521,
   0.03485255,
   -0.04439909,
   0.1940727,
   0.05845523};
   Double_t Graph0_fex1029[22] = {
   0.2553993,
   0.1283725,
   0.08555645,
   0.05917273,
   0.04836058,
   0.04376859,
   0.04168402,
   0.04033179,
   0.04122483,
   0.04165085,
   0.04471225,
   0.04754877,
   0.05370202,
   0.05912233,
   0.06807641,
   0.07513118,
   0.08716273,
   0.1058334,
   0.1243805,
   0.14237,
   0.2931026,
   1.562872};
   Double_t Graph0_fey1029[22] = {
   2.088763,
   0.1847648,
   0.09054575,
   0.05531926,
   0.0388935,
   0.03219353,
   0.02835969,
   0.02562399,
   0.02422734,
   0.02310441,
   0.02301129,
   0.02245013,
   0.02336871,
   0.02377874,
   0.02505555,
   0.02539723,
   0.02659669,
   0.02874636,
   0.03005011,
   0.03236917,
   0.08194463,
   1.492375};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S18",100,115.2378,3138.654);
   Graph_Graph01029->SetMinimum(-0.03191379);
   Graph_Graph01029->SetMaximum(0.2297038);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(21,88);
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
