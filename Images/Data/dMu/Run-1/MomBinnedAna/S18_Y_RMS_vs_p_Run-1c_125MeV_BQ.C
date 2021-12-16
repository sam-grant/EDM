void S18_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:17:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.5205,8.665616,3027.918,20.82217);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1121[22] = {
   367.0173,
   457.2104,
   570.0374,
   694.4612,
   815.6827,
   938.5171,
   1062.885,
   1188.2,
   1312.605,
   1435.72,
   1562.001,
   1685.025,
   1810.514,
   1934.906,
   2060.262,
   2184.773,
   2308.971,
   2433.427,
   2559.674,
   2677.991,
   2781.684,
   2884.375};
   Double_t Graph0_fy1121[22] = {
   13.83267,
   13.48719,
   12.8442,
   12.5958,
   12.58289,
   12.55649,
   12.53697,
   12.51132,
   12.50481,
   12.50847,
   12.53046,
   12.5258,
   12.50283,
   12.44545,
   12.40248,
   12.3731,
   12.35976,
   12.35136,
   12.43982,
   12.66921,
   13.54163,
   18.46722};
   Double_t Graph0_fex1121[22] = {
   0.2151465,
   0.1079987,
   0.0715069,
   0.05014894,
   0.04063452,
   0.03685518,
   0.03488971,
   0.03392339,
   0.03470107,
   0.03500905,
   0.03780692,
   0.04004255,
   0.04550979,
   0.04999256,
   0.05762843,
   0.06384773,
   0.07415466,
   0.08977885,
   0.1061248,
   0.1233522,
   0.2631774,
   1.230174};
   Double_t Graph0_fey1121[22] = {
   0.3286051,
   0.0340126,
   0.01836089,
   0.0126064,
   0.01010267,
   0.009066404,
   0.008616693,
   0.008360597,
   0.008463111,
   0.008637007,
   0.009276059,
   0.009885008,
   0.01114631,
   0.0122486,
   0.01396291,
   0.01552309,
   0.0180119,
   0.02177723,
   0.0259404,
   0.03265498,
   0.09817932,
   2.091};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1121,Graph0_fy1121,Graph0_fex1121,Graph0_fey1121);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01121 = new TH1F("Graph_Graph01121","S18",100,114.9218,3137.486);
   Graph_Graph01121->SetMinimum(9.881272);
   Graph_Graph01121->SetMaximum(19.60652);
   Graph_Graph01121->SetDirectory(0);
   Graph_Graph01121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01121->SetLineColor(ci);
   Graph_Graph01121->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01121->GetXaxis()->SetRange(22,88);
   Graph_Graph01121->GetXaxis()->CenterTitle(true);
   Graph_Graph01121->GetXaxis()->SetLabelFont(42);
   Graph_Graph01121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01121->GetXaxis()->SetTitleFont(42);
   Graph_Graph01121->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01121->GetYaxis()->CenterTitle(true);
   Graph_Graph01121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01121->GetYaxis()->SetLabelFont(42);
   Graph_Graph01121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01121->GetYaxis()->SetTitleFont(42);
   Graph_Graph01121->GetZaxis()->SetLabelFont(42);
   Graph_Graph01121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01121);
   
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
