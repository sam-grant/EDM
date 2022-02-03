void S0S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7499,-1.016236e-05,3408.061,7.920591e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1209[11] = {
   451.6989,
   653.3673,
   880.3254,
   1123.144,
   1371.143,
   1620.226,
   1867.221,
   2115.543,
   2362.981,
   2614.165,
   2788.507};
   Double_t Graph0_fy1209[11] = {
   -3.271233e-07,
   1.132777e-07,
   1.319248e-07,
   1.308512e-07,
   2.166321e-07,
   2.310164e-07,
   4.340188e-07,
   6.202288e-07,
   4.815031e-07,
   2.145554e-06,
   1.837934e-05};
   Double_t Graph0_fex1209[11] = {
   0.1090345,
   0.09195276,
   0.06666504,
   0.06508974,
   0.06952338,
   0.07686814,
   0.08948912,
   0.1108082,
   0.1425331,
   0.1752943,
   0.2141166};
   Double_t Graph0_fey1209[11] = {
   1.462824e-06,
   9.669496e-08,
   3.31079e-08,
   3.019094e-08,
   3.695821e-08,
   4.980106e-08,
   7.83661e-08,
   1.458649e-07,
   3.027072e-07,
   5.760672e-07,
   1.273559e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1209,Graph0_fy1209,Graph0_fex1209,Graph0_fey1209);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01209 = new TH1F("Graph_Graph01209","S0S12S18_",100,217.8768,3022.434);
   Graph_Graph01209->SetMinimum(-1.225533e-06);
   Graph_Graph01209->SetMaximum(7.026908e-05);
   Graph_Graph01209->SetDirectory(0);
   Graph_Graph01209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01209->SetLineColor(ci);
   Graph_Graph01209->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01209->GetXaxis()->SetRange(0,101);
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
