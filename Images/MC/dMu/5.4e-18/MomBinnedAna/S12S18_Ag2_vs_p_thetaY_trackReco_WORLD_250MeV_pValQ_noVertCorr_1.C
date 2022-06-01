void S12S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5156,-0.6617913,3406.64,0.3244811);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1178[12] = {
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
   Double_t Graph0_fy1178[12] = {
   -0.1686551,
   -0.1120542,
   -0.01481367,
   -0.04259205,
   -0.01989296,
   -0.01466382,
   -0.01424699,
   -0.004718114,
   -0.02137907,
   -0.01437455,
   0.001171961,
   -0.04503192};
   Double_t Graph0_fex1178[12] = {
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
   Double_t Graph0_fey1178[12] = {
   0.3287575,
   0.03008799,
   0.01444435,
   0.0116504,
   0.0102249,
   0.009214381,
   0.00853214,
   0.008133791,
   0.008009462,
   0.008150531,
   0.008771676,
   0.01279125};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1178,Graph0_fy1178,Graph0_fex1178,Graph0_fey1178);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01178 = new TH1F("Graph_Graph01178","S12S18_",100,0,3089.923);
   Graph_Graph01178->SetMinimum(-0.5631641);
   Graph_Graph01178->SetMaximum(0.2258539);
   Graph_Graph01178->SetDirectory(0);
   Graph_Graph01178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01178->SetLineColor(ci);
   Graph_Graph01178->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01178->GetXaxis()->SetRange(1,98);
   Graph_Graph01178->GetXaxis()->CenterTitle(true);
   Graph_Graph01178->GetXaxis()->SetLabelFont(42);
   Graph_Graph01178->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01178->GetXaxis()->SetTitleFont(42);
   Graph_Graph01178->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01178->GetYaxis()->CenterTitle(true);
   Graph_Graph01178->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01178->GetYaxis()->SetLabelFont(42);
   Graph_Graph01178->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01178->GetYaxis()->SetTitleFont(42);
   Graph_Graph01178->GetZaxis()->SetLabelFont(42);
   Graph_Graph01178->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01178);
   
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
