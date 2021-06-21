void full_A_vs_p_truthAllDecays_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 18 15:33:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5900001,0.0001946782,8.59,0.0002954951);
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
   0.0002735926,
   0.0002635442,
   0.0002566283,
   0.0002501102,
   0.0002352798,
   0.0002181766,
   0.0002227265};
   Double_t Graph0_fex1066[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1066[7] = {
   5.099755e-06,
   4.889674e-06,
   4.907873e-06,
   5.065532e-06,
   5.50374e-06,
   6.657078e-06,
   1.124547e-05};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{EDM} [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","",100,0.4,7.6);
   Graph_Graph01066->SetMinimum(0.0002047599);
   Graph_Graph01066->SetMaximum(0.0002854134);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01066->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01066->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01066->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01066->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01066->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01066->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01066->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01066->GetXaxis()->SetRange(0,101);
   Graph_Graph01066->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTickLength(0);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("A_{EDM} [rad]");
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
   TGaxis *gaxis = new TGaxis(0.328,0.0002047599,7.672,0.0002047599,0.328,7.672,8,"");
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
