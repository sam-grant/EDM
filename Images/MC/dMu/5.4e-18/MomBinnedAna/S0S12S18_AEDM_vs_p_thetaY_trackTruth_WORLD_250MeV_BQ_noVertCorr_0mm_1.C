void S0S12S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:13:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.9312,-0.2391635,3380.604,0.2886711);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1206[11] = {
   451.8229,
   653.3956,
   880.1993,
   1123.077,
   1371.188,
   1620.216,
   1867.292,
   2115.256,
   2363.138,
   2614.496,
   2791.826};
   Double_t Graph0_fy1206[11] = {
   -0.03338352,
   0.161202,
   0.133189,
   0.1311671,
   0.1635297,
   0.1425863,
   0.1464307,
   0.08853932,
   0.06860385,
   0.08398545,
   0.08383883};
   Double_t Graph0_fex1206[11] = {
   0.08842653,
   0.07486159,
   0.05431044,
   0.05307049,
   0.05677049,
   0.06274887,
   0.07298439,
   0.09042414,
   0.1174052,
   0.1441228,
   0.1959949};
   Double_t Graph0_fey1206[11] = {
   0.1178075,
   0.03949664,
   0.02273696,
   0.0186518,
   0.01715486,
   0.01632658,
   0.01632835,
   0.01715381,
   0.01830145,
   0.01813912,
   0.03924696};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1206,Graph0_fy1206,Graph0_fex1206,Graph0_fey1206);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01206 = new TH1F("Graph_Graph01206","S0S12S18_",100,217.7058,3026.051);
   Graph_Graph01206->SetMinimum(-0.18638);
   Graph_Graph01206->SetMaximum(0.2358876);
   Graph_Graph01206->SetDirectory(0);
   Graph_Graph01206->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01206->SetLineColor(ci);
   Graph_Graph01206->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01206->GetXaxis()->SetRange(0,100);
   Graph_Graph01206->GetXaxis()->CenterTitle(true);
   Graph_Graph01206->GetXaxis()->SetLabelFont(42);
   Graph_Graph01206->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01206->GetXaxis()->SetTitleFont(42);
   Graph_Graph01206->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01206->GetYaxis()->CenterTitle(true);
   Graph_Graph01206->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01206->GetYaxis()->SetLabelFont(42);
   Graph_Graph01206->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01206->GetYaxis()->SetTitleFont(42);
   Graph_Graph01206->GetZaxis()->SetLabelFont(42);
   Graph_Graph01206->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01206->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01206);
   
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
