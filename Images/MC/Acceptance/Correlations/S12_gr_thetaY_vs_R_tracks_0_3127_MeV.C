void S12_gr_thetaY_vs_R_tracks_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:04:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-63.75,-2.687167,63.75,1.158924);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[18] = {
   -42.5,
   -37.5,
   -32.5,
   -27.5,
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5};
   Double_t _fy1002[18] = {
   -0.4559748,
   -1.102305,
   -1.690361,
   -0.4899012,
   -0.6655277,
   -0.3954008,
   -0.1808213,
   -0.140929,
   -0.2104772,
   -0.07060555,
   -0.4280842,
   -0.4714918,
   -0.3167476,
   -0.3010039,
   -0.2817849,
   -0.6026484,
   0.2080238,
   -0.7344633};
   Double_t _fex1002[18] = {
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
   0,
   0,
   0,
   0};
   Double_t _fey1002[18] = {
   0.678725,
   0.4561462,
   0.3557911,
   0.2714221,
   0.2285933,
   0.1983868,
   0.1769839,
   0.156757,
   0.1476598,
   0.1393458,
   0.130854,
   0.1214422,
   0.1167618,
   0.1327409,
   0.1698625,
   0.2242998,
   0.3098853,
   0.4698338};
   TGraphErrors *gre = new TGraphErrors(18,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle(";Decay radial position [mm];#LT#theta_{y}#GT [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,-51,51);
   Graph_Graph1002->SetMinimum(-2.302558);
   Graph_Graph1002->SetMaximum(0.7743152);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Decay radial position [mm]");
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
