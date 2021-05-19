void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:44:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.04144569,8.14,4.399806e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1057[7] = {
   -0.03243846,
   -0.02505943,
   -0.01870319,
   -0.01656738,
   -0.01388259,
   -0.0109416,
   -0.01182489};
   Double_t Graph0_fex1057[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1057[7] = {
   0.002092287,
   0.002071307,
   0.00207105,
   0.002153499,
   0.002381496,
   0.002932972,
   0.004953936};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","",100,0.4,7.6);
   Graph_Graph01057->SetMinimum(-0.03729673);
   Graph_Graph01057->SetMaximum(-0.004104971);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01057->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01057->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01057->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01057->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01057->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01057->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01057->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01057->GetXaxis()->SetRange(5,96);
   Graph_Graph01057->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTickLength(0);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,-0.03729673,7.312,-0.03729673,0.688,7.312,8,"");
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
