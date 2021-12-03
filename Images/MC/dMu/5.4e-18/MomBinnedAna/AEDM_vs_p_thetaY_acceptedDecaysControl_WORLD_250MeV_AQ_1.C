void AEDM_vs_p_thetaY_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:25:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4796,0.01796659,3031.399,0.3449912);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[12] = {
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
   Double_t Graph0_fy1012[12] = {
   0.2469905,
   0.2685147,
   0.2486139,
   0.2602853,
   0.2572463,
   0.2517269,
   0.2307846,
   0.2142461,
   0.1862315,
   0.149624,
   0.1112359,
   0.06117347};
   Double_t Graph0_fex1012[12] = {
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
   Double_t Graph0_fey1012[12] = {
   0.04434043,
   0.01848845,
   0.01208954,
   0.009059875,
   0.007492842,
   0.006509873,
   0.005786366,
   0.005301105,
   0.004976125,
   0.004754723,
   0.004608127,
   0.004735722};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","",100,0,3121.131);
   Graph_Graph01012->SetMinimum(0.05066905);
   Graph_Graph01012->SetMaximum(0.3122887);
   Graph_Graph01012->SetDirectory(0);
   Graph_Graph01012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01012->SetLineColor(ci);
   Graph_Graph01012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01012->GetXaxis()->SetRange(25,89);
   Graph_Graph01012->GetXaxis()->CenterTitle(true);
   Graph_Graph01012->GetXaxis()->SetLabelFont(42);
   Graph_Graph01012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetXaxis()->SetTitleFont(42);
   Graph_Graph01012->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01012->GetYaxis()->CenterTitle(true);
   Graph_Graph01012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01012->GetYaxis()->SetLabelFont(42);
   Graph_Graph01012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01012->GetYaxis()->SetTitleFont(42);
   Graph_Graph01012->GetZaxis()->SetLabelFont(42);
   Graph_Graph01012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01012);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
