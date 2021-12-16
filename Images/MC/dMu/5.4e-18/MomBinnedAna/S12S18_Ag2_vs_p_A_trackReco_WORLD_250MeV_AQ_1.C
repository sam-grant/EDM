void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 08:42:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9638,-1.14425e-05,3509.674,5.580426e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[12] = {
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
   Double_t Graph0_fy1085[12] = {
   3.203026e-05,
   2.635788e-07,
   5.555013e-09,
   -6.19198e-09,
   -9.001508e-10,
   -1.231415e-09,
   7.833966e-10,
   1.075263e-08,
   8.435814e-09,
   5.380874e-08,
   2.63618e-08,
   -1.83839e-08};
   Double_t Graph0_fex1085[12] = {
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
   Double_t Graph0_fey1085[12] = {
   1.256621e-05,
   2.127572e-08,
   4.131867e-09,
   3.488345e-09,
   3.628851e-09,
   4.008823e-09,
   4.765053e-09,
   6.293528e-09,
   9.582041e-09,
   1.714024e-08,
   3.916801e-08,
   2.163245e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","S12S18_",100,0,3088.822);
   Graph_Graph01085->SetMinimum(-4.717826e-06);
   Graph_Graph01085->SetMaximum(4.907959e-05);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01085->GetXaxis()->SetRange(1,101);
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01085->GetYaxis()->CenterTitle(true);
   Graph_Graph01085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph01085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph01085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01085);
   
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
