void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0221,-2.725217e-06,3510.199,2.446423e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1220[12] = {
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
   Double_t Graph0_fy1220[12] = {
   8.134246e-06,
   1.986437e-07,
   3.511588e-09,
   -2.055624e-09,
   -2.111832e-09,
   1.423143e-09,
   1.880867e-09,
   5.800214e-09,
   4.964275e-09,
   2.47633e-08,
   -8.192873e-09,
   1.577124e-07};
   Double_t Graph0_fex1220[12] = {
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
   Double_t Graph0_fey1220[12] = {
   7.056139e-06,
   1.155265e-08,
   2.233182e-09,
   1.882133e-09,
   1.955684e-09,
   2.158146e-09,
   2.56425e-09,
   3.386862e-09,
   5.131609e-09,
   9.150718e-09,
   2.069178e-08,
   1.121906e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1220,Graph0_fy1220,Graph0_fex1220,Graph0_fey1220);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01220 = new TH1F("Graph_Graph01220","S0S12S18_",100,0,3089.284);
   Graph_Graph01220->SetMinimum(-6.271693e-09);
   Graph_Graph01220->SetMaximum(2.174529e-05);
   Graph_Graph01220->SetDirectory(0);
   Graph_Graph01220->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01220->SetLineColor(ci);
   Graph_Graph01220->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01220->GetXaxis()->SetRange(1,101);
   Graph_Graph01220->GetXaxis()->CenterTitle(true);
   Graph_Graph01220->GetXaxis()->SetLabelFont(42);
   Graph_Graph01220->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01220->GetXaxis()->SetTitleFont(42);
   Graph_Graph01220->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01220->GetYaxis()->CenterTitle(true);
   Graph_Graph01220->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01220->GetYaxis()->SetLabelFont(42);
   Graph_Graph01220->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01220->GetYaxis()->SetTitleFont(42);
   Graph_Graph01220->GetZaxis()->SetLabelFont(42);
   Graph_Graph01220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01220->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01220);
   
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
