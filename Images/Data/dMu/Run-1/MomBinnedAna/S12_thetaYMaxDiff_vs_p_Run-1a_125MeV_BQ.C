void S12_thetaYMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec 17 14:44:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3259,5.042258,3036.37,242.4607);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[22] = {
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
   Double_t Graph0_fy1070[22] = {
   158.7105,
   179.7,
   169.7576,
   178.2271,
   182.2777,
   181.9095,
   161.6564,
   156.8693,
   150.241,
   150.6093,
   127.4103,
   111.576,
   95.00535,
   89.85002,
   73.27932,
   69.59694,
   69.96518,
   67.75575,
   55.23567,
   55.60391,
   58.18157,
   17.67541};
   Double_t Graph0_fex1070[22] = {
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
   Double_t Graph0_fey1070[22] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S12",100,114.0729,3142.36);
   Graph_Graph01070->SetMinimum(28.78411);
   Graph_Graph01070->SetMaximum(218.7189);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01070->GetXaxis()->SetRange(21,88);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
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
