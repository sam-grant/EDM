void S12_c_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6562,-3.137067,3036.689,1.706178);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[22] = {
   367.0228,
   456.7253,
   570.2426,
   695.0361,
   815.9691,
   938.7137,
   1062.74,
   1188.278,
   1312.735,
   1435.934,
   1561.977,
   1685.242,
   1810.658,
   1935.243,
   2060.306,
   2185.137,
   2309.23,
   2433,
   2559.494,
   2679.163,
   2780.754,
   2888.448};
   Double_t Graph0_fy1061[22] = {
   8.246125,
   3.398125,
   2.612821,
   0.1177928,
   0.3818448,
   0.6601526,
   -0.1256165,
   -0.1743726,
   -0.3381454,
   -0.2884805,
   -0.06235433,
   0.04791102,
   0.10415,
   0.1528759,
   0.1009465,
   0.1156617,
   0.1509764,
   0.1643471,
   0.2270762,
   0.2860064,
   0.2717663,
   -6.249737};
   Double_t Graph0_fex1061[22] = {
   0.2618944,
   0.1304244,
   0.08828179,
   0.05953292,
   0.04761139,
   0.04276526,
   0.04063653,
   0.03918935,
   0.03956692,
   0.03971624,
   0.04252848,
   0.04463818,
   0.04995398,
   0.0546307,
   0.06224063,
   0.06855283,
   0.07897087,
   0.09467415,
   0.1133242,
   0.1298863,
   0.2598874,
   1.874823};
   Double_t Graph0_fey1061[22] = {
   1.491029,
   0.1362977,
   0.06685422,
   0.03974276,
   0.02727531,
   0.02230174,
   0.01963193,
   0.01766452,
   0.01650166,
   0.01558938,
   0.0155722,
   0.01502824,
   0.01553581,
   0.01566224,
   0.01637586,
   0.01671163,
   0.01758668,
   0.01916471,
   0.02084701,
   0.02293401,
   0.05799327,
   1.550061};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S12",100,114.4047,3142.679);
   Graph_Graph01061->SetMinimum(-2.652742);
   Graph_Graph01061->SetMaximum(1.221854);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(21,88);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
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
