void S0_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.6664,11.62636,3381.292,23.44423);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[11] = {
   451.4174,
   653.2518,
   879.8497,
   1123.213,
   1371.554,
   1620.87,
   1868.04,
   2116.623,
   2363.729,
   2615.648,
   2792.141};
   Double_t Graph0_fy1065[11] = {
   14.09735,
   16.73214,
   18.61527,
   20.15491,
   21.06895,
   21.4491,
   21.2038,
   20.32522,
   18.65081,
   16.13915,
   13.69115};
   Double_t Graph0_fex1065[11] = {
   0.1706777,
   0.144373,
   0.1050449,
   0.1026952,
   0.109309,
   0.1209298,
   0.1386789,
   0.1673729,
   0.2104643,
   0.263722,
   0.3316772};
   Double_t Graph0_fey1065[11] = {
   0.05165146,
   0.02482366,
   0.01930743,
   0.02032445,
   0.02264832,
   0.02548133,
   0.02893984,
   0.03357738,
   0.03886563,
   0.04265172,
   0.09515091};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S0_",100,217.1241,3026.596);
   Graph_Graph01065->SetMinimum(12.80815);
   Graph_Graph01065->SetMaximum(22.26244);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01065->GetXaxis()->SetRange(0,100);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
