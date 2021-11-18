void S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:29:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.6759,10.05771,2724.308,27.05847);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[12] = {
   175.3402,
   432.3653,
   628.4642,
   873.0148,
   1121.682,
   1371.448,
   1620.11,
   1868.09,
   2116.093,
   2363.253,
   2614.451,
   2826.106};
   Double_t Graph0_fy1059[12] = {
   23.94483,
   13.48685,
   13.10981,
   12.96428,
   12.8973,
   12.91318,
   12.99891,
   13.07753,
   13.11732,
   13.24344,
   13.32021,
   13.05766};
   Double_t Graph0_fex1059[12] = {
   0.5249826,
   0.04983601,
   0.0448855,
   0.04517505,
   0.04844682,
   0.05242811,
   0.05778019,
   0.06630119,
   0.07960463,
   0.1021572,
   0.1325112,
   0.1619192};
   Double_t Graph0_fey1059[12] = {
   0.2801763,
   0.009909253,
   0.005838374,
   0.005753652,
   0.006127437,
   0.006644251,
   0.007383371,
   0.008533024,
   0.01030044,
   0.01337837,
   0.01751547,
   0.02864115};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S12S18_",100,0,3091.413);
   Graph_Graph01059->SetMinimum(11.75779);
   Graph_Graph01059->SetMaximum(25.35839);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->SetRange(25,81);
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
