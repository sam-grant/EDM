void S18_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.5135,9.326578,3027.918,26.16896);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1122[22] = {
   367.0045,
   457.2535,
   570.0176,
   694.4762,
   815.6753,
   938.5321,
   1062.883,
   1188.194,
   1312.613,
   1435.703,
   1561.988,
   1685.034,
   1810.507,
   1934.911,
   2060.258,
   2184.767,
   2308.986,
   2433.422,
   2559.657,
   2678,
   2781.642,
   2884.375};
   Double_t Graph0_fy1122[22] = {
   12.9397,
   14.16601,
   15.08743,
   16.08933,
   16.51574,
   17.46984,
   18.28142,
   19.00116,
   19.65128,
   20.0782,
   20.40915,
   20.13418,
   20.01495,
   19.65426,
   19.22021,
   18.68628,
   17.82567,
   16.73681,
   15.66501,
   14.54537,
   13.76782,
   13.76025};
   Double_t Graph0_fex1122[22] = {
   0.2097223,
   0.1053092,
   0.06972444,
   0.04891864,
   0.03964913,
   0.03595118,
   0.03404248,
   0.03309807,
   0.03385311,
   0.03415492,
   0.03687725,
   0.03906116,
   0.04441414,
   0.04877218,
   0.05625241,
   0.06230338,
   0.07240694,
   0.08764619,
   0.1035649,
   0.1204361,
   0.2569884,
   1.230174};
   Double_t Graph0_fey1122[22] = {
   0.2995493,
   0.03482936,
   0.02103301,
   0.01570974,
   0.01293772,
   0.01230503,
   0.01225972,
   0.01238842,
   0.01297438,
   0.01352706,
   0.01474212,
   0.01550214,
   0.01741453,
   0.01887349,
   0.02111861,
   0.02287596,
   0.02536117,
   0.02881249,
   0.03187187,
   0.03660906,
   0.09752887,
   1.558042};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1122,Graph0_fy1122,Graph0_fex1122,Graph0_fey1122);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01122 = new TH1F("Graph_Graph01122","S18",100,114.9137,3137.486);
   Graph_Graph01122->SetMinimum(11.01082);
   Graph_Graph01122->SetMaximum(24.48472);
   Graph_Graph01122->SetDirectory(0);
   Graph_Graph01122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01122->SetLineColor(ci);
   Graph_Graph01122->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01122->GetXaxis()->SetRange(22,88);
   Graph_Graph01122->GetXaxis()->CenterTitle(true);
   Graph_Graph01122->GetXaxis()->SetLabelFont(42);
   Graph_Graph01122->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01122->GetXaxis()->SetTitleFont(42);
   Graph_Graph01122->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01122->GetYaxis()->CenterTitle(true);
   Graph_Graph01122->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01122->GetYaxis()->SetLabelFont(42);
   Graph_Graph01122->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01122->GetYaxis()->SetTitleFont(42);
   Graph_Graph01122->GetZaxis()->SetLabelFont(42);
   Graph_Graph01122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01122);
   
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
