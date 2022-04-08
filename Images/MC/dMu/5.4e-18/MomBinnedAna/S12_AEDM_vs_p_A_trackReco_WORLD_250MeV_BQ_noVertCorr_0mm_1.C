void S12_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.3781,-3.385677e-05,3376.081,0.0001405037);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[11] = {
   451.5498,
   653.3939,
   880.0628,
   1123.153,
   1371.24,
   1619.947,
   1867.163,
   2114.835,
   2362.441,
   2614.458,
   2788.038};
   Double_t Graph0_fy1098[11] = {
   -1.40012e-06,
   6.050883e-07,
   1.82444e-07,
   3.22398e-07,
   4.803364e-07,
   2.547617e-07,
   8.376347e-07,
   9.802078e-07,
   1.765733e-06,
   3.730949e-06,
   7.704022e-05};
   Double_t Graph0_fex1098[11] = {
   0.1450545,
   0.1227995,
   0.08906524,
   0.08706518,
   0.09294933,
   0.1024967,
   0.1195046,
   0.1498014,
   0.1962366,
   0.2402987,
   0.30333};
   Double_t Graph0_fey1098[11] = {
   3.396574e-06,
   2.306605e-07,
   7.888381e-08,
   7.193954e-08,
   8.794447e-08,
   1.18588e-07,
   1.854166e-07,
   3.578365e-07,
   7.795274e-07,
   1.491444e-06,
   3.44034e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","S12_",100,217.7111,3022.035);
   Graph_Graph01098->SetMinimum(-1.642073e-05);
   Graph_Graph01098->SetMaximum(0.0001230676);
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
