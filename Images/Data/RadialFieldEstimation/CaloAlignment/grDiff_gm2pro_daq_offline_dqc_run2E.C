void grDiff_gm2pro_daq_offline_dqc_run2E()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 28 14:07:05 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.275,-0.5221835,29.475,0.2723993);
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
   -0.1279713,
   -0.2906519,
   -0.2680063,
   -0.2117729,
   -0.05881682,
   -0.3762271,
   -0.2010515,
   -0.09366839,
   -0.08932632,
   -0.2654063,
   0.1267321,
   -0.0281763,
   -0.1282489,
   -0.1347688,
   -0.1281268,
   -0.06124952,
   -0.1469735,
   0.05068855,
   -0.337944,
   -0.1295056,
   -0.1692657,
   -0.1221418,
   -0.2144644};
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
   0.01335876,
   0.01344017,
   0.01347407,
   0.01341483,
   0.01351442,
   0.01352585,
   0.01348219,
   0.01390235,
   0.01345888,
   0.01338593,
   0.01323675,
   0.01285136,
   0.01330764,
   0.01330833,
   0.01343616,
   0.0133741,
   0.0132168,
   0.01297061,
   0.01340587,
   0.0135352,
   0.01345709,
   0.01339797,
   0.01327692};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-2e} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,26.2);
   Graph_Graph1003->SetMinimum(-0.4427252);
   Graph_Graph1003->SetMaximum(0.192941);
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
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-2e} [mm]");
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
