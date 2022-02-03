void grDiff_Run5_Nearline()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 16 10:42:06 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.15,-0.71609,28.35,0.5938658);
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
   -0.1533349,
   -0.01040498,
   -0.01048492,
   0.3383099,
   -0.1071145,
   -0.06757308,
   0.001682101,
   0.02057936,
   0.02203309,
   -0.2235466,
   0.3481701,
   -0.003080287,
   -0.1981498,
   0.02963071,
   0.02878514,
   -0.05858413,
   0.1326789,
   0.2174235,
   -0.4707214,
   0.1091709,
   0.04550281,
   0.02713759,
   0.02501392};
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
   0.02787132,
   0.02829323,
   0.02810883,
   0.02804346,
   0.02811566,
   0.02799455,
   0.02802361,
   0.02800358,
   0.02782016,
   0.02782251,
   0.02736973,
   0.02596911,
   0.02615055,
   0.02720712,
   0.02768818,
   0.0279017,
   0.02732755,
   0.02667581,
   0.0270426,
   0.02788295,
   0.02813442,
   0.02797252,
   0.027679};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-5} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,25.2);
   Graph_Graph1003->SetMinimum(-0.5850944);
   Graph_Graph1003->SetMaximum(0.4628702);
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
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-5} [mm]");
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
