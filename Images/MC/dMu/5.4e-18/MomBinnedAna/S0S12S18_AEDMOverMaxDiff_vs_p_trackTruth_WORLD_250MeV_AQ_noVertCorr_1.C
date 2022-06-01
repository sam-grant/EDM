void S0S12S18_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9276,-0.003490182,3392.348,0.003900802);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1228[12] = {
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
   Double_t Graph0_fy1228[12] = {
   -0.002258351,
   0.0007081678,
   0.0008380482,
   0.001304522,
   0.001629635,
   0.002087556,
   0.00229056,
   0.002552241,
   0.00243617,
   0.002558694,
   0.002457026,
   0.00178594};
   Double_t Graph0_fex1228[12] = {
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
   Double_t Graph0_fey1228[12] = {
   -0.0036503,
   0.0001360257,
   7.274311e-05,
   7.27187e-05,
   7.412318e-05,
   7.656508e-05,
   8.10175e-05,
   8.839854e-05,
   9.655392e-05,
   0.0001102777,
   0.0001340583,
   0.0002026612};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1228,Graph0_fy1228,Graph0_fex1228,Graph0_fey1228);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01228 = new TH1F("Graph_Graph01228","S0S12S18_",100,0,3108.681);
   Graph_Graph01228->SetMinimum(-0.002751083);
   Graph_Graph01228->SetMaximum(0.003161704);
   Graph_Graph01228->SetDirectory(0);
   Graph_Graph01228->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01228->SetLineColor(ci);
   Graph_Graph01228->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01228->GetXaxis()->SetRange(1,97);
   Graph_Graph01228->GetXaxis()->CenterTitle(true);
   Graph_Graph01228->GetXaxis()->SetLabelFont(42);
   Graph_Graph01228->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01228->GetXaxis()->SetTitleFont(42);
   Graph_Graph01228->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01228->GetYaxis()->CenterTitle(true);
   Graph_Graph01228->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01228->GetYaxis()->SetLabelFont(42);
   Graph_Graph01228->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01228->GetYaxis()->SetTitleFont(42);
   Graph_Graph01228->GetZaxis()->SetLabelFont(42);
   Graph_Graph01228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01228);
   
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
