void S12S18_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 13:32:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.865666,11.79093,3231.802,23.34046);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[11] = {
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
   Double_t Graph0_fy1085[11] = {
   14.00524,
   16.66938,
   18.54139,
   20.06554,
   21.05017,
   21.40061,
   21.19616,
   20.26796,
   18.69135,
   16.30001,
   13.78421};
   Double_t Graph0_fex1085[11] = {
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
   Double_t Graph0_fey1085[11] = {
   0.0301476,
   0.01453251,
   0.01125513,
   0.01180701,
   0.0132457,
   0.014934,
   0.01735795,
   0.02078646,
   0.02505925,
   0.0273896,
   0.0683611};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","S12S18_",100,218.1224,3021.545);
   Graph_Graph01085->SetMinimum(12.94588);
   Graph_Graph01085->SetMaximum(22.18551);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01085->GetXaxis()->SetRange(5,96);
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->CenterTitle(true);
   Graph_Graph01085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph01085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph01085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01085);
   
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
