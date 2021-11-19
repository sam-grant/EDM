void S12_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9382,9.402293,2731.455,22.80047);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
   367.1537,
   457.0776,
   570.3106,
   695.1323,
   816.0343,
   938.5372,
   1062.789,
   1188.378,
   1312.629,
   1436,
   1561.908,
   1685.331,
   1810.624,
   1935.143,
   2060.277,
   2185.005,
   2309.081,
   2432.9,
   2559.578,
   2678.745,
   2780.475,
   2889.817};
   Double_t Graph0_fy1018[22] = {
   13.32564,
   14.28828,
   15.21651,
   16.19905,
   16.62834,
   17.57432,
   18.34009,
   19.11259,
   19.76196,
   20.14529,
   20.55179,
   20.24298,
   20.09829,
   19.70093,
   19.25491,
   18.68389,
   17.92368,
   16.92943,
   15.79176,
   14.69655,
   13.79125,
   13.32798};
   Double_t Graph0_fex1018[22] = {
   0.2466829,
   0.1188576,
   0.07970566,
   0.05413548,
   0.04310798,
   0.03880465,
   0.03677443,
   0.03566358,
   0.03601932,
   0.03615915,
   0.03887768,
   0.04079902,
   0.04578594,
   0.0500601,
   0.05720224,
   0.06321192,
   0.07280284,
   0.08735633,
   0.1051466,
   0.1208343,
   0.2382505,
   1.967906};
   Double_t Graph0_fey1018[22] = {
   0.3742211,
   0.03989367,
   0.02423053,
   0.01757245,
   0.01417334,
   0.01335323,
   0.01326248,
   0.01342174,
   0.01391106,
   0.01435603,
   0.01565221,
   0.01628665,
   0.01803496,
   0.01941454,
   0.02156899,
   0.02321025,
   0.02562776,
   0.02910787,
   0.03264852,
   0.03712007,
   0.09399434,
   1.692655};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,114.4192,3144.273);
   Graph_Graph01018->SetMinimum(10.74211);
   Graph_Graph01018->SetMaximum(21.46065);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(21,79);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] /  125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
