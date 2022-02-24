void S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1692,-0.00560252,3406.642,0.003159633);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[11] = {
   451.9022,
   653.3144,
   880.4684,
   1123.08,
   1370.967,
   1620.018,
   1866.66,
   2115.009,
   2362.988,
   2613.179,
   2787.489};
   Double_t Graph0_fy1181[11] = {
   -0.001223089,
   0.0004865875,
   0.0006578729,
   0.0008230495,
   0.001007352,
   0.001120881,
   0.001116167,
   0.0008265277,
   0.000936696,
   0.001915284,
   0.0006634282};
   Double_t Graph0_fex1181[11] = {
   0.07799311,
   0.06581167,
   0.04754563,
   0.04642947,
   0.04961912,
   0.05492029,
   0.06438561,
   0.08077463,
   0.1057518,
   0.1283674,
   0.1592967};
   Double_t Graph0_fey1181[11] = {
   -0.0007916647,
   0.0002821128,
   0.0001689461,
   0.0001386094,
   0.0001213142,
   0.0001052875,
   0.0001120645,
   0.0001133789,
   0.0001851226,
   0.0002778922,
   0.001284453};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18_",100,218.2418,3021.231);
   Graph_Graph01181->SetMinimum(-0.004726305);
   Graph_Graph01181->SetMaximum(0.002283418);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(0,101);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
