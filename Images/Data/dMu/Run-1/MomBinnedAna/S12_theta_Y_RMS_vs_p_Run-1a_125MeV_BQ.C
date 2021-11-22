void S12_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.3942,-3.829485,2729.756,44.83444);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[22] = {
   366.7752,
   456.7578,
   570.5921,
   695.3071,
   816.0224,
   938.5575,
   1062.711,
   1188.407,
   1312.772,
   1435.939,
   1561.834,
   1685.365,
   1810.678,
   1935.176,
   2060.183,
   2185.076,
   2309.276,
   2432.899,
   2559.529,
   2678.792,
   2781.466,
   2888.259};
   Double_t Graph0_fy1020[22] = {
   35.41996,
   31.58756,
   26.75038,
   23.4099,
   20.46115,
   18.78021,
   17.34475,
   16.14404,
   15.082,
   14.09105,
   13.1899,
   12.03954,
   11.14024,
   10.19091,
   9.362945,
   8.535935,
   7.768771,
   6.975729,
   6.181744,
   5.510784,
   5.032874,
   5.167366};
   Double_t Graph0_fex1020[22] = {
   0.3450021,
   0.157226,
   0.1048064,
   0.07056723,
   0.05633048,
   0.05067462,
   0.04796335,
   0.04633051,
   0.04666407,
   0.04687252,
   0.05021785,
   0.05265346,
   0.0590909,
   0.06447877,
   0.07353012,
   0.0811364,
   0.09313613,
   0.1112972,
   0.1333412,
   0.1533601,
   0.3115684,
   1.744149};
   Double_t Graph0_fey1020[22] = {
   1.303827,
   0.1156704,
   0.05591836,
   0.03315837,
   0.0227629,
   0.01861881,
   0.01636486,
   0.01473494,
   0.01375728,
   0.01302004,
   0.01298711,
   0.01249984,
   0.01288546,
   0.0129246,
   0.01346572,
   0.01358988,
   0.01421104,
   0.01530074,
   0.0161959,
   0.0175722,
   0.04320421,
   0.886196};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","S12",100,114.0729,3142.36);
   Graph_Graph01020->SetMinimum(1.036908);
   Graph_Graph01020->SetMaximum(39.96805);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01020->GetXaxis()->SetRange(21,79);
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
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
