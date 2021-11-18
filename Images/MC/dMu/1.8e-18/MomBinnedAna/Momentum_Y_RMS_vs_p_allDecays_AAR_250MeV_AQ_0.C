void Momentum_Y_RMS_vs_p_allDecays_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(527.0038,7.023013,2752.131,29.98788);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[12] = {
   124.4185,
   373.9945,
   623.7008,
   873.2417,
   1122.797,
   1372.228,
   1621.535,
   1870.683,
   2119.321,
   2367.288,
   2613.167,
   2850.317};
   Double_t Graph0_fy1014[12] = {
   10.85271,
   17.89882,
   21.74272,
   24.11092,
   25.50758,
   26.15392,
   26.14036,
   25.50263,
   24.18267,
   22.09367,
   18.94017,
   14.20618};
   Double_t Graph0_fex1014[12] = {
   0.0208215,
   0.02129586,
   0.02188303,
   0.02268929,
   0.02377664,
   0.02523901,
   0.02719507,
   0.02982735,
   0.03354456,
   0.03919428,
   0.04883968,
   0.06956392};
   Double_t Graph0_fey1014[12] = {
   0.002219852,
   0.003735139,
   0.004664004,
   0.005362702,
   0.005946704,
   0.006474321,
   0.00697337,
   0.007467,
   0.007974402,
   0.008533711,
   0.009186417,
   0.01029071};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0,3122.986);
   Graph_Graph01014->SetMinimum(9.3195);
   Graph_Graph01014->SetMaximum(27.69139);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01014->GetXaxis()->SetRange(25,81);
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
