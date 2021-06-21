void S0S12S18_full_A_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.5,0.1070247,3.5,0.2468662);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1229[3] = {
   1,
   2,
   3};
   Double_t Graph0_fy1229[3] = {
   0.1877247,
   0.1513292,
   0.190675};
   Double_t Graph0_fex1229[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1229[3] = {
   0.01842329,
   0.0209976,
   0.03288433};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1229,Graph0_fy1229,Graph0_fex1229,Graph0_fey1229);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01229 = new TH1F("Graph_Graph01229","S0S12S18",100,0.8,3.2);
   Graph_Graph01229->SetMinimum(0.1210089);
   Graph_Graph01229->SetMaximum(0.2328821);
   Graph_Graph01229->SetDirectory(0);
   Graph_Graph01229->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01229->SetLineColor(ci);
   Graph_Graph01229->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01229->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01229->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_Graph01229->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_Graph01229->GetXaxis()->SetRange(1,100);
   Graph_Graph01229->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01229->GetXaxis()->CenterTitle(true);
   Graph_Graph01229->GetXaxis()->SetLabelFont(42);
   Graph_Graph01229->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetXaxis()->SetTickLength(0);
   Graph_Graph01229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01229->GetXaxis()->SetTitleFont(42);
   Graph_Graph01229->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01229->GetYaxis()->CenterTitle(true);
   Graph_Graph01229->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01229->GetYaxis()->SetLabelFont(42);
   Graph_Graph01229->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01229->GetYaxis()->SetTitleFont(42);
   Graph_Graph01229->GetZaxis()->SetLabelFont(42);
   Graph_Graph01229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01229);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.8,0.1210089,3.2,0.1210089,0.8,3.2,8,"");
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
