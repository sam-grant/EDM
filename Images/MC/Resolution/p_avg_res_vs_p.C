void p_avg_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,-0.07503118,3377.5,1.142772);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1008[26] = {
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
   Double_t _fy1008[26] = {
   0.1988738,
   0.09058754,
   0.07599817,
   0.06511099,
   0.05194354,
   0.05267277,
   0.05502624,
   0.05848406,
   0.06642119,
   0.07172627,
   0.08034649,
   0.08744886,
   0.09487823,
   0.1023544,
   0.1143303,
   0.1233032,
   0.1294356,
   0.1422075,
   0.1524403,
   0.16366,
   0.1721551,
   0.1891395,
   0.1957605,
   0.226033,
   0.3167709,
   0.9328967};
   Double_t _fex1008[26] = {
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
   Double_t _fey1008[26] = {
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
   TGraphErrors *gre = new TGraphErrors(26,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#delta #LT#Deltap#GT [MeV] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,100,3100);
   Graph_Graph1008->SetMinimum(0.04674918);
   Graph_Graph1008->SetMaximum(1.020992);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1008->GetXaxis()->SetRange(0,97);
   Graph_Graph1008->GetXaxis()->CenterTitle(true);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("#delta #LT#Deltap#GT [MeV] / 100 MeV");
   Graph_Graph1008->GetYaxis()->CenterTitle(true);
   Graph_Graph1008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
