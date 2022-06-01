void S0_Ag2_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9161,-4.368588,3392.245,1.080683);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[12] = {
   110.482,
   435.4285,
   631.2811,
   875.7082,
   1124.336,
   1373.612,
   1622.589,
   1871.451,
   2120.168,
   2367.803,
   2613.44,
   2835.746};
   Double_t Graph0_fy1061[12] = {
   -1.904204,
   0.1151421,
   -0.08548628,
   -0.0216368,
   -0.02906618,
   0.006460321,
   0.00179132,
   -0.006446094,
   -0.01563727,
   0.007030741,
   6.819739e-05,
   -1.636902e-05};
   Double_t Graph0_fex1061[12] = {
   1.857077,
   0.056166,
   0.04715544,
   0.04495869,
   0.04507164,
   0.04614307,
   0.04839848,
   0.05191887,
   0.05731782,
   0.06582408,
   0.08079891,
   0.1167379};
   Double_t Graph0_fey1061[12] = {
   1.556172,
   0.05732943,
   0.02608024,
   0.02019963,
   0.01701328,
   0.01481716,
   0.01335007,
   0.01231858,
   0.01166878,
   0.01143672,
   0.0116376,
   0.01491115};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,0,3108.587);
   Graph_Graph01061->SetMinimum(-3.823661);
   Graph_Graph01061->SetMaximum(0.5357563);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(1,97);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
