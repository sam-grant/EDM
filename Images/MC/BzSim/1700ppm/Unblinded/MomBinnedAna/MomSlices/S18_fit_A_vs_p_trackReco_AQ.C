void S18_fit_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:19:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.806345,3712.5,1.148408);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1198[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1198[15] = {
   -0.8289689,
   -0.139251,
   0.1468018,
   0.05773904,
   0.2247161,
   0.1316894,
   0.1594638,
   0.167335,
   0.2151973,
   0.1341996,
   0.07394247,
   0.199183,
   0.1318677,
   0.05335722,
   -0.008723376};
   Double_t Graph0_fex1198[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1198[15] = {
   1.318251,
   0.2362007,
   0.07913964,
   0.06127779,
   0.05415034,
   0.05016545,
   0.04693761,
   0.04458902,
   0.04338138,
   0.04352494,
   0.04518294,
   0.0486496,
   0.05169086,
   0.05252828,
   0.07227588};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1198,Graph0_fy1198,Graph0_fex1198,Graph0_fey1198);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01198 = new TH1F("Graph_Graph01198","S18",100,0,3300);
   Graph_Graph01198->SetMinimum(-2.41087);
   Graph_Graph01198->SetMaximum(0.7529322);
   Graph_Graph01198->SetDirectory(0);
   Graph_Graph01198->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01198->SetLineColor(ci);
   Graph_Graph01198->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01198->GetXaxis()->CenterTitle(true);
   Graph_Graph01198->GetXaxis()->SetLabelFont(42);
   Graph_Graph01198->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01198->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01198->GetXaxis()->SetTitleFont(42);
   Graph_Graph01198->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01198->GetYaxis()->CenterTitle(true);
   Graph_Graph01198->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01198->GetYaxis()->SetLabelFont(42);
   Graph_Graph01198->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01198->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01198->GetYaxis()->SetTitleFont(42);
   Graph_Graph01198->GetZaxis()->SetLabelFont(42);
   Graph_Graph01198->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01198->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01198);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
