void S18_full_c_vs_p_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Aug 30 07:30:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-2.559167,3456.75,0.4336013);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1051[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1051[6] = {
   -1.979266,
   -0.4673239,
   -0.1921063,
   -0.1450994,
   -0.08535157,
   -0.100952};
   Double_t Graph0_fex1051[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1051[6] = {
   0.08110653,
   0.02580134,
   0.0202137,
   0.01838493,
   0.02015805,
   0.02545395};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1051,Graph0_fy1051,Graph0_fex1051,Graph0_fey1051);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01051 = new TH1F("Graph_Graph01051","S18",100,0,3300);
   Graph_Graph01051->SetMinimum(-2.25989);
   Graph_Graph01051->SetMaximum(0.1343244);
   Graph_Graph01051->SetDirectory(0);
   Graph_Graph01051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01051->SetLineColor(ci);
   Graph_Graph01051->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01051->GetXaxis()->SetRange(0,93);
   Graph_Graph01051->GetXaxis()->CenterTitle(true);
   Graph_Graph01051->GetXaxis()->SetLabelFont(42);
   Graph_Graph01051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01051->GetXaxis()->SetTitleFont(42);
   Graph_Graph01051->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01051->GetYaxis()->CenterTitle(true);
   Graph_Graph01051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01051->GetYaxis()->SetLabelFont(42);
   Graph_Graph01051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01051->GetYaxis()->SetTitleFont(42);
   Graph_Graph01051->GetZaxis()->SetLabelFont(42);
   Graph_Graph01051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01051);
   
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
