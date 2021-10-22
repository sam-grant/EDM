void full_c_vs_p_truthAllDecays_MRF_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 11:42:06 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.62,-0.3395462,3.38,0.4137598);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[3] = {
   1,
   2,
   3};
   Double_t Graph0_fy1040[3] = {
   -0.03961439,
   0.07473681,
   0.03710682};
   Double_t Graph0_fex1040[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1040[3] = {
   0.1246781,
   0.1579246,
   0.251102};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{min} #minus p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","",100,0.8,3.2);
   Graph_Graph01040->SetMinimum(-0.2642156);
   Graph_Graph01040->SetMaximum(0.3384292);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("e^{+}_{LAB} p_{min} #minus p_{max} [MeV]");
   Graph_Graph01040->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01040->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_Graph01040->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_Graph01040->GetXaxis()->SetRange(5,96);
   Graph_Graph01040->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTickLength(0);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.896,-0.2642156,3.104,-0.2642156,0.896,3.104,8,"");
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
