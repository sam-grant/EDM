void S18_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 21 14:34:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500.0625,2.383869,2744.438,26.63563);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1040[12] = {
   6.674575,
   14.26253,
   17.20257,
   19.73636,
   21.36362,
   22.2766,
   22.5755,
   22.26893,
   21.30507,
   19.64251,
   16.96021,
   13.27622};
   Double_t Graph0_fex1040[12] = {
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
   0,
   0};
   Double_t Graph0_fey1040[12] = {
   0.2487467,
   0.01497844,
   0.01085788,
   0.01239878,
   0.01436453,
   0.01622015,
   0.01816445,
   0.02064993,
   0.02396972,
   0.02858084,
   0.03202492,
   0.04166968};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S18_",100,0,3150);
   Graph_Graph01040->SetMinimum(4.809045);
   Graph_Graph01040->SetMaximum(24.21045);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01040->GetXaxis()->SetRange(24,80);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV]");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
