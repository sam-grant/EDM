void S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:38 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.2531674,8.5,-0.08321325);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1376[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1376[7] = {
   -0.1877248,
   -0.1956978,
   -0.1759596,
   -0.1433048,
   -0.1558283,
   -0.1906751,
   -0.1681903};
   Double_t Graph0_fex1376[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1376[7] = {
   0.01842329,
   0.01882209,
   0.02005162,
   0.02220521,
   0.02582545,
   0.03288433,
   0.05665139};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1376,Graph0_fy1376,Graph0_fex1376,Graph0_fey1376);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01376 = new TH1F("Graph_Graph01376","S12S18",100,0.4,7.6);
   Graph_Graph01376->SetMinimum(-0.236172);
   Graph_Graph01376->SetMaximum(-0.1002087);
   Graph_Graph01376->SetDirectory(0);
   Graph_Graph01376->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01376->SetLineColor(ci);
   Graph_Graph01376->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01376->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01376->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01376->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01376->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01376->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01376->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01376->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01376->GetXaxis()->SetRange(1,100);
   Graph_Graph01376->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01376->GetXaxis()->CenterTitle(true);
   Graph_Graph01376->GetXaxis()->SetLabelFont(42);
   Graph_Graph01376->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01376->GetXaxis()->SetTickLength(0);
   Graph_Graph01376->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01376->GetXaxis()->SetTitleFont(42);
   Graph_Graph01376->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01376->GetYaxis()->CenterTitle(true);
   Graph_Graph01376->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01376->GetYaxis()->SetLabelFont(42);
   Graph_Graph01376->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01376->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01376->GetYaxis()->SetTitleFont(42);
   Graph_Graph01376->GetZaxis()->SetLabelFont(42);
   Graph_Graph01376->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01376->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01376);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,-0.236172,7.6,-0.236172,0.4,7.6,8,"");
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
