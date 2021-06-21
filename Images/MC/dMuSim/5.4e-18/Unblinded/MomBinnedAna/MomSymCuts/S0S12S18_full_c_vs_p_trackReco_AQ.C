void S0S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:53 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,0.04637559,8.5,0.4631119);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1486[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1486[7] = {
   0.3805751,
   0.283567,
   0.2251682,
   0.1891406,
   0.1754675,
   0.1573762,
   0.1562041};
   Double_t Graph0_fex1486[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1486[7] = {
   0.01308076,
   0.01336243,
   0.01423333,
   0.0157684,
   0.01833941,
   0.02337545,
   0.04037243};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1486,Graph0_fy1486,Graph0_fex1486,Graph0_fey1486);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01486 = new TH1F("Graph_Graph01486","S0S12S18",100,0.4,7.6);
   Graph_Graph01486->SetMinimum(0.08804923);
   Graph_Graph01486->SetMaximum(0.4214383);
   Graph_Graph01486->SetDirectory(0);
   Graph_Graph01486->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01486->SetLineColor(ci);
   Graph_Graph01486->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01486->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01486->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01486->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01486->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01486->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01486->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01486->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01486->GetXaxis()->SetRange(1,100);
   Graph_Graph01486->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01486->GetXaxis()->CenterTitle(true);
   Graph_Graph01486->GetXaxis()->SetLabelFont(42);
   Graph_Graph01486->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01486->GetXaxis()->SetTickLength(0);
   Graph_Graph01486->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01486->GetXaxis()->SetTitleFont(42);
   Graph_Graph01486->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01486->GetYaxis()->CenterTitle(true);
   Graph_Graph01486->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01486->GetYaxis()->SetLabelFont(42);
   Graph_Graph01486->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01486->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01486->GetYaxis()->SetTitleFont(42);
   Graph_Graph01486->GetZaxis()->SetLabelFont(42);
   Graph_Graph01486->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01486);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,0.08804923,7.6,0.08804923,0.4,7.6,8,"");
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
