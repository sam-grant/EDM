void S12_c_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4225,-3.515808,3405.802,4.783358);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[12] = {
   194.7741,
   428.2602,
   630.9465,
   875.2165,
   1124.014,
   1373.242,
   1622.299,
   1870.808,
   2119.299,
   2366.864,
   2612.607,
   2825.938};
   Double_t Graph0_fy1098[12] = {
   3.131618,
   -2.106547,
   -0.8488108,
   -0.4539643,
   -0.2912295,
   -0.1886867,
   -0.1482579,
   -0.1103273,
   -0.09515906,
   -0.08923669,
   -0.08292973,
   -0.02669413};
   Double_t Graph0_fex1098[12] = {
   0.2305179,
   0.04066602,
   0.0316485,
   0.03041501,
   0.03088632,
   0.03188215,
   0.03358649,
   0.0364383,
   0.04104611,
   0.04825386,
   0.06099314,
   0.0777546};
   Double_t Graph0_fey1098[12] = {
   0.2685462,
   0.02606682,
   0.01242999,
   0.009745486,
   0.008358617,
   0.007405323,
   0.006759634,
   0.006405809,
   0.006314079,
   0.006521228,
   0.007224104,
   0.01127702};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","S12_",100,0,3089.163);
   Graph_Graph01098->SetMinimum(-2.685891);
   Graph_Graph01098->SetMaximum(3.953442);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(1,98);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
