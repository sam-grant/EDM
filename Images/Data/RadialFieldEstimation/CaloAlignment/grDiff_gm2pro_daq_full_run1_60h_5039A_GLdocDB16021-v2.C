void grDiff_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 28 14:09:44 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.275,-1.05801,29.475,0.8426518);
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
   0.2106787,
   -0.1752728,
   -0.3422616,
   -0.7091591,
   -0.2204404,
   -0.3350489,
   -0.07276063,
   0.03515764,
   0.06989256,
   0.02627993,
   0.2477698,
   0.2240333,
   -0.05642672,
   0.5182741,
   0.05274999,
   0.2332992,
   0.09572241,
   0.3303184,
   -0.06904072,
   -0.02563931,
   -0.7335043,
   0.06765859,
   -0.04629546};
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
   0.008186841,
   0.007663691,
   0.007671555,
   0.007797053,
   0.007704143,
   0.007691312,
   0.007672321,
   0.007880459,
   0.00761586,
   0.007570178,
   0.007513896,
   0.007317174,
   0.007556058,
   0.00760065,
   0.00767119,
   0.007619194,
   0.007505816,
   0.007368016,
   0.007593809,
   0.007690891,
   0.007728893,
   0.007606322,
   0.007659229};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-1a} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,26.2);
   Graph_Graph1003->SetMinimum(-0.867944);
   Graph_Graph1003->SetMaximum(0.6525855);
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
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-1a} [mm]");
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
