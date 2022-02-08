void S0S12S18_eAEDM_vs_p_A_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 15:00:20 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.9879,-4.175157e-07,3212.571,3.834283e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1166[6] = {
   451.5331,
   805.4564,
   1238.744,
   1725.082,
   2208.043,
   2633.959};
   Double_t Graph0_fy1166[6] = {
   1.119351e-06,
   1.460618e-08,
   9.558789e-09,
   1.78456e-08,
   5.93351e-08,
   4.004892e-07};
   Double_t Graph0_fex1166[6] = {
   0.1005982,
   0.09083834,
   0.08817913,
   0.1077158,
   0.1604039,
   0.1922119};
   Double_t Graph0_fey1166[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1166,Graph0_fy1166,Graph0_fex1166,Graph0_fey1166);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01166 = new TH1F("Graph_Graph01166","S0S12S18_",100,233.1606,2852.423);
   Graph_Graph01166->SetMinimum(7.664149e-09);
   Graph_Graph01166->SetMaximum(3.409103e-06);
   Graph_Graph01166->SetDirectory(0);
   Graph_Graph01166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01166->SetLineColor(ci);
   Graph_Graph01166->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01166->GetXaxis()->SetRange(0,101);
   Graph_Graph01166->GetXaxis()->CenterTitle(true);
   Graph_Graph01166->GetXaxis()->SetLabelFont(42);
   Graph_Graph01166->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01166->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01166->GetXaxis()->SetTitleFont(42);
   Graph_Graph01166->GetYaxis()->SetTitle("#deltaA_{EDM} / 500 MeV");
   Graph_Graph01166->GetYaxis()->CenterTitle(true);
   Graph_Graph01166->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01166->GetYaxis()->SetLabelFont(42);
   Graph_Graph01166->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01166->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01166->GetYaxis()->SetTitleFont(42);
   Graph_Graph01166->GetZaxis()->SetLabelFont(42);
   Graph_Graph01166->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01166);
   
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
