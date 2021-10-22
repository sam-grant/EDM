void S0S12S18_ABz_vs_p_pmin_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.03605404,2600,0.2255917);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1494[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1494[9] = {
   0.1468622,
   0.1515482,
   0.145152,
   0.1675414,
   0.1513093,
   0.1512716,
   0.1335041,
   0.1067799,
   0.1068166};
   Double_t Graph0_fex1494[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1494[9] = {
   0.02676218,
   0.02627243,
   0.02617487,
   0.02646065,
   0.0272331,
   0.02856227,
   0.03066308,
   0.03397575,
   0.03917298};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1494,Graph0_fy1494,Graph0_fex1494,Graph0_fey1494);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01494 = new TH1F("Graph_Graph01494","S0S12S18",100,440,2360);
   Graph_Graph01494->SetMinimum(0.0550078);
   Graph_Graph01494->SetMaximum(0.2066379);
   Graph_Graph01494->SetDirectory(0);
   Graph_Graph01494->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01494->SetLineColor(ci);
   Graph_Graph01494->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01494->GetXaxis()->CenterTitle(true);
   Graph_Graph01494->GetXaxis()->SetLabelFont(42);
   Graph_Graph01494->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01494->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01494->GetXaxis()->SetTitleFont(42);
   Graph_Graph01494->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01494->GetYaxis()->CenterTitle(true);
   Graph_Graph01494->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01494->GetYaxis()->SetLabelFont(42);
   Graph_Graph01494->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01494->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01494->GetYaxis()->SetTitleFont(42);
   Graph_Graph01494->GetZaxis()->SetLabelFont(42);
   Graph_Graph01494->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01494->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01494);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
