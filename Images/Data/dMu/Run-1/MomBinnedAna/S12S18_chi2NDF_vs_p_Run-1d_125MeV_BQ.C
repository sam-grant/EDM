void S12S18_chi2NDF_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8762,0.1459973,3032.589,2.502927);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1174[22] = {
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
   Double_t Graph0_fy1174[22] = {
   0.3200824,
   0.9488161,
   0.9327875,
   0.8749103,
   1.259321,
   1.194675,
   0.9449285,
   1.220698,
   0.8163687,
   0.7486605,
   1.190697,
   0.7856926,
   1.321179,
   0.4686363,
   0.6817694,
   0.9835836,
   1.017771,
   1.609687,
   0.6525677,
   0.8595522,
   1.488932,
   2.201132};
   Double_t Graph0_fex1174[22] = {
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
   Double_t Graph0_fey1174[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1174,Graph0_fy1174,Graph0_fex1174,Graph0_fey1174);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01174 = new TH1F("Graph_Graph01174","S12S18",100,115.2092,3138.4);
   Graph_Graph01174->SetMinimum(0.3816903);
   Graph_Graph01174->SetMaximum(2.267234);
   Graph_Graph01174->SetDirectory(0);
   Graph_Graph01174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01174->SetLineColor(ci);
   Graph_Graph01174->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01174->GetXaxis()->SetRange(21,88);
   Graph_Graph01174->GetXaxis()->CenterTitle(true);
   Graph_Graph01174->GetXaxis()->SetLabelFont(42);
   Graph_Graph01174->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01174->GetXaxis()->SetTitleFont(42);
   Graph_Graph01174->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_Graph01174->GetYaxis()->CenterTitle(true);
   Graph_Graph01174->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01174->GetYaxis()->SetLabelFont(42);
   Graph_Graph01174->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01174->GetYaxis()->SetTitleFont(42);
   Graph_Graph01174->GetZaxis()->SetLabelFont(42);
   Graph_Graph01174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01174);
   
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
