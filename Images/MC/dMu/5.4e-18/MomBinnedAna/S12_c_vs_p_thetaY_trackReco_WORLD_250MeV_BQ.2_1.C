void S12_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7352,-0.1641952,3407.155,0.0681967);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1094[11] = {
   451.6049,
   653.2425,
   880.2476,
   1123.096,
   1371.206,
   1620.243,
   1866.857,
   2114.96,
   2362.593,
   2614.235,
   2787.651};
   Double_t Graph0_fy1094[11] = {
   -0.02647592,
   0.02825346,
   0.01535107,
   0.00644194,
   -0.02019011,
   -0.01864908,
   -0.03370808,
   0.008086228,
   -0.008893572,
   -0.02540167,
   -0.007404539};
   Double_t Graph0_fex1094[11] = {
   0.15967,
   0.1343891,
   0.09726887,
   0.09508309,
   0.1012556,
   0.1119375,
   0.1303914,
   0.1631604,
   0.21262,
   0.2621876,
   0.3235261};
   Double_t Graph0_fey1094[11] = {
   0.1495741,
   0.05041769,
   0.02888762,
   0.02374592,
   0.02172134,
   0.02070958,
   0.02094115,
   0.02242196,
   0.02466242,
   0.02575337,
   0.06208452};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1094,Graph0_fy1094,Graph0_fex1094,Graph0_fey1094);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01094 = new TH1F("Graph_Graph01094","S12_",100,217.7923,3021.628);
   Graph_Graph01094->SetMinimum(-0.140956);
   Graph_Graph01094->SetMaximum(0.0449575);
   Graph_Graph01094->SetDirectory(0);
   Graph_Graph01094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01094->SetLineColor(ci);
   Graph_Graph01094->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01094->GetXaxis()->SetRange(0,101);
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
