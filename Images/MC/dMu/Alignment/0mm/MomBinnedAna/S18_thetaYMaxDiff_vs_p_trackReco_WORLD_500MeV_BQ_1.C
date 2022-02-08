void S18_thetaYMaxDiff_vs_p_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:58:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-125.5982,-30.47322,3208.188,275.4862);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1113[6] = {
   452.0105,
   805.8928,
   1238.077,
   1722.992,
   2205.769,
   2630.4};
   Double_t Graph0_fy1113[6] = {
   178.2271,
   161.6564,
   111.2078,
   80.64408,
   62.60042,
   36.45554};
   Double_t Graph0_fex1113[6] = {
   0.1881889,
   0.1688841,
   0.1638845,
   0.2025143,
   0.3102647,
   0.3676052};
   Double_t Graph0_fey1113[6] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1113,Graph0_fy1113,Graph0_fex1113,Graph0_fey1113);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01113 = new TH1F("Graph_Graph01113","S18_",100,233.9278,2848.662);
   Graph_Graph01113->SetMinimum(0.1227271);
   Graph_Graph01113->SetMaximum(244.8903);
   Graph_Graph01113->SetDirectory(0);
   Graph_Graph01113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01113->SetLineColor(ci);
   Graph_Graph01113->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01113->GetXaxis()->SetRange(0,101);
   Graph_Graph01113->GetXaxis()->CenterTitle(true);
   Graph_Graph01113->GetXaxis()->SetLabelFont(42);
   Graph_Graph01113->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01113->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01113->GetXaxis()->SetTitleFont(42);
   Graph_Graph01113->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 500 MeV");
   Graph_Graph01113->GetYaxis()->CenterTitle(true);
   Graph_Graph01113->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01113->GetYaxis()->SetLabelFont(42);
   Graph_Graph01113->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01113->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01113->GetYaxis()->SetTitleFont(42);
   Graph_Graph01113->GetZaxis()->SetLabelFont(42);
   Graph_Graph01113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01113);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
