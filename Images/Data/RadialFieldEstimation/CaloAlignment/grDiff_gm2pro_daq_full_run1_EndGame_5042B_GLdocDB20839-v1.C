void grDiff_gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 28 14:06:13 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.275,-1.422888,29.475,0.8766538);
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
   0.05457288,
   -0.1973986,
   -0.3603784,
   -1.032014,
   -0.1853121,
   -0.443085,
   -0.1613036,
   -0.01818639,
   -0.0312883,
   -0.04355823,
   0.2228939,
   0.3115103,
   -0.1085257,
   0.4859819,
   -0.009088512,
   0.4297117,
   0.1333617,
   0.4664997,
   -0.111627,
   -0.09553478,
   -0.783968,
   0.03002065,
   -0.06311234};
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
   0.007455338,
   0.007500808,
   0.00748563,
   0.007617732,
   0.007512921,
   0.007499686,
   0.007487025,
   0.007657539,
   0.007437588,
   0.007379999,
   0.007302304,
   0.007117446,
   0.007376116,
   0.007414871,
   0.0074856,
   0.007462401,
   0.007317902,
   0.007198152,
   0.00741614,
   0.007512057,
   0.0075435,
   0.007428496,
   0.007466051};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-1d} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,26.2);
   Graph_Graph1003->SetMinimum(-1.192934);
   Graph_Graph1003->SetMaximum(0.6466996);
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
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-1d} [mm]");
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
