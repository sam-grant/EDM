void S0S12S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,0.0667582,8.5,0.2128245);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1362[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1362[7] = {
   0.1440092,
   0.1285613,
   0.154334,
   0.1351045,
   0.1400188,
   0.1534003,
   0.1389333};
   Double_t Graph0_fex1362[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1362[7] = {
   0.04028113,
   0.03745867,
   0.03414609,
   0.03134227,
   0.02928097,
   0.02786846,
   0.02714007};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1362,Graph0_fy1362,Graph0_fex1362,Graph0_fey1362);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01362 = new TH1F("Graph_Graph01362","S0S12S18",100,0.4,7.6);
   Graph_Graph01362->SetMinimum(0.08136484);
   Graph_Graph01362->SetMaximum(0.1982179);
   Graph_Graph01362->SetDirectory(0);
   Graph_Graph01362->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01362->SetLineColor(ci);
   Graph_Graph01362->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01362->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01362->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01362->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01362->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01362->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01362->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01362->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01362->GetXaxis()->SetRange(1,100);
   Graph_Graph01362->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01362->GetXaxis()->CenterTitle(true);
   Graph_Graph01362->GetXaxis()->SetLabelFont(42);
   Graph_Graph01362->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01362->GetXaxis()->SetTickLength(0);
   Graph_Graph01362->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01362->GetXaxis()->SetTitleFont(42);
   Graph_Graph01362->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01362->GetYaxis()->CenterTitle(true);
   Graph_Graph01362->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01362->GetYaxis()->SetLabelFont(42);
   Graph_Graph01362->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01362->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01362->GetYaxis()->SetTitleFont(42);
   Graph_Graph01362->GetZaxis()->SetLabelFont(42);
   Graph_Graph01362->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01362->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01362);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,0.08136484,7.6,0.08136484,0.4,7.6,8,"");
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
