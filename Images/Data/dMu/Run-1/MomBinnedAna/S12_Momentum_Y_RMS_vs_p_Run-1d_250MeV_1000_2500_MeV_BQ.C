void S12_Momentum_Y_RMS_vs_p_Run-1d_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.8249,10.94217,2703.759,26.04706);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[11] = {
   455.7789,
   655.5908,
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212,
   2781.519};
   Double_t Graph0_fy1045[11] = {
   14.29407,
   15.91351,
   17.16825,
   18.7815,
   19.98051,
   20.44769,
   19.98991,
   19.05229,
   17.56179,
   15.40803,
   13.9131};
   Double_t Graph0_fex1045[11] = {
   0.08016522,
   0.05627953,
   0.0372095,
   0.03383925,
   0.03313028,
   0.03650384,
   0.04403932,
   0.05518732,
   0.07177343,
   0.1004618,
   0.1604278};
   Double_t Graph0_fey1045[11] = {
   0.02578175,
   0.009325367,
   0.0063853,
   0.006214717,
   0.006562671,
   0.007401108,
   0.008683294,
   0.01036248,
   0.01260798,
   0.01598049,
   0.06026887};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12",100,223.1007,3014.277);
   Graph_Graph01045->SetMinimum(12.45266);
   Graph_Graph01045->SetMaximum(24.53657);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(28,82);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
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
