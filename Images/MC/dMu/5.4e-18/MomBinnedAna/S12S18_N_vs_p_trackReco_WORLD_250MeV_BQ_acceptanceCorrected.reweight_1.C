void S12S18_N_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1673,-2457434,3406.642,3476134);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1177[11] = {
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
   Double_t Graph0_fy1177[11] = {
   179878,
   1095865,
   2261455,
   2404125,
   2102043,
   1708439,
   1239694,
   789244,
   460354,
   292342,
   33571};
   Double_t Graph0_fex1177[11] = {
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
   Double_t Graph0_fey1177[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1177,Graph0_fy1177,Graph0_fex1177,Graph0_fey1177);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01177 = new TH1F("Graph_Graph01177","S12S18_",100,218.2436,3021.231);
   Graph_Graph01177->SetMinimum(-1864077);
   Graph_Graph01177->SetMaximum(2882777);
   Graph_Graph01177->SetDirectory(0);
   Graph_Graph01177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01177->SetLineColor(ci);
   Graph_Graph01177->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01177->GetXaxis()->SetRange(0,101);
   Graph_Graph01177->GetXaxis()->CenterTitle(true);
   Graph_Graph01177->GetXaxis()->SetLabelFont(42);
   Graph_Graph01177->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01177->GetXaxis()->SetTitleFont(42);
   Graph_Graph01177->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01177->GetYaxis()->CenterTitle(true);
   Graph_Graph01177->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01177->GetYaxis()->SetLabelFont(42);
   Graph_Graph01177->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01177->GetYaxis()->SetTitleFont(42);
   Graph_Graph01177->GetZaxis()->SetLabelFont(42);
   Graph_Graph01177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01177);
   
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
