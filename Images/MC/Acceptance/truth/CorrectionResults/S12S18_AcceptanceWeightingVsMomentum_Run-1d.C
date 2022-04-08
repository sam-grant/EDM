void S12S18_AcceptanceWeightingVsMomentum_Run-1d()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:23:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-390.357,-0.3707239,3513.213,0.8796003);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1048[12] = {
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
   Double_t _fy1048[12] = {
   -0.09095822,
   0.3365606,
   0.05296415,
   0.1344031,
   0.2050735,
   0.2530569,
   0.2994283,
   0.3279396,
   0.2875371,
   0.3532386,
   0.5064335,
   0.6610629};
   Double_t _fex1048[12] = {
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
   Double_t _fey1048[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1048,_fy1048,_fex1048,_fey1048);
   gre->SetName("");
   gre->SetTitle("Run-1d: S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1048 = new TH1F("Graph_Graph1048","Run-1d: S12S18",100,0,3122.856);
   Graph_Graph1048->SetMinimum(-0.2456914);
   Graph_Graph1048->SetMaximum(0.7545679);
   Graph_Graph1048->SetDirectory(0);
   Graph_Graph1048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1048->SetLineColor(ci);
   Graph_Graph1048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1048->GetXaxis()->CenterTitle(true);
   Graph_Graph1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph1048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph1048->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_Graph1048->GetYaxis()->CenterTitle(true);
   Graph_Graph1048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph1048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph1048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1048);
   
   gre->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.351809,0.94,0.648191,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1d: S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
