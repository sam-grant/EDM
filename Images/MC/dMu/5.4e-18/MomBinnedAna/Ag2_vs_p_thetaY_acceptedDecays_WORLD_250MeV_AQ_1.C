void Ag2_vs_p_thetaY_acceptedDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:24:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4746,-0.01855875,3031.369,0.0259815);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[12] = {
   141.6725,
   381.062,
   628.3398,
   876.3344,
   1124.572,
   1373.652,
   1622.832,
   1871.413,
   2119.63,
   2367.743,
   2613.51,
   2850.19};
   Double_t Graph0_fy1013[12] = {
   -0.1733938,
   0.004285942,
   -0.009501832,
   0.0184745,
   -0.01775229,
   -0.01218232,
   -0.01384791,
   0.0001265991,
   0.01293805,
   -0.007533077,
   0.003856263,
   -0.00240423};
   Double_t Graph0_fex1013[12] = {
   0.02559179,
   0.02344924,
   0.02122073,
   0.01994424,
   0.01973897,
   0.02022785,
   0.02106728,
   0.02255025,
   0.02503905,
   0.02905985,
   0.03585142,
   0.05075603};
   Double_t Graph0_fey1013[12] = {
   0.04951679,
   0.02067228,
   0.01353767,
   0.0101408,
   0.008385698,
   0.007288995,
   0.006492397,
   0.005989763,
   0.005697998,
   0.005585787,
   0.005664552,
   0.006339943};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{g#minus2} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,0,3121.1);
   Graph_Graph01013->SetMinimum(-0.01410472);
   Graph_Graph01013->SetMaximum(0.02152748);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01013->GetXaxis()->SetRange(25,89);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
