void allDecaysErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.357,-0.003240064,3513.213,0.05105506);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1022[12] = {
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
   Double_t _fy1022[12] = {
   0.04200587,
   0.01683296,
   0.01241166,
   0.01015493,
   0.008740876,
   0.007783745,
   0.007086902,
   0.006579648,
   0.006200557,
   0.005940834,
   0.005809123,
   0.005973244};
   Double_t _fex1022[12] = {
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
   Double_t _fey1022[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1022,_fy1022,_fex1022,_fey1022);
   gre->SetName("");
   gre->SetTitle(";Decay positron momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,0,3122.856);
   Graph_Graph1022->SetMinimum(0.002189448);
   Graph_Graph1022->SetMaximum(0.04562555);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetTitle("Decay positron momentum [MeV]");
   Graph_Graph1022->GetXaxis()->CenterTitle(true);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1022->GetYaxis()->CenterTitle(true);
   Graph_Graph1022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
