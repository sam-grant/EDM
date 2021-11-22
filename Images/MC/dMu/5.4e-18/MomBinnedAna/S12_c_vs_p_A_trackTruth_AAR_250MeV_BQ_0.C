void S12_c_vs_p_A_trackTruth_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:18:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(6.88508,-0.0005107374,3236.917,0.0003915635);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[11] = {
   451.7407,
   653.3858,
   880.2538,
   1123.051,
   1371.173,
   1620.27,
   1866.763,
   2114.834,
   2362.625,
   2614.174,
   2791.873};
   Double_t Graph0_fy1052[11] = {
   0.0002345297,
   -2.252907e-06,
   -3.083995e-06,
   -2.251964e-06,
   -2.675498e-06,
   -3.230017e-06,
   -2.517528e-06,
   -5.671473e-06,
   -1.245067e-05,
   -2.033895e-05,
   -0.0002496279};
   Double_t Graph0_fex1052[11] = {
   0.1410697,
   0.1188852,
   0.08610031,
   0.08408792,
   0.08950711,
   0.09889493,
   0.1153312,
   0.1440061,
   0.1882854,
   0.2316927,
   0.3300189};
   Double_t Graph0_fey1052[11] = {
   6.650343e-06,
   4.596872e-07,
   1.528492e-07,
   1.387592e-07,
   1.676076e-07,
   2.314111e-07,
   3.834316e-07,
   8.02817e-07,
   2.031547e-06,
   4.576531e-06,
   0.000110726};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S12_",100,217.5394,3026.263);
   Graph_Graph01052->SetMinimum(-0.0004205073);
   Graph_Graph01052->SetMaximum(0.0003013334);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01052->GetXaxis()->SetRange(5,96);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
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
