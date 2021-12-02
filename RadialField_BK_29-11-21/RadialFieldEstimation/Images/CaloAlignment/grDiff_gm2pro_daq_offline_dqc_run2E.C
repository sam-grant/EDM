void grDiff_gm2pro_daq_offline_dqc_run2E()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul  2 05:21:13 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.15,-0.6030622,28.35,0.6068141);
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
   -0.127819,
   -0.1633655,
   0.02272329,
   0.05628779,
   0.15294,
   -0.317552,
   0.1754774,
   0.1073831,
   0.004342064,
   -0.17608,
   0.3921384,
   -0.1549084,
   -0.1000726,
   -0.006519988,
   0.006642033,
   0.06666622,
   -0.08572397,
   0.197662,
   -0.3886325,
   0.2084383,
   -0.03976006,
   0.0471239,
   -0.09232257};
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
   0.01335886,
   0.01320886,
   0.01332547,
   0.01329992,
   0.0133408,
   0.01345242,
   0.01342004,
   0.01379934,
   0.01377656,
   0.01325525,
   0.01302964,
   0.01247982,
   0.012555,
   0.01302236,
   0.01315367,
   0.01321999,
   0.0130007,
   0.01258525,
   0.01278366,
   0.01335615,
   0.01340756,
   0.01326902,
   0.01308627};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-2e} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,25.2);
   Graph_Graph1003->SetMinimum(-0.4820746);
   Graph_Graph1003->SetMaximum(0.4858265);
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
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-2e} [mm]");
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
