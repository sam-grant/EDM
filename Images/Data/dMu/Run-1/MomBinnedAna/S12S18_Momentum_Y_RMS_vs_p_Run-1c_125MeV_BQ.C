void S12S18_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:47:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.7061,9.21161,3034.515,26.27152);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[22] = {
   367.051,
   457.0974,
   570.1811,
   694.8088,
   815.8621,
   938.5384,
   1062.838,
   1188.304,
   1312.633,
   1435.871,
   1561.971,
   1685.2,
   1810.579,
   1935.045,
   2060.276,
   2184.955,
   2309.048,
   2433.116,
   2559.624,
   2678.406,
   2781.157,
   2887.23};
   Double_t Graph0_fy1045[22] = {
   13.04288,
   14.22881,
   15.1542,
   16.144,
   16.57244,
   17.52704,
   18.30944,
   19.05816,
   19.70619,
   20.10872,
   20.47703,
   20.1923,
   20.0482,
   19.66948,
   19.23191,
   18.67149,
   17.87005,
   16.83656,
   15.72648,
   14.63079,
   13.81464,
   13.51245};
   Double_t Graph0_fex1045[22] = {
   0.157396,
   0.07733575,
   0.05143223,
   0.03551066,
   0.02849384,
   0.02573646,
   0.02436904,
   0.02364648,
   0.02402267,
   0.02416336,
   0.02602274,
   0.0274188,
   0.03095359,
   0.0338914,
   0.0388552,
   0.04300123,
   0.04965168,
   0.05984093,
   0.07146685,
   0.08238563,
   0.1688844,
   1.045133};
   Double_t Graph0_fey1045[22] = {
   0.2285062,
   0.02574407,
   0.01558065,
   0.01145913,
   0.009333711,
   0.008834769,
   0.008782206,
   0.008876223,
   0.009241841,
   0.009581779,
   0.01043668,
   0.01091508,
   0.01215937,
   0.01312634,
   0.01461815,
   0.01577998,
   0.01743412,
   0.01980756,
   0.02207856,
   0.02518599,
   0.06545531,
   1.068253};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12S18",100,114.7555,3140.413);
   Graph_Graph01045->SetMinimum(10.9176);
   Graph_Graph01045->SetMaximum(24.56553);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(21,88);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
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
