void N_vs_p_acceptedDecays_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:34:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.6857,-1096804,2750.47,1.621559e+07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[12] = {
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
   Double_t Graph0_fy1015[12] = {
   6415815,
   9376827,
   1.154651e+07,
   1.304045e+07,
   1.333019e+07,
   1.271627e+07,
   1.170232e+07,
   1.01985e+07,
   8249977,
   6102498,
   3950006,
   1788595};
   Double_t Graph0_fex1015[12] = {
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
   Double_t Graph0_fey1015[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];Positrons / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,3121.1);
   Graph_Graph01015->SetMinimum(634435.5);
   Graph_Graph01015->SetMaximum(1.448435e+07);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(25,81);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
