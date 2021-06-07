void S0S12S18_full_Momentum_Y_RMS_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:19 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,4.700111,3605.25,26.69065);
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
   8.473266,
   13.63078,
   15.87708,
   18.35674,
   20.30847,
   21.70988,
   22.52777,
   22.94779,
   23.00471,
   22.68801,
   22.00436,
   20.88785,
   19.09432,
   16.28509,
   12.97775};
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
   0.1080647,
   0.02759279,
   0.01213021,
   0.01243792,
   0.01402114,
   0.01581927,
   0.01746219,
   0.01906631,
   0.0208516,
   0.02303353,
   0.02567553,
   0.02912348,
   0.03318589,
   0.03498991,
   0.04754489};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1469,Graph0_fy1469,Graph0_fex1469,Graph0_fey1469);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigmap_{y} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01469 = new TH1F("Graph_Graph01469","",100,0,3300);
   Graph_Graph01469->SetMinimum(6.899165);
   Graph_Graph01469->SetMaximum(24.4916);
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
