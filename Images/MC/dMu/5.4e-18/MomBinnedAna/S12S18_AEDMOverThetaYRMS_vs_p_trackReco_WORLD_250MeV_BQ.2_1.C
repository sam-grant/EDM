void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3826,-0.02381843,3406.967,0.02640001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[11] = {
   451.8173,
   653.2882,
   880.4177,
   1123.064,
   1371.036,
   1619.971,
   1866.583,
   2115.069,
   2362.842,
   2613.192,
   2787.647};
   Double_t Graph0_fy1182[11] = {
   -0.002904601,
   0.004494032,
   0.006234366,
   0.008237448,
   0.008827144,
   0.01026296,
   0.01259412,
   0.008566293,
   0.008707494,
   0.01793277,
   0.006022229};
   Double_t Graph0_fex1182[11] = {
   0.11314,
   0.09526383,
   0.06881198,
   0.06717124,
   0.07180835,
   0.07951552,
   0.09313616,
   0.1168567,
   0.1525684,
   0.1856104,
   0.2333281};
   Double_t Graph0_fey1182[11] = {
   -0.004837407,
   0.001952833,
   0.00136064,
   0.001319655,
   0.001410629,
   0.001563083,
   0.001840151,
   0.002303604,
   0.003008091,
   0.003787772,
   0.01119474};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S12S18_",100,218.0866,3021.498);
   Graph_Graph01182->SetMinimum(-0.01879659);
   Graph_Graph01182->SetMaximum(0.02137816);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->SetRange(0,101);
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01182->GetYaxis()->CenterTitle(true);
   Graph_Graph01182->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01182->GetYaxis()->SetLabelFont(42);
   Graph_Graph01182->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01182->GetYaxis()->SetTitleFont(42);
   Graph_Graph01182->GetZaxis()->SetLabelFont(42);
   Graph_Graph01182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01182);
   
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
