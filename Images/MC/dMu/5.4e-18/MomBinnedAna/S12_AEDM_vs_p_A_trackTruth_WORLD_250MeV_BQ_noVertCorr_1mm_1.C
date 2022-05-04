void S12_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 25 18:52:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.3732,-6.595494e-05,3381.354,0.0003035332);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[11] = {
   451.6922,
   653.1475,
   880.0831,
   1123.158,
   1371.055,
   1620.208,
   1867.024,
   2114.681,
   2362.403,
   2614.687,
   2792.117};
   Double_t Graph0_fy1098[11] = {
   3.46911e-06,
   1.278817e-06,
   2.98489e-07,
   3.293567e-07,
   6.631827e-07,
   7.450726e-07,
   1.473223e-06,
   1.134087e-06,
   3.477752e-06,
   9.528524e-06,
   0.0001688022};
   Double_t Graph0_fex1098[11] = {
   0.1923977,
   0.1627575,
   0.1181711,
   0.1156644,
   0.1235822,
   0.13654,
   0.1587764,
   0.1987261,
   0.2604182,
   0.3222644,
   0.4569726};
   Double_t Graph0_fey1098[11] = {
   7.842692e-06,
   5.363358e-07,
   1.846945e-07,
   1.685733e-07,
   2.062478e-07,
   2.800339e-07,
   4.348545e-07,
   8.395572e-07,
   1.840194e-06,
   3.554673e-06,
   7.314959e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","S12_",100,217.3924,3026.681);
   Graph_Graph01098->SetMinimum(-2.900612e-05);
   Graph_Graph01098->SetMaximum(0.0002665844);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(0,100);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
