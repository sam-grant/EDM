void S0_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:15:06 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.2413219,8.5,0.06297116);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1053[7] = {
   -0.1778949,
   -0.05221303,
   -0.02372265,
   -0.02182384,
   -0.002374182,
   -0.02422254,
   -0.03986247};
   Double_t Graph0_fex1053[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1053[7] = {
   0.01271153,
   0.01258307,
   0.01267417,
   0.01323252,
   0.01462982,
   0.01797308,
   0.03020585};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","S0",100,0.4,7.6);
   Graph_Graph01053->SetMinimum(-0.2108926);
   Graph_Graph01053->SetMaximum(0.03254185);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01053->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01053->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01053->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01053->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01053->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01053->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01053->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01053->GetXaxis()->SetRange(1,100);
   Graph_Graph01053->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTickLength(0);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,-0.2108926,7.6,-0.2108926,0.4,7.6,8,"");
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
