void S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4819,-1.256654,3406.337,0.281429);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[12] = {
   187.4361,
   430.9137,
   629.988,
   873.9891,
   1123.018,
   1372.429,
   1621.758,
   1870.278,
   2119.025,
   2366.724,
   2612.496,
   2825.666};
   Double_t Graph0_fy1139[12] = {
   -0.5380592,
   -0.08278436,
   0.004634647,
   -0.05439784,
   -0.03769511,
   -0.02228261,
   -0.01530702,
   0.004865386,
   -0.02454092,
   -0.000465513,
   0.01216122,
   -0.05116213};
   Double_t Graph0_fex1139[12] = {
   0.4589345,
   0.04634719,
   0.03743593,
   0.03708336,
   0.03861978,
   0.04072494,
   0.04355441,
   0.04786604,
   0.05427081,
   0.06398772,
   0.08100211,
   0.1028567};
   Double_t Graph0_fey1139[12] = {
   0.462248,
   0.04264877,
   0.02044714,
   0.01649645,
   0.01448961,
   0.01307073,
   0.01210797,
   0.01153907,
   0.01137274,
   0.01159335,
   0.01248816,
   0.01837678};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","S18_",100,0,3089.648);
   Graph_Graph01139->SetMinimum(-1.102846);
   Graph_Graph01139->SetMaximum(0.1276207);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01139->GetXaxis()->SetRange(1,98);
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
