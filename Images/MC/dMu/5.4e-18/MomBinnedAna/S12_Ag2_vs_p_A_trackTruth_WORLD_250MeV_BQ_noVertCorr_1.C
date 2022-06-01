void S12_Ag2_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 17:11:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8407,-5.156721e-05,3380.646,1.060735e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[11] = {
   451.9126,
   653.3908,
   880.2869,
   1123.157,
   1371.168,
   1620.209,
   1866.98,
   2114.946,
   2362.647,
   2614.196,
   2791.847};
   Double_t Graph0_fy1099[11] = {
   -3.113129e-06,
   1.765276e-07,
   4.039084e-08,
   1.01498e-08,
   -3.096147e-08,
   -1.18606e-07,
   -9.616641e-08,
   -5.993206e-08,
   -7.845436e-07,
   -1.294411e-06,
   -2.641422e-05};
   Double_t Graph0_fex1099[11] = {
   0.09610043,
   0.08121317,
   0.05878774,
   0.05741996,
   0.06114729,
   0.0675111,
   0.07880324,
   0.09848086,
   0.1287351,
   0.1585905,
   0.2246814};
   Double_t Graph0_fey1099[11] = {
   1.002878e-06,
   6.839743e-08,
   2.294736e-08,
   2.089068e-08,
   2.522337e-08,
   3.465033e-08,
   5.688074e-08,
   1.172068e-07,
   2.840984e-07,
   6.399137e-07,
   1.479056e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S12_",100,217.791,3026.097);
   Graph_Graph01099->SetMinimum(-4.534975e-05);
   Graph_Graph01099->SetMaximum(4.389896e-06);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(0,100);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
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
