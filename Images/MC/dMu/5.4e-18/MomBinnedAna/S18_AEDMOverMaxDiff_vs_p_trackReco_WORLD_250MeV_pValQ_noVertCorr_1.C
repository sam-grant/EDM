void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4819,-0.0007513979,3406.337,0.007979076);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1150[12] = {
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
   Double_t Graph0_fy1150[12] = {
   0.003906992,
   0.0004280073,
   0.0007357568,
   0.0008227824,
   0.0008839832,
   0.0008921777,
   0.0008743566,
   0.000813322,
   0.0007115586,
   0.0007297535,
   0.0006692028,
   0.000223195};
   Double_t Graph0_fex1150[12] = {
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
   Double_t Graph0_fey1150[12] = {
   0.002565322,
   0.0002321649,
   0.0001109101,
   8.958799e-05,
   7.907828e-05,
   7.105128e-05,
   6.65814e-05,
   6.284482e-05,
   6.213851e-05,
   6.180988e-05,
   6.634134e-05,
   8.802876e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1150,Graph0_fy1150,Graph0_fex1150,Graph0_fey1150);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01150 = new TH1F("Graph_Graph01150","S18_",100,0,3089.648);
   Graph_Graph01150->SetMinimum(0.0001216496);
   Graph_Graph01150->SetMaximum(0.007106029);
   Graph_Graph01150->SetDirectory(0);
   Graph_Graph01150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01150->SetLineColor(ci);
   Graph_Graph01150->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01150->GetXaxis()->SetRange(1,98);
   Graph_Graph01150->GetXaxis()->CenterTitle(true);
   Graph_Graph01150->GetXaxis()->SetLabelFont(42);
   Graph_Graph01150->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01150->GetXaxis()->SetTitleFont(42);
   Graph_Graph01150->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01150->GetYaxis()->CenterTitle(true);
   Graph_Graph01150->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01150->GetYaxis()->SetLabelFont(42);
   Graph_Graph01150->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01150->GetYaxis()->SetTitleFont(42);
   Graph_Graph01150->GetZaxis()->SetLabelFont(42);
   Graph_Graph01150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01150);
   
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
