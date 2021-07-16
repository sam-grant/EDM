void grDiff_gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul  2 05:19:13 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.15,-1.076192,28.35,1.204108);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[23] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23};
   Double_t Graph0_fy1003[23] = {
   0.2368104,
   -0.4118241,
   -0.15396,
   -0.449957,
   0.5575827,
   -0.1552868,
   0.2588922,
   0.1218907,
   -0.02113585,
   -0.03219365,
   0.2198484,
   0.02295477,
   -0.3561225,
   0.5769744,
   -0.4749215,
   0.1977569,
   -0.1190116,
   0.2957957,
   -0.4876996,
   0.07316944,
   -0.6891351,
   0.8171203,
   -0.07727062};
   Double_t Graph0_fex1003[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[23] = {
   0.007183201,
   0.007316376,
   0.006913072,
   0.007020526,
   0.007047468,
   0.006963738,
   0.006939119,
   0.00709567,
   0.007046123,
   0.006793153,
   0.006697949,
   0.006453771,
   0.006498792,
   0.006758944,
   0.006857004,
   0.00688029,
   0.006745588,
   0.006513664,
   0.006599466,
   0.006892244,
   0.007007059,
   0.006937892,
   0.006854675};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-1b} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,25.2);
   Graph_Graph1003->SetMinimum(-0.8481622);
   Graph_Graph1003->SetMaximum(0.9760782);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Calo number");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-1b} [mm]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
