void S0S12S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3995,-0.275512,3405.595,0.5546784);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1217[12] = {
   194.6922,
   428.6847,
   630.9386,
   875.1931,
   1123.964,
   1373.219,
   1622.316,
   1870.762,
   2119.242,
   2366.792,
   2612.599,
   2825.796};
   Double_t Graph0_fy1217[12] = {
   0.1728103,
   -0.1136031,
   -0.04480018,
   -0.01902915,
   -0.0217297,
   -0.01051602,
   -0.02306499,
   -0.02067831,
   -0.02904072,
   -0.02434432,
   -0.01899124,
   -0.02386604};
   Double_t Graph0_fex1217[12] = {
   0.1483758,
   0.02589663,
   0.0201489,
   0.01936183,
   0.01967197,
   0.02031215,
   0.02139941,
   0.02322305,
   0.02613862,
   0.03076314,
   0.03885924,
   0.04941833};
   Double_t Graph0_fey1217[12] = {
   0.243503,
   0.02354387,
   0.01119687,
   0.00877549,
   0.007534658,
   0.006673143,
   0.00609739,
   0.005774798,
   0.005692025,
   0.005876302,
   0.006501635,
   0.01021204};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1217,Graph0_fy1217,Graph0_fex1217,Graph0_fey1217);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01217 = new TH1F("Graph_Graph01217","S0S12S18_",100,0,3088.975);
   Graph_Graph01217->SetMinimum(-0.192493);
   Graph_Graph01217->SetMaximum(0.4716594);
   Graph_Graph01217->SetDirectory(0);
   Graph_Graph01217->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01217->SetLineColor(ci);
   Graph_Graph01217->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01217->GetXaxis()->SetRange(1,98);
   Graph_Graph01217->GetXaxis()->CenterTitle(true);
   Graph_Graph01217->GetXaxis()->SetLabelFont(42);
   Graph_Graph01217->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01217->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01217->GetXaxis()->SetTitleFont(42);
   Graph_Graph01217->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01217->GetYaxis()->CenterTitle(true);
   Graph_Graph01217->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01217->GetYaxis()->SetLabelFont(42);
   Graph_Graph01217->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01217->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01217->GetYaxis()->SetTitleFont(42);
   Graph_Graph01217->GetZaxis()->SetLabelFont(42);
   Graph_Graph01217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01217);
   
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
