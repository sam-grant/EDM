void simple_A_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 14 14:19:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-535,0.009916154,3335,0.2637673);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1086[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1086[15] = {
   0.195761,
   0.199671,
   0.2100738,
   0.2185709,
   0.2183651,
   0.2130437,
   0.2078971,
   0.20141,
   0.1917671,
   0.181495,
   0.1654343,
   0.1583916,
   0.1302411,
   0.1062842,
   0.05887661};
   Double_t Graph0_fex1086[15] = {
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
   100,
   100};
   Double_t Graph0_fey1086[15] = {
   0.003006773,
   0.002991084,
   0.002952725,
   0.002887908,
   0.002801514,
   0.002748628,
   0.002737362,
   0.00276646,
   0.002843622,
   0.002981244,
   0.003190265,
   0.003507803,
   0.003999785,
   0.004856962,
   0.006651931};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1086,Graph0_fy1086,Graph0_fex1086,Graph0_fey1086);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{Bz} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01086 = new TH1F("Graph_Graph01086","",100,-400,3200);
   Graph_Graph01086->SetMinimum(0.03530127);
   Graph_Graph01086->SetMaximum(0.2383822);
   Graph_Graph01086->SetDirectory(0);
   Graph_Graph01086->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01086->SetLineColor(ci);
   Graph_Graph01086->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01086->GetXaxis()->SetRange(8,93);
   Graph_Graph01086->GetXaxis()->CenterTitle(true);
   Graph_Graph01086->GetXaxis()->SetLabelFont(42);
   Graph_Graph01086->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01086->GetXaxis()->SetTitleFont(42);
   Graph_Graph01086->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01086->GetYaxis()->CenterTitle(true);
   Graph_Graph01086->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01086->GetYaxis()->SetLabelFont(42);
   Graph_Graph01086->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01086->GetYaxis()->SetTitleFont(42);
   Graph_Graph01086->GetZaxis()->SetLabelFont(42);
   Graph_Graph01086->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01086);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
