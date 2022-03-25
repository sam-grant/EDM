void S18_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.5135,8.662884,3027.918,20.82279);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1121[22] = {
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
   Double_t Graph0_fy1121[22] = {
   13.80544,
   13.48948,
   12.83758,
   12.58928,
   12.58189,
   12.55412,
   12.53538,
   12.50525,
   12.502,
   12.50755,
   12.5291,
   12.52204,
   12.49645,
   12.44408,
   12.3975,
   12.36224,
   12.35808,
   12.34833,
   12.43313,
   12.65922,
   13.54019,
   18.46722};
   Double_t Graph0_fex1121[22] = {
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
   Double_t Graph0_fey1121[22] = {
   0.319591,
   0.03316841,
   0.01789697,
   0.01229235,
   0.009856051,
   0.008842545,
   0.00840594,
   0.008152779,
   0.008253693,
   0.008425784,
   0.009049203,
   0.009640272,
   0.01087206,
   0.01194894,
   0.01362177,
   0.01513358,
   0.0175819,
   0.02125744,
   0.02529621,
   0.03186145,
   0.09594048,
   2.091};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1121,Graph0_fy1121,Graph0_fex1121,Graph0_fey1121);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01121 = new TH1F("Graph_Graph01121","S18",100,114.9137,3137.486);
   Graph_Graph01121->SetMinimum(9.878875);
   Graph_Graph01121->SetMaximum(19.6068);
   Graph_Graph01121->SetDirectory(0);
   Graph_Graph01121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01121->SetLineColor(ci);
   Graph_Graph01121->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01121->GetXaxis()->SetRange(22,88);
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
