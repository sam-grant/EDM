void S12_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:55:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.3942,-0.4426559,2729.756,0.152806);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[22] = {
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
   Double_t Graph0_fy1026[22] = {
   0.03850293,
   0.001020825,
   0.0004838756,
   0.0002256178,
   0.0004553677,
   0.0004993599,
   0.0001515717,
   0.0001866359,
   0.0005202317,
   0.0003832669,
   0.0004804312,
   0.0002980085,
   0.0001856824,
   0.0002406472,
   0.0005423319,
   0.0001521536,
   0.0002847489,
   0.0007176076,
   -0.0001910282,
   0.00023275,
   -0.000288457,
   -0.3434122};
   Double_t Graph0_fex1026[22] = {
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
   Double_t Graph0_fey1026[22] = {
   0.01505939,
   0.0007380277,
   0.0004052625,
   0.0002745324,
   0.0001955677,
   0.0001915334,
   0.0001700922,
   0.0001497666,
   0.000183972,
   0.0001742079,
   0.0002028271,
   0.0002250809,
   0.0002744641,
   0.0002875591,
   0.0003707864,
   0.0003981045,
   0.00040215,
   0.0004481965,
   -0.0005814863,
   0.0006309773,
   -0.001471889,
   -0.1413063};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","S12",100,114.0729,3142.36);
   Graph_Graph01026->SetMinimum(-0.3831097);
   Graph_Graph01026->SetMaximum(0.09325977);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01026->GetXaxis()->SetRange(21,79);
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
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
