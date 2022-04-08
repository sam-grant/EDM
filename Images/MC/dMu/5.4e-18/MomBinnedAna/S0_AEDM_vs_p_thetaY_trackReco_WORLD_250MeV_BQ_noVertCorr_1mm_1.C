void S0_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.9719,-0.1719284,3377.802,0.4370134);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[11] = {
   451.3645,
   653.3156,
   879.8719,
   1123.107,
   1371.383,
   1620.847,
   1868.012,
   2116.528,
   2363.424,
   2615.856,
   2789.408};
   Double_t Graph0_fy1058[11] = {
   0.1325425,
   0.09069499,
   0.1720456,
   0.188029,
   0.2100467,
   0.1395185,
   0.1487614,
   0.1185434,
   0.06978846,
   0.04308265,
   0.0149145};
   Double_t Graph0_fex1058[11] = {
   0.1508903,
   0.1278291,
   0.09305751,
   0.0909969,
   0.09703234,
   0.1071778,
   0.1228627,
   0.1487252,
   0.1863402,
   0.2337685,
   0.2703847};
   Double_t Graph0_fey1058[11] = {
   0.2029806,
   0.0678723,
   0.03923177,
   0.03219342,
   0.02948333,
   0.0280312,
   0.02759546,
   0.02837247,
   0.02940851,
   0.02894124,
   0.06213189};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","S0_",100,217.3671,3023.525);
   Graph_Graph01058->SetMinimum(-0.1110342);
   Graph_Graph01058->SetMaximum(0.3761192);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01058->GetXaxis()->SetRange(0,100);
   Graph_Graph01058->GetXaxis()->CenterTitle(true);
   Graph_Graph01058->GetXaxis()->SetLabelFont(42);
   Graph_Graph01058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01058->GetXaxis()->SetTitleFont(42);
   Graph_Graph01058->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01058->GetYaxis()->CenterTitle(true);
   Graph_Graph01058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01058->GetYaxis()->SetLabelFont(42);
   Graph_Graph01058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01058->GetYaxis()->SetTitleFont(42);
   Graph_Graph01058->GetZaxis()->SetLabelFont(42);
   Graph_Graph01058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01058);
   
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
