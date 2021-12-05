void S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_noCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 18:56:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.4894,10.55173,3034.767,29.06248);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1088[12] = {
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
   Double_t Graph0_fy1088[12] = {
   17.00993,
   14.80419,
   17.41341,
   19.88317,
   21.48759,
   22.36842,
   22.679,
   22.50944,
   21.85099,
   20.5763,
   18.47264,
   15.69186};
   Double_t Graph0_fex1088[12] = {
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
   Double_t Graph0_fey1088[12] = {
   0.06948214,
   0.008417472,
   0.005704792,
   0.006173268,
   0.006772752,
   0.007290317,
   0.007797736,
   0.008404656,
   0.009205279,
   0.01023762,
   0.01172277,
   0.01717495};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1088,Graph0_fy1088,Graph0_fex1088,Graph0_fey1088);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01088 = new TH1F("Graph_Graph01088","S12S18_",100,0,3088.822);
   Graph_Graph01088->SetMinimum(12.4028);
   Graph_Graph01088->SetMaximum(27.21141);
   Graph_Graph01088->SetDirectory(0);
   Graph_Graph01088->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01088->SetLineColor(ci);
   Graph_Graph01088->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01088->GetXaxis()->SetRange(25,90);
   Graph_Graph01088->GetXaxis()->CenterTitle(true);
   Graph_Graph01088->GetXaxis()->SetLabelFont(42);
   Graph_Graph01088->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01088->GetXaxis()->SetTitleFont(42);
   Graph_Graph01088->GetYaxis()->CenterTitle(true);
   Graph_Graph01088->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01088->GetYaxis()->SetLabelFont(42);
   Graph_Graph01088->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01088->GetYaxis()->SetTitleFont(42);
   Graph_Graph01088->GetZaxis()->SetLabelFont(42);
   Graph_Graph01088->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01088);
   
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
