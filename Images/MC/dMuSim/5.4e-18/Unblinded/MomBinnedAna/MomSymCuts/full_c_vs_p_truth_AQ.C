void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 09:49:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.04144587,8.14,4.848668e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1062[7] = {
   -0.03243786,
   -0.02505888,
   -0.01870336,
   -0.01656704,
   -0.01388278,
   -0.01094209,
   -0.01182118};
   Double_t Graph0_fex1062[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1062[7] = {
   0.002092287,
   0.002071307,
   0.00207105,
   0.002153499,
   0.002381496,
   0.002932972,
   0.004953936};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","",100,0.4,7.6);
   Graph_Graph01062->SetMinimum(-0.03729643);
   Graph_Graph01062->SetMaximum(-0.004100949);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01062->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01062->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01062->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01062->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01062->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01062->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01062->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01062->GetXaxis()->SetRange(5,96);
   Graph_Graph01062->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTickLength(0);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,-0.03729643,7.312,-0.03729643,0.688,7.312,8,"");
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
