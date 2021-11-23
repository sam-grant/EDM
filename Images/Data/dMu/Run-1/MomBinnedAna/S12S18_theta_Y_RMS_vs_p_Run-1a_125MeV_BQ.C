void S12S18_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:24:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.2994,-3.182581,2723.26,43.93476);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
   366.6885,
   456.9353,
   570.4228,
   694.9017,
   815.8352,
   938.5325,
   1062.75,
   1188.288,
   1312.703,
   1435.863,
   1561.905,
   1685.207,
   1810.547,
   1935.125,
   2060.257,
   2184.91,
   2309.213,
   2433.147,
   2559.646,
   2678.447,
   2781.41,
   2886.078};
   Double_t Graph0_fy1040[22] = {
   35.19145,
   31.40686,
   26.64767,
   23.35719,
   20.39799,
   18.72521,
   17.2818,
   16.08626,
   15.03328,
   14.04452,
   13.13861,
   11.99062,
   11.09838,
   10.16924,
   9.356146,
   8.548482,
   7.7548,
   6.938799,
   6.16572,
   5.473768,
   4.988,
   5.24229};
   Double_t Graph0_fex1040[22] = {
   0.2309951,
   0.1092124,
   0.07251533,
   0.04962127,
   0.03997118,
   0.03612002,
   0.0342106,
   0.0331161,
   0.03358597,
   0.0338255,
   0.03626653,
   0.03827066,
   0.04313196,
   0.04714073,
   0.05401014,
   0.05961023,
   0.0687829,
   0.08272529,
   0.09827916,
   0.1129676,
   0.233546,
   1.023868};
   Double_t Graph0_fey1040[22] = {
   0.8904235,
   0.07976218,
   0.03855686,
   0.02322771,
   0.01609816,
   0.01323154,
   0.01163462,
   0.01049344,
   0.009859994,
   0.009355986,
   0.009343834,
   0.009041379,
   0.009372234,
   0.009438697,
   0.009884664,
   0.01001529,
   0.01049102,
   0.01129262,
   0.0119048,
   0.01288948,
   0.03210789,
   0.5719808};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,114.3931,3139.166);
   Graph_Graph01040->SetMinimum(1.529153);
   Graph_Graph01040->SetMaximum(39.22303);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(22,79);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
