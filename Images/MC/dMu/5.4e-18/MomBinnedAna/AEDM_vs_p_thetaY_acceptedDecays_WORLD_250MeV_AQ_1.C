void AEDM_vs_p_thetaY_acceptedDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:24:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4746,0.01719283,3031.369,0.3464922);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[12] = {
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
   Double_t Graph0_fy1012[12] = {
   0.2407713,
   0.2503997,
   0.2599309,
   0.2613378,
   0.2582512,
   0.2571163,
   0.2336383,
   0.2101411,
   0.182924,
   0.1504165,
   0.113608,
   0.06036094};
   Double_t Graph0_fex1012[12] = {
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
   Double_t Graph0_fey1012[12] = {
   0.04956521,
   0.02065961,
   0.01351055,
   0.01012575,
   0.008373368,
   0.007274865,
   0.00646593,
   0.005922855,
   0.005561101,
   0.005313085,
   0.005149848,
   0.00529525};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","",100,0,3121.1);
   Graph_Graph01012->SetMinimum(0.05012277);
   Graph_Graph01012->SetMaximum(0.3135622);
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
