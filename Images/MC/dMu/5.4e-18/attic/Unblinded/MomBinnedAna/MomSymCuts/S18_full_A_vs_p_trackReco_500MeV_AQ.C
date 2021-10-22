void S18_full_A_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.5,0.04541935,3.5,0.3704617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1128[3] = {
   1,
   2,
   3};
   Double_t Graph0_fy1128[3] = {
   0.2156253,
   0.1782858,
   0.2079405};
   Double_t Graph0_fex1128[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1128[3] = {
   0.06141324,
   0.07036352,
   0.1083475};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1128,Graph0_fy1128,Graph0_fex1128,Graph0_fey1128);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01128 = new TH1F("Graph_Graph01128","S18",100,0.8,3.2);
   Graph_Graph01128->SetMinimum(0.07792358);
   Graph_Graph01128->SetMaximum(0.3379575);
   Graph_Graph01128->SetDirectory(0);
   Graph_Graph01128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01128->SetLineColor(ci);
   Graph_Graph01128->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01128->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01128->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_Graph01128->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_Graph01128->GetXaxis()->SetRange(1,100);
   Graph_Graph01128->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01128->GetXaxis()->CenterTitle(true);
   Graph_Graph01128->GetXaxis()->SetLabelFont(42);
   Graph_Graph01128->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01128->GetXaxis()->SetTickLength(0);
   Graph_Graph01128->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01128->GetXaxis()->SetTitleFont(42);
   Graph_Graph01128->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01128->GetYaxis()->CenterTitle(true);
   Graph_Graph01128->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01128->GetYaxis()->SetLabelFont(42);
   Graph_Graph01128->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01128->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01128->GetYaxis()->SetTitleFont(42);
   Graph_Graph01128->GetZaxis()->SetLabelFont(42);
   Graph_Graph01128->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01128);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.8,0.07792358,3.2,0.07792358,0.8,3.2,8,"");
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
