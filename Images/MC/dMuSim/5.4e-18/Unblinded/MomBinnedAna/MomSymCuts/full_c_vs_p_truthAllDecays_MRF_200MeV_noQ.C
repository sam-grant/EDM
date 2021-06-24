void full_c_vs_p_truthAllDecays_MRF_200MeV_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 21 17:01:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5900001,-0.000401982,8.59,0.0006657731);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1065[7] = {
   -7.264191e-05,
   -0.000105595,
   -4.432043e-05,
   -8.769736e-05,
   3.293177e-05,
   0.000129939,
   0.0001394974};
   Double_t Graph0_fex1065[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1065[7] = {
   0.0001010664,
   0.0001097629,
   0.0001209463,
   0.0001363254,
   0.0001595806,
   0.0002029003,
   0.0003483165};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];c [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","",100,0.4,7.6);
   Graph_Graph01065->SetMinimum(-0.0002952065);
   Graph_Graph01065->SetMaximum(0.0005589976);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01065->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01065->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01065->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01065->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01065->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01065->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01065->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01065->GetXaxis()->SetRange(0,101);
   Graph_Graph01065->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTickLength(0);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->SetTitle("c [rad]");
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.328,-0.0002952065,7.672,-0.0002952065,0.328,7.672,8,"");
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
