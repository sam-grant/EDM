void full_c_vs_p_truth_WORLD_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 13:59:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.04760856,8.14,0.001256793);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1066[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1066[7] = {
   -0.03727198,
   -0.02573983,
   -0.01874087,
   -0.0165742,
   -0.01386438,
   -0.01085186,
   -0.01184314};
   Double_t Graph0_fex1066[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1066[7] = {
   0.002192357,
   0.00208685,
   0.002072169,
   0.002154497,
   0.00238248,
   0.002934073,
   0.004955709};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{min} #minus p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","",100,0.4,7.6);
   Graph_Graph01066->SetMinimum(-0.04272203);
   Graph_Graph01066->SetMaximum(-0.003629743);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("e^{+}_{LAB} p_{min} #minus p_{max} [MeV]");
   Graph_Graph01066->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01066->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01066->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01066->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01066->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01066->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01066->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01066->GetXaxis()->SetRange(5,96);
   Graph_Graph01066->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTickLength(0);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01066->GetYaxis()->CenterTitle(true);
   Graph_Graph01066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01066->GetYaxis()->SetLabelFont(42);
   Graph_Graph01066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01066->GetYaxis()->SetTitleFont(42);
   Graph_Graph01066->GetZaxis()->SetLabelFont(42);
   Graph_Graph01066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01066);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,-0.04272203,7.312,-0.04272203,0.688,7.312,8,"");
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
