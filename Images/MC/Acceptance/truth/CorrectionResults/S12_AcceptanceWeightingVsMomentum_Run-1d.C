void S12_AcceptanceWeightingVsMomentum_Run-1d()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:23:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-390.357,-0.3800794,3513.213,0.9263781);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1040[12] = {
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
   Double_t _fy1040[12] = {
   -0.09095822,
   0.3651271,
   0.1000168,
   0.1969673,
   0.2763939,
   0.3228251,
   0.3814122,
   0.432272,
   0.3742054,
   0.5014459,
   0.6524743,
   0.6984852};
   Double_t _fex1040[12] = {
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
   Double_t _fey1040[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1040,_fy1040,_fex1040,_fey1040);
   gre->SetName("");
   gre->SetTitle("Run-1d: S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1040 = new TH1F("Graph_Graph1040","Run-1d: S12",100,0,3122.856);
   Graph_Graph1040->SetMinimum(-0.2494337);
   Graph_Graph1040->SetMaximum(0.7957323);
   Graph_Graph1040->SetDirectory(0);
   Graph_Graph1040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1040->SetLineColor(ci);
   Graph_Graph1040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1040->GetXaxis()->CenterTitle(true);
   Graph_Graph1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph1040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph1040->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_Graph1040->GetYaxis()->CenterTitle(true);
   Graph_Graph1040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph1040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph1040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1040);
   
   gre->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.3844724,0.94,0.6155276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1d: S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
