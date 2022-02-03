void S0S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.4_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:36:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4033,-1.93004e-06,3407.53,1.744068e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1216[11] = {
   451.8566,
   653.3028,
   880.3056,
   1123.079,
   1371.077,
   1620.197,
   1866.984,
   2115.419,
   2362.991,
   2613.824,
   2788.2};
   Double_t Graph0_fy1216[11] = {
   4.225951e-07,
   2.814368e-08,
   9.596604e-09,
   8.778992e-09,
   1.071952e-08,
   1.447871e-08,
   2.285613e-08,
   4.290669e-08,
   9.014109e-08,
   1.712262e-07,
   3.838512e-06};
   Double_t Graph0_fex1216[11] = {
   0.07208923,
   0.06091129,
   0.04412931,
   0.04310084,
   0.0460258,
   0.05089799,
   0.0593305,
   0.0737244,
   0.09523859,
   0.1166572,
   0.1421294};
   Double_t Graph0_fey1216[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1216,Graph0_fy1216,Graph0_fex1216,Graph0_fey1216);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01216 = new TH1F("Graph_Graph01216","S0S12S18_",100,218.1288,3021.998);
   Graph_Graph01216->SetMinimum(7.031489e-09);
   Graph_Graph01216->SetMaximum(1.55036e-05);
   Graph_Graph01216->SetDirectory(0);
   Graph_Graph01216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01216->SetLineColor(ci);
   Graph_Graph01216->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01216->GetXaxis()->SetRange(0,101);
   Graph_Graph01216->GetXaxis()->CenterTitle(true);
   Graph_Graph01216->GetXaxis()->SetLabelFont(42);
   Graph_Graph01216->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01216->GetXaxis()->SetTitleFont(42);
   Graph_Graph01216->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01216->GetYaxis()->CenterTitle(true);
   Graph_Graph01216->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01216->GetYaxis()->SetLabelFont(42);
   Graph_Graph01216->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01216->GetYaxis()->SetTitleFont(42);
   Graph_Graph01216->GetZaxis()->SetLabelFont(42);
   Graph_Graph01216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01216->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01216);
   
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
