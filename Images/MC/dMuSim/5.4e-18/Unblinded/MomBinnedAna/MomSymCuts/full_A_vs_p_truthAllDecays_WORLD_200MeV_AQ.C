void full_A_vs_p_truthAllDecays_WORLD_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 18 13:17:33 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5900001,0.002517407,8.59,0.004854916);
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
   0.003396679,
   0.003601432,
   0.003922937,
   0.004175987,
   0.003799481,
   0.003712343,
   0.003669354};
   Double_t Graph0_fex1066[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1066[7] = {
   0.0002153388,
   0.000232786,
   0.0002561279,
   0.0002893437,
   0.0003413584,
   0.0004402373,
   0.0007623615};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{EDM} [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","",100,0.4,7.6);
   Graph_Graph01066->SetMinimum(0.002751158);
   Graph_Graph01066->SetMaximum(0.004621165);
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
   TGaxis *gaxis = new TGaxis(0.328,0.002751158,7.672,0.002751158,0.328,7.672,8,"");
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
