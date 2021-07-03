void grDiff_gm2pro_daq_offline_dqc_run3O_5207A()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 28 14:08:00 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.275,-0.7529864,29.475,1.046074);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[23] = {
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
   23,
   24};
   Double_t Graph0_fy1003[23] = {
   -0.0649593,
   -0.05728352,
   -0.2036367,
   -0.4403584,
   -0.003331106,
   -0.08251521,
   -0.04195072,
   0.2000414,
   0.1144027,
   0.05882133,
   0.05195289,
   0.0697041,
   -0.006396148,
   0.05937654,
   -0.02867928,
   0.0602656,
   0.04405153,
   0.1764101,
   0.05090701,
   0.01673469,
   0.7335827,
   -0.1103021,
   0.04176234};
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
   0.0125581,
   0.01264546,
   0.01267342,
   0.01278455,
   0.01269278,
   0.01278376,
   0.01270666,
   0.01264939,
   0.01258444,
   0.01249153,
   0.01235564,
   0.01206067,
   0.01245119,
   0.01246535,
   0.01262265,
   0.01257238,
   0.01238676,
   0.0122441,
   0.01251723,
   0.01267831,
   0.01264795,
   0.01263357,
   0.01242029};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-3O} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,26.2);
   Graph_Graph1003->SetMinimum(-0.5730803);
   Graph_Graph1003->SetMaximum(0.866168);
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
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-3O} [mm]");
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
