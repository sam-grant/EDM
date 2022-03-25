void S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-131.7913,-0.005827967,3371.219,0.09126756);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1010[11] = {
   452.0438,
   653.3118,
   880.5354,
   1123.03,
   1370.823,
   1619.719,
   1866.49,
   2115.091,
   2363.256,
   2612.028,
   2787.384};
   Double_t _fy1010[11] = {
   0.07508497,
   0.02503315,
   0.01430643,
   0.01173752,
   0.0108368,
   0.01035462,
   0.01051477,
   0.01113449,
   0.01207544,
   0.01185922,
   0.02827062};
   Double_t _fex1010[11] = {
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
   Double_t _fey1010[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,218.5098,3020.918);
   Graph_Graph1010->SetMinimum(0.003881586);
   Graph_Graph1010->SetMaximum(0.08155801);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1010->GetXaxis()->CenterTitle(true);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1010->GetYaxis()->CenterTitle(true);
   Graph_Graph1010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
