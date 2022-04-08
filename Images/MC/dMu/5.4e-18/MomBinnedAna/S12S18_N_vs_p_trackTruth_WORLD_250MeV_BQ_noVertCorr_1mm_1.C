void S12S18_N_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:55:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8606,-164153.6,3379.773,1654547);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1177[11] = {
   451.7518,
   653.2229,
   880.2632,
   1123.071,
   1371.013,
   1619.993,
   1866.917,
   2114.638,
   2362.809,
   2614.031,
   2791.098};
   Double_t Graph0_fy1177[11] = {
   102314,
   618158,
   1266973,
   1340587,
   1166482,
   946347,
   689739,
   437387,
   253080,
   159763,
   19685};
   Double_t Graph0_fex1177[11] = {
   0.1035381,
   0.08766436,
   0.06353574,
   0.06219258,
   0.06665977,
   0.07378829,
   0.08642576,
   0.1084152,
   0.1425546,
   0.1739441,
   0.2423387};
   Double_t Graph0_fey1177[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1177,Graph0_fy1177,Graph0_fex1177,Graph0_fey1177);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01177 = new TH1F("Graph_Graph01177","S12S18_",100,217.6791,3025.309);
   Graph_Graph01177->SetMinimum(17716.5);
   Graph_Graph01177->SetMaximum(1472677);
   Graph_Graph01177->SetDirectory(0);
   Graph_Graph01177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01177->SetLineColor(ci);
   Graph_Graph01177->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01177->GetXaxis()->SetRange(0,100);
   Graph_Graph01177->GetXaxis()->CenterTitle(true);
   Graph_Graph01177->GetXaxis()->SetLabelFont(42);
   Graph_Graph01177->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01177->GetXaxis()->SetTitleFont(42);
   Graph_Graph01177->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01177->GetYaxis()->CenterTitle(true);
   Graph_Graph01177->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01177->GetYaxis()->SetLabelFont(42);
   Graph_Graph01177->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01177->GetYaxis()->SetTitleFont(42);
   Graph_Graph01177->GetZaxis()->SetLabelFont(42);
   Graph_Graph01177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01177);
   
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
