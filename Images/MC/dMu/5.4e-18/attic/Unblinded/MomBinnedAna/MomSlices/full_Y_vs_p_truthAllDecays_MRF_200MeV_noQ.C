void full_Y_vs_p_truthAllDecays_MRF_200MeV_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 21 17:01:33 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-0.05092458,3605.25,0.03193621);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1043[15] = {
   -0.006960992,
   0.002183606,
   0.01325933,
   -0.001719474,
   0.003408289,
   0.0004274881,
   -0.008015677,
   -0.002148979,
   -0.0008522797,
   0.007218508,
   -0.006481805,
   0.0005098037,
   -0.02725729,
   -0.01379734,
   -0.008252534};
   Double_t Graph0_fex1043[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1043[15] = {
   0.00470384,
   0.00477458,
   0.004866752,
   0.004987869,
   0.005144322,
   0.005339497,
   0.005591939,
   0.005903579,
   0.006307104,
   0.006814957,
   0.007489663,
   0.008437176,
   0.009857155,
   0.01225633,
   0.01775448};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p_{LAB}  [MeV] in range: p #minus 100 < p < p #plus 100 MeV;#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","",100,0,3300);
   Graph_Graph01043->SetMinimum(-0.0426385);
   Graph_Graph01043->SetMaximum(0.02365013);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("e^{+} p_{LAB}  [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01043->GetXaxis()->SetRange(0,97);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
