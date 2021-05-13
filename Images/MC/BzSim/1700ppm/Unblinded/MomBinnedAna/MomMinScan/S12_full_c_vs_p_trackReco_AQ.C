void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 14:54:17 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-535,-0.6201961,3335,0.08504176);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1165[15] = {
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
   Double_t Graph0_fy1165[15] = {
   -0.4897335,
   -0.4896755,
   -0.4535458,
   -0.3214746,
   -0.252749,
   -0.2112085,
   -0.1752036,
   -0.1480557,
   -0.125068,
   -0.1127319,
   -0.09802468,
   -0.1088834,
   -0.05662179,
   -0.08672831,
   -0.1175135};
   Double_t Graph0_fex1165[15] = {
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
   Double_t Graph0_fey1165[15] = {
   0.01292298,
   0.01292279,
   0.01288807,
   0.01270164,
   0.01258242,
   0.01264954,
   0.01292505,
   0.01345657,
   0.01431465,
   0.0156146,
   0.01748752,
   0.02019625,
   0.0241239,
   0.03039452,
   0.05059701};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1165,Graph0_fy1165,Graph0_fex1165,Graph0_fey1165);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01165 = new TH1F("Graph_Graph01165","S12",100,-400,3200);
   Graph_Graph01165->SetMinimum(-0.5496723);
   Graph_Graph01165->SetMaximum(0.01451796);
   Graph_Graph01165->SetDirectory(0);
   Graph_Graph01165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01165->SetLineColor(ci);
   Graph_Graph01165->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01165->GetXaxis()->SetRange(8,93);
   Graph_Graph01165->GetXaxis()->CenterTitle(true);
   Graph_Graph01165->GetXaxis()->SetLabelFont(42);
   Graph_Graph01165->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01165->GetXaxis()->SetTitleFont(42);
   Graph_Graph01165->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01165->GetYaxis()->CenterTitle(true);
   Graph_Graph01165->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01165->GetYaxis()->SetLabelFont(42);
   Graph_Graph01165->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01165->GetYaxis()->SetTitleFont(42);
   Graph_Graph01165->GetZaxis()->SetLabelFont(42);
   Graph_Graph01165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01165);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
