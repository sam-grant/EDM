void eAEDM_vs_p_acceptedDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:29:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.6857,-0.005953398,2750.47,0.06066523);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[12] = {
   141.6721,
   381.0619,
   628.3411,
   876.335,
   1124.572,
   1373.653,
   1622.832,
   1871.413,
   2119.63,
   2367.742,
   2613.509,
   2850.19};
   Double_t Graph0_fy1016[12] = {
   0.04956212,
   0.02065902,
   0.01351025,
   0.01012559,
   0.008373308,
   0.007274833,
   0.006466197,
   0.005922854,
   0.00556099,
   0.005312691,
   0.005149707,
   0.005294742};
   Double_t Graph0_fex1016[12] = {
   0.02559166,
   0.02344866,
   0.02122027,
   0.01994385,
   0.01973856,
   0.02022728,
   0.02106702,
   0.02255001,
   0.02503883,
   0.02905949,
   0.03585111,
   0.0507559};
   Double_t Graph0_fey1016[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltaA_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",100,0,3121.1);
   Graph_Graph01016->SetMinimum(0.0007084654);
   Graph_Graph01016->SetMaximum(0.05400337);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01016->GetXaxis()->SetRange(25,81);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
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
