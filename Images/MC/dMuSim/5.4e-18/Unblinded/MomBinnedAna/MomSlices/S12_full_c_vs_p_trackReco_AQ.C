void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-3.799565,3605.25,0.7684034);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1147[15] = {
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
   Double_t Graph0_fy1147[15] = {
   -2.183933,
   -2.56042,
   -1.360551,
   -0.6608705,
   -0.4262416,
   -0.273817,
   -0.2534928,
   -0.23017,
   -0.2177872,
   -0.1628012,
   -0.1074285,
   -0.1390242,
   -0.1231729,
   -0.1382743,
   -0.04226731};
   Double_t Graph0_fex1147[15] = {
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
   Double_t Graph0_fey1147[15] = {
   0.8543037,
   0.159062,
   0.05574933,
   0.04316291,
   0.03825972,
   0.03537965,
   0.0330597,
   0.03125227,
   0.03027792,
   0.03006792,
   0.03090594,
   0.03273123,
   0.03569093,
   0.0368555,
   0.04934266};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1147,Graph0_fy1147,Graph0_fex1147,Graph0_fey1147);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01147 = new TH1F("Graph_Graph01147","S12",100,0,3300);
   Graph_Graph01147->SetMinimum(-3.342768);
   Graph_Graph01147->SetMaximum(0.3116066);
   Graph_Graph01147->SetDirectory(0);
   Graph_Graph01147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01147->SetLineColor(ci);
   Graph_Graph01147->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01147->GetXaxis()->SetRange(0,97);
   Graph_Graph01147->GetXaxis()->CenterTitle(true);
   Graph_Graph01147->GetXaxis()->SetLabelFont(42);
   Graph_Graph01147->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01147->GetXaxis()->SetTitleFont(42);
   Graph_Graph01147->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01147->GetYaxis()->CenterTitle(true);
   Graph_Graph01147->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01147->GetYaxis()->SetLabelFont(42);
   Graph_Graph01147->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01147->GetYaxis()->SetTitleFont(42);
   Graph_Graph01147->GetZaxis()->SetLabelFont(42);
   Graph_Graph01147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01147);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
