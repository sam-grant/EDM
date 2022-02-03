void S12S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9638,125.5269,3509.674,231.0534);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1188[12] = {
   194.2052,
   428.5039,
   630.9259,
   875.1825,
   1123.948,
   1373.209,
   1622.265,
   1870.711,
   2119.19,
   2366.793,
   2612.56,
   2825.572};
   Double_t Graph0_fy1188[12] = {
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   178.9636};
   Double_t Graph0_fex1188[12] = {
   0.2401371,
   0.04226504,
   0.03284899,
   0.03158196,
   0.03208886,
   0.0331561,
   0.0349262,
   0.03789215,
   0.04269879,
   0.05025669,
   0.06362822,
   0.08097805};
   Double_t Graph0_fey1188[12] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1188,Graph0_fy1188,Graph0_fex1188,Graph0_fey1188);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01188 = new TH1F("Graph_Graph01188","S12S18_",100,0,3088.822);
   Graph_Graph01188->SetMinimum(136.0796);
   Graph_Graph01188->SetMaximum(220.5008);
   Graph_Graph01188->SetDirectory(0);
   Graph_Graph01188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01188->SetLineColor(ci);
   Graph_Graph01188->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01188->GetXaxis()->SetRange(1,101);
   Graph_Graph01188->GetXaxis()->CenterTitle(true);
   Graph_Graph01188->GetXaxis()->SetLabelFont(42);
   Graph_Graph01188->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01188->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01188->GetXaxis()->SetTitleFont(42);
   Graph_Graph01188->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01188->GetYaxis()->CenterTitle(true);
   Graph_Graph01188->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01188->GetYaxis()->SetLabelFont(42);
   Graph_Graph01188->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01188->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01188->GetYaxis()->SetTitleFont(42);
   Graph_Graph01188->GetZaxis()->SetLabelFont(42);
   Graph_Graph01188->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01188->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01188);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
