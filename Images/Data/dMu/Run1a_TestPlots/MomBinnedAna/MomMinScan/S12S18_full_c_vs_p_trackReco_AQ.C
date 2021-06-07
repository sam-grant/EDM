void S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:27 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.3032939,3468.85,0.1988392);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1407[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1407[15] = {
   -0.0635261,
   -0.06365381,
   -0.02370394,
   0.02266533,
   -0.03553004,
   -0.1756706,
   -0.2157314,
   -0.185455,
   -0.1486189,
   -0.1134171,
   -0.0840971,
   -0.04415537,
   0.00417149,
   0.06898061,
   0.09551543};
   Double_t Graph0_fex1407[15] = {
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
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1407[15] = {
   0.00393265,
   0.003932559,
   0.003914338,
   0.003819886,
   0.003757781,
   0.003783033,
   0.003873641,
   0.004041454,
   0.004301119,
   0.004707988,
   0.005308977,
   0.006232713,
   0.007790564,
   0.01024074,
   0.01963493};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1407,Graph0_fy1407,Graph0_fex1407,Graph0_fey1407);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01407 = new TH1F("Graph_Graph01407","S12S18",100,0,3080);
   Graph_Graph01407->SetMinimum(-0.2530806);
   Graph_Graph01407->SetMaximum(0.1486259);
   Graph_Graph01407->SetDirectory(0);
   Graph_Graph01407->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01407->SetLineColor(ci);
   Graph_Graph01407->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01407->GetXaxis()->SetRange(0,100);
   Graph_Graph01407->GetXaxis()->CenterTitle(true);
   Graph_Graph01407->GetXaxis()->SetLabelFont(42);
   Graph_Graph01407->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01407->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01407->GetXaxis()->SetTitleFont(42);
   Graph_Graph01407->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01407->GetYaxis()->CenterTitle(true);
   Graph_Graph01407->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01407->GetYaxis()->SetLabelFont(42);
   Graph_Graph01407->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01407->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01407->GetYaxis()->SetTitleFont(42);
   Graph_Graph01407->GetZaxis()->SetLabelFont(42);
   Graph_Graph01407->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01407);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
