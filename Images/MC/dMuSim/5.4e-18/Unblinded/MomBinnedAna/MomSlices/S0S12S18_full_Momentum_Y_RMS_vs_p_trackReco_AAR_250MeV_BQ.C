void S0S12S18_full_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:50:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(45.03123,11.81839,3197.219,23.37736);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1133[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1133[11] = {
   14.06267,
   16.71194,
   18.59368,
   20.10516,
   21.08712,
   21.43882,
   21.20792,
   20.30877,
   18.70471,
   16.27803,
   13.79672};
   Double_t Graph0_fex1133[11] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1133[11] = {
   0.02434525,
   0.01170734,
   0.009093286,
   0.009548101,
   0.01069624,
   0.01204846,
   0.01389543,
   0.01648546,
   0.01959794,
   0.02150434,
   0.05183663};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1133,Graph0_fy1133,Graph0_fex1133,Graph0_fey1133);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125 MeV;#sigma_{p_{y}} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01133 = new TH1F("Graph_Graph01133","",100,0,3275);
   Graph_Graph01133->SetMinimum(12.97429);
   Graph_Graph01133->SetMaximum(22.22146);
   Graph_Graph01133->SetDirectory(0);
   Graph_Graph01133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01133->SetLineColor(ci);
   Graph_Graph01133->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01133->GetXaxis()->SetRange(12,88);
   Graph_Graph01133->GetXaxis()->CenterTitle(true);
   Graph_Graph01133->GetXaxis()->SetLabelFont(42);
   Graph_Graph01133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01133->GetXaxis()->SetTitleFont(42);
   Graph_Graph01133->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV]");
   Graph_Graph01133->GetYaxis()->CenterTitle(true);
   Graph_Graph01133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01133->GetYaxis()->SetLabelFont(42);
   Graph_Graph01133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01133->GetYaxis()->SetTitleFont(42);
   Graph_Graph01133->GetZaxis()->SetLabelFont(42);
   Graph_Graph01133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01133);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
