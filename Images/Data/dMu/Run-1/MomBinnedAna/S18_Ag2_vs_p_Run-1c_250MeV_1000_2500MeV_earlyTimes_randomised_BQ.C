void S18_Ag2_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.5063,-0.0465807,2705.502,0.06163467);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1074[11] = {
   456.3694,
   653.7602,
   883.7216,
   1127.519,
   1372.944,
   1619.697,
   1866.663,
   2115.878,
   2359.713,
   2606.446,
   2783.051};
   Double_t Graph0_fy1074[11] = {
   0.08845758,
   0.02664369,
   0.04504949,
   0.004534266,
   -0.007237667,
   0.02825013,
   -0.02482602,
   -0.01373234,
   -0.01095228,
   -0.04710901,
   0.1965709};
   Double_t Graph0_fex1074[11] = {
   0.1715233,
   0.1204394,
   0.08157642,
   0.07389347,
   0.07350177,
   0.08175141,
   0.1004464,
   0.127173,
   0.1676145,
   0.2315704,
   0.4154109};
   Double_t Graph0_fey1074[11] = {
   0.2405367,
   0.06116919,
   0.03158012,
   0.02403654,
   0.02107357,
   0.02037273,
   0.02120542,
   0.02279516,
   0.02550806,
   0.03050291,
   0.1207365};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1074,Graph0_fy1074,Graph0_fex1074,Graph0_fey1074);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01074 = new TH1F("Graph_Graph01074","S18",100,223.4711,3016.193);
   Graph_Graph01074->SetMinimum(-0.03575916);
   Graph_Graph01074->SetMaximum(0.05081313);
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
