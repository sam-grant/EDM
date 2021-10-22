void S0_full_A_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:36:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.8112764,3411.2,1.097654);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[14] = {
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
   Double_t Graph0_fy1040[14] = {
   0.1431889,
   0.1530589,
   0.1076954,
   0.1635199,
   0.1154475,
   0.2142873,
   0.1637655,
   0.21312,
   0.08709737,
   0.1322398,
   0.07156583,
   0.07218776,
   0.0397397,
   -0.0711077};
   Double_t Graph0_fex1040[14] = {
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
   Double_t Graph0_fey1040[14] = {
   0.6363102,
   0.1147824,
   0.0556607,
   0.03930814,
   0.03361493,
   0.0310503,
   0.02958564,
   0.02848133,
   0.02842799,
   0.02913512,
   0.02971209,
   0.03073831,
   0.03083391,
   0.09439112};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S0",100,0,3280);
   Graph_Graph01040->SetMinimum(-0.6203833);
   Graph_Graph01040->SetMaximum(0.9067611);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01040->GetXaxis()->SetRange(6,93);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM} [mrad]");
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
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
