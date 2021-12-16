void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 08:42:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9638,-2.481525e-05,3509.674,0.0001054164);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[12] = {
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
   Double_t Graph0_fy1083[12] = {
   7.479072e-05,
   -3.094928e-06,
   -1.057622e-07,
   2.307992e-08,
   3.261897e-08,
   3.893609e-08,
   5.709409e-08,
   4.644136e-08,
   4.649173e-08,
   1.171471e-07,
   7.026855e-08,
   4.537073e-07};
   Double_t Graph0_fex1083[12] = {
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
   Double_t Graph0_fey1083[12] = {
   8.92037e-06,
   1.505398e-08,
   2.924344e-09,
   2.465192e-09,
   2.558573e-09,
   2.83013e-09,
   3.381047e-09,
   4.519281e-09,
   6.998114e-09,
   1.281269e-08,
   3.003229e-08,
   1.699107e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","S12S18_",100,0,3088.822);
   Graph_Graph01083->SetMinimum(-1.179209e-05);
   Graph_Graph01083->SetMaximum(9.23932e-05);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01083->GetXaxis()->SetRange(1,101);
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
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
