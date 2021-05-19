void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 18 00:07:40 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-1.703979,3456.75,0.8109327);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1358[15] = {
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
   Double_t Graph0_fy1358[15] = {
   -0.4465229,
   -0.1764085,
   0.1139971,
   0.08143227,
   0.2519833,
   0.1582454,
   0.1614682,
   0.178387,
   0.1757224,
   0.1722979,
   0.1253699,
   0.1723265,
   0.1350847,
   0.08811598,
   -0.007376401};
   Double_t Graph0_fex1358[15] = {
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
   Double_t Graph0_fey1358[15] = {
   0.8383037,
   0.1352431,
   0.04570566,
   0.03547325,
   0.03136754,
   0.02902322,
   0.02713111,
   0.02571586,
   0.0248201,
   0.0247737,
   0.02537859,
   0.02672002,
   0.02865168,
   0.02947653,
   0.04024553};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1358,Graph0_fy1358,Graph0_fex1358,Graph0_fey1358);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01358 = new TH1F("Graph_Graph01358","S0S12S18",100,0,3300);
   Graph_Graph01358->SetMinimum(-1.452487);
   Graph_Graph01358->SetMaximum(0.5594416);
   Graph_Graph01358->SetDirectory(0);
   Graph_Graph01358->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01358->SetLineColor(ci);
   Graph_Graph01358->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01358->GetXaxis()->SetRange(0,93);
   Graph_Graph01358->GetXaxis()->CenterTitle(true);
   Graph_Graph01358->GetXaxis()->SetLabelFont(42);
   Graph_Graph01358->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01358->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01358->GetXaxis()->SetTitleFont(42);
   Graph_Graph01358->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01358->GetYaxis()->CenterTitle(true);
   Graph_Graph01358->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01358->GetYaxis()->SetLabelFont(42);
   Graph_Graph01358->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01358->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01358->GetYaxis()->SetTitleFont(42);
   Graph_Graph01358->GetZaxis()->SetLabelFont(42);
   Graph_Graph01358->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01358->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01358);
   
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
