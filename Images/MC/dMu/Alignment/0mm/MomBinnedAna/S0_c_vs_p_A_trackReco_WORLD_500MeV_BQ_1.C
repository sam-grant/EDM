void S0_c_vs_p_A_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:58:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-128.0953,-6.802391e-05,3216.756,0.0005057844);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[6] = {
   451.4261,
   805.2435,
   1239.499,
   1727.357,
   2211.937,
   2637.085};
   Double_t Graph0_fy1050[6] = {
   0.0001458556,
   -3.191518e-07,
   -3.252306e-07,
   -5.643412e-07,
   -4.992161e-07,
   -5.899535e-06};
   Double_t Graph0_fex1050[6] = {
   0.1844619,
   0.1667879,
   0.1619127,
   0.1953639,
   0.2788157,
   0.3336196};
   Double_t Graph0_fey1050[6] = {
   5.110507e-06,
   6.522811e-08,
   4.187833e-08,
   7.806538e-08,
   2.719059e-07,
   2.320785e-06};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","S0_",100,232.6239,2856.036);
   Graph_Graph01050->SetMinimum(-1.064307e-05);
   Graph_Graph01050->SetMaximum(0.0004484036);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01050->GetXaxis()->SetRange(0,101);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("c / 500 MeV");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
