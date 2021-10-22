void S0S12S18_full_c_vs_p_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:29:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(140,-1.692622,2660,0.2938281);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1159[10] = {
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t Graph0_fy1159[10] = {
   -1.302003,
   -0.3679438,
   -0.2453909,
   -0.1592318,
   -0.1443163,
   -0.1063555,
   -0.1085467,
   -0.1452084,
   -0.05877152,
   -0.1038625};
   Double_t Graph0_fex1159[10] = {
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
   Double_t Graph0_fey1159[10] = {
   0.05954411,
   0.05207058,
   0.0452296,
   0.03965786,
   0.03481013,
   0.0307501,
   0.02725049,
   0.02428601,
   0.02152463,
   0.01903408};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1159,Graph0_fy1159,Graph0_fex1159,Graph0_fey1159);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01159 = new TH1F("Graph_Graph01159","S0S12S18",100,200,2600);
   Graph_Graph01159->SetMinimum(-1.493977);
   Graph_Graph01159->SetMaximum(0.0951831);
   Graph_Graph01159->SetDirectory(0);
   Graph_Graph01159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01159->SetLineColor(ci);
   Graph_Graph01159->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01159->GetXaxis()->SetRange(9,92);
   Graph_Graph01159->GetXaxis()->CenterTitle(true);
   Graph_Graph01159->GetXaxis()->SetLabelFont(42);
   Graph_Graph01159->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01159->GetXaxis()->SetTitleFont(42);
   Graph_Graph01159->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01159->GetYaxis()->CenterTitle(true);
   Graph_Graph01159->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01159->GetYaxis()->SetLabelFont(42);
   Graph_Graph01159->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01159->GetYaxis()->SetTitleFont(42);
   Graph_Graph01159->GetZaxis()->SetLabelFont(42);
   Graph_Graph01159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01159);
   
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
