void S12_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,3.176256,2731.307,28.08167);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[22] = {
   367.0259,
   456.9861,
   570.3033,
   695.1491,
   816.0438,
   938.5662,
   1062.777,
   1188.406,
   1312.66,
   1436.011,
   1561.94,
   1685.36,
   1810.626,
   1935.175,
   2060.29,
   2185.097,
   2309.115,
   2432.874,
   2559.589,
   2678.766,
   2780.784,
   2890.136};
   Double_t Graph0_fy1021[22] = {
   35.05195,
   31.27618,
   26.69493,
   23.38334,
   20.4257,
   18.76149,
   17.28648,
   16.11643,
   15.07601,
   14.04851,
   13.17918,
   12.03421,
   11.10961,
   10.19049,
   9.350479,
   8.551256,
   7.763944,
   6.960783,
   6.174959,
   5.494899,
   4.991311,
   4.59441};
   Double_t Graph0_fex1021[22] = {
   0.22722,
   0.1087091,
   0.07270613,
   0.04936012,
   0.03923618,
   0.03530122,
   0.03342569,
   0.03237394,
   0.03268045,
   0.03278089,
   0.03521736,
   0.03693347,
   0.04144578,
   0.04526516,
   0.05166049,
   0.0571106,
   0.06562328,
   0.0787792,
   0.09490435,
   0.1086824,
   0.2160954,
   1.498282};
   Double_t Graph0_fey1021[22] = {
   0.8932064,
   0.0797312,
   0.03877554,
   0.02311403,
   0.01584608,
   0.01296624,
   0.01136401,
   0.01027473,
   0.009626224,
   0.009078158,
   0.009090913,
   0.008764159,
   0.009023621,
   0.009081694,
   0.009460278,
   0.00959839,
   0.01001047,
   0.01079519,
   0.01151135,
   0.01248087,
   0.03066485,
   0.495428};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","S12",100,114.3151,3144.118);
   Graph_Graph01021->SetMinimum(5.666798);
   Graph_Graph01021->SetMaximum(25.59113);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01021->GetXaxis()->SetRange(21,79);
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
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
