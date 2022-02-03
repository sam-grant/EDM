void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0221,-0.0002287977,3510.199,0.001322586);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1228[12] = {
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
   Double_t Graph0_fy1228[12] = {
   0.0003034096,
   0.0006176637,
   0.0007580893,
   0.000974661,
   0.0008817813,
   0.0009288228,
   0.000893633,
   0.0008645962,
   0.0007182968,
   0.0005805752,
   0.0005924109,
   0.0003538801};
   Double_t Graph0_fex1228[12] = {
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
   Double_t Graph0_fey1228[12] = {
   0.001748017,
   0.0001701209,
   8.079621e-05,
   6.340195e-05,
   5.442873e-05,
   4.820074e-05,
   4.390082e-05,
   4.127812e-05,
   4.006981e-05,
   4.011837e-05,
   4.232801e-05,
   6.144503e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1228,Graph0_fy1228,Graph0_fex1228,Graph0_fey1228);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01228 = new TH1F("Graph_Graph01228","S0S12S18_",100,0,3089.284);
   Graph_Graph01228->SetMinimum(-7.365933e-05);
   Graph_Graph01228->SetMaximum(0.001167448);
   Graph_Graph01228->SetDirectory(0);
   Graph_Graph01228->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01228->SetLineColor(ci);
   Graph_Graph01228->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01228->GetXaxis()->SetRange(1,101);
   Graph_Graph01228->GetXaxis()->CenterTitle(true);
   Graph_Graph01228->GetXaxis()->SetLabelFont(42);
   Graph_Graph01228->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01228->GetXaxis()->SetTitleFont(42);
   Graph_Graph01228->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01228->GetYaxis()->CenterTitle(true);
   Graph_Graph01228->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01228->GetYaxis()->SetLabelFont(42);
   Graph_Graph01228->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01228->GetYaxis()->SetTitleFont(42);
   Graph_Graph01228->GetZaxis()->SetLabelFont(42);
   Graph_Graph01228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01228);
   
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
