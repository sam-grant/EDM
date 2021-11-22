void c_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:18:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-409.8919,-0.1341152,3376.728,0.05489499);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[12] = {
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
   Double_t Graph0_fy1011[12] = {
   -0.0664632,
   -0.00545952,
   0.006163452,
   0.01464693,
   0.004118775,
   -0.01427707,
   0.000438052,
   0.004316651,
   -0.002994211,
   -0.002288397,
   0.004061569,
   0.002637927};
   Double_t Graph0_fex1011[12] = {
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
   Double_t Graph0_fey1011[12] = {
   0.03615029,
   0.01450258,
   0.01070022,
   0.008746364,
   0.007527232,
   0.006702127,
   0.006122477,
   0.005719696,
   0.00546416,
   0.00537427,
   0.005499549,
   0.006172771};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","",100,0,3122.986);
   Graph_Graph01011->SetMinimum(-0.1152142);
   Graph_Graph01011->SetMaximum(0.03599397);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01011->GetXaxis()->SetRange(0,96);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
