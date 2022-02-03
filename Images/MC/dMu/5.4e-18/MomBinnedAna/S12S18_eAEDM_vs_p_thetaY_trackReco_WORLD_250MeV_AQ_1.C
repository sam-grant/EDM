void S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9638,-0.1162216,3509.674,1.118366);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1186[12] = {
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
   Double_t Graph0_fy1186[12] = {
   0.3888431,
   0.03824059,
   0.01818691,
   0.01426589,
   0.01225722,
   0.01085984,
   0.009886086,
   0.009302286,
   0.009046333,
   0.00908828,
   0.009622117,
   0.01398841};
   Double_t Graph0_fex1186[12] = {
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
   Double_t Graph0_fey1186[12] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1186,Graph0_fy1186,Graph0_fex1186,Graph0_fey1186);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01186 = new TH1F("Graph_Graph01186","S12S18_",100,0,3088.822);
   Graph_Graph01186->SetMinimum(0.007237176);
   Graph_Graph01186->SetMaximum(0.994907);
   Graph_Graph01186->SetDirectory(0);
   Graph_Graph01186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01186->SetLineColor(ci);
   Graph_Graph01186->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01186->GetXaxis()->SetRange(1,101);
   Graph_Graph01186->GetXaxis()->CenterTitle(true);
   Graph_Graph01186->GetXaxis()->SetLabelFont(42);
   Graph_Graph01186->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01186->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01186->GetXaxis()->SetTitleFont(42);
   Graph_Graph01186->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01186->GetYaxis()->CenterTitle(true);
   Graph_Graph01186->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01186->GetYaxis()->SetLabelFont(42);
   Graph_Graph01186->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01186->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01186->GetYaxis()->SetTitleFont(42);
   Graph_Graph01186->GetZaxis()->SetLabelFont(42);
   Graph_Graph01186->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01186->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01186);
   
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
