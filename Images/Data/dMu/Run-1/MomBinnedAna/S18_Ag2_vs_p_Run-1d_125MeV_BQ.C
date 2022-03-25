void S18_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8372,-0.06408949,3028.15,0.2337351);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1118[22] = {
   367.2774,
   457.4357,
   569.9772,
   694.5085,
   815.7124,
   938.4776,
   1062.814,
   1188.156,
   1312.577,
   1435.627,
   1561.978,
   1684.874,
   1810.461,
   1934.889,
   2060.232,
   2184.761,
   2309.022,
   2433.188,
   2559.837,
   2677.831,
   2781.311,
   2884.856};
   Double_t Graph0_fy1118[22] = {
   1.122206,
   0.1456703,
   0.08022475,
   -0.04587868,
   0.02022253,
   0.02399504,
   0.004158484,
   0.004356572,
   -0.01120545,
   -0.01055201,
   0.012962,
   0.001656642,
   -0.02640982,
   -0.03383795,
   0.01992589,
   0.01312313,
   -0.004289606,
   -0.007977336,
   -0.0001021157,
   -0.002498635,
   0.06272675,
   0.2519199};
   Double_t Graph0_fex1118[22] = {
   0.1542477,
   0.0772969,
   0.05113436,
   0.03585499,
   0.02910229,
   0.02638949,
   0.02501847,
   0.02428253,
   0.02485795,
   0.02507009,
   0.0270624,
   0.02872554,
   0.03273885,
   0.03590826,
   0.04133977,
   0.04585916,
   0.05343033,
   0.064887,
   0.07654414,
   0.08820872,
   0.1883314,
   0.9865718};
   Double_t Graph0_fey1118[22] = {
   1.226129,
   0.1115061,
   0.05417516,
   0.03334769,
   0.02333853,
   0.01928932,
   0.01696887,
   0.01533556,
   0.01455587,
   0.0138576,
   0.01390429,
   0.01356035,
   0.01426067,
   0.01449766,
   0.01533655,
   0.01578054,
   0.01672974,
   0.01839672,
   0.01961667,
   0.02206734,
   0.05842434,
   0.347644};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1118,Graph0_fy1118,Graph0_fex1118,Graph0_fey1118);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01118 = new TH1F("Graph_Graph01118","S18",100,115.2511,3137.715);
   Graph_Graph01118->SetMinimum(-0.03430703);
   Graph_Graph01118->SetMaximum(0.2039527);
   Graph_Graph01118->SetDirectory(0);
   Graph_Graph01118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01118->SetLineColor(ci);
   Graph_Graph01118->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01118->GetXaxis()->SetRange(22,88);
   Graph_Graph01118->GetXaxis()->CenterTitle(true);
   Graph_Graph01118->GetXaxis()->SetLabelFont(42);
   Graph_Graph01118->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01118->GetXaxis()->SetTitleFont(42);
   Graph_Graph01118->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01118->GetYaxis()->CenterTitle(true);
   Graph_Graph01118->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01118->GetYaxis()->SetLabelFont(42);
   Graph_Graph01118->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01118->GetYaxis()->SetTitleFont(42);
   Graph_Graph01118->GetZaxis()->SetLabelFont(42);
   Graph_Graph01118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01118);
   
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
