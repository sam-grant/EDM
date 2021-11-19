void S12_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9382,-4.289409,2731.455,45.61792);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[22] = {
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
   Double_t Graph0_fy1016[22] = {
   36.28115,
   31.44489,
   26.72178,
   23.39133,
   20.43248,
   18.76009,
   17.29165,
   16.11971,
   15.08219,
   14.05659,
   13.18718,
   12.03498,
   11.11982,
   10.19791,
   9.356764,
   8.560142,
   7.772215,
   6.967928,
   6.17835,
   5.493158,
   4.970916,
   4.614524};
   Double_t Graph0_fex1016[22] = {
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
   Double_t Graph0_fey1016[22] = {
   1.018876,
   0.08778626,
   0.04254996,
   0.02537385,
   0.01741491,
   0.0142535,
   0.01250337,
   0.01131891,
   0.01061592,
   0.01001577,
   0.01004206,
   0.009681731,
   0.009977269,
   0.01004884,
   0.0104809,
   0.01063368,
   0.01111263,
   0.01198006,
   0.01277293,
   0.01387418,
   0.03387616,
   0.5860451};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","S12",100,114.4192,3144.273);
   Graph_Graph01016->SetMinimum(0.7013236);
   Graph_Graph01016->SetMaximum(40.62718);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01016->GetXaxis()->SetRange(21,79);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
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
