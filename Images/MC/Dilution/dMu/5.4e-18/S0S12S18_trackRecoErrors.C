void S0S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:54:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.2249,-0.00783572,3372.191,0.08675146);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1018[11] = {
   451.8445,
   653.3043,
   880.3432,
   1123.073,
   1371.072,
   1620.188,
   1866.987,
   2115.41,
   2363.046,
   2613.742,
   2788.122};
   Double_t _fy1018[11] = {
   0.07098693,
   0.0250771,
   0.01475872,
   0.01179495,
   0.01000019,
   0.008671079,
   0.008117709,
   0.008077422,
   0.008274364,
   0.00792881,
   0.01774593};
   Double_t _fex1018[11] = {
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
   Double_t _fey1018[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1018,_fy1018,_fex1018,_fey1018);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,218.2167,3021.75);
   Graph_Graph1018->SetMinimum(0.001622999);
   Graph_Graph1018->SetMaximum(0.07729274);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1018->GetXaxis()->CenterTitle(true);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1018->GetYaxis()->CenterTitle(true);
   Graph_Graph1018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
