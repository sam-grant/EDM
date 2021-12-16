void S0_AEDM_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9794,-4.043542e-05,3509.814,0.0003508237);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[12] = {
   191.2482,
   435.2369,
   652.4289,
   883.6659,
   1126.229,
   1373.859,
   1622.425,
   1870.722,
   2119.361,
   2367.038,
   2613.854,
   2825.256};
   Double_t Graph0_fy1063[12] = {
   0.000117492,
   -1.680866e-06,
   3.245183e-07,
   1.390628e-07,
   1.484602e-07,
   1.914057e-07,
   2.746896e-07,
   4.437223e-07,
   4.196411e-07,
   3.38929e-07,
   7.602766e-07,
   2.126039e-06};
   Double_t Graph0_fex1063[12] = {
   1.118774,
   0.1970657,
   0.1111295,
   0.07528278,
   0.06973481,
   0.06961886,
   0.07258618,
   0.07835664,
   0.08830407,
   0.1035468,
   0.1290676,
   0.160519};
   Double_t Graph0_fey1063[12] = {
   0.0009265572,
   2.496126e-06,
   1.750846e-07,
   4.933273e-08,
   3.710621e-08,
   3.688693e-08,
   4.16193e-08,
   5.197053e-08,
   7.321865e-08,
   1.148777e-07,
   2.154937e-07,
   9.92962e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S0_",100,0,3088.946);
   Graph_Graph01063->SetMinimum(-1.309509e-06);
   Graph_Graph01063->SetMaximum(0.0003116978);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(1,101);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
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
