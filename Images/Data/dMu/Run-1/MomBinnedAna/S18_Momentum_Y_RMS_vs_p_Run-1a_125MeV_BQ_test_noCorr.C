void S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(491.3947,10.92871,3023.315,26.17852);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[22] = {
   363.6742,
   456.9233,
   570.967,
   695.2657,
   815.5224,
   938.5771,
   1061.925,
   1188.005,
   1312.76,
   1436.187,
   1562.16,
   1685.106,
   1809.264,
   1935.72,
   2061.24,
   2185.339,
   2308.766,
   2432.082,
   2557.212,
   2678.382,
   2781.661,
   2879.577};
   Double_t Graph0_fy1034[22] = {
   9.58199,
   14.23765,
   15.08591,
   16.22467,
   16.41514,
   17.45137,
   18.07563,
   19.05731,
   19.5919,
   20.07458,
   20.55282,
   20.24898,
   19.99865,
   19.53211,
   18.95785,
   18.38133,
   17.97201,
   16.75953,
   15.37694,
   14.74872,
   14.49742,
   17.39041};
   Double_t Graph0_fex1034[22] = {
   2.024653,
   1.162748,
   0.839956,
   0.5830775,
   0.4782164,
   0.4268731,
   0.4104285,
   0.3959997,
   0.3957923,
   0.4014006,
   0.4393616,
   0.4715054,
   0.5277951,
   0.5765813,
   0.6515722,
   0.7132642,
   0.8283014,
   1.013706,
   1.241928,
   1.421088,
   3.295854,
   1.395883};
   Double_t Graph0_fey1034[22] = {
   2.766082,
   0.4017385,
   0.2518519,
   0.1900517,
   0.1551224,
   0.1456407,
   0.1460469,
   0.1499693,
   0.1528008,
   0.1594426,
   0.1754666,
   0.1862019,
   0.2047083,
   0.2236664,
   0.2450718,
   0.2612609,
   0.2960186,
   0.3304656,
   0.3686338,
   0.4271853,
   1.139025,
   8.695203};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S18",100,109.7171,3132.906);
   Graph_Graph01034->SetMinimum(12.45369);
   Graph_Graph01034->SetMaximum(24.65354);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->SetRange(22,88);
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
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
