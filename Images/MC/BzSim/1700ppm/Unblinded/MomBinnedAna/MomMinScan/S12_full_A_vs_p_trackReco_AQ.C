void S12_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:15:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.2725098,3468.85,0.2812617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1166[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1166[15] = {
   0.09689272,
   0.09708423,
   0.1088201,
   0.1362768,
   0.1711949,
   0.1553464,
   0.1547987,
   0.1377315,
   0.1145218,
   0.1293246,
   0.1209993,
   0.1182347,
   0.1070795,
   0.04224813,
   -0.108404};
   Double_t Graph0_fex1166[15] = {
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
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1166[15] = {
   0.01824483,
   0.01824459,
   0.01819607,
   0.01793664,
   0.01777157,
   0.0178692,
   0.01826334,
   0.01901397,
   0.02022629,
   0.02208918,
   0.02475548,
   0.02860505,
   0.03411352,
   0.04293732,
   0.07181054};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1166,Graph0_fy1166,Graph0_fex1166,Graph0_fey1166);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01166 = new TH1F("Graph_Graph01166","S12",100,0,3080);
   Graph_Graph01166->SetMinimum(-0.2171326);
   Graph_Graph01166->SetMaximum(0.2258845);
   Graph_Graph01166->SetDirectory(0);
   Graph_Graph01166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01166->SetLineColor(ci);
   Graph_Graph01166->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01166->GetXaxis()->SetRange(0,100);
   Graph_Graph01166->GetXaxis()->CenterTitle(true);
   Graph_Graph01166->GetXaxis()->SetLabelFont(42);
   Graph_Graph01166->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01166->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01166->GetXaxis()->SetTitleFont(42);
   Graph_Graph01166->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01166->GetYaxis()->CenterTitle(true);
   Graph_Graph01166->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01166->GetYaxis()->SetLabelFont(42);
   Graph_Graph01166->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01166->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01166->GetYaxis()->SetTitleFont(42);
   Graph_Graph01166->GetZaxis()->SetLabelFont(42);
   Graph_Graph01166->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01166);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
