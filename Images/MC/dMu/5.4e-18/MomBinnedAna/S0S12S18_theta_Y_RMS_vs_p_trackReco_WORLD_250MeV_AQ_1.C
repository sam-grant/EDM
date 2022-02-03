void S0S12S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0221,-3.833644,3510.199,67.37456);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1221[12] = {
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
   Double_t Graph0_fy1221[12] = {
   40.92585,
   33.54745,
   27.84082,
   23.05112,
   19.51502,
   16.72734,
   14.44895,
   12.51204,
   10.78449,
   9.161562,
   7.597886,
   6.371911};
   Double_t Graph0_fex1221[12] = {
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
   Double_t Graph0_fey1221[12] = {
   0.1611229,
   0.01563161,
   0.007429398,
   0.0058229,
   0.004998975,
   0.00442568,
   0.004030308,
   0.003788054,
   0.003678437,
   0.003685173,
   0.00388597,
   0.005582694};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1221,Graph0_fy1221,Graph0_fex1221,Graph0_fey1221);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01221 = new TH1F("Graph_Graph01221","S0S12S18_",100,0,3089.284);
   Graph_Graph01221->SetMinimum(3.287177);
   Graph_Graph01221->SetMaximum(60.25374);
   Graph_Graph01221->SetDirectory(0);
   Graph_Graph01221->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01221->SetLineColor(ci);
   Graph_Graph01221->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01221->GetXaxis()->SetRange(1,101);
   Graph_Graph01221->GetXaxis()->CenterTitle(true);
   Graph_Graph01221->GetXaxis()->SetLabelFont(42);
   Graph_Graph01221->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01221->GetXaxis()->SetTitleFont(42);
   Graph_Graph01221->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01221->GetYaxis()->CenterTitle(true);
   Graph_Graph01221->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01221->GetYaxis()->SetLabelFont(42);
   Graph_Graph01221->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01221->GetYaxis()->SetTitleFont(42);
   Graph_Graph01221->GetZaxis()->SetLabelFont(42);
   Graph_Graph01221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01221->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01221);
   
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
