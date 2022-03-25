void S18_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.9538,8.717894,3032.833,21.87838);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1121[22] = {
   367.4647,
   456.6802,
   569.9862,
   694.4449,
   815.659,
   938.5876,
   1062.735,
   1187.923,
   1312.68,
   1435.614,
   1562.043,
   1684.956,
   1810.525,
   1934.908,
   2060.307,
   2184.834,
   2308.907,
   2433.342,
   2560.022,
   2678.046,
   2781.107,
   2885.139};
   Double_t Graph0_fy1121[22] = {
   14.20119,
   13.62626,
   13.04744,
   12.81217,
   12.79499,
   12.77697,
   12.72558,
   12.73523,
   12.70371,
   12.72849,
   12.72419,
   12.73387,
   12.71336,
   12.62313,
   12.63776,
   12.57057,
   12.5492,
   12.54224,
   12.66288,
   12.82398,
   13.45214,
   19.95827};
   Double_t Graph0_fex1121[22] = {
   0.2514673,
   0.1273708,
   0.08493739,
   0.05873317,
   0.04801405,
   0.04344375,
   0.04138662,
   0.040042,
   0.04092898,
   0.04135305,
   0.0443921,
   0.04721054,
   0.05333354,
   0.05870275,
   0.06758977,
   0.07460287,
   0.08656381,
   0.1051569,
   0.1234849,
   0.141328,
   0.2910684,
   1.562872};
   Double_t Graph0_fey1121[22] = {
   0.4072471,
   0.04026611,
   0.02204468,
   0.01506666,
   0.01210759,
   0.01087202,
   0.01034811,
   0.01005544,
   0.01014444,
   0.01037869,
   0.011075,
   0.01181964,
   0.01329768,
   0.01460494,
   0.01670311,
   0.01842566,
   0.02136289,
   0.02589648,
   0.03063442,
   0.0379917,
   0.1102709,
   2.822526};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1121,Graph0_fy1121,Graph0_fex1121,Graph0_fey1121);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01121 = new TH1F("Graph_Graph01121","S18",100,115.2643,3138.651);
   Graph_Graph01121->SetMinimum(10.03394);
   Graph_Graph01121->SetMaximum(20.56233);
   Graph_Graph01121->SetDirectory(0);
   Graph_Graph01121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01121->SetLineColor(ci);
   Graph_Graph01121->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01121->GetXaxis()->SetRange(21,88);
   Graph_Graph01121->GetXaxis()->CenterTitle(true);
   Graph_Graph01121->GetXaxis()->SetLabelFont(42);
   Graph_Graph01121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01121->GetXaxis()->SetTitleFont(42);
   Graph_Graph01121->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01121->GetYaxis()->CenterTitle(true);
   Graph_Graph01121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01121->GetYaxis()->SetLabelFont(42);
   Graph_Graph01121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01121->GetYaxis()->SetTitleFont(42);
   Graph_Graph01121->GetZaxis()->SetLabelFont(42);
   Graph_Graph01121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01121);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
