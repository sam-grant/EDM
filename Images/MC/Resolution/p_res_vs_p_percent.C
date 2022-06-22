void p_res_vs_p_percent()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.2274473,3377.5,1.504923);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[26] = {
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
   Double_t _fy1004[26] = {
   0.9923377,
   1.277776,
   1.170038,
   1.094019,
   0.9749408,
   0.9660446,
   0.9458563,
   0.9215468,
   0.9290532,
   0.9090862,
   0.9094259,
   0.8912357,
   0.8609777,
   0.8364796,
   0.8260248,
   0.7875752,
   0.7205829,
   0.6835276,
   0.6309922,
   0.5880974,
   0.5288256,
   0.4846403,
   0.4457882,
   0.4594093,
   0.458882,
   0.5123559};
   Double_t _fex1004[26] = {
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
   Double_t _fey1004[26] = {
   0.04017858,
   0.01423446,
   0.009770695,
   0.007083142,
   0.004897284,
   0.004381797,
   0.004095729,
   0.003938522,
   0.004084076,
   0.00405745,
   0.004208411,
   0.00426453,
   0.004328325,
   0.004386393,
   0.004619641,
   0.004712894,
   0.00469358,
   0.004905167,
   0.005013562,
   0.005143338,
   0.005180086,
   0.005458851,
   0.005428375,
   0.0060313,
   0.008145121,
   0.02314588};
   TGraphErrors *gre = new TGraphErrors(26,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta p (truth #minus reco) RMS [%] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",100,100,3100);
   Graph_Graph1004->SetMinimum(0.3551948);
   Graph_Graph1004->SetMaximum(1.377175);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1004->GetXaxis()->SetRange(0,97);
   Graph_Graph1004->GetXaxis()->CenterTitle(true);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("#Delta p (truth #minus reco) RMS [%] / 100 MeV");
   Graph_Graph1004->GetYaxis()->CenterTitle(true);
   Graph_Graph1004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
