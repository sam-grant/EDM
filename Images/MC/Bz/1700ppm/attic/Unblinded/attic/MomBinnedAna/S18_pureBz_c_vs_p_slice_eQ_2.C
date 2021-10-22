void S18_pureBz_c_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-3.388328,3690,0.7364435);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1265[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1265[14] = {
   -2.590603,
   -1.424755,
   -0.4895338,
   -0.3129777,
   -0.2244996,
   -0.1990926,
   -0.1700211,
   -0.1321145,
   -0.1055892,
   -0.08901576,
   -0.07779269,
   -0.04253511,
   -0.0799359,
   0.0177747};
   Double_t Graph0_fex1265[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1265[14] = {
   0.1102635,
   0.03872448,
   0.02896128,
   0.0252791,
   0.02287657,
   0.02102475,
   0.01959839,
   0.01856794,
   0.01799688,
   0.01774218,
   0.01789917,
   0.01855843,
   0.02033556,
   0.03120682};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1265,Graph0_fy1265,Graph0_fex1265,Graph0_fey1265);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01265 = new TH1F("Graph_Graph01265","S18",100,0,3280);
   Graph_Graph01265->SetMinimum(-2.975851);
   Graph_Graph01265->SetMaximum(0.3239663);
   Graph_Graph01265->SetDirectory(0);
   Graph_Graph01265->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01265->SetLineColor(ci);
   Graph_Graph01265->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01265->GetXaxis()->CenterTitle(true);
   Graph_Graph01265->GetXaxis()->SetLabelFont(42);
   Graph_Graph01265->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01265->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01265->GetXaxis()->SetTitleFont(42);
   Graph_Graph01265->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01265->GetYaxis()->CenterTitle(true);
   Graph_Graph01265->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01265->GetYaxis()->SetLabelFont(42);
   Graph_Graph01265->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01265->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01265->GetYaxis()->SetTitleFont(42);
   Graph_Graph01265->GetZaxis()->SetLabelFont(42);
   Graph_Graph01265->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01265->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01265);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
