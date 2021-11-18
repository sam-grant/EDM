void S0S12S18_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:37:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.9122,2.442267,2725.542,26.65615);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[12] = {
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
   Double_t Graph0_fy1070[12] = {
   6.62271,
   14.33328,
   17.25263,
   19.7941,
   21.4494,
   22.32228,
   22.61007,
   22.31089,
   21.35125,
   19.64018,
   16.95277,
   13.26624};
   Double_t Graph0_fex1070[12] = {
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
   Double_t Graph0_fey1070[12] = {
   0.1447954,
   0.00866004,
   0.006266933,
   0.007166519,
   0.008312776,
   0.00935246,
   0.01043824,
   0.01178454,
   0.01344354,
   0.01562217,
   0.01775024,
   0.0227077};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S0S12S18_",100,0,3092.813);
   Graph_Graph01070->SetMinimum(4.863655);
   Graph_Graph01070->SetMaximum(24.23476);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01070->GetXaxis()->SetRange(25,81);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
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
