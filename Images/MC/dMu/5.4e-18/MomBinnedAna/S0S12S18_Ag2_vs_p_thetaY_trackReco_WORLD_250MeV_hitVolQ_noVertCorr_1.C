void S0S12S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4284,-0.3657755,3405.856,0.4709566);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1217[12] = {
   184.5396,
   431.4896,
   629.4626,
   873.9653,
   1122.547,
   1372.117,
   1620.879,
   1869.288,
   2117.216,
   2364.558,
   2614.887,
   2825.064};
   Double_t Graph0_fy1217[12] = {
   0.05259055,
   -0.06755898,
   -0.04705241,
   -0.02123004,
   -0.02355154,
   -0.01206253,
   -0.0272988,
   -0.01056725,
   -0.02291825,
   -0.01837353,
   -0.002906895,
   -0.009228353};
   Double_t Graph0_fex1217[12] = {
   0.1775194,
   0.02718726,
   0.02363225,
   0.02322172,
   0.02433921,
   0.02587656,
   0.02805353,
   0.03152848,
   0.03685818,
   0.04604195,
   0.05834598,
   0.07008294};
   Double_t Graph0_fey1217[12] = {
   0.2789107,
   0.02662523,
   0.01322087,
   0.01058861,
   0.009335626,
   0.008450601,
   0.007865666,
   0.007617569,
   0.007693936,
   0.008251868,
   0.008628524,
   0.01136835};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1217,Graph0_fy1217,Graph0_fex1217,Graph0_fey1217);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01217 = new TH1F("Graph_Graph01217","S0S12S18_",100,0,3089.212);
   Graph_Graph01217->SetMinimum(-0.2821022);
   Graph_Graph01217->SetMaximum(0.3872834);
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
