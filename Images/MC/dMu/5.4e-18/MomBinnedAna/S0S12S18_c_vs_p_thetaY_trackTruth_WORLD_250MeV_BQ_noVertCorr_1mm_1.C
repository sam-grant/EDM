void S0S12S18_c_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:55:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0369,-1.865863,3380.183,6.841673);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[11] = {
   451.6625,
   653.2306,
   880.1522,
   1123.109,
   1371.16,
   1620.232,
   1867.231,
   2115.224,
   2363.097,
   2614.532,
   2791.457};
   Double_t Graph0_fy1205[11] = {
   5.307095,
   -0.1679785,
   -0.3984897,
   -0.3408554,
   -0.2629993,
   -0.2586213,
   -0.1899142,
   -0.1224817,
   -0.1233192,
   -0.09568486,
   -0.04999157};
   Double_t Graph0_fex1205[11] = {
   0.08852516,
   0.07493234,
   0.05436515,
   0.05319776,
   0.05691237,
   0.06298955,
   0.07334976,
   0.09100092,
   0.1180313,
   0.1452257,
   0.1956995};
   Double_t Graph0_fey1205[11] = {
   0.08332184,
   0.02802552,
   0.01611749,
   0.01325116,
   0.01218248,
   0.01164548,
   0.01172332,
   0.01248596,
   0.0137138,
   0.01415493,
   0.0325811};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","S0S12S18_",100,217.5661,3025.661);
   Graph_Graph01205->SetMinimum(-0.9951095);
   Graph_Graph01205->SetMaximum(5.970919);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01205->GetXaxis()->SetRange(0,100);
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
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
