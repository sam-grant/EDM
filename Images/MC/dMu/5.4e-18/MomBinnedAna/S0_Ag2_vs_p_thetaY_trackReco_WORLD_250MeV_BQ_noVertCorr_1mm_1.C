void S0_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.9719,-0.3904052,3377.802,0.5374266);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[11] = {
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
   Double_t Graph0_fy1059[11] = {
   0.1785508,
   -0.1674974,
   -0.06017972,
   -0.01467211,
   -0.01023115,
   -0.03320277,
   0.02729617,
   0.0060474,
   0.01167958,
   -0.05517978,
   0.07552554};
   Double_t Graph0_fex1059[11] = {
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
   Double_t Graph0_fey1059[11] = {
   0.2042371,
   0.06826918,
   0.03928852,
   0.03236428,
   0.02953228,
   0.02813453,
   0.02788225,
   0.02885369,
   0.03077761,
   0.0321024,
   0.07184646};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S0_",100,217.3671,3023.525);
   Graph_Graph01059->SetMinimum(-0.297622);
   Graph_Graph01059->SetMaximum(0.4446434);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->SetRange(0,100);
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
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
