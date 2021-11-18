void S12S18_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:55:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.2994,-4.995783,2723.26,6.015229);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[22] = {
   366.6885,
   456.94,
   570.4296,
   694.9006,
   815.8333,
   938.5324,
   1062.751,
   1188.29,
   1312.702,
   1435.864,
   1561.907,
   1685.205,
   1810.549,
   1935.124,
   2060.256,
   2184.912,
   2309.216,
   2433.15,
   2559.65,
   2678.438,
   2781.416,
   2886.078};
   Double_t Graph0_fy1037[22] = {
   -1.954962,
   0.04834204,
   0.01812203,
   -0.004552624,
   0.008624491,
   0.0005682262,
   0.002982696,
   -0.005298218,
   -0.004160362,
   0.002069549,
   -0.0007633343,
   0.001452815,
   -0.001218853,
   -0.002411389,
   -0.004842693,
   0.005077546,
   0.008010613,
   0.004011372,
   4.787651e-05,
   -0.002939101,
   -0.007037081,
   2.956417};
   Double_t Graph0_fex1037[22] = {
   0.2309951,
   0.1093191,
   0.07258434,
   0.04967013,
   0.04000918,
   0.03615285,
   0.0342411,
   0.033146,
   0.03361641,
   0.03385663,
   0.03629752,
   0.03830532,
   0.04317216,
   0.04718171,
   0.05405557,
   0.0596571,
   0.06883895,
   0.08280096,
   0.09835486,
   0.1130508,
   0.2337414,
   1.023868};
   Double_t Graph0_fey1037[22] = {
   1.205652,
   0.1133014,
   0.05474126,
   0.03297471,
   0.02284435,
   0.01876099,
   0.01648632,
   0.01486069,
   0.01395936,
   0.01324732,
   0.01323678,
   0.01282515,
   0.01332572,
   0.01346688,
   0.01418843,
   0.01449388,
   0.01532326,
   0.01674654,
   0.01796518,
   0.01990341,
   0.05169101,
   1.223643};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S12S18",100,114.3931,3139.166);
   Graph_Graph01037->SetMinimum(-3.894682);
   Graph_Graph01037->SetMaximum(4.914127);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(22,79);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
