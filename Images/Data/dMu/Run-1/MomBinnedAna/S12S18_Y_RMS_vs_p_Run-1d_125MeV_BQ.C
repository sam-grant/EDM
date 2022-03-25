void S12S18_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8762,8.334128,3032.589,23.35661);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1176[22] = {
   367.2513,
   457.0513,
   570.1118,
   694.7888,
   815.8518,
   938.5172,
   1062.732,
   1188.224,
   1312.688,
   1435.771,
   1561.973,
   1685.085,
   1810.538,
   1935.019,
   2060.261,
   2184.905,
   2309.088,
   2433.055,
   2559.673,
   2678.6,
   2781.198,
   2885.782};
   Double_t Graph0_fy1176[22] = {
   13.98843,
   13.34456,
   12.76558,
   12.50558,
   12.478,
   12.45335,
   12.44411,
   12.42779,
   12.42353,
   12.44693,
   12.44176,
   12.44095,
   12.4243,
   12.38307,
   12.34731,
   12.32223,
   12.29544,
   12.29959,
   12.38454,
   12.60943,
   13.5357,
   21.85286};
   Double_t Graph0_fex1176[22] = {
   0.109463,
   0.05479406,
   0.03651396,
   0.02514983,
   0.02028487,
   0.01833508,
   0.0173851,
   0.0168304,
   0.01713305,
   0.01722648,
   0.01854525,
   0.01956557,
   0.02210779,
   0.02422989,
   0.02774509,
   0.03065898,
   0.03552339,
   0.0428648,
   0.05104552,
   0.05848479,
   0.120145,
   0.6851676};
   Double_t Graph0_fey1176[22] = {
   0.1767998,
   0.01707172,
   0.009315296,
   0.006302538,
   0.004997772,
   0.004468401,
   0.004256764,
   0.004125249,
   0.004154693,
   0.004227576,
   0.004520145,
   0.00479466,
   0.00537856,
   0.005906302,
   0.006707786,
   0.007433099,
   0.008575302,
   0.01037101,
   0.01241631,
   0.0153943,
   0.04512602,
   1.188639};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1176,Graph0_fy1176,Graph0_fex1176,Graph0_fey1176);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01176 = new TH1F("Graph_Graph01176","S12S18",100,115.2092,3138.4);
   Graph_Graph01176->SetMinimum(9.836376);
   Graph_Graph01176->SetMaximum(21.85436);
   Graph_Graph01176->SetDirectory(0);
   Graph_Graph01176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01176->SetLineColor(ci);
   Graph_Graph01176->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01176->GetXaxis()->SetRange(21,88);
   Graph_Graph01176->GetXaxis()->CenterTitle(true);
   Graph_Graph01176->GetXaxis()->SetLabelFont(42);
   Graph_Graph01176->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01176->GetXaxis()->SetTitleFont(42);
   Graph_Graph01176->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01176->GetYaxis()->CenterTitle(true);
   Graph_Graph01176->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01176->GetYaxis()->SetLabelFont(42);
   Graph_Graph01176->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01176->GetYaxis()->SetTitleFont(42);
   Graph_Graph01176->GetZaxis()->SetLabelFont(42);
   Graph_Graph01176->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01176);
   
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
