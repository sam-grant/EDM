void Ag2_vs_p_A_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 22:36:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4796,-3.758995e-09,3031.399,9.996389e-09);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[12] = {
   141.6991,
   381.0665,
   628.3264,
   876.3507,
   1124.574,
   1373.651,
   1622.836,
   1871.414,
   2119.624,
   2367.727,
   2613.52,
   2850.226};
   Double_t Graph0_fy1016[12] = {
   -7.430184e-09,
   9.295602e-11,
   -7.956703e-10,
   8.171832e-10,
   -2.979689e-10,
   -5.165785e-10,
   -1.375876e-09,
   -7.868282e-10,
   5.42769e-10,
   -3.075589e-09,
   7.33312e-09,
   7.570824e-10};
   Double_t Graph0_fex1016[12] = {
   0.02289413,
   0.02098637,
   0.01898907,
   0.0178439,
   0.01766308,
   0.01809829,
   0.01885099,
   0.02018278,
   0.022406,
   0.02600401,
   0.03208401,
   0.04542575};
   Double_t Graph0_fey1016[12] = {
   1.863032e-09,
   1.054025e-09,
   7.65306e-10,
   6.310666e-10,
   6.062174e-10,
   6.493803e-10,
   7.448199e-10,
   9.45723e-10,
   1.377185e-09,
   2.360374e-09,
   5.012586e-09,
   1.789925e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{g#minus2} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",100,0,3121.131);
   Graph_Graph01016->SetMinimum(-2.383456e-09);
   Graph_Graph01016->SetMaximum(8.620851e-09);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01016->GetXaxis()->SetRange(25,89);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
