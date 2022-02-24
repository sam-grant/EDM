void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3944,2.96084,3407.426,28.24396);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1213[11] = {
   451.842,
   653.3036,
   880.3415,
   1123.074,
   1371.07,
   1620.188,
   1866.988,
   2115.41,
   2363.041,
   2613.745,
   2788.124};
   Double_t Graph0_fy1213[11] = {
   14.06512,
   16.69498,
   18.58817,
   20.09139,
   21.06684,
   21.42998,
   21.19647,
   20.30256,
   18.70577,
   16.27669,
   13.8211};
   Double_t Graph0_fex1213[11] = {
   0.06806441,
   0.05746335,
   0.04161396,
   0.0406491,
   0.04340141,
   0.04801001,
   0.05599992,
   0.06963612,
   0.0900807,
   0.1102818,
   0.1342324};
   Double_t Graph0_fey1213[11] = {
   0.02049748,
   0.009849076,
   0.007647598,
   0.008023692,
   0.008986872,
   0.01012832,
   0.01170073,
   0.01392921,
   0.01663183,
   0.01821902,
   0.04440162};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1213,Graph0_fy1213,Graph0_fex1213,Graph0_fey1213);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01213 = new TH1F("Graph_Graph01213","S0S12S18_",100,218.1255,3021.906);
   Graph_Graph01213->SetMinimum(5.489152);
   Graph_Graph01213->SetMaximum(25.71565);
   Graph_Graph01213->SetDirectory(0);
   Graph_Graph01213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01213->SetLineColor(ci);
   Graph_Graph01213->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01213->GetXaxis()->SetRange(0,101);
   Graph_Graph01213->GetXaxis()->CenterTitle(true);
   Graph_Graph01213->GetXaxis()->SetLabelFont(42);
   Graph_Graph01213->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01213->GetXaxis()->SetTitleFont(42);
   Graph_Graph01213->GetYaxis()->CenterTitle(true);
   Graph_Graph01213->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01213->GetYaxis()->SetLabelFont(42);
   Graph_Graph01213->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01213->GetYaxis()->SetTitleFont(42);
   Graph_Graph01213->GetZaxis()->SetLabelFont(42);
   Graph_Graph01213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01213);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
