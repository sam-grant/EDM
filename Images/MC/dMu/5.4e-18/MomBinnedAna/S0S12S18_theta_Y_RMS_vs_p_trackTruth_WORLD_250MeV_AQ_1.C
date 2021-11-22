void S0S12S18_theta_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:13:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-301.5493,-3.173367,3332.506,44.0589);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[12] = {
   200.2236,
   433.6193,
   628.4777,
   873.018,
   1121.651,
   1371.589,
   1620.262,
   1868.394,
   2116.814,
   2363.628,
   2613.583,
   2829.611};
   Double_t Graph0_fy1097[12] = {
   35.41261,
   33.27776,
   27.66872,
   22.79637,
   19.20381,
   16.33178,
   13.99732,
   11.97533,
   10.11672,
   8.336843,
   6.513542,
   4.706734};
   Double_t Graph0_fex1097[12] = {
   1.148099,
   0.04005745,
   0.03661289,
   0.03684185,
   0.0395273,
   0.04268629,
   0.04697925,
   0.05371327,
   0.06388773,
   0.08035761,
   0.1055123,
   0.1348713};
   Double_t Graph0_fey1097[12] = {
   0.7742427,
   0.02010613,
   0.01005052,
   0.0082535,
   0.00744249,
   0.006842596,
   0.006462053,
   0.006325331,
   0.006369867,
   0.006631282,
   0.006819944,
   0.008056477};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","S0S12S18_",100,0,3092.813);
   Graph_Graph01097->SetMinimum(1.54986);
   Graph_Graph01097->SetMaximum(39.33567);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(3,96);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
