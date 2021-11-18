void c_vs_p_allDecays_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(527.0038,-0.1341152,2752.131,0.05489499);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[12] = {
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
   Double_t Graph0_fy1009[12] = {
   -0.06646321,
   -0.005459532,
   0.00616344,
   0.01464692,
   0.004118765,
   -0.01427708,
   0.0004380433,
   0.004316636,
   -0.002994224,
   -0.002288405,
   0.00406156,
   0.002637898};
   Double_t Graph0_fex1009[12] = {
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
   Double_t Graph0_fey1009[12] = {
   0.03615029,
   0.01450258,
   0.01070022,
   0.008746364,
   0.007527231,
   0.006702127,
   0.006122477,
   0.005719696,
   0.00546416,
   0.00537427,
   0.005499549,
   0.006172771};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,0,3122.986);
   Graph_Graph01009->SetMinimum(-0.1152142);
   Graph_Graph01009->SetMaximum(0.03599397);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01009->GetXaxis()->SetRange(25,81);
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
