void S18_c_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:07 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.557541,3378.375,0.47956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[15] = {
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
   Double_t Graph0_fy1099[15] = {
   -1.354475,
   -1.719315,
   -1.392948,
   -0.3499842,
   -0.1840196,
   -0.2402572,
   -0.1329559,
   -0.1193758,
   -0.1427676,
   -0.1079668,
   -0.08022456,
   -0.08955381,
   -0.07862877,
   -0.1005368,
   -0.05271573};
   Double_t Graph0_fex1099[15] = {
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
   Double_t Graph0_fey1099[15] = {
   0.6968829,
   0.1080613,
   0.03839204,
   0.02874246,
   0.02517529,
   0.02276992,
   0.0208762,
   0.01946894,
   0.0183486,
   0.01766553,
   0.01728862,
   0.01703822,
   0.0172464,
   0.01788452,
   0.02609222};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S18",100,0,3300);
   Graph_Graph01099->SetMinimum(-2.253831);
   Graph_Graph01099->SetMaximum(0.1758499);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01099->GetXaxis()->SetRange(1,91);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
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
