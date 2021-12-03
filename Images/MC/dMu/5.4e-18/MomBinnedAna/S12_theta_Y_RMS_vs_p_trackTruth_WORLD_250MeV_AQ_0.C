void S12_theta_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.6115,0.1324511,3019.97,36.23235);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1056[12] = {
   106.8541,
   434.1964,
   631.4626,
   875.6655,
   1124.351,
   1373.49,
   1622.49,
   1871.474,
   2120.007,
   2367.914,
   2613.316,
   2836.123};
   Double_t Graph0_fy1056[12] = {
   41.48306,
   33.37116,
   27.54794,
   22.77067,
   19.17059,
   16.32172,
   13.97923,
   11.96087,
   10.11368,
   8.37523,
   6.586528,
   4.710694};
   Double_t Graph0_fex1056[12] = {
   1.820096,
   0.05734266,
   0.04772134,
   0.04554609,
   0.04567215,
   0.04680967,
   0.04904856,
   0.05265824,
   0.0582703,
   0.06704882,
   0.08295268,
   0.1203711};
   Double_t Graph0_fey1056[12] = {
   0.7831175,
   0.02867778,
   0.01310883,
   0.01017766,
   0.008585118,
   0.007492681,
   0.006726836,
   0.006181802,
   0.005787096,
   0.005533095,
   0.005421207,
   0.006418864};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","S12_",100,0,3109.364);
   Graph_Graph01056->SetMinimum(3.742441);
   Graph_Graph01056->SetMaximum(32.62236);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01056->GetXaxis()->SetRange(25,89);
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01056->GetYaxis()->CenterTitle(true);
   Graph_Graph01056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01056->GetYaxis()->SetLabelFont(42);
   Graph_Graph01056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01056->GetYaxis()->SetTitleFont(42);
   Graph_Graph01056->GetZaxis()->SetLabelFont(42);
   Graph_Graph01056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01056);
   
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
