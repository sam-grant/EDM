void S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:15:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.1772442,3468.85,0.2435009);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1326[15] = {
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
   Double_t Graph0_fy1326[15] = {
   0.09900426,
   0.09905523,
   0.1090273,
   0.1314779,
   0.1607488,
   0.1470735,
   0.1511045,
   0.1434842,
   0.1304292,
   0.1219567,
   0.1116522,
   0.1269511,
   0.09591383,
   0.03895152,
   -0.05531312};
   Double_t Graph0_fex1326[15] = {
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
   Double_t Graph0_fey1326[15] = {
   0.01294728,
   0.01294716,
   0.01291217,
   0.01273157,
   0.01262789,
   0.01271497,
   0.01301437,
   0.01357255,
   0.01446775,
   0.01581361,
   0.01775541,
   0.02052329,
   0.02438881,
   0.03083562,
   0.05180694};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1326,Graph0_fy1326,Graph0_fex1326,Graph0_fey1326);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01326 = new TH1F("Graph_Graph01326","S12S18",100,0,3080);
   Graph_Graph01326->SetMinimum(-0.1351697);
   Graph_Graph01326->SetMaximum(0.2014264);
   Graph_Graph01326->SetDirectory(0);
   Graph_Graph01326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01326->SetLineColor(ci);
   Graph_Graph01326->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01326->GetXaxis()->SetRange(0,100);
   Graph_Graph01326->GetXaxis()->CenterTitle(true);
   Graph_Graph01326->GetXaxis()->SetLabelFont(42);
   Graph_Graph01326->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01326->GetXaxis()->SetTitleFont(42);
   Graph_Graph01326->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01326->GetYaxis()->CenterTitle(true);
   Graph_Graph01326->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01326->GetYaxis()->SetLabelFont(42);
   Graph_Graph01326->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01326->GetYaxis()->SetTitleFont(42);
   Graph_Graph01326->GetZaxis()->SetLabelFont(42);
   Graph_Graph01326->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01326->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01326);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
