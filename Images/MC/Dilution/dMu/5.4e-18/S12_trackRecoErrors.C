void S12_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.4328,-0.00852389,3371.806,0.1337118);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1058[11] = {
   451.6071,
   653.3642,
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236,
   2787.767};
   Double_t _fy1058[11] = {
   0.1100058,
   0.03699345,
   0.02125165,
   0.01748089,
   0.01598468,
   0.01518205,
   0.01527061,
   0.01614408,
   0.01732056,
   0.01728981,
   0.03988681};
   Double_t _fex1058[11] = {
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
   Double_t _fey1058[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1058,_fy1058,_fex1058,_fey1058);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1058 = new TH1F("Graph_Graph1058","",100,217.9912,3021.382);
   Graph_Graph1058->SetMinimum(0.005699675);
   Graph_Graph1058->SetMaximum(0.1194882);
   Graph_Graph1058->SetDirectory(0);
   Graph_Graph1058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1058->SetLineColor(ci);
   Graph_Graph1058->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1058->GetXaxis()->CenterTitle(true);
   Graph_Graph1058->GetXaxis()->SetLabelFont(42);
   Graph_Graph1058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1058->GetXaxis()->SetTitleFont(42);
   Graph_Graph1058->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1058->GetYaxis()->CenterTitle(true);
   Graph_Graph1058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1058->GetYaxis()->SetLabelFont(42);
   Graph_Graph1058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1058->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1058->GetYaxis()->SetTitleFont(42);
   Graph_Graph1058->GetZaxis()->SetLabelFont(42);
   Graph_Graph1058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1058);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
