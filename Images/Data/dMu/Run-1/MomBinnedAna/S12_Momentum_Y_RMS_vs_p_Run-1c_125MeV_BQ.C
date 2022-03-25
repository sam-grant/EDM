void S12_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5321,9.037883,3003.766,26.37446);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[22] = {
   367.0352,
   456.9819,
   570.2976,
   695.1562,
   816.0421,
   938.5715,
   1062.782,
   1188.409,
   1312.658,
   1436.007,
   1561.937,
   1685.365,
   1810.622,
   1935.171,
   2060.292,
   2185.098,
   2309.109,
   2432.863,
   2559.588,
   2678.779,
   2780.736,
   2889.944};
   Double_t Graph0_fy1067[22] = {
   13.15459,
   14.29087,
   15.22069,
   16.19996,
   16.62756,
   17.57858,
   18.33645,
   19.10915,
   19.75413,
   20.13499,
   20.54024,
   20.24255,
   20.08298,
   19.68846,
   19.24067,
   18.66216,
   17.90682,
   16.91531,
   15.78511,
   14.70079,
   13.84476,
   13.1439};
   Double_t Graph0_fex1067[22] = {
   0.2251397,
   0.1080441,
   0.07224719,
   0.04905187,
   0.03899622,
   0.03509039,
   0.03322333,
   0.03218015,
   0.03248772,
   0.03258516,
   0.03500937,
   0.0367165,
   0.04120481,
   0.04500112,
   0.0513695,
   0.05678027,
   0.06525989,
   0.07833329,
   0.09434737,
   0.1080842,
   0.2147682,
   1.476472};
   Double_t Graph0_fey1067[22] = {
   0.3322035,
   0.03620135,
   0.02196895,
   0.0159141,
   0.01282062,
   0.01207562,
   0.0119823,
   0.01211032,
   0.01253975,
   0.0129359,
   0.01408611,
   0.01465741,
   0.01621866,
   0.01744459,
   0.0193561,
   0.02082696,
   0.02295738,
   0.02608444,
   0.02925859,
   0.0332123,
   0.08458924,
   1.401145};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","S12",100,114.349,3143.882);
   Graph_Graph01067->SetMinimum(10.77154);
   Graph_Graph01067->SetMaximum(24.6408);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01067->GetXaxis()->SetRange(21,87);
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
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
