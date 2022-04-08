void S0S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.1816,-6.002516e-06,3376.429,2.143935e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1209[11] = {
   451.7157,
   653.3507,
   880.1781,
   1123.184,
   1371.195,
   1620.115,
   1867.188,
   2115.267,
   2363.117,
   2614.283,
   2788.487};
   Double_t Graph0_fy1209[11] = {
   -6.696719e-07,
   1.465656e-07,
   6.841459e-08,
   1.056305e-07,
   1.359542e-07,
   1.809439e-07,
   3.021124e-07,
   3.946013e-07,
   3.66399e-07,
   9.51286e-07,
   9.387076e-06};
   Double_t Graph0_fex1209[11] = {
   0.08814924,
   0.07472162,
   0.05425532,
   0.05305649,
   0.05669065,
   0.06278754,
   0.07311978,
   0.09089229,
   0.1177353,
   0.1440608,
   0.177481};
   Double_t Graph0_fey1209[11] = {
   7.591992e-07,
   5.196408e-08,
   1.783534e-08,
   1.631323e-08,
   2.002375e-08,
   2.713121e-08,
   4.268104e-08,
   8.047756e-08,
   1.699898e-07,
   3.213869e-07,
   7.478633e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1209,Graph0_fy1209,Graph0_fex1209,Graph0_fey1209);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01209 = new TH1F("Graph_Graph01209","S0S12S18_",100,217.9239,3022.368);
   Graph_Graph01209->SetMinimum(-3.258329e-06);
   Graph_Graph01209->SetMaximum(1.869517e-05);
   Graph_Graph01209->SetDirectory(0);
   Graph_Graph01209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01209->SetLineColor(ci);
   Graph_Graph01209->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01209->GetXaxis()->SetRange(0,100);
   Graph_Graph01209->GetXaxis()->CenterTitle(true);
   Graph_Graph01209->GetXaxis()->SetLabelFont(42);
   Graph_Graph01209->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01209->GetXaxis()->SetTitleFont(42);
   Graph_Graph01209->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01209->GetYaxis()->CenterTitle(true);
   Graph_Graph01209->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01209->GetYaxis()->SetLabelFont(42);
   Graph_Graph01209->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01209->GetYaxis()->SetTitleFont(42);
   Graph_Graph01209->GetZaxis()->SetLabelFont(42);
   Graph_Graph01209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01209);
   
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
