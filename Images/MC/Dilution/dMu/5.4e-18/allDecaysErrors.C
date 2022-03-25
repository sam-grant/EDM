void allDecaysErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.3877,-0.002590896,3513.489,0.0403529);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1022[12] = {
   124.2539,
   373.7923,
   623.4572,
   873.0274,
   1122.67,
   1372.178,
   1621.49,
   1870.756,
   2119.553,
   2367.462,
   2613.359,
   2850.479};
   Double_t _fy1022[12] = {
   0.0331956,
   0.01328248,
   0.009768104,
   0.007959068,
   0.006830319,
   0.006060764,
   0.00551679,
   0.005123823,
   0.004841789,
   0.004655644,
   0.004566403,
   0.004713196};
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
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,0,3123.101);
   Graph_Graph1022->SetMinimum(0.001703484);
   Graph_Graph1022->SetMaximum(0.03605852);
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
