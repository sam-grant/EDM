void grDiff_gm2pro_daq_offline_dqc_run2C()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 28 14:06:44 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.275,-0.5712429,29.475,0.2377919);
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
   -0.1638615,
   -0.3145465,
   -0.3350796,
   -0.4284633,
   -0.1020043,
   -0.4290615,
   -0.2262321,
   -0.1218845,
   -0.08738034,
   -0.2695871,
   0.09575314,
   0.07003883,
   -0.09737177,
   -0.1150995,
   -0.1264429,
   -0.0678287,
   -0.1452749,
   0.05482157,
   -0.3323628,
   -0.1318971,
   -0.1883346,
   -0.1358736,
   -0.2125923};
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
   0.007253317,
   0.007326252,
   0.00728945,
   0.007330354,
   0.007339396,
   0.007342263,
   0.007330078,
   0.007501155,
   0.007305914,
   0.007257995,
   0.007199652,
   0.006990045,
   0.007224805,
   0.007230869,
   0.007312898,
   0.007272073,
   0.007173113,
   0.007059316,
   0.007254623,
   0.007345836,
   0.007320544,
   0.007274708,
   0.00721952};
   TGraphErrors *gre = new TGraphErrors(23,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo number;(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-2c} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,26.2);
   Graph_Graph1003->SetMinimum(-0.4903394);
   Graph_Graph1003->SetMaximum(0.1568884);
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
   Graph_Graph1003->GetYaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{1}#GT)_{Run-2c} [mm]");
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
