void S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4819,-1.352399,3406.337,40.31121);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1143[12] = {
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
   Double_t Graph0_fy1143[12] = {
   33.13284,
   32.75874,
   27.34697,
   22.62774,
   19.12322,
   16.34872,
   14.08624,
   12.13583,
   10.38885,
   8.712473,
   7.041358,
   5.599296};
   Double_t Graph0_fex1143[12] = {
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
   Double_t Graph0_fey1143[12] = {
   0.234437,
   0.02132832,
   0.01020273,
   0.008237877,
   0.007239141,
   0.006527277,
   0.006023355,
   0.005704307,
   0.005540055,
   0.005501011,
   0.005674685,
   0.007759963};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1143,Graph0_fy1143,Graph0_fex1143,Graph0_fey1143);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01143 = new TH1F("Graph_Graph01143","S18_",100,0,3089.648);
   Graph_Graph01143->SetMinimum(2.813962);
   Graph_Graph01143->SetMaximum(36.14485);
   Graph_Graph01143->SetDirectory(0);
   Graph_Graph01143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01143->SetLineColor(ci);
   Graph_Graph01143->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01143->GetXaxis()->SetRange(1,98);
   Graph_Graph01143->GetXaxis()->CenterTitle(true);
   Graph_Graph01143->GetXaxis()->SetLabelFont(42);
   Graph_Graph01143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01143->GetXaxis()->SetTitleFont(42);
   Graph_Graph01143->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01143->GetYaxis()->CenterTitle(true);
   Graph_Graph01143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01143->GetYaxis()->SetLabelFont(42);
   Graph_Graph01143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01143->GetYaxis()->SetTitleFont(42);
   Graph_Graph01143->GetZaxis()->SetLabelFont(42);
   Graph_Graph01143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01143);
   
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
