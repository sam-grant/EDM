void S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:21 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.4507531,8.5,0.1022503);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1270[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1270[7] = {
   -0.2156216,
   -0.2141608,
   -0.1986464,
   -0.1747414,
   -0.1732148,
   -0.2079404,
   -0.1742514};
   Double_t Graph0_fex1270[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1270[7] = {
   0.06141324,
   0.06278412,
   0.06719246,
   0.07421955,
   0.08563,
   0.1083475,
   0.1843345};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1270,Graph0_fy1270,Graph0_fex1270,Graph0_fey1270);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01270 = new TH1F("Graph_Graph01270","S18",100,0.4,7.6);
   Graph_Graph01270->SetMinimum(-0.3954528);
   Graph_Graph01270->SetMaximum(0.04694994);
   Graph_Graph01270->SetDirectory(0);
   Graph_Graph01270->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01270->SetLineColor(ci);
   Graph_Graph01270->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01270->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01270->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01270->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01270->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01270->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01270->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01270->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01270->GetXaxis()->SetRange(1,100);
   Graph_Graph01270->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01270->GetXaxis()->CenterTitle(true);
   Graph_Graph01270->GetXaxis()->SetLabelFont(42);
   Graph_Graph01270->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01270->GetXaxis()->SetTickLength(0);
   Graph_Graph01270->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01270->GetXaxis()->SetTitleFont(42);
   Graph_Graph01270->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01270->GetYaxis()->CenterTitle(true);
   Graph_Graph01270->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01270->GetYaxis()->SetLabelFont(42);
   Graph_Graph01270->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01270->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01270->GetYaxis()->SetTitleFont(42);
   Graph_Graph01270->GetZaxis()->SetLabelFont(42);
   Graph_Graph01270->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01270->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01270);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,-0.3954528,7.6,-0.3954528,0.4,7.6,8,"");
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
