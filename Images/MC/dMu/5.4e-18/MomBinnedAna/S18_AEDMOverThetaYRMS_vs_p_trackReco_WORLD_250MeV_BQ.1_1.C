void S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3688,-0.04491312,3407.305,0.03996042);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1145[11] = {
   451.9647,
   653.4925,
   880.767,
   1123.136,
   1370.893,
   1619.751,
   1866.448,
   2115.026,
   2363.115,
   2612.439,
   2787.761};
   Double_t Graph0_fy1145[11] = {
   -0.009006855,
   0.004328907,
   0.004621476,
   0.006181975,
   0.01030097,
   0.009619229,
   0.011746,
   0.008959799,
   0.007072387,
   0.02641678,
   0.01522842};
   Double_t Graph0_fex1145[11] = {
   0.1907078,
   0.160043,
   0.1156315,
   0.1125663,
   0.1209118,
   0.1340669,
   0.1579088,
   0.1985804,
   0.2601144,
   0.3119886,
   0.4006198};
   Double_t Graph0_fey1145[11] = {
   -0.008162923,
   0.003280572,
   0.002284528,
   0.002212832,
   0.002374945,
   0.002633445,
   0.003124988,
   0.003908934,
   0.005128353,
   0.006406951,
   0.01911631};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1145,Graph0_fy1145,Graph0_fex1145,Graph0_fey1145);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01145 = new TH1F("Graph_Graph01145","S18_",100,218.1353,3021.801);
   Graph_Graph01145->SetMinimum(-0.03642577);
   Graph_Graph01145->SetMaximum(0.03147307);
   Graph_Graph01145->SetDirectory(0);
   Graph_Graph01145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01145->SetLineColor(ci);
   Graph_Graph01145->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01145->GetXaxis()->SetRange(0,101);
   Graph_Graph01145->GetXaxis()->CenterTitle(true);
   Graph_Graph01145->GetXaxis()->SetLabelFont(42);
   Graph_Graph01145->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01145->GetXaxis()->SetTitleFont(42);
   Graph_Graph01145->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01145->GetYaxis()->CenterTitle(true);
   Graph_Graph01145->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01145->GetYaxis()->SetLabelFont(42);
   Graph_Graph01145->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01145->GetYaxis()->SetTitleFont(42);
   Graph_Graph01145->GetZaxis()->SetLabelFont(42);
   Graph_Graph01145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01145);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
