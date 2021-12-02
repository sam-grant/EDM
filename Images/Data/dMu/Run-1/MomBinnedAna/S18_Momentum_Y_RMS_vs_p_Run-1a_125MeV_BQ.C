void S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:22:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.0648,13.27731,2721.986,23.41566);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[22] = {
   366.6108,
   457.0998,
   570.2671,
   694.5077,
   815.6456,
   938.5066,
   1062.791,
   1188.164,
   1312.63,
   1435.781,
   1561.983,
   1685.03,
   1810.398,
   1935.067,
   2060.343,
   2184.713,
   2309.137,
   2433.45,
   2559.784,
   2678.032,
   2781.338,
   2884.595};
   Double_t Graph0_fy1034[22] = {
   12.7496,
   14.21417,
   15.11715,
   16.12975,
   16.54207,
   17.49254,
   18.25968,
   18.99964,
   19.62616,
   20.04697,
   20.37038,
   20.07465,
   19.96893,
   19.60363,
   19.23783,
   18.68495,
   17.84395,
   16.75377,
   15.71663,
   14.50943,
   13.66788,
   14.81707};
   Double_t Graph0_fex1034[22] = {
   0.3102122,
   0.1518093,
   0.1004353,
   0.06977992,
   0.0567256,
   0.05149815,
   0.04880985,
   0.04735213,
   0.04837734,
   0.04886203,
   0.05243069,
   0.05572119,
   0.06310108,
   0.06909388,
   0.07959302,
   0.08786508,
   0.1020153,
   0.1236492,
   0.1454163,
   0.1670066,
   0.352833,
   1.155309};
   Double_t Graph0_fey1034[22] = {
   0.4441533,
   0.05011144,
   0.0303081,
   0.02252614,
   0.01852377,
   0.01762256,
   0.0175473,
   0.01772148,
   0.01852386,
   0.01927424,
   0.02095077,
   0.02202285,
   0.0246793,
   0.02670135,
   0.02995587,
   0.03233136,
   0.03586536,
   0.04067047,
   0.04489512,
   0.05067345,
   0.1329802,
   2.09545};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S18",100,114.3557,3137.695);
   Graph_Graph01034->SetMinimum(14.29114);
   Graph_Graph01034->SetMaximum(22.40183);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->SetRange(22,79);
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
