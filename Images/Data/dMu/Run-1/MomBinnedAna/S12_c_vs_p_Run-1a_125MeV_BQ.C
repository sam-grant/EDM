void S12_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 14:24:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3259,-0.01214982,3036.37,0.01181718);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   366.7752,
   456.7644,
   570.6057,
   695.308,
   816.0199,
   938.5594,
   1062.714,
   1188.408,
   1312.768,
   1435.939,
   1561.836,
   1685.36,
   1810.677,
   1935.171,
   2060.181,
   2185.077,
   2309.281,
   2432.898,
   2559.531,
   2678.787,
   2781.468,
   2888.259};
   Double_t Graph0_fy1017[22] = {
   -2.913671,
   0.0495601,
   0.0225158,
   -0.01235217,
   -0.008216109,
   0.003421994,
   0.001729198,
   -0.007011455,
   -0.0009632955,
   0.0008678902,
   0.002176909,
   -0.001345839,
   0.0007183336,
   -0.0002226415,
   -0.006417595,
   0.001634463,
   0.006222739,
   0.007889479,
   -0.008232024,
   -0.003235806,
   0.003122435,
   4.345859};
   Double_t Graph0_fex1017[22] = {
   0.3450021,
   0.157345,
   0.104901,
   0.07063794,
   0.05638435,
   0.05072089,
   0.0480066,
   0.04637203,
   0.04670397,
   0.04691625,
   0.05025981,
   0.05269888,
   0.05914443,
   0.06453306,
   0.07359379,
   0.08120261,
   0.09320425,
   0.1113982,
   0.1334389,
   0.1534676,
   0.3117639,
   1.744149};
   Double_t Graph0_fey1017[22] = {
   1.707257,
   0.1634647,
   0.07930801,
   0.04705216,
   0.03228986,
   0.02639698,
   0.02318178,
   0.02086239,
   0.01947189,
   0.01842997,
   0.01838945,
   0.01772272,
   0.01831172,
   0.01842725,
   0.01931774,
   0.01965872,
   0.02071533,
   0.02268204,
   0.02433329,
   0.0270812,
   0.0695135,
   0.8534295};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,114.0729,3142.36);
   Graph_Graph01017->SetMinimum(-0.009753123);
   Graph_Graph01017->SetMaximum(0.009420478);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,88);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
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
