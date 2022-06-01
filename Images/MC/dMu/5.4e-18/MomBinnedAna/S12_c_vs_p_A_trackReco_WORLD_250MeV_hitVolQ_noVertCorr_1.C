void S12_c_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4108,-1.492331e-05,3405.697,6.667006e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[12] = {
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
   Double_t Graph0_fy1101[12] = {
   4.065098e-05,
   -1.305301e-06,
   -1.882291e-07,
   -1.089965e-07,
   -8.239969e-08,
   -8.884215e-08,
   -1.070859e-07,
   -1.036643e-07,
   -1.821891e-07,
   -3.46447e-07,
   -3.637445e-07,
   -1.970627e-07};
   Double_t Graph0_fex1101[12] = {
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
   Double_t Graph0_fey1101[12] = {
   1.242019e-05,
   1.91167e-08,
   4.163698e-09,
   3.810555e-09,
   4.329852e-09,
   5.196637e-09,
   6.720426e-09,
   1.007453e-08,
   1.727464e-08,
   3.792783e-08,
   9.092051e-08,
   4.644295e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","S12_",100,0,3089.067);
   Graph_Graph01101->SetMinimum(-6.763976e-06);
   Graph_Graph01101->SetMaximum(5.851073e-05);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01101->GetXaxis()->SetRange(1,98);
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
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
