void S12S18_thetaYMaxDiff_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 12 15:35:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2687,35.5688,2704.427,239.3199);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1114[11] = {
   456.2261,
   654.8472,
   884.1329,
   1127.672,
   1373.373,
   1620.057,
   1867.064,
   2116.137,
   2359.716,
   2607.214,
   2782.096};
   Double_t Graph0_fy1114[11] = {
   183.3824,
   180.4365,
   182.6459,
   179.7,
   159.0787,
   138.8256,
   135.5115,
   106.4207,
   74.38403,
   69.59694,
   47.13444};
   Double_t Graph0_fex1114[11] = {
   0.1219439,
   0.08528496,
   0.05671517,
   0.05129779,
   0.05046572,
   0.05574313,
   0.06765675,
   0.08499686,
   0.1107314,
   0.1542779,
   0.2601466};
   Double_t Graph0_fey1114[11] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1114,Graph0_fy1114,Graph0_fex1114,Graph0_fey1114);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01114 = new TH1F("Graph_Graph01114","S12S18",100,223.4789,3014.981);
   Graph_Graph01114->SetMinimum(55.94391);
   Graph_Graph01114->SetMaximum(218.9448);
   Graph_Graph01114->SetDirectory(0);
   Graph_Graph01114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01114->SetLineColor(ci);
   Graph_Graph01114->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01114->GetXaxis()->SetRange(28,82);
   Graph_Graph01114->GetXaxis()->CenterTitle(true);
   Graph_Graph01114->GetXaxis()->SetLabelFont(42);
   Graph_Graph01114->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01114->GetXaxis()->SetTitleFont(42);
   Graph_Graph01114->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01114->GetYaxis()->CenterTitle(true);
   Graph_Graph01114->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01114->GetYaxis()->SetLabelFont(42);
   Graph_Graph01114->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01114->GetYaxis()->SetTitleFont(42);
   Graph_Graph01114->GetZaxis()->SetLabelFont(42);
   Graph_Graph01114->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01114);
   
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
