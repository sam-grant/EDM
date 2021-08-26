void S0S12S18_full_A_vs_p_trackReco_WORLD_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Aug 24 13:23:56 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-1.258618,3605.25,0.6400464);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1170[15] = {
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
   Double_t Graph0_fy1170[15] = {
   2.485223e-11,
   -0.3092858,
   -0.02338306,
   -0.2026758,
   -0.171723,
   -0.07882328,
   -0.156367,
   -0.1625815,
   -0.1261593,
   -0.1690622,
   -0.1010522,
   -0.1207584,
   -0.09801589,
   -0.0781955,
   0.1739065};
   Double_t Graph0_fex1170[15] = {
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
   Double_t Graph0_fey1170[15] = {
   2.711601e-12,
   0.6328881,
   0.1139285,
   0.05519211,
   0.03871168,
   0.03307848,
   0.0306101,
   0.02919544,
   0.02822807,
   0.02854121,
   0.02965685,
   0.03089844,
   0.03197014,
   0.03239707,
   0.108415};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1170,Graph0_fy1170,Graph0_fex1170,Graph0_fey1170);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01170 = new TH1F("Graph_Graph01170","S0S12S18",100,0,3300);
   Graph_Graph01170->SetMinimum(-1.068752);
   Graph_Graph01170->SetMaximum(0.4501799);
   Graph_Graph01170->SetDirectory(0);
   Graph_Graph01170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01170->SetLineColor(ci);
   Graph_Graph01170->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01170->GetXaxis()->SetRange(0,97);
   Graph_Graph01170->GetXaxis()->CenterTitle(true);
   Graph_Graph01170->GetXaxis()->SetLabelFont(42);
   Graph_Graph01170->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01170->GetXaxis()->SetTitleFont(42);
   Graph_Graph01170->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01170->GetYaxis()->CenterTitle(true);
   Graph_Graph01170->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01170->GetYaxis()->SetLabelFont(42);
   Graph_Graph01170->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01170->GetYaxis()->SetTitleFont(42);
   Graph_Graph01170->GetZaxis()->SetLabelFont(42);
   Graph_Graph01170->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01170);
   
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
