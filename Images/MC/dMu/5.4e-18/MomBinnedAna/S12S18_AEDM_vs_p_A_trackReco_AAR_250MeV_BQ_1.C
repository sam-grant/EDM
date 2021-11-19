void S12S18_AEDM_vs_p_A_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 18:50:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.865666,-0.000182848,3231.802,3.694702e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   451.8418,
   653.3071,
   880.4383,
   1123.035,
   1371.003,
   1619.983,
   1866.575,
   2115.057,
   2362.917,
   2613.315,
   2787.72};
   Double_t Graph0_fy1082[11] = {
   -3.376689e-06,
   3.84952e-08,
   -1.704929e-08,
   1.587294e-08,
   -1.481571e-08,
   -1.209692e-07,
   -5.099615e-07,
   -4.943239e-07,
   -1.54267e-06,
   -1.935525e-06,
   -8.445171e-05};
   Double_t Graph0_fex1082[11] = {
   0.100887,
   0.08490523,
   0.0614041,
   0.05992997,
   0.06403584,
   0.07083603,
   0.08297073,
   0.1040859,
   0.1359196,
   0.1647851,
   0.2059641};
   Double_t Graph0_fey1082[11] = {
   3.400141e-06,
   2.322686e-07,
   7.786201e-08,
   7.080218e-08,
   8.658842e-08,
   1.203898e-07,
   2.007077e-07,
   4.195609e-07,
   1.018488e-06,
   2.250035e-06,
   6.17638e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S12S18_",100,218.1224,3021.545);
   Graph_Graph01082->SetMinimum(-0.0001608685);
   Graph_Graph01082->SetMaximum(1.496751e-05);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(5,96);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{#gminus2} / 250 MeV");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
