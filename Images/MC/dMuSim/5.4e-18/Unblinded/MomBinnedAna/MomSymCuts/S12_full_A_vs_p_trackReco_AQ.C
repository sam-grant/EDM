void S12_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.2329838,8.5,-0.09209407);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1164[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1164[7] = {
   -0.1815746,
   -0.1915133,
   -0.1706211,
   -0.1343788,
   -0.150013,
   -0.1840819,
   -0.1642867};
   Double_t Graph0_fex1164[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1164[7] = {
   0.01802286,
   0.01785172,
   0.01802729,
   0.01880314,
   0.02074405,
   0.02542022,
   0.04282789};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1164,Graph0_fy1164,Graph0_fex1164,Graph0_fey1164);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01164 = new TH1F("Graph_Graph01164","S12",100,0.4,7.6);
   Graph_Graph01164->SetMinimum(-0.2188948);
   Graph_Graph01164->SetMaximum(-0.106183);
   Graph_Graph01164->SetDirectory(0);
   Graph_Graph01164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01164->SetLineColor(ci);
   Graph_Graph01164->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01164->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01164->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01164->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01164->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01164->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01164->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01164->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01164->GetXaxis()->SetRange(1,100);
   Graph_Graph01164->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01164->GetXaxis()->CenterTitle(true);
   Graph_Graph01164->GetXaxis()->SetLabelFont(42);
   Graph_Graph01164->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetXaxis()->SetTickLength(0);
   Graph_Graph01164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01164->GetXaxis()->SetTitleFont(42);
   Graph_Graph01164->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01164->GetYaxis()->CenterTitle(true);
   Graph_Graph01164->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01164->GetYaxis()->SetLabelFont(42);
   Graph_Graph01164->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01164->GetYaxis()->SetTitleFont(42);
   Graph_Graph01164->GetZaxis()->SetLabelFont(42);
   Graph_Graph01164->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01164->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01164);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,-0.2188948,7.6,-0.2188948,0.4,7.6,8,"");
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
