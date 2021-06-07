void S0S12S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(197,-0.004818545,2003,0.3504369);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1342[7] = {
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700};
   Double_t Graph0_fy1342[7] = {
   0.1713079,
   0.1153851,
   0.2464016,
   0.09364809,
   0.125933,
   0.1750888,
   0.1730736};
   Double_t Graph0_fex1342[7] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1342[7] = {
   0.05929716,
   0.05185073,
   0.04482611,
   0.03925739,
   0.03449673,
   0.03040722,
   0.02695391};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1342,Graph0_fy1342,Graph0_fex1342,Graph0_fey1342);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01342 = new TH1F("Graph_Graph01342","S0S12S18",100,260,1940);
   Graph_Graph01342->SetMinimum(0.030707);
   Graph_Graph01342->SetMaximum(0.3149114);
   Graph_Graph01342->SetDirectory(0);
   Graph_Graph01342->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01342->SetLineColor(ci);
   Graph_Graph01342->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01342->GetXaxis()->SetRange(8,93);
   Graph_Graph01342->GetXaxis()->CenterTitle(true);
   Graph_Graph01342->GetXaxis()->SetLabelFont(42);
   Graph_Graph01342->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01342->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01342->GetXaxis()->SetTitleFont(42);
   Graph_Graph01342->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01342->GetYaxis()->CenterTitle(true);
   Graph_Graph01342->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01342->GetYaxis()->SetLabelFont(42);
   Graph_Graph01342->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01342->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01342->GetYaxis()->SetTitleFont(42);
   Graph_Graph01342->GetZaxis()->SetLabelFont(42);
   Graph_Graph01342->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01342->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01342);
   
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
