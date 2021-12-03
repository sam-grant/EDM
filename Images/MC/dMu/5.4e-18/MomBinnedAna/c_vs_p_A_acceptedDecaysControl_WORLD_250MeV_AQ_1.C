void c_vs_p_A_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:25:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4796,-5.592861e-09,3031.399,6.201835e-09);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[12] = {
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
   Double_t Graph0_fy1014[12] = {
   -2.634406e-08,
   -1.148664e-08,
   -5.790918e-09,
   -2.653324e-09,
   -1.67837e-09,
   -2.86966e-09,
   -2.314477e-09,
   -1.246811e-09,
   -8.333425e-10,
   -4.167097e-09,
   4.306669e-09,
   -1.724957e-10};
   Double_t Graph0_fex1014[12] = {
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
   Double_t Graph0_fey1014[12] = {
   1.326523e-09,
   7.501942e-10,
   5.432387e-10,
   4.46724e-10,
   4.280233e-10,
   4.587641e-10,
   5.283817e-10,
   6.781589e-10,
   1.004516e-09,
   1.762766e-09,
   3.845165e-09,
   1.408915e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0,3121.131);
   Graph_Graph01014->SetMinimum(-4.413391e-09);
   Graph_Graph01014->SetMaximum(5.022365e-09);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01014->GetXaxis()->SetRange(25,89);
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
