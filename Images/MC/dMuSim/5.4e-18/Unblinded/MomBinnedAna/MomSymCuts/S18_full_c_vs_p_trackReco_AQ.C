void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:15 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.4030515,8.14,-0.04349229);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1217[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1217[7] = {
   -0.3302453,
   -0.1978858,
   -0.1740733,
   -0.1638248,
   -0.137073,
   -0.1532693,
   -0.1338152};
   Double_t Graph0_fex1217[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1217[7] = {
   0.0128797,
   0.01276951,
   0.01289212,
   0.01344553,
   0.01479935,
   0.0181304,
   0.03039637};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1217,Graph0_fy1217,Graph0_fex1217,Graph0_fey1217);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01217 = new TH1F("Graph_Graph01217","S18",100,0.4,7.6);
   Graph_Graph01217->SetMinimum(-0.3670956);
   Graph_Graph01217->SetMaximum(-0.07944821);
   Graph_Graph01217->SetDirectory(0);
   Graph_Graph01217->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01217->SetLineColor(ci);
   Graph_Graph01217->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01217->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01217->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01217->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01217->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01217->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01217->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01217->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01217->GetXaxis()->SetRange(5,96);
   Graph_Graph01217->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01217->GetXaxis()->CenterTitle(true);
   Graph_Graph01217->GetXaxis()->SetLabelFont(42);
   Graph_Graph01217->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01217->GetXaxis()->SetTickLength(0);
   Graph_Graph01217->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01217->GetXaxis()->SetTitleFont(42);
   Graph_Graph01217->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01217->GetYaxis()->CenterTitle(true);
   Graph_Graph01217->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01217->GetYaxis()->SetLabelFont(42);
   Graph_Graph01217->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01217->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01217->GetYaxis()->SetTitleFont(42);
   Graph_Graph01217->GetZaxis()->SetLabelFont(42);
   Graph_Graph01217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01217);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.688,-0.3670956,7.312,-0.3670956,0.688,7.312,8,"");
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
