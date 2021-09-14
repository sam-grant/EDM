void TrackerResRMSGraph_100()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 13 10:10:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-430.5125,-0.7674489,3533.613,18.58816);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[31] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950,
   3050};
   Double_t Graph0_fy1005[31] = {
   14.33808,
   13.12946,
   9.052464,
   5.681802,
   4.595515,
   4.148887,
   3.797523,
   3.519704,
   3.312388,
   3.130451,
   3.006269,
   2.883067,
   2.77867,
   2.71892,
   2.674235,
   2.631606,
   2.625878,
   2.599956,
   2.605734,
   2.596712,
   2.594562,
   2.581478,
   2.555338,
   2.556526,
   2.547228,
   2.524782,
   2.494984,
   2.468291,
   2.463719,
   2.81061,
   6.692543};
   Double_t Graph0_fex1005[31] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1005[31] = {
   1.024148,
   0.2248379,
   0.05456064,
   0.008493936,
   0.003900045,
   0.002859099,
   0.002457138,
   0.002252588,
   0.002126165,
   0.002029873,
   0.001981602,
   0.001936242,
   0.00190441,
   0.001904635,
   0.001921864,
   0.001944367,
   0.001998446,
   0.002049657,
   0.002135037,
   0.002227455,
   0.002344497,
   0.002465992,
   0.002594686,
   0.002780223,
   0.003010433,
   0.003285305,
   0.003631259,
   0.004153394,
   0.005232843,
   0.01309003,
   0.2216123};
   TGraphErrors *gre = new TGraphErrors(31,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 50 < p < p #plus 50;True #minus reco #theta_{y} RMS [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","",100,0,3410);
   Graph_Graph01005->SetMinimum(1.168112);
   Graph_Graph01005->SetMaximum(16.6526);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50");
   Graph_Graph01005->GetXaxis()->SetRange(0,92);
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("True #minus reco #theta_{y} RMS [mrad]");
   Graph_Graph01005->GetYaxis()->CenterTitle(true);
   Graph_Graph01005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
