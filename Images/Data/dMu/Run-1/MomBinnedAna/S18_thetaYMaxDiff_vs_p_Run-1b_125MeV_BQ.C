void S18_thetaYMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.9538,0.1597453,3032.833,243.7311);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1125[22] = {
   367.4647,
   456.6802,
   569.9862,
   694.4449,
   815.659,
   938.5876,
   1062.735,
   1187.923,
   1312.68,
   1435.614,
   1562.043,
   1684.956,
   1810.525,
   1934.908,
   2060.307,
   2184.834,
   2308.907,
   2433.342,
   2560.022,
   2678.046,
   2781.107,
   2885.139};
   Double_t Graph0_fy1125[22] = {
   163.8658,
   183.3824,
   174.1765,
   183.0142,
   178.5953,
   171.5988,
   172.3353,
   179.3318,
   173.0718,
   153.5552,
   155.3963,
   113.4172,
   89.11354,
   78.80289,
   92.42768,
   93.90064,
   72.54284,
   65.54633,
   54.86743,
   60.02276,
   39.40144,
   23.93546};
   Double_t Graph0_fex1125[22] = {
   0.2514673,
   0.1273708,
   0.08493739,
   0.05873317,
   0.04801405,
   0.04344375,
   0.04138662,
   0.040042,
   0.04092898,
   0.04135305,
   0.0443921,
   0.04721054,
   0.05333354,
   0.05870275,
   0.06758977,
   0.07460287,
   0.08656381,
   0.1051569,
   0.1234849,
   0.141328,
   0.2910684,
   1.562872};
   Double_t Graph0_fey1125[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01125 = new TH1F("Graph_Graph01125","S18",100,115.2643,3138.651);
   Graph_Graph01125->SetMinimum(24.51689);
   Graph_Graph01125->SetMaximum(219.374);
   Graph_Graph01125->SetDirectory(0);
   Graph_Graph01125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01125->SetLineColor(ci);
   Graph_Graph01125->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01125->GetXaxis()->SetRange(21,88);
   Graph_Graph01125->GetXaxis()->CenterTitle(true);
   Graph_Graph01125->GetXaxis()->SetLabelFont(42);
   Graph_Graph01125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01125->GetXaxis()->SetTitleFont(42);
   Graph_Graph01125->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01125->GetYaxis()->CenterTitle(true);
   Graph_Graph01125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01125->GetYaxis()->SetLabelFont(42);
   Graph_Graph01125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01125->GetYaxis()->SetTitleFont(42);
   Graph_Graph01125->GetZaxis()->SetLabelFont(42);
   Graph_Graph01125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01125);
   
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
