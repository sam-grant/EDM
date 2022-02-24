void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1673,-1.186375e-05,3406.642,1.665289e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[11] = {
   451.9038,
   653.315,
   880.4707,
   1123.079,
   1370.969,
   1620.017,
   1866.66,
   2115.009,
   2362.994,
   2613.175,
   2787.49};
   Double_t Graph0_fy1173[11] = {
   -6.371465e-07,
   5.32302e-08,
   -9.724661e-09,
   8.173965e-09,
   -1.779572e-09,
   -1.640489e-08,
   -2.753028e-09,
   4.184291e-08,
   2.629908e-07,
   1.01729e-07,
   -3.701623e-06};
   Double_t Graph0_fex1173[11] = {
   0.07798888,
   0.06581105,
   0.04754566,
   0.04642972,
   0.04961974,
   0.05492096,
   0.06438721,
   0.08077524,
   0.1057539,
   0.1283666,
   0.1593149};
   Double_t Graph0_fey1173[11] = {
   7.936045e-07,
   4.349957e-08,
   1.291159e-08,
   1.147298e-08,
   1.348409e-08,
   1.866522e-08,
   3.105425e-08,
   6.472097e-08,
   1.572814e-07,
   3.44841e-07,
   9.507553e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18_",100,218.2436,3021.231);
   Graph_Graph01173->SetMinimum(-1.051084e-05);
   Graph_Graph01173->SetMaximum(3.123851e-07);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(0,101);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
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
