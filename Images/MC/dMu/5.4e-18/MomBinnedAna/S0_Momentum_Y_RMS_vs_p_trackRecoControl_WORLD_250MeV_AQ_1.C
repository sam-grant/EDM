void S0_Momentum_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.6296,11.95849,3035.642,29.88849);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[12] = {
   194.5206,
   424.1997,
   631.229,
   875.8461,
   1123.82,
   1372.921,
   1621.873,
   1870.385,
   2118.91,
   2366.693,
   2613.611,
   2826.325};
   Double_t Graph0_fy1043[12] = {
   21.48284,
   21.90172,
   21.4648,
   21.84321,
   22.59663,
   23.07796,
   23.34417,
   23.41301,
   22.99141,
   21.90087,
   19.99974,
   17.35912};
   Double_t Graph0_fex1043[12] = {
   0.3667712,
   0.08181266,
   0.06309451,
   0.05917214,
   0.06008437,
   0.06234331,
   0.06617305,
   0.07215698,
   0.0822069,
   0.09740665,
   0.1222321,
   0.1544674};
   Double_t Graph0_fey1043[12] = {
   0.1408295,
   0.02339941,
   0.01369343,
   0.01289628,
   0.01347404,
   0.01428539,
   0.01535884,
   0.01684201,
   0.01885406,
   0.0213163,
   0.02452248,
   0.03600393};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S0_",100,0,3089.712);
   Graph_Graph01043->SetMinimum(13.75149);
   Graph_Graph01043->SetMaximum(28.09549);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01043->GetXaxis()->SetRange(25,90);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
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
