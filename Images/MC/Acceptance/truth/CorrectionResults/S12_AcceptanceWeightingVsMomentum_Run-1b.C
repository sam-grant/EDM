void S12_AcceptanceWeightingVsMomentum_Run-1b()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:23:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-390.357,-0.3765886,3513.213,0.9089238);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1016[12] = {
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
   Double_t _fy1016[12] = {
   -0.09095822,
   0.3654041,
   0.1019934,
   0.1967262,
   0.2794843,
   0.3233164,
   0.3838737,
   0.4305386,
   0.3735395,
   0.5079765,
   0.6457924,
   0.6845217};
   Double_t _fex1016[12] = {
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
   Double_t _fey1016[12] = {
   0.07137827,
   0.02860333,
   0.02109046,
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124,
   0.01015001};
   TGraphErrors *gre = new TGraphErrors(12,_fx1016,_fy1016,_fex1016,_fey1016);
   gre->SetName("");
   gre->SetTitle("Run-1b: S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Run-1b: S12",100,0,3122.856);
   Graph_Graph1016->SetMinimum(-0.2480373);
   Graph_Graph1016->SetMaximum(0.7803725);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1016->GetXaxis()->CenterTitle(true);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_Graph1016->GetYaxis()->CenterTitle(true);
   Graph_Graph1016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.3844724,0.94,0.6155276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1b: S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
