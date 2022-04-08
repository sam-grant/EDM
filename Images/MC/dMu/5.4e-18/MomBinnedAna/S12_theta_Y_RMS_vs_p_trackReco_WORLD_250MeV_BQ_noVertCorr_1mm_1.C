void S12_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.1786,-1.636694,3375.742,37.58238);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[11] = {
   451.6434,
   653.2791,
   880.0417,
   1123.23,
   1371.169,
   1620.035,
   1867.131,
   2114.768,
   2362.473,
   2614.547,
   2787.815};
   Double_t Graph0_fy1100[11] = {
   30.95782,
   25.7846,
   21.24743,
   17.99418,
   15.44406,
   13.25543,
   11.40614,
   9.625484,
   7.937473,
   6.253082,
   4.931905};
   Double_t Graph0_fex1100[11] = {
   0.1328533,
   0.1124893,
   0.08162341,
   0.07988011,
   0.085199,
   0.09418247,
   0.109743,
   0.1378075,
   0.179929,
   0.2210366,
   0.2769383};
   Double_t Graph0_fey1100[11] = {
   0.08805073,
   0.02979945,
   0.01714666,
   0.01409973,
   0.01293228,
   0.01229192,
   0.01232771,
   0.0130578,
   0.01409931,
   0.0139999,
   0.03208766};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S12_",100,217.8525,3021.75);
   Graph_Graph01100->SetMinimum(2.285213);
   Graph_Graph01100->SetMaximum(33.66047);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01100->GetXaxis()->SetRange(0,100);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01100->GetYaxis()->CenterTitle(true);
   Graph_Graph01100->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01100->GetYaxis()->SetLabelFont(42);
   Graph_Graph01100->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01100->GetYaxis()->SetTitleFont(42);
   Graph_Graph01100->GetZaxis()->SetLabelFont(42);
   Graph_Graph01100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01100);
   
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
