void S0S12S18_full_c_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(197,-1.742425,2003,0.2554933);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1341[7] = {
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700};
   Double_t Graph0_fy1341[7] = {
   -1.367564,
   -0.4379676,
   -0.2722174,
   -0.2560603,
   -0.1559845,
   -0.1571563,
   -0.09658081};
   Double_t Graph0_fex1341[7] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1341[7] = {
   0.04187403,
   0.03665944,
   0.03172903,
   0.02776519,
   0.02439318,
   0.02152017,
   0.01908781};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1341,Graph0_fy1341,Graph0_fex1341,Graph0_fey1341);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01341 = new TH1F("Graph_Graph01341","S0S12S18",100,260,1940);
   Graph_Graph01341->SetMinimum(-1.542633);
   Graph_Graph01341->SetMaximum(0.05570153);
   Graph_Graph01341->SetDirectory(0);
   Graph_Graph01341->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01341->SetLineColor(ci);
   Graph_Graph01341->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01341->GetXaxis()->SetRange(8,93);
   Graph_Graph01341->GetXaxis()->CenterTitle(true);
   Graph_Graph01341->GetXaxis()->SetLabelFont(42);
   Graph_Graph01341->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01341->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01341->GetXaxis()->SetTitleFont(42);
   Graph_Graph01341->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01341->GetYaxis()->CenterTitle(true);
   Graph_Graph01341->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01341->GetYaxis()->SetLabelFont(42);
   Graph_Graph01341->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01341->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01341->GetYaxis()->SetTitleFont(42);
   Graph_Graph01341->GetZaxis()->SetLabelFont(42);
   Graph_Graph01341->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01341->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01341);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
