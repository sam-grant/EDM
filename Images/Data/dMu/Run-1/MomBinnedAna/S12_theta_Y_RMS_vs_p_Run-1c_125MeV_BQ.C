void S12_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5321,0.5908159,3003.766,32.71112);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[22] = {
   367.0352,
   456.9819,
   570.2976,
   695.1562,
   816.0421,
   938.5715,
   1062.782,
   1188.409,
   1312.658,
   1436.007,
   1561.937,
   1685.365,
   1810.622,
   1935.171,
   2060.292,
   2185.098,
   2309.109,
   2432.863,
   2559.588,
   2678.779,
   2780.736,
   2889.944};
   Double_t Graph0_fy1065[22] = {
   35.09768,
   31.26993,
   26.70051,
   23.38263,
   20.42415,
   18.76097,
   17.28765,
   16.11635,
   15.07623,
   14.04811,
   13.17913,
   12.03475,
   11.11077,
   10.19109,
   9.350742,
   8.550283,
   7.764661,
   6.961657,
   6.176056,
   5.495041,
   4.994863,
   4.550198};
   Double_t Graph0_fex1065[22] = {
   0.2251397,
   0.1080441,
   0.07224719,
   0.04905187,
   0.03899622,
   0.03509039,
   0.03322333,
   0.03218015,
   0.03248772,
   0.03258516,
   0.03500937,
   0.0367165,
   0.04120481,
   0.04500112,
   0.0513695,
   0.05678027,
   0.06525989,
   0.07833329,
   0.09434737,
   0.1080842,
   0.2147682,
   1.476472};
   Double_t Graph0_fey1065[22] = {
   0.8880509,
   0.07923577,
   0.03853911,
   0.02296989,
   0.01574732,
   0.0128873,
   0.01129608,
   0.01021264,
   0.009569421,
   0.009024209,
   0.00903683,
   0.008713198,
   0.008972027,
   0.009028898,
   0.009406404,
   0.009541847,
   0.009954399,
   0.01073502,
   0.0114472,
   0.01241419,
   0.03051326,
   0.4850527};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S12",100,114.349,3143.882);
   Graph_Graph01065->SetMinimum(3.802846);
   Graph_Graph01065->SetMaximum(29.49909);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01065->GetXaxis()->SetRange(21,87);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
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
