void S0S12S18_full_Momentum_Y_RMS_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,11.37665,3605.25,25.03374);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1469[15] = {
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
   Double_t Graph0_fy1469[15] = {
   16.73416,
   22.72614,
   21.62199,
   19.14744,
   19.61147,
   20.73478,
   21.65039,
   22.2076,
   22.20895,
   21.94294,
   21.42834,
   20.53505,
   19.15342,
   16.30524,
   13.68482};
   Double_t Graph0_fex1469[15] = {
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
   Double_t Graph0_fey1469[15] = {
   0.2402886,
   0.03142196,
   0.01295334,
   0.009182508,
   0.008679345,
   0.008908914,
   0.009284492,
   0.009915281,
   0.01073915,
   0.01193216,
   0.01338081,
   0.01499838,
   0.01803583,
   0.01948699,
   0.03198662};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1469,Graph0_fy1469,Graph0_fex1469,Graph0_fey1469);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigmap_{y} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01469 = new TH1F("Graph_Graph01469","",100,0,3300);
   Graph_Graph01469->SetMinimum(12.74236);
   Graph_Graph01469->SetMaximum(23.66803);
   Graph_Graph01469->SetDirectory(0);
   Graph_Graph01469->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01469->SetLineColor(ci);
   Graph_Graph01469->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01469->GetXaxis()->SetRange(0,97);
   Graph_Graph01469->GetXaxis()->CenterTitle(true);
   Graph_Graph01469->GetXaxis()->SetLabelFont(42);
   Graph_Graph01469->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01469->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01469->GetXaxis()->SetTitleFont(42);
   Graph_Graph01469->GetYaxis()->SetTitle("#sigmap_{y} [MeV]");
   Graph_Graph01469->GetYaxis()->CenterTitle(true);
   Graph_Graph01469->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01469->GetYaxis()->SetLabelFont(42);
   Graph_Graph01469->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01469->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01469->GetYaxis()->SetTitleFont(42);
   Graph_Graph01469->GetZaxis()->SetLabelFont(42);
   Graph_Graph01469->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01469);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
