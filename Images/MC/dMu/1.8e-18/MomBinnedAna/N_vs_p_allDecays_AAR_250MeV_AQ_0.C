void N_vs_p_allDecays_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(527.0038,-666547.4,2752.131,1.457476e+07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[12] = {
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
   Double_t Graph0_fy1015[12] = {
   1.195084e+07,
   1.148167e+07,
   1.086626e+07,
   1.010719e+07,
   9199325,
   8159345,
   7025990,
   5832406,
   4598139,
   3351427,
   2125423,
   952871};
   Double_t Graph0_fex1015[12] = {
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
   Double_t Graph0_fey1015[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];Positrons / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,3122.986);
   Graph_Graph01015->SetMinimum(857583.9);
   Graph_Graph01015->SetMaximum(1.305063e+07);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(25,81);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
