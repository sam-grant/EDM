void S12_c_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0708,-2.065162,3379.415,6.609792);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1094[11] = {
   451.5581,
   653.2677,
   880.0203,
   1123.181,
   1371.166,
   1620.018,
   1867.098,
   2114.802,
   2362.547,
   2614.683,
   2790.673};
   Double_t Graph0_fy1094[11] = {
   5.027736,
   -0.3844194,
   -0.592801,
   -0.4742936,
   -0.3684396,
   -0.3400718,
   -0.2487959,
   -0.1900544,
   -0.1437723,
   -0.116969,
   -0.2027751};
   Double_t Graph0_fex1094[11] = {
   0.1457006,
   0.1232532,
   0.0893564,
   0.0874833,
   0.09348105,
   0.1030946,
   0.1200829,
   0.1502603,
   0.1968533,
   0.2423922,
   0.3341954};
   Double_t Graph0_fey1094[11] = {
   0.1362304,
   0.04616253,
   0.02653489,
   0.02178515,
   0.02002518,
   0.01907626,
   0.01920941,
   0.02059458,
   0.02287401,
   0.02371943,
   0.05581278};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1094,Graph0_fy1094,Graph0_fex1094,Graph0_fey1094);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01094 = new TH1F("Graph_Graph01094","S12_",100,217.4529,3024.967);
   Graph_Graph01094->SetMinimum(-1.197666);
   Graph_Graph01094->SetMaximum(5.742296);
   Graph_Graph01094->SetDirectory(0);
   Graph_Graph01094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01094->SetLineColor(ci);
   Graph_Graph01094->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01094->GetXaxis()->SetRange(0,100);
   Graph_Graph01094->GetXaxis()->CenterTitle(true);
   Graph_Graph01094->GetXaxis()->SetLabelFont(42);
   Graph_Graph01094->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01094->GetXaxis()->SetTitleFont(42);
   Graph_Graph01094->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01094->GetYaxis()->CenterTitle(true);
   Graph_Graph01094->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01094->GetYaxis()->SetLabelFont(42);
   Graph_Graph01094->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01094->GetYaxis()->SetTitleFont(42);
   Graph_Graph01094->GetZaxis()->SetLabelFont(42);
   Graph_Graph01094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01094);
   
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
