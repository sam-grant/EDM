void Momentum_Y_RMS_vs_p_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 00:19:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.2727,0.1454532,3548.454,34.86018);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[12] = {
   124.3988,
   374.0376,
   623.6681,
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214,
   2850.256};
   Double_t Graph0_fy1043[12] = {
   10.85222,
   17.89538,
   21.74188,
   24.11513,
   25.50499,
   26.15783,
   26.13931,
   25.52067,
   24.19226,
   22.08666,
   18.95626,
   14.21923};
   Double_t Graph0_fex1043[12] = {
   0.02929449,
   0.0299445,
   0.03076586,
   0.03189946,
   0.03344109,
   0.03552055,
   0.03823304,
   0.04193465,
   0.04715784,
   0.05508997,
   0.06872581,
   0.0977494};
   Double_t Graph0_fey1043[12] = {
   0.003122473,
   0.005252623,
   0.006557456,
   0.007542938,
   0.008362637,
   0.009107752,
   0.009804313,
   0.01050264,
   0.01121441,
   0.01199369,
   0.01292249,
   0.01446069};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","",100,0,3122.952);
   Graph_Graph01043->SetMinimum(3.616926);
   Graph_Graph01043->SetMaximum(31.38871);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01043->GetXaxis()->SetRange(1,101);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
