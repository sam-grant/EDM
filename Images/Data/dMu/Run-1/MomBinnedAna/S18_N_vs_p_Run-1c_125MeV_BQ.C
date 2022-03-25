void S18_N_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.5135,-172511.1,3027.918,1587211);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1123[22] = {
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
   Double_t Graph0_fy1123[22] = {
   933,
   82726,
   257301,
   524484,
   814867,
   1007894,
   1111987,
   1176457,
   1147222,
   1101820,
   958523,
   843622,
   660576,
   542299,
   414168,
   333644,
   247027,
   168720,
   120789,
   78935,
   9965,
   39};
   Double_t Graph0_fex1123[22] = {
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
   Double_t Graph0_fey1123[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1123,Graph0_fy1123,Graph0_fex1123,Graph0_fey1123);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01123 = new TH1F("Graph_Graph01123","S18",100,114.9137,3137.486);
   Graph_Graph01123->SetMinimum(3461.204);
   Graph_Graph01123->SetMaximum(1411239);
   Graph_Graph01123->SetDirectory(0);
   Graph_Graph01123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01123->SetLineColor(ci);
   Graph_Graph01123->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01123->GetXaxis()->SetRange(22,88);
   Graph_Graph01123->GetXaxis()->CenterTitle(true);
   Graph_Graph01123->GetXaxis()->SetLabelFont(42);
   Graph_Graph01123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01123->GetXaxis()->SetTitleFont(42);
   Graph_Graph01123->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01123->GetYaxis()->CenterTitle(true);
   Graph_Graph01123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01123->GetYaxis()->SetLabelFont(42);
   Graph_Graph01123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01123->GetYaxis()->SetTitleFont(42);
   Graph_Graph01123->GetZaxis()->SetLabelFont(42);
   Graph_Graph01123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01123);
   
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
