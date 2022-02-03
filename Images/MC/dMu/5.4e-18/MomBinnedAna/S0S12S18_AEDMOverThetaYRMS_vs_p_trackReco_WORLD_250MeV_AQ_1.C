void S0S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0221,-0.003207653,3510.199,0.0194209);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1229[12] = {
   194.7094,
   428.8875,
   630.8811,
   875.2126,
   1123.934,
   1373.236,
   1622.304,
   1870.749,
   2119.247,
   2366.839,
   2612.635,
   2826.058};
   Double_t Graph0_fy1229[12] = {
   0.001362262,
   0.003383151,
   0.005003424,
   0.007769453,
   0.008302729,
   0.01020316,
   0.01136454,
   0.01269738,
   0.01223865,
   0.01164442,
   0.01432713,
   0.0101028};
   Double_t Graph0_fex1229[12] = {
   0.1972581,
   0.0343386,
   0.0267645,
   0.02571254,
   0.02611506,
   0.02696982,
   0.02841741,
   0.03082187,
   0.0346825,
   0.0407705,
   0.05143143,
   0.06541943};
   Double_t Graph0_fey1229[12] = {
   0.007848322,
   0.0009317611,
   0.0005330718,
   0.0005049288,
   0.0005119572,
   0.0005287041,
   0.0005573759,
   0.0006051496,
   0.0006818575,
   0.0008039785,
   0.0010229,
   0.001753957};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1229,Graph0_fy1229,Graph0_fex1229,Graph0_fey1229);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01229 = new TH1F("Graph_Graph01229","S0S12S18_",100,0,3089.284);
   Graph_Graph01229->SetMinimum(-0.0009447969);
   Graph_Graph01229->SetMaximum(0.01715805);
   Graph_Graph01229->SetDirectory(0);
   Graph_Graph01229->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01229->SetLineColor(ci);
   Graph_Graph01229->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01229->GetXaxis()->SetRange(1,101);
   Graph_Graph01229->GetXaxis()->CenterTitle(true);
   Graph_Graph01229->GetXaxis()->SetLabelFont(42);
   Graph_Graph01229->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01229->GetXaxis()->SetTitleFont(42);
   Graph_Graph01229->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01229->GetYaxis()->CenterTitle(true);
   Graph_Graph01229->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01229->GetYaxis()->SetLabelFont(42);
   Graph_Graph01229->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01229->GetYaxis()->SetTitleFont(42);
   Graph_Graph01229->GetZaxis()->SetLabelFont(42);
   Graph_Graph01229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01229);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
