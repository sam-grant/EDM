void S0_c_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6905,-2.558874,3408.214,3.309765);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[12] = {
   186.2273,
   432.2067,
   629.2651,
   873.9168,
   1122.437,
   1372.126,
   1621.121,
   1870.005,
   2118.739,
   2365.057,
   2614.792,
   2827.064};
   Double_t Graph0_fy1059[12] = {
   1.872635,
   -1.537524,
   -0.358138,
   -0.05905237,
   0.01491186,
   0.02133276,
   0.002154096,
   0.006333759,
   0.002798821,
   -0.008106392,
   0.02288488,
   0.1037929};
   Double_t Graph0_fex1059[12] = {
   0.408042,
   0.06172949,
   0.053827,
   0.05299562,
   0.0555768,
   0.05908211,
   0.06403519,
   0.0713159,
   0.08123431,
   0.09781749,
   0.1254996,
   0.1478752};
   Double_t Graph0_fey1059[12] = {
   0.4590233,
   0.04324313,
   0.02135753,
   0.01713409,
   0.01511264,
   0.01365974,
   0.0126898,
   0.01214816,
   0.01192301,
   0.01233932,
   0.01302606,
   0.01661202};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S0_",100,0,3091.351);
   Graph_Graph01059->SetMinimum(-1.97201);
   Graph_Graph01059->SetMaximum(2.722901);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->SetRange(1,98);
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
