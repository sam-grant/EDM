void S12_thetaYMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6562,3.038579,3036.689,240.1078);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[22] = {
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
   Double_t Graph0_fy1070[22] = {
   164.6023,
   182.2777,
   180.8048,
   180.0683,
   177.4906,
   178.9636,
   171.2306,
   170.4941,
   154.2916,
   156.1328,
   128.8832,
   108.6301,
   117.0996,
   94.26887,
   91.69121,
   88.00883,
   62.60042,
   64.07337,
   53.76272,
   50.81681,
   50.44858,
   19.5166};
   Double_t Graph0_fex1070[22] = {
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
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S12",100,114.4047,3142.679);
   Graph_Graph01070->SetMinimum(26.7455);
   Graph_Graph01070->SetMaximum(216.4009);
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
