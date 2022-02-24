void S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:54:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-131.9926,-0.008709902,3371.386,0.0992174);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1014[11] = {
   451.9038,
   653.315,
   880.4707,
   1123.079,
   1370.969,
   1620.017,
   1866.66,
   2115.009,
   2362.994,
   2613.175,
   2787.49};
   Double_t _fy1014[11] = {
   0.08122952,
   0.02867921,
   0.01682687,
   0.013446,
   0.01141677,
   0.009907567,
   0.009332662,
   0.00935596,
   0.009693623,
   0.009277983,
   0.0213147};
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
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,218.3453,3021.048);
   Graph_Graph1014->SetMinimum(0.00208283);
   Graph_Graph1014->SetMaximum(0.08842467);
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
