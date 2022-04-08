void AcceptanceWeightingVsMomentum.2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:03:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-390.357,-0.08279947,3513.213,1.302206);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1012[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t _fy1012[12] = {
   0.9999934,
   0.5303493,
   0.1691252,
   0.3179535,
   0.4199183,
   0.4385341,
   0.4917986,
   0.535004,
   0.4927362,
   0.6177951,
   0.7782173,
   0.8258068};
   Double_t _fex1012[12] = {
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
   Double_t _fey1012[12] = {
   0.07137807,
   0.02860332,
   0.02109047,
   0.0172557,
   0.01485277,
   0.01322635,
   0.01204239,
   0.0111804,
   0.01053621,
   0.01009494,
   0.009871327,
   0.01015};
   TGraphErrors *gre = new TGraphErrors(12,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,0,3122.856);
   Graph_Graph1012->SetMinimum(0.05570105);
   Graph_Graph1012->SetMaximum(1.163705);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1012->GetXaxis()->CenterTitle(true);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_Graph1012->GetYaxis()->CenterTitle(true);
   Graph_Graph1012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
