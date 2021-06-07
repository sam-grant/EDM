void S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:54 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.4509912,8.5,-0.09453534);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1375[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1375[7] = {
   -0.3825146,
   -0.259546,
   -0.2160142,
   -0.1915814,
   -0.1724223,
   -0.1801371,
   -0.1754032};
   Double_t Graph0_fex1375[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1375[7] = {
   0.009067347,
   0.008985174,
   0.009071668,
   0.00946063,
   0.01041776,
   0.01276251,
   0.02145854};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1375,Graph0_fy1375,Graph0_fex1375,Graph0_fey1375);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01375 = new TH1F("Graph_Graph01375","S12S18",100,0.4,7.6);
   Graph_Graph01375->SetMinimum(-0.4153456);
   Graph_Graph01375->SetMaximum(-0.1301809);
   Graph_Graph01375->SetDirectory(0);
   Graph_Graph01375->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01375->SetLineColor(ci);
   Graph_Graph01375->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01375->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01375->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01375->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01375->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01375->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01375->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01375->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01375->GetXaxis()->SetRange(1,100);
   Graph_Graph01375->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01375->GetXaxis()->CenterTitle(true);
   Graph_Graph01375->GetXaxis()->SetLabelFont(42);
   Graph_Graph01375->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01375->GetXaxis()->SetTickLength(0);
   Graph_Graph01375->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01375->GetXaxis()->SetTitleFont(42);
   Graph_Graph01375->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01375->GetYaxis()->CenterTitle(true);
   Graph_Graph01375->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01375->GetYaxis()->SetLabelFont(42);
   Graph_Graph01375->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01375->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01375->GetYaxis()->SetTitleFont(42);
   Graph_Graph01375->GetZaxis()->SetLabelFont(42);
   Graph_Graph01375->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01375->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01375);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,-0.4153456,7.6,-0.4153456,0.4,7.6,8,"");
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
