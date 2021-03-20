void w_vs_momtrkQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 17 20:12:02 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-358.75,-3.09888e+279,3128.75,3.09888e+279);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[6] = {
   6.953118e-310,
   750,
   1250,
   1750,
   2250,
   6.953118e-310};
   Double_t Graph0_fy1010[6] = {
   6.953118e-310,
   1.43934,
   1.43934,
   1.43934,
   1.43934,
   0};
   Double_t Graph0_fex1010[6] = {
   0,
   250,
   250,
   250,
   250,
   6.953221e-310};
   Double_t Graph0_fey1010[6] = {
   2.06592e+279,
   0,
   0,
   0,
   0,
   6.953266e-310};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];#omega_{a} [MHz]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,-250,2750);
   Graph_Graph01010->SetMinimum(-2.479104e+279);
   Graph_Graph01010->SetMaximum(2.479104e+279);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01010->GetXaxis()->SetRange(9,101);
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("#omega_{a} [MHz]");
   Graph_Graph01010->GetYaxis()->CenterTitle(true);
   Graph_Graph01010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
