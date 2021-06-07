void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,0.005999546,8.5,0.05076932);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1487[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1487[7] = {
   0.03621306,
   0.03789361,
   0.03472803,
   0.03320073,
   0.03362062,
   0.02681194,
   0.02637303};
   Double_t Graph0_fex1487[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1487[7] = {
   0.005525472,
   0.005414079,
   0.005424238,
   0.005660427,
   0.006266466,
   0.007694279,
   0.01291185};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1487,Graph0_fy1487,Graph0_fex1487,Graph0_fey1487);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01487 = new TH1F("Graph_Graph01487","S0S12S18",100,0.4,7.6);
   Graph_Graph01487->SetMinimum(0.01047652);
   Graph_Graph01487->SetMaximum(0.04629235);
   Graph_Graph01487->SetDirectory(0);
   Graph_Graph01487->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01487->SetLineColor(ci);
   Graph_Graph01487->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01487->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01487->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01487->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01487->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01487->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01487->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01487->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01487->GetXaxis()->SetRange(1,100);
   Graph_Graph01487->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01487->GetXaxis()->CenterTitle(true);
   Graph_Graph01487->GetXaxis()->SetLabelFont(42);
   Graph_Graph01487->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01487->GetXaxis()->SetTickLength(0);
   Graph_Graph01487->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01487->GetXaxis()->SetTitleFont(42);
   Graph_Graph01487->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01487->GetYaxis()->CenterTitle(true);
   Graph_Graph01487->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01487->GetYaxis()->SetLabelFont(42);
   Graph_Graph01487->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01487->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01487->GetYaxis()->SetTitleFont(42);
   Graph_Graph01487->GetZaxis()->SetLabelFont(42);
   Graph_Graph01487->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01487);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,0.01047652,7.6,0.01047652,0.4,7.6,8,"");
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
