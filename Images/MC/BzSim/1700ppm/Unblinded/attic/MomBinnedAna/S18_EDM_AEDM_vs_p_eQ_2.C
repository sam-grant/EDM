void S18_EDM_AEDM_vs_p_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 11:49:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-377.2,-0.4531448,3394.8,0.2019499);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[14] = {
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
   Double_t Graph0_fy1106[14] = {
   -0.1887924,
   0.03810151,
   0.00812832,
   0.03029185,
   -0.08099077,
   -0.03463428,
   -0.02888397,
   0.01545309,
   0.01480588,
   -0.03476661,
   0.02703314,
   -0.008400433,
   0.02079221,
   -0.08275464};
   Double_t Graph0_fex1106[14] = {
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
   Double_t Graph0_fey1106[14] = {
   0.1551699,
   0.0546659,
   0.04088789,
   0.03570324,
   0.03231898,
   0.0297426,
   0.02765595,
   0.02610335,
   0.02508197,
   0.02446149,
   0.02422735,
   0.02448409,
   0.02559033,
   0.0371327};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S18",100,0,3280);
   Graph_Graph01106->SetMinimum(-0.3876354);
   Graph_Graph01106->SetMaximum(0.1364404);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01106->GetXaxis()->SetRange(1,92);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
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
