void S0S12S18_eAEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 11:51:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.7815,-2.971533e-07,3380.88,2.722372e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1216[11] = {
   451.9673,
   653.3489,
   880.33,
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045,
   2613.562,
   2792.136};
   Double_t Graph0_fy1216[11] = {
   2.582112e-07,
   1.717729e-08,
   5.83382e-09,
   5.332483e-09,
   6.599029e-09,
   8.791342e-09,
   1.393235e-08,
   2.623839e-08,
   5.557152e-08,
   1.059481e-07,
   2.200866e-06};
   Double_t Graph0_fex1216[11] = {
   0.06119317,
   0.05168435,
   0.03738165,
   0.03651084,
   0.03897018,
   0.04308696,
   0.05035664,
   0.06256782,
   0.08122338,
   0.09940193,
   0.1408526};
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
   
   TH1F *Graph_Graph01216 = new TH1F("Graph_Graph01216","S0S12S18_",100,217.869,3026.313);
   Graph_Graph01216->SetMinimum(4.799235e-09);
   Graph_Graph01216->SetMaximum(2.420419e-06);
   Graph_Graph01216->SetDirectory(0);
   Graph_Graph01216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01216->SetLineColor(ci);
   Graph_Graph01216->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01216->GetXaxis()->SetRange(0,100);
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
