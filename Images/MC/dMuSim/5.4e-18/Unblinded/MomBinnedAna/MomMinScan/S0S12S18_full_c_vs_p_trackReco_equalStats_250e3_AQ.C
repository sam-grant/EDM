void S0S12S18_full_c_vs_p_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.3996829,3335,0.1312892);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1273[15] = {
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
   Double_t Graph0_fy1273[15] = {
   -0.2697736,
   -0.2703278,
   -0.2478273,
   -0.1801556,
   -0.1457695,
   -0.1142671,
   -0.09542981,
   -0.09114346,
   -0.08794792,
   -0.1015376,
   -0.07651512,
   -0.08222933,
   -0.06488794,
   -0.05222794,
   0.01439871};
   Double_t Graph0_fex1273[15] = {
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
   Double_t Graph0_fey1273[15] = {
   0.04086856,
   0.04085977,
   0.04042757,
   0.0375247,
   0.03404322,
   0.03084282,
   0.02802197,
   0.02549141,
   0.02322618,
   0.02117543,
   0.01922906,
   0.01724806,
   0.01520017,
   0.01726968,
   0.02839518};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1273,Graph0_fy1273,Graph0_fex1273,Graph0_fey1273);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01273 = new TH1F("Graph_Graph01273","S0S12S18",100,-400,3200);
   Graph_Graph01273->SetMinimum(-0.3465857);
   Graph_Graph01273->SetMaximum(0.07819203);
   Graph_Graph01273->SetDirectory(0);
   Graph_Graph01273->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01273->SetLineColor(ci);
   Graph_Graph01273->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01273->GetXaxis()->SetRange(8,93);
   Graph_Graph01273->GetXaxis()->CenterTitle(true);
   Graph_Graph01273->GetXaxis()->SetLabelFont(42);
   Graph_Graph01273->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01273->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01273->GetXaxis()->SetTitleFont(42);
   Graph_Graph01273->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01273->GetYaxis()->CenterTitle(true);
   Graph_Graph01273->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01273->GetYaxis()->SetLabelFont(42);
   Graph_Graph01273->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01273->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01273->GetYaxis()->SetTitleFont(42);
   Graph_Graph01273->GetZaxis()->SetLabelFont(42);
   Graph_Graph01273->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01273);
   
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
