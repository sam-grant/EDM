void theta_y_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 22 13:26:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.1707739,3377.5,3.228814);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[26] = {
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450,
   2550,
   2650,
   2750,
   2850};
   Double_t _fy1005[26] = {
   2.690941,
   2.64949,
   2.525414,
   2.271988,
   2.023309,
   1.908114,
   1.796551,
   1.698623,
   1.619136,
   1.542052,
   1.472195,
   1.398918,
   1.323049,
   1.259036,
   1.191455,
   1.119413,
   1.054461,
   0.9883969,
   0.9139396,
   0.8450638,
   0.7929695,
   0.7268061,
   0.7126588,
   0.6963895,
   0.6833972,
   0.7948868};
   Double_t _fex1005[26] = {
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
   0,
   0,
   0,
   0};
   Double_t _fey1005[26] = {
   0.02819944,
   0.008247582,
   0.006203693,
   0.00413458,
   0.002950088,
   0.002562828,
   0.002321063,
   0.00217769,
   0.002107942,
   0.002057499,
   0.002012154,
   0.001985742,
   0.00195915,
   0.001936808,
   0.001930683,
   0.001928916,
   0.001950099,
   0.001980378,
   0.001978437,
   0.001995107,
   0.002060962,
   0.002131992,
   0.002285219,
   0.002376355,
   0.002949846,
   0.007704649};
   TGraphErrors *gre = new TGraphErrors(26,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta #theta_{y} (truth #minus reco) RMS [mrad] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,100,3100);
   Graph_Graph1005->SetMinimum(0.476578);
   Graph_Graph1005->SetMaximum(2.92301);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1005->GetXaxis()->SetRange(0,97);
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#Delta #theta_{y} (truth #minus reco) RMS [mrad] / 100 MeV");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
