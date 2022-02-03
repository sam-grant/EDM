void S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:38:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-131.9569,-0.004671908,3371.387,0.07348113);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1014[11] = {
   451.9338,
   653.315,
   880.4423,
   1123.086,
   1370.96,
   1619.999,
   1866.598,
   2114.954,
   2362.913,
   2613.194,
   2787.496};
   Double_t _fy1014[11] = {
   0.06045563,
   0.0202846,
   0.0116218,
   0.009546282,
   0.008768377,
   0.008353599,
   0.008440916,
   0.008930368,
   0.00965824,
   0.009553866,
   0.02238203};
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
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,218.3776,3021.053);
   Graph_Graph1014->SetMinimum(0.003143396);
   Graph_Graph1014->SetMaximum(0.06566583);
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
