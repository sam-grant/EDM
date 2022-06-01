void S12_AEDM_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4108,-1.432823e-05,3405.697,3.79019e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1102[12] = {
   184.8965,
   431.0316,
   629.4488,
   873.9547,
   1122.609,
   1372.168,
   1620.962,
   1869.294,
   2117.218,
   2364.211,
   2614.992,
   2824.915};
   Double_t Graph0_fy1102[12] = {
   1.178684e-05,
   8.917193e-08,
   3.036187e-08,
   3.588325e-08,
   4.270139e-08,
   7.598248e-08,
   1.074543e-07,
   1.373228e-07,
   1.55978e-07,
   2.131833e-07,
   4.128998e-07,
   1.397519e-06};
   Double_t Graph0_fex1102[12] = {
   0.2750972,
   0.04276677,
   0.03714718,
   0.03650189,
   0.03823971,
   0.04061549,
   0.04395212,
   0.0493449,
   0.05777407,
   0.07235673,
   0.09250066,
   0.1113114};
   Double_t Graph0_fey1102[12] = {
   1.741004e-05,
   2.624134e-08,
   5.742616e-09,
   5.315603e-09,
   6.091476e-09,
   7.319296e-09,
   9.25551e-09,
   1.348551e-08,
   2.063527e-08,
   3.947115e-08,
   7.915488e-08,
   3.431114e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1102,Graph0_fy1102,Graph0_fex1102,Graph0_fey1102);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01102 = new TH1F("Graph_Graph01102","S12_",100,0,3089.067);
   Graph_Graph01102->SetMinimum(-9.105214e-06);
   Graph_Graph01102->SetMaximum(3.267889e-05);
   Graph_Graph01102->SetDirectory(0);
   Graph_Graph01102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01102->SetLineColor(ci);
   Graph_Graph01102->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01102->GetXaxis()->SetRange(1,98);
   Graph_Graph01102->GetXaxis()->CenterTitle(true);
   Graph_Graph01102->GetXaxis()->SetLabelFont(42);
   Graph_Graph01102->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01102->GetXaxis()->SetTitleFont(42);
   Graph_Graph01102->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01102->GetYaxis()->CenterTitle(true);
   Graph_Graph01102->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01102->GetYaxis()->SetLabelFont(42);
   Graph_Graph01102->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01102->GetYaxis()->SetTitleFont(42);
   Graph_Graph01102->GetZaxis()->SetLabelFont(42);
   Graph_Graph01102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01102);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
