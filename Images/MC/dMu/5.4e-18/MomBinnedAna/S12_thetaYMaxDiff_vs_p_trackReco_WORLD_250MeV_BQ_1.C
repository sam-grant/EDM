void S12_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.2011,-13.66126,2741.317,217.3584);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[11] = {
   451.6103,
   653.3617,
   880.2228,
   1123.036,
   1371.149,
   1620.258,
   1866.731,
   2114.882,
   2362.569,
   2614.228,
   2787.765};
   Double_t Graph0_fy1043[11] = {
   175.8228,
   154.381,
   135.0834,
   105.0649,
   90.05559,
   83.62305,
   68.61378,
   62.18124,
   45.02779,
   38.59525,
   27.87435};
   Double_t Graph0_fex1043[11] = {
   0.1408015,
   0.1187295,
   0.0860464,
   0.08406461,
   0.08952956,
   0.09891579,
   0.1153262,
   0.1443485,
   0.1883778,
   0.2315654,
   0.2839935};
   Double_t Graph0_fey1043[11] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S12_",100,217.8116,3021.707);
   Graph_Graph01043->SetMinimum(9.440707);
   Graph_Graph01043->SetMaximum(194.2565);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01043->GetXaxis()->SetRange(19,82);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
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
