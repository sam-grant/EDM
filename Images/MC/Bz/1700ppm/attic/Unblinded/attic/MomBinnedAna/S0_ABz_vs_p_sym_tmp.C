void S0_ABz_vs_p_sym_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:00:38 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.02477779,7.25,0.3097871);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1112[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1112[6] = {
   0.1382707,
   0.1027681,
   0.08514553,
   0.1153313,
   0.1153335,
   0.1425046};
   Double_t Graph0_fex1112[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1112[6] = {
   0.04601782,
   0.04619479,
   0.04835495,
   0.05368203,
   0.06623503,
   0.1115216};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1112,Graph0_fy1112,Graph0_fex1112,Graph0_fey1112);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01112 = new TH1F("Graph_Graph01112","S0",100,0.5,6.5);
   Graph_Graph01112->SetMinimum(0.008678697);
   Graph_Graph01112->SetMaximum(0.2763306);
   Graph_Graph01112->SetDirectory(0);
   Graph_Graph01112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01112->SetLineColor(ci);
   Graph_Graph01112->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01112->GetXaxis()->CenterTitle(true);
   Graph_Graph01112->GetXaxis()->SetLabelFont(42);
   Graph_Graph01112->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01112->GetXaxis()->SetTitleFont(42);
   Graph_Graph01112->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01112->GetYaxis()->CenterTitle(true);
   Graph_Graph01112->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01112->GetYaxis()->SetLabelFont(42);
   Graph_Graph01112->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01112->GetYaxis()->SetTitleFont(42);
   Graph_Graph01112->GetZaxis()->SetLabelFont(42);
   Graph_Graph01112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01112);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
