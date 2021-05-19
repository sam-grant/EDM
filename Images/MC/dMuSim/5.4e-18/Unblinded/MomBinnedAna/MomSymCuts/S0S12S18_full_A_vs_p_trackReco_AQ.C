void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:52 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.1035364,8.14,0.1975905);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1378[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1378[7] = {
   0.155497,
   0.1716519,
   0.1667401,
   0.150605,
   0.1601717,
   0.1620023,
   0.1438126};
   Double_t Graph0_fex1378[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1378[7] = {
   0.01036478,
   0.01026296,
   0.01035224,
   0.01079378,
   0.01190981,
   0.01460689,
   0.02460045};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1378,Graph0_fy1378,Graph0_fex1378,Graph0_fey1378);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01378 = new TH1F("Graph_Graph01378","S0S12S18",100,0.4,7.6);
   Graph_Graph01378->SetMinimum(0.1129418);
   Graph_Graph01378->SetMaximum(0.1881851);
   Graph_Graph01378->SetDirectory(0);
   Graph_Graph01378->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01378->SetLineColor(ci);
   Graph_Graph01378->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01378->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01378->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01378->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01378->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01378->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01378->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01378->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01378->GetXaxis()->SetRange(5,96);
   Graph_Graph01378->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01378->GetXaxis()->CenterTitle(true);
   Graph_Graph01378->GetXaxis()->SetLabelFont(42);
   Graph_Graph01378->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01378->GetXaxis()->SetTickLength(0);
   Graph_Graph01378->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01378->GetXaxis()->SetTitleFont(42);
   Graph_Graph01378->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01378->GetYaxis()->CenterTitle(true);
   Graph_Graph01378->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01378->GetYaxis()->SetLabelFont(42);
   Graph_Graph01378->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01378->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01378->GetYaxis()->SetTitleFont(42);
   Graph_Graph01378->GetZaxis()->SetLabelFont(42);
   Graph_Graph01378->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01378->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01378);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.688,0.1129418,7.312,0.1129418,0.688,7.312,8,"");
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
