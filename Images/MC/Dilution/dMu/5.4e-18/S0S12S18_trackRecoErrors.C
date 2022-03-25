void S0S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.1842,-0.003649011,3372.18,0.05700083);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1018[11] = {
   451.8765,
   653.3173,
   880.3261,
   1123.092,
   1371.063,
   1620.182,
   1866.969,
   2115.425,
   2363.004,
   2613.718,
   2788.119};
   Double_t _fy1018[11] = {
   0.04689253,
   0.01567818,
   0.009008502,
   0.007399231,
   0.006785064,
   0.006459297,
   0.006490537,
   0.006825922,
   0.007301603,
   0.007225126,
   0.01649806};
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
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,218.2523,3021.743);
   Graph_Graph1018->SetMinimum(0.002415974);
   Graph_Graph1018->SetMaximum(0.05093585);
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
