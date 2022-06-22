void r_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.6626519,3377.5,7.926445);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[26] = {
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
   Double_t _fy1002[26] = {
   1.952332,
   2.444165,
   2.621178,
   2.639636,
   2.534996,
   2.606409,
   2.730568,
   2.818941,
   2.93652,
   3.051048,
   3.109425,
   3.203123,
   3.222151,
   3.303703,
   3.421649,
   3.421264,
   3.348728,
   3.383969,
   3.438134,
   3.489904,
   3.608772,
   3.754637,
   3.905798,
   4.449973,
   5.044133,
   6.426664};
   Double_t _fex1002[26] = {
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
   Double_t _fey1002[26] = {
   0.0790476,
   0.02723484,
   0.02189185,
   0.01708869,
   0.0127308,
   0.01182072,
   0.0118192,
   0.01204214,
   0.01290332,
   0.01360828,
   0.01438347,
   0.01531841,
   0.0161866,
   0.01731183,
   0.01911685,
   0.02045546,
   0.02179282,
   0.02426424,
   0.02729022,
   0.03049376,
   0.03531568,
   0.04221626,
   0.04751171,
   0.05840081,
   0.08956121,
   0.2891493};
   TGraphErrors *gre = new TGraphErrors(26,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta r (truth #minus reco) RMS [mm] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,100,3100);
   Graph_Graph1002->SetMinimum(1.389031);
   Graph_Graph1002->SetMaximum(7.200066);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1002->GetXaxis()->SetRange(0,97);
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("#Delta r (truth #minus reco) RMS [mm] / 100 MeV");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
