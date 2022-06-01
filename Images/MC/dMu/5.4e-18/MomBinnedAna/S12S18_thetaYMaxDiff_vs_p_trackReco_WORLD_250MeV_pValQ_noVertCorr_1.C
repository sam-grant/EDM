void S12S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5156,168.7003,3406.64,187.3856);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1188[12] = {
   188.5023,
   430.658,
   629.9831,
   874.0428,
   1123.04,
   1372.476,
   1621.754,
   1870.356,
   2119.083,
   2366.832,
   2612.557,
   2826.056};
   Double_t Graph0_fy1188[12] = {
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   182.6459,
   183.0142,
   181.5412,
   181.5412,
   172.3353,
   177.1224};
   Double_t Graph0_fex1188[12] = {
   0.3182369,
   0.03264543,
   0.0264061,
   0.0261527,
   0.0272132,
   0.02867602,
   0.03067767,
   0.03369066,
   0.03820728,
   0.04498019,
   0.05686534,
   0.07229706};
   Double_t Graph0_fey1188[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1188,Graph0_fy1188,Graph0_fex1188,Graph0_fey1188);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01188 = new TH1F("Graph_Graph01188","S12S18_",100,0,3089.923);
   Graph_Graph01188->SetMinimum(170.5688);
   Graph_Graph01188->SetMaximum(185.5171);
   Graph_Graph01188->SetDirectory(0);
   Graph_Graph01188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01188->SetLineColor(ci);
   Graph_Graph01188->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01188->GetXaxis()->SetRange(1,98);
   Graph_Graph01188->GetXaxis()->CenterTitle(true);
   Graph_Graph01188->GetXaxis()->SetLabelFont(42);
   Graph_Graph01188->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01188->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01188->GetXaxis()->SetTitleFont(42);
   Graph_Graph01188->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01188->GetYaxis()->CenterTitle(true);
   Graph_Graph01188->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01188->GetYaxis()->SetLabelFont(42);
   Graph_Graph01188->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01188->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01188->GetYaxis()->SetTitleFont(42);
   Graph_Graph01188->GetZaxis()->SetLabelFont(42);
   Graph_Graph01188->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01188->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01188);
   
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
