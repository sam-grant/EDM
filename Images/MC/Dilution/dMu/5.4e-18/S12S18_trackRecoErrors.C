void S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.0325,-0.00414813,3371.54,0.06488496);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1014[11] = {
   451.8963,
   653.3497,
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265,
   2787.611};
   Double_t _fy1014[11] = {
   0.05337944,
   0.01787138,
   0.01024343,
   0.008414166,
   0.007723566,
   0.007357385,
   0.007433909,
   0.007874323,
   0.008501101,
   0.008404824,
   0.01967341};
   Double_t _fex1014[11] = {
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
   Double_t _fey1014[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,218.3248,3021.183);
   Graph_Graph1014->SetMinimum(0.002755179);
   Graph_Graph1014->SetMaximum(0.05798165);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1014->GetXaxis()->CenterTitle(true);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1014->GetYaxis()->CenterTitle(true);
   Graph_Graph1014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
