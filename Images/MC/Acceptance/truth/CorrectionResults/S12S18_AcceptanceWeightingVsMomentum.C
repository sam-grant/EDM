void S12S18_AcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 19 22:20:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.357,-0.1755498,3513.213,0.8168491);
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
   0.1694451,
   0.3776412,
   0.3706993,
   0.3889767,
   0.436084,
   0.4988647,
   0.5315877,
   0.4442704,
   0.5526409,
   0.6413543,
   0.5115023,
   3.065106e-307};
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","S12S18",100,0,3122.856);
   Graph_Graph1012->SetMinimum(-0.07630993);
   Graph_Graph1012->SetMaximum(0.7176092);
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
