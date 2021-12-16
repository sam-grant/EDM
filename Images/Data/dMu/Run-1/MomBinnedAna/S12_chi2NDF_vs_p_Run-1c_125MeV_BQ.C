void S12_chi2NDF_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:17:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5837,0.2750932,3003.847,2.667732);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[22] = {
   367.0912,
   456.9775,
   570.3352,
   695.1607,
   816.036,
   938.5588,
   1062.792,
   1188.402,
   1312.659,
   1436.008,
   1561.944,
   1685.355,
   1810.634,
   1935.163,
   2060.286,
   2185.107,
   2309.111,
   2432.867,
   2559.582,
   2678.741,
   2780.764,
   2889.945};
   Double_t Graph0_fy1064[22] = {
   1.329528,
   1.008622,
   0.6875288,
   1.323746,
   1.102629,
   1.164941,
   1.661625,
   1.102862,
   1.170317,
   0.7970521,
   1.191616,
   1.103644,
   0.9709623,
   1.314207,
   1.013678,
   0.9251664,
   0.6386919,
   1.230899,
   1.345926,
   0.6541365,
   1.357911,
   2.585097};
   Double_t Graph0_fex1064[22] = {
   0.2307802,
   0.1107898,
   0.07402972,
   0.05028522,
   0.03996554,
   0.0359552,
   0.03405148,
   0.0329787,
   0.03328915,
   0.03339202,
   0.03587261,
   0.03762182,
   0.04222444,
   0.04610221,
   0.05261229,
   0.05817227,
   0.06684824,
   0.08026796,
   0.09667362,
   0.1106825,
   0.2199447,
   1.555816};
   Double_t Graph0_fey1064[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S12",100,114.3965,3143.964);
   Graph_Graph01064->SetMinimum(0.5143571);
   Graph_Graph01064->SetMaximum(2.428468);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(21,87);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
