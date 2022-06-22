void S12S18_theta_Y_RMS_vs_p_Run-1a_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.0965,2.511983,2704.598,25.4755);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[11] = {
   456.0479,
   655.1392,
   884.1603,
   1127.69,
   1373.391,
   1620.012,
   1866.995,
   2116.221,
   2359.865,
   2607.259,
   2782.175};
   Double_t Graph0_fy1109[11] = {
   31.36129,
   24.49089,
   19.49984,
   16.67278,
   14.54679,
   12.59509,
   10.67718,
   8.985603,
   7.418956,
   5.904785,
   5.052889};
   Double_t Graph0_fex1109[11] = {
   0.175022,
   0.1221357,
   0.08133955,
   0.07364098,
   0.0721965,
   0.07957,
   0.09636355,
   0.1205808,
   0.1572442,
   0.2170537,
   0.3669628};
   Double_t Graph0_fey1109[11] = {
   0.1229259,
   0.03110221,
   0.01582896,
   0.01200413,
   0.01041245,
   0.009937974,
   0.01014686,
   0.01068359,
   0.01166572,
   0.01330906,
   0.04872079};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","S12S18",100,223.206,3015.209);
   Graph_Graph01109->SetMinimum(4.808336);
   Graph_Graph01109->SetMaximum(23.17915);
   Graph_Graph01109->SetDirectory(0);
   Graph_Graph01109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01109->SetLineColor(ci);
   Graph_Graph01109->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01109->GetXaxis()->SetRange(28,82);
   Graph_Graph01109->GetXaxis()->CenterTitle(true);
   Graph_Graph01109->GetXaxis()->SetLabelFont(42);
   Graph_Graph01109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01109->GetXaxis()->SetTitleFont(42);
   Graph_Graph01109->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01109->GetYaxis()->CenterTitle(true);
   Graph_Graph01109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01109->GetYaxis()->SetLabelFont(42);
   Graph_Graph01109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01109->GetYaxis()->SetTitleFont(42);
   Graph_Graph01109->GetZaxis()->SetLabelFont(42);
   Graph_Graph01109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01109);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
