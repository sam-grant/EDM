void S12S18_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.458,-0.0008640818,3034.571,-0.0001093791);
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
   -0.003363988,
   -0.0009277323,
   -0.0005056534,
   -0.0008293829,
   -0.0008684911,
   -0.0009871155,
   -0.000874936,
   -0.0008884659,
   -0.0005648125,
   -0.0005617529,
   -0.0005651934,
   -0.000181046};
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
   -0.002796685,
   -0.0003591231,
   -0.0001676414,
   -0.0001217517,
   -0.0001017877,
   -8.953728e-05,
   -8.217123e-05,
   -7.950321e-05,
   -7.966182e-05,
   -8.213728e-05,
   -9.060699e-05,
   -0.000146687};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S12S18_",100,0,3088.622);
   Graph_Graph01093->SetMinimum(-0.0007886115);
   Graph_Graph01093->SetMaximum(-0.0001848494);
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
