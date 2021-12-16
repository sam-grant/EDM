void S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-131.7536,-0.008563784,3371.459,0.1346376);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1062[11] = {
   452.1153,
   653.259,
   880.6386,
   1123.037,
   1370.835,
   1619.675,
   1866.351,
   2115.144,
   2363.223,
   2612.271,
   2787.59};
   Double_t _fy1062[11] = {
   0.1107707,
   0.03705102,
   0.02115334,
   0.0173629,
   0.01601287,
   0.01530312,
   0.01556238,
   0.01646739,
   0.01786378,
   0.01757159,
   0.0418298};
   Double_t _fex1062[11] = {
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
   Double_t _fey1062[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1062,_fy1062,_fex1062,_fey1062);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1062 = new TH1F("Graph_Graph1062","",100,218.5678,3021.138);
   Graph_Graph1062->SetMinimum(0.005756356);
   Graph_Graph1062->SetMaximum(0.1203175);
   Graph_Graph1062->SetDirectory(0);
   Graph_Graph1062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1062->SetLineColor(ci);
   Graph_Graph1062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1062->GetXaxis()->CenterTitle(true);
   Graph_Graph1062->GetXaxis()->SetLabelFont(42);
   Graph_Graph1062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1062->GetXaxis()->SetTitleFont(42);
   Graph_Graph1062->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1062->GetYaxis()->CenterTitle(true);
   Graph_Graph1062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1062->GetYaxis()->SetLabelFont(42);
   Graph_Graph1062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1062->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1062->GetYaxis()->SetTitleFont(42);
   Graph_Graph1062->GetZaxis()->SetLabelFont(42);
   Graph_Graph1062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1062);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
