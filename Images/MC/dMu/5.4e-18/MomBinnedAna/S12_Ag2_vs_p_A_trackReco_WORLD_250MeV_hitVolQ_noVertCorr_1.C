void S12_Ag2_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4108,-1.394867e-05,3405.697,6.476979e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[12] = {
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
   Double_t Graph0_fy1103[12] = {
   3.404209e-05,
   9.511518e-08,
   1.330765e-08,
   9.163886e-09,
   2.207385e-09,
   -1.020451e-08,
   -3.692234e-08,
   -4.353515e-08,
   -5.750566e-08,
   -1.564905e-07,
   -1.456289e-07,
   -2.374417e-07};
   Double_t Graph0_fex1103[12] = {
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
   Double_t Graph0_fey1103[12] = {
   1.760795e-05,
   2.706191e-08,
   5.87981e-09,
   5.389402e-09,
   6.141987e-09,
   7.361617e-09,
   9.490009e-09,
   1.391018e-08,
   2.374605e-08,
   5.082537e-08,
   1.18428e-07,
   5.914857e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","S12_",100,0,3089.067);
   Graph_Graph01103->SetMinimum(-6.076825e-06);
   Graph_Graph01103->SetMaximum(5.689795e-05);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01103->GetXaxis()->SetRange(1,98);
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
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
