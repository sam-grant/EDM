void S0S12S18_c_vs_p_A_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9276,-7.807981e-05,3392.348,5.478007e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1218[12] = {
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
   Double_t Graph0_fy1218[12] = {
   -1.164987e-05,
   -5.416814e-07,
   -6.177448e-08,
   -2.397122e-08,
   -1.817458e-08,
   -1.717592e-08,
   -1.959388e-08,
   -1.969808e-08,
   -2.195081e-08,
   -2.402471e-08,
   -2.2319e-08,
   -5.947123e-08};
   Double_t Graph0_fex1218[12] = {
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
   Double_t Graph0_fey1218[12] = {
   4.428663e-05,
   4.411713e-09,
   7.391649e-10,
   6.074756e-10,
   6.068094e-10,
   6.532147e-10,
   7.656526e-10,
   9.888616e-10,
   1.445395e-09,
   2.483042e-09,
   5.467213e-09,
   2.754469e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1218,Graph0_fy1218,Graph0_fex1218,Graph0_fey1218);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01218 = new TH1F("Graph_Graph01218","S0S12S18_",100,0,3108.681);
   Graph_Graph01218->SetMinimum(-6.479382e-05);
   Graph_Graph01218->SetMaximum(4.149408e-05);
   Graph_Graph01218->SetDirectory(0);
   Graph_Graph01218->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01218->SetLineColor(ci);
   Graph_Graph01218->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01218->GetXaxis()->SetRange(1,97);
   Graph_Graph01218->GetXaxis()->CenterTitle(true);
   Graph_Graph01218->GetXaxis()->SetLabelFont(42);
   Graph_Graph01218->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01218->GetXaxis()->SetTitleFont(42);
   Graph_Graph01218->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01218->GetYaxis()->CenterTitle(true);
   Graph_Graph01218->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01218->GetYaxis()->SetLabelFont(42);
   Graph_Graph01218->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01218->GetYaxis()->SetTitleFont(42);
   Graph_Graph01218->GetZaxis()->SetLabelFont(42);
   Graph_Graph01218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01218);
   
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
