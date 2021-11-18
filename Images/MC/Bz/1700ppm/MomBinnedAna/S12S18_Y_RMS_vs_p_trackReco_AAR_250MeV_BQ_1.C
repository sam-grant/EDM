void S12S18_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.5325,12.07906,2741.694,13.41184);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[11] = {
   451.9711,
   653.0379,
   880.3489,
   1123.124,
   1371.04,
   1620.362,
   1866.905,
   2115.04,
   2362.543,
   2613.853,
   2788.072};
   Double_t Graph0_fy1059[11] = {
   13.14145,
   13.03247,
   12.94369,
   12.88413,
   12.80213,
   12.80194,
   12.77307,
   12.65679,
   12.60773,
   12.72843,
   12.4076};
   Double_t Graph0_fex1059[11] = {
   0.1712023,
   0.1448381,
   0.1045416,
   0.1021807,
   0.1094244,
   0.1207379,
   0.1418879,
   0.1772384,
   0.2317095,
   0.2829099,
   0.3553794};
   Double_t Graph0_fey1059[11] = {
   0.0482542,
   0.01932479,
   0.01337973,
   0.01293179,
   0.01376471,
   0.01523939,
   0.01786557,
   0.02213287,
   0.02883804,
   0.03650488,
   0.10641};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S12S18_",100,218.1372,3022.09);
   Graph_Graph01059->SetMinimum(12.21234);
   Graph_Graph01059->SetMaximum(13.27856);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->SetRange(19,82);
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
