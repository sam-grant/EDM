void S18_Ag2_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.484,-0.04178573,2705.528,0.05030522);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1074[11] = {
   456.3389,
   653.7601,
   883.7113,
   1127.505,
   1372.948,
   1619.69,
   1866.661,
   2115.865,
   2359.718,
   2606.464,
   2783.078};
   Double_t Graph0_fy1074[11] = {
   0.1369414,
   0.0290635,
   0.03654369,
   0.002165587,
   -0.004845694,
   0.0309724,
   -0.01698899,
   -0.01749858,
   -0.01759714,
   -0.04237402,
   0.178322};
   Double_t Graph0_fex1074[11] = {
   0.1715811,
   0.120442,
   0.08157944,
   0.07389557,
   0.07350764,
   0.08176138,
   0.1004549,
   0.1271775,
   0.167612,
   0.2315857,
   0.4153367};
   Double_t Graph0_fey1074[11] = {
   0.241217,
   0.06118806,
   0.0315976,
   0.02404638,
   0.02107861,
   0.02037073,
   0.02121165,
   0.02280986,
   0.02551858,
   0.03064178,
   0.1215436};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1074,Graph0_fy1074,Graph0_fex1074,Graph0_fey1074);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01074 = new TH1F("Graph_Graph01074","S18",100,223.4347,3016.226);
   Graph_Graph01074->SetMinimum(-0.03257664);
   Graph_Graph01074->SetMaximum(0.04109613);
   Graph_Graph01074->SetDirectory(0);
   Graph_Graph01074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01074->SetLineColor(ci);
   Graph_Graph01074->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01074->GetXaxis()->SetRange(28,82);
   Graph_Graph01074->GetXaxis()->CenterTitle(true);
   Graph_Graph01074->GetXaxis()->SetLabelFont(42);
   Graph_Graph01074->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01074->GetXaxis()->SetTitleFont(42);
   Graph_Graph01074->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01074->GetYaxis()->CenterTitle(true);
   Graph_Graph01074->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01074->GetYaxis()->SetLabelFont(42);
   Graph_Graph01074->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01074->GetYaxis()->SetTitleFont(42);
   Graph_Graph01074->GetZaxis()->SetLabelFont(42);
   Graph_Graph01074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01074);
   
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
