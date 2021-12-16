void S0S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.3832,-0.004951366,3372.643,0.07753313);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1070[11] = {
   451.7878,
   653.2973,
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023,
   2788.472};
   Double_t _fy1070[11] = {
   0.06378572,
   0.02135186,
   0.01227176,
   0.01008195,
   0.009240946,
   0.008796052,
   0.008815584,
   0.009231367,
   0.009808522,
   0.009731092,
   0.0220131};
   Double_t _fex1070[11] = {
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
   Double_t _fey1070[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1070,_fy1070,_fex1070,_fey1070);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1070 = new TH1F("Graph_Graph1070","",100,218.1194,3022.14);
   Graph_Graph1070->SetMinimum(0.003297085);
   Graph_Graph1070->SetMaximum(0.06928468);
   Graph_Graph1070->SetDirectory(0);
   Graph_Graph1070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1070->SetLineColor(ci);
   Graph_Graph1070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1070->GetXaxis()->CenterTitle(true);
   Graph_Graph1070->GetXaxis()->SetLabelFont(42);
   Graph_Graph1070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1070->GetXaxis()->SetTitleFont(42);
   Graph_Graph1070->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1070->GetYaxis()->CenterTitle(true);
   Graph_Graph1070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1070->GetYaxis()->SetLabelFont(42);
   Graph_Graph1070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1070->GetYaxis()->SetTitleFont(42);
   Graph_Graph1070->GetZaxis()->SetLabelFont(42);
   Graph_Graph1070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1070);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
