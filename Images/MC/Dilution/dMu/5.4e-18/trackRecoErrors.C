void trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 15:17:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.3892,-0.005006415,3372.674,0.07832206);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1022[11] = {
   451.788,
   653.3045,
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041,
   2614.061,
   2788.497};
   Double_t _fy1022[11] = {
   0.06443398,
   0.02156648,
   0.0124005,
   0.01018395,
   0.00933314,
   0.008881665,
   0.008899678,
   0.009315277,
   0.009894346,
   0.009813133,
   0.02214676};
   Double_t _fex1022[11] = {
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
   Double_t _fey1022[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1022,_fy1022,_fex1022,_fey1022);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,218.1171,3022.168);
   Graph_Graph1022->SetMinimum(0.003326433);
   Graph_Graph1022->SetMaximum(0.06998921);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
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
