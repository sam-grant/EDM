void S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5156,10.08864,3406.64,27.56384);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1183[12] = {
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
   Double_t Graph0_fy1183[12] = {
   24.49855,
   13.96941,
   13.3166,
   13.12216,
   13.02262,
   13.00483,
   13.04293,
   13.16635,
   13.37076,
   13.734,
   14.4436,
   15.70241};
   Double_t Graph0_fex1183[12] = {
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
   Double_t Graph0_fey1183[12] = {
   0.1527524,
   0.006394392,
   0.003504451,
   0.003368794,
   0.003474585,
   0.003657357,
   0.003928857,
   0.004356479,
   0.005021622,
   0.006095991,
   0.008179884,
   0.01529438};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1183,Graph0_fy1183,Graph0_fex1183,Graph0_fey1183);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01183 = new TH1F("Graph_Graph01183","S12S18_",100,0,3089.923);
   Graph_Graph01183->SetMinimum(11.83616);
   Graph_Graph01183->SetMaximum(25.81632);
   Graph_Graph01183->SetDirectory(0);
   Graph_Graph01183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01183->SetLineColor(ci);
   Graph_Graph01183->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01183->GetXaxis()->SetRange(1,98);
   Graph_Graph01183->GetXaxis()->CenterTitle(true);
   Graph_Graph01183->GetXaxis()->SetLabelFont(42);
   Graph_Graph01183->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01183->GetXaxis()->SetTitleFont(42);
   Graph_Graph01183->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01183->GetYaxis()->CenterTitle(true);
   Graph_Graph01183->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01183->GetYaxis()->SetLabelFont(42);
   Graph_Graph01183->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01183->GetYaxis()->SetTitleFont(42);
   Graph_Graph01183->GetZaxis()->SetLabelFont(42);
   Graph_Graph01183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01183);
   
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
