void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:11 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.5113768,8.5,-0.1227358);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1163[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1163[7] = {
   -0.4338368,
   -0.320372,
   -0.2571086,
   -0.218759,
   -0.2069245,
   -0.2069129,
   -0.2177872};
   Double_t Graph0_fex1163[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1163[7] = {
   0.01276649,
   0.01264423,
   0.01276628,
   0.01331291,
   0.01466556,
   0.01796477,
   0.03027792};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1163,Graph0_fy1163,Graph0_fex1163,Graph0_fey1163);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01163 = new TH1F("Graph_Graph01163","S12",100,0.4,7.6);
   Graph_Graph01163->SetMinimum(-0.4725127);
   Graph_Graph01163->SetMaximum(-0.1615999);
   Graph_Graph01163->SetDirectory(0);
   Graph_Graph01163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01163->SetLineColor(ci);
   Graph_Graph01163->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01163->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01163->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01163->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01163->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01163->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01163->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01163->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01163->GetXaxis()->SetRange(1,100);
   Graph_Graph01163->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01163->GetXaxis()->CenterTitle(true);
   Graph_Graph01163->GetXaxis()->SetLabelFont(42);
   Graph_Graph01163->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetXaxis()->SetTickLength(0);
   Graph_Graph01163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01163->GetXaxis()->SetTitleFont(42);
   Graph_Graph01163->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01163->GetYaxis()->CenterTitle(true);
   Graph_Graph01163->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01163->GetYaxis()->SetLabelFont(42);
   Graph_Graph01163->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01163->GetYaxis()->SetTitleFont(42);
   Graph_Graph01163->GetZaxis()->SetLabelFont(42);
   Graph_Graph01163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01163);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,-0.4725127,7.6,-0.4725127,0.4,7.6,8,"");
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
