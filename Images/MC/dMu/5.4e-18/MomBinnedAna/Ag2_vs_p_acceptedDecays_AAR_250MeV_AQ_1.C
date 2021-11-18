void Ag2_vs_p_acceptedDecays_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:29:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.6857,-0.2931687,2750.47,0.09132887);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[12] = {
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
   Double_t Graph0_fy1011[12] = {
   -0.1795703,
   0.005632418,
   -0.009570038,
   0.0171056,
   -0.01984961,
   -0.01242127,
   -0.01390516,
   8.739502e-05,
   0.01306704,
   -0.008063257,
   0.003339043,
   -0.002027772};
   Double_t Graph0_fex1011[12] = {
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
   Double_t Graph0_fey1011[12] = {
   0.04951551,
   0.02067097,
   0.01353701,
   0.01014034,
   0.008385393,
   0.007288709,
   0.006491968,
   0.005989726,
   0.005698874,
   0.005588014,
   0.005668563,
   0.006349228};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{g#minus2} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","",100,0,3121.1);
   Graph_Graph01011->SetMinimum(-0.254719);
   Graph_Graph01011->SetMaximum(0.05287911);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01011->GetXaxis()->SetRange(25,81);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
