void AEDM_vs_p_A_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:25:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4796,-4.602404e-09,3031.399,1.247852e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[12] = {
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
   Double_t Graph0_fy1015[12] = {
   5.745614e-09,
   7.936495e-09,
   1.02056e-08,
   1.266431e-08,
   1.503414e-08,
   1.785253e-08,
   2.207546e-08,
   2.776598e-08,
   3.549497e-08,
   4.377151e-08,
   5.622152e-08,
   9.487535e-08};
   Double_t Graph0_fex1015[12] = {
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
   Double_t Graph0_fey1015[12] = {
   1.786453e-09,
   1.012232e-09,
   7.421956e-10,
   6.205114e-10,
   6.019358e-10,
   6.465953e-10,
   7.295877e-10,
   8.877604e-10,
   1.193993e-09,
   1.813929e-09,
   3.3173e-09,
   1.019113e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,3121.131);
   Graph_Graph01015->SetMinimum(8.336361e-09);
   Graph_Graph01015->SetMaximum(1.118465e-07);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(25,89);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
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
