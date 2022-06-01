void S0S12S18_c_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9276,-3.10871,3392.348,0.6151934);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1215[12] = {
   108.2896,
   434.5899,
   631.4838,
   875.6403,
   1124.365,
   1373.494,
   1622.54,
   1871.412,
   2120.028,
   2367.769,
   2613.336,
   2835.794};
   Double_t Graph0_fy1215[12] = {
   -0.4836092,
   -2.470341,
   -0.8274911,
   -0.338042,
   -0.2179943,
   -0.1679471,
   -0.1466158,
   -0.1111688,
   -0.08933026,
   -0.06006546,
   -0.03330539,
   -0.02686959};
   Double_t Graph0_fex1215[12] = {
   0.7834909,
   0.02492032,
   0.02074975,
   0.01979805,
   0.01986555,
   0.02035385,
   0.02133799,
   0.02291371,
   0.02533708,
   0.02919491,
   0.03608619,
   0.05228636};
   Double_t Graph0_fey1215[12] = {
   0.4781521,
   0.01771797,
   0.008066381,
   0.006259909,
   0.005279303,
   0.004607072,
   0.004150224,
   0.003836298,
   0.003642927,
   0.00357387,
   0.003663636,
   0.004691927};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1215,Graph0_fy1215,Graph0_fex1215,Graph0_fey1215);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01215 = new TH1F("Graph_Graph01215","S0S12S18_",100,0,3108.681);
   Graph_Graph01215->SetMinimum(-2.736319);
   Graph_Graph01215->SetMaximum(0.2428031);
   Graph_Graph01215->SetDirectory(0);
   Graph_Graph01215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01215->SetLineColor(ci);
   Graph_Graph01215->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01215->GetXaxis()->SetRange(1,97);
   Graph_Graph01215->GetXaxis()->CenterTitle(true);
   Graph_Graph01215->GetXaxis()->SetLabelFont(42);
   Graph_Graph01215->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01215->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01215->GetXaxis()->SetTitleFont(42);
   Graph_Graph01215->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01215->GetYaxis()->CenterTitle(true);
   Graph_Graph01215->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01215->GetYaxis()->SetLabelFont(42);
   Graph_Graph01215->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01215->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01215->GetYaxis()->SetTitleFont(42);
   Graph_Graph01215->GetZaxis()->SetLabelFont(42);
   Graph_Graph01215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01215);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
