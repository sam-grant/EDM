void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:21 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.2385283,8.5,0.2392674);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1269[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1269[7] = {
   0.1153568,
   0.1121095,
   0.09177767,
   0.07949541,
   0.06874951,
   0.002415362,
   -0.02769911};
   Double_t Graph0_fex1269[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1269[7] = {
   0.044278,
   0.04514575,
   0.04808305,
   0.05293745,
   0.0609283,
   0.0770256,
   0.1311966};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1269,Graph0_fy1269,Graph0_fex1269,Graph0_fey1269);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01269 = new TH1F("Graph_Graph01269","S18",100,0.4,7.6);
   Graph_Graph01269->SetMinimum(-0.1907487);
   Graph_Graph01269->SetMaximum(0.1914879);
   Graph_Graph01269->SetDirectory(0);
   Graph_Graph01269->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01269->SetLineColor(ci);
   Graph_Graph01269->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01269->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01269->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01269->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01269->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01269->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01269->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01269->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01269->GetXaxis()->SetRange(1,100);
   Graph_Graph01269->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01269->GetXaxis()->CenterTitle(true);
   Graph_Graph01269->GetXaxis()->SetLabelFont(42);
   Graph_Graph01269->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01269->GetXaxis()->SetTickLength(0);
   Graph_Graph01269->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01269->GetXaxis()->SetTitleFont(42);
   Graph_Graph01269->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01269->GetYaxis()->CenterTitle(true);
   Graph_Graph01269->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01269->GetYaxis()->SetLabelFont(42);
   Graph_Graph01269->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01269->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01269->GetYaxis()->SetTitleFont(42);
   Graph_Graph01269->GetZaxis()->SetLabelFont(42);
   Graph_Graph01269->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01269->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01269);
   
   gre->Draw("0ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.4,-0.1907487,7.6,-0.1907487,0.4,7.6,8,"");
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
