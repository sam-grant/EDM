void full_A_vs_p_truthAllDecays_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 17 13:21:46 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.3250001,0.2263199,7.325,0.2901797);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1058[6] = {
   0.2426325,
   0.2556672,
   0.2553459,
   0.2508593,
   0.2529849,
   0.2608969};
   Double_t Graph0_fex1058[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1058[6] = {
   0.005669372,
   0.005598219,
   0.00563226,
   0.006155079,
   0.007819521,
   0.01863952};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","",100,0.5,6.5);
   Graph_Graph01058->SetMinimum(0.2327058);
   Graph_Graph01058->SetMaximum(0.2837937);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01058->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01058->GetXaxis()->SetBinLabel(26,"650-2750");
   Graph_Graph01058->GetXaxis()->SetBinLabel(42,"900-2500");
   Graph_Graph01058->GetXaxis()->SetBinLabel(59,"1150-2250");
   Graph_Graph01058->GetXaxis()->SetBinLabel(76,"1400-2000");
   Graph_Graph01058->GetXaxis()->SetBinLabel(92,"1650-1750");
   Graph_Graph01058->GetXaxis()->SetRange(0,101);
   Graph_Graph01058->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01058->GetXaxis()->CenterTitle(true);
   Graph_Graph01058->GetXaxis()->SetLabelFont(42);
   Graph_Graph01058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetXaxis()->SetTickLength(0);
   Graph_Graph01058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01058->GetXaxis()->SetTitleFont(42);
   Graph_Graph01058->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01058->GetYaxis()->CenterTitle(true);
   Graph_Graph01058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01058->GetYaxis()->SetLabelFont(42);
   Graph_Graph01058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01058->GetYaxis()->SetTitleFont(42);
   Graph_Graph01058->GetZaxis()->SetLabelFont(42);
   Graph_Graph01058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01058);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.44,0.2327058,6.56,0.2327058,0.44,6.56,8,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
