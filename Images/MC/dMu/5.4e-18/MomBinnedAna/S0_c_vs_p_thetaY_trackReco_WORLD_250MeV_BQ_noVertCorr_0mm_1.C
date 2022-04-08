void S0_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.7291,-1.749219,3377.355,7.194824);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[11] = {
   451.5069,
   653.3858,
   879.7988,
   1123.221,
   1371.452,
   1620.906,
   1867.986,
   2116.638,
   2363.802,
   2615.911,
   2789.041};
   Double_t Graph0_fy1057[11] = {
   5.540422,
   0.08312239,
   -0.2269702,
   -0.159467,
   -0.1296058,
   -0.1597426,
   -0.09650242,
   -0.02103402,
   -0.01787285,
   -0.05274495,
   0.03613761};
   Double_t Graph0_fex1057[11] = {
   0.1705331,
   0.1452717,
   0.1058655,
   0.1035205,
   0.1102686,
   0.1219472,
   0.1396871,
   0.1690043,
   0.2121382,
   0.265093,
   0.3045348};
   Double_t Graph0_fey1057[11] = {
   0.1637276,
   0.05475294,
   0.03157523,
   0.02596225,
   0.02372263,
   0.02259586,
   0.02238974,
   0.02329282,
   0.024755,
   0.02558779,
   0.0573467};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","S0_",100,217.5354,3023.147);
   Graph_Graph01057->SetMinimum(-0.8548149);
   Graph_Graph01057->SetMaximum(6.300419);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01057->GetXaxis()->SetRange(0,100);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
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
