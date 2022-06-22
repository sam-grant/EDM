void S12S18_Momentum_Y_RMS_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2345,10.86937,2704.227,25.93302);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[11] = {
   456.1862,
   654.8645,
   884.0312,
   1127.58,
   1373.426,
   1619.979,
   1866.932,
   2116.35,
   2359.546,
   2607.533,
   2781.964};
   Double_t Graph0_fy1111[11] = {
   14.2438,
   15.87594,
   17.12744,
   18.71573,
   19.90777,
   20.35559,
   19.88727,
   18.9988,
   17.45325,
   15.31876,
   14.23085};
   Double_t Graph0_fex1111[11] = {
   0.08790962,
   0.0616927,
   0.04108906,
   0.03726292,
   0.03659326,
   0.04039141,
   0.04913632,
   0.06164607,
   0.08048153,
   0.111497,
   0.1853201};
   Double_t Graph0_fey1111[11] = {
   0.02816983,
   0.01016876,
   0.007031108,
   0.006822122,
   0.007224113,
   0.008167252,
   0.009639677,
   0.011545,
   0.01404202,
   0.01773589,
   0.07015637};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","S12S18",100,223.4932,3014.754);
   Graph_Graph01111->SetMinimum(12.37573);
   Graph_Graph01111->SetMaximum(24.42665);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01111->GetXaxis()->SetRange(28,82);
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01111->GetYaxis()->CenterTitle(true);
   Graph_Graph01111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01111->GetYaxis()->SetLabelFont(42);
   Graph_Graph01111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01111->GetYaxis()->SetTitleFont(42);
   Graph_Graph01111->GetZaxis()->SetLabelFont(42);
   Graph_Graph01111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01111);
   
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
