void S0_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.8304,-0.008890477,3374.034,0.1343742);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1054[11] = {
   451.647,
   653.2691,
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294,
   2789.557};
   Double_t _fy1054[11] = {
   0.1104967,
   0.03689173,
   0.02135777,
   0.01754203,
   0.01601735,
   0.01521858,
   0.01498697,
   0.01540681,
   0.01595041,
   0.01584908,
   0.03389351};
   Double_t _fex1054[11] = {
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
   Double_t _fey1054[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1054,_fy1054,_fex1054,_fey1054);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1054 = new TH1F("Graph_Graph1054","",100,217.8561,3023.348);
   Graph_Graph1054->SetMinimum(0.005435989);
   Graph_Graph1054->SetMaximum(0.1200477);
   Graph_Graph1054->SetDirectory(0);
   Graph_Graph1054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1054->SetLineColor(ci);
   Graph_Graph1054->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1054->GetXaxis()->CenterTitle(true);
   Graph_Graph1054->GetXaxis()->SetLabelFont(42);
   Graph_Graph1054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1054->GetXaxis()->SetTitleFont(42);
   Graph_Graph1054->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1054->GetYaxis()->CenterTitle(true);
   Graph_Graph1054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1054->GetYaxis()->SetLabelFont(42);
   Graph_Graph1054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1054->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1054->GetYaxis()->SetTitleFont(42);
   Graph_Graph1054->GetZaxis()->SetLabelFont(42);
   Graph_Graph1054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1054);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
