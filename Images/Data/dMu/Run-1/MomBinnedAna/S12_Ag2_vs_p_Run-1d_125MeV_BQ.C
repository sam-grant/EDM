void S12_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:18:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8422,-0.04578983,3033.559,0.07801051);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[22] = {
   367.2264,
   456.6616,
   570.2511,
   695.0728,
   815.9922,
   938.5583,
   1062.66,
   1188.291,
   1312.787,
   1435.903,
   1561.974,
   1685.264,
   1810.607,
   1935.13,
   2060.293,
   2185.026,
   2309.146,
   2432.958,
   2559.535,
   2679.195,
   2781.14,
   2886.432};
   Double_t Graph0_fy1063[22] = {
   -0.7195207,
   0.0223851,
   0.06603103,
   0.04828346,
   0.05034401,
   -0.005637972,
   0.03269905,
   -0.0008471595,
   0.0352454,
   0.01496527,
   -0.02560488,
   0.02337698,
   -0.00282486,
   -0.01048372,
   -0.008316424,
   -0.003886911,
   -0.01785111,
   -0.03759805,
   -0.02633482,
   0.01308963,
   -0.04238249,
   0.0003421798};
   Double_t Graph0_fex1063[22] = {
   0.1560151,
   0.07824154,
   0.05252292,
   0.03553039,
   0.02848522,
   0.025669,
   0.02434069,
   0.02350631,
   0.02380413,
   0.02386992,
   0.02563485,
   0.0268977,
   0.03016952,
   0.03304359,
   0.03766603,
   0.04149162,
   0.04786816,
   0.05746284,
   0.06891139,
   0.07858218,
   0.1570593,
   0.9491119};
   Double_t Graph0_fey1063[22] = {
   1.285347,
   0.1146445,
   0.05603509,
   0.03347204,
   0.02295641,
   0.01884769,
   0.01657733,
   0.01494506,
   0.01400214,
   0.01321949,
   0.01322686,
   0.01278151,
   0.01324821,
   0.01335179,
   0.01401543,
   0.01423846,
   0.01506029,
   0.01643566,
   0.01789063,
   0.01976759,
   0.04930406,
   0.4847267};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S12",100,115.0394,3139.412);
   Graph_Graph01063->SetMinimum(-0.0334098);
   Graph_Graph01063->SetMaximum(0.06563048);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(21,88);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
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
