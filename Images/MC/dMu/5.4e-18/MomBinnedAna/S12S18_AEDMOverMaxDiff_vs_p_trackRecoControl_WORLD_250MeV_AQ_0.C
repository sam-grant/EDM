void S12S18_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.458,-0.0007370256,3034.571,8.221795e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[12] = {
   191.2492,
   423.0726,
   631.3751,
   875.8727,
   1123.701,
   1372.838,
   1621.917,
   1870.444,
   2118.783,
   2366.347,
   2612.986,
   2825.089};
   Double_t Graph0_fy1093[12] = {
   -0.003209872,
   -0.0007736182,
   -0.0003515393,
   -0.0006629912,
   -0.000701645,
   -0.0008202272,
   -0.0007084211,
   -0.0007227369,
   -0.0004002825,
   -0.0003988242,
   -0.0004039536,
   -2.630351e-05};
   Double_t Graph0_fex1093[12] = {
   0.2451076,
   0.05852805,
   0.04492808,
   0.04216635,
   0.04284521,
   0.0445378,
   0.04722669,
   0.05151899,
   0.05884351,
   0.06982903,
   0.08868849,
   0.1128886};
   Double_t Graph0_fey1093[12] = {
   -0.002796683,
   -0.0003591201,
   -0.0001676382,
   -0.0001217435,
   -0.0001017774,
   -8.952376e-05,
   -8.215834e-05,
   -7.948972e-05,
   -7.965381e-05,
   -8.212963e-05,
   -9.060004e-05,
   -0.0001466861};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S12S18_",100,0,3088.622);
   Graph_Graph01093->SetMinimum(-0.0006551013);
   Graph_Graph01093->SetMaximum(2.935872e-07);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01093->GetXaxis()->SetRange(25,90);
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
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
