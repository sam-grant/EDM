void S0_theta_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.6296,2.728062,3035.642,44.02026);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[12] = {
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
   Double_t Graph0_fy1041[12] = {
   45.20509,
   41.62529,
   33.77335,
   26.85595,
   22.29352,
   18.83637,
   16.29482,
   14.3999,
   12.63073,
   10.90865,
   9.287155,
   8.614827};
   Double_t Graph0_fex1041[12] = {
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
   Double_t Graph0_fey1041[12] = {
   0.3820254,
   0.04660016,
   0.02161491,
   0.01572928,
   0.0131523,
   0.01152808,
   0.01059003,
   0.01021922,
   0.01021839,
   0.01048713,
   0.01126938,
   0.01765637};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S0_",100,0,3089.712);
   Graph_Graph01041->SetMinimum(6.857282);
   Graph_Graph01041->SetMaximum(39.89104);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(25,90);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
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
