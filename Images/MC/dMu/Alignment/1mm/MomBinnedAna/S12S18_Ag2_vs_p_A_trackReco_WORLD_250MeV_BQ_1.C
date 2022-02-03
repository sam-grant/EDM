void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6841,-0.0001976362,3407.769,3.577723e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[11] = {
   451.7306,
   653.0293,
   880.2377,
   1123.173,
   1370.874,
   1619.772,
   1866.644,
   2114.45,
   2362.788,
   2613.838,
   2788.194};
   Double_t Graph0_fy1173[11] = {
   2.927758e-06,
   2.149262e-07,
   -7.287568e-08,
   1.054169e-08,
   -2.807411e-08,
   -5.507048e-08,
   -1.743512e-07,
   -1.879078e-07,
   -8.17142e-08,
   1.451241e-06,
   -6.163379e-05};
   Double_t Graph0_fex1173[11] = {
   0.1368425,
   0.1165268,
   0.08467203,
   0.08307226,
   0.08894359,
   0.09893527,
   0.1159263,
   0.1464981,
   0.1927436,
   0.2339641,
   0.2969636};
   Double_t Graph0_fey1173[11] = {
   2.963263e-06,
   2.0083e-07,
   6.85498e-08,
   6.309262e-08,
   7.777149e-08,
   1.088745e-07,
   1.823675e-07,
   3.866232e-07,
   9.554817e-07,
   2.095084e-06,
   5.560138e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18_",100,217.904,3022.181);
   Graph_Graph01173->SetMinimum(-0.0001742948);
   Graph_Graph01173->SetMaximum(1.243589e-05);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(0,101);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
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
