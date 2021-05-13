void S12S18_ABz_vs_p_pmin_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-0.00579033,2600,0.2680247);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1398[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1398[9] = {
   0.1525899,
   0.1791374,
   0.1745739,
   0.1898521,
   0.1544489,
   0.1595674,
   0.140011,
   0.08173531,
   0.1054694};
   Double_t Graph0_fex1398[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1398[9] = {
   0.03288621,
   0.0323132,
   0.03219756,
   0.03253675,
   0.0335046,
   0.03513095,
   0.03769718,
   0.04188981,
   0.04817421};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1398,Graph0_fy1398,Graph0_fex1398,Graph0_fey1398);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01398 = new TH1F("Graph_Graph01398","S12S18",100,440,2360);
   Graph_Graph01398->SetMinimum(0.02159117);
   Graph_Graph01398->SetMaximum(0.2406432);
   Graph_Graph01398->SetDirectory(0);
   Graph_Graph01398->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01398->SetLineColor(ci);
   Graph_Graph01398->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01398->GetXaxis()->CenterTitle(true);
   Graph_Graph01398->GetXaxis()->SetLabelFont(42);
   Graph_Graph01398->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01398->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01398->GetXaxis()->SetTitleFont(42);
   Graph_Graph01398->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01398->GetYaxis()->CenterTitle(true);
   Graph_Graph01398->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01398->GetYaxis()->SetLabelFont(42);
   Graph_Graph01398->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01398->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01398->GetYaxis()->SetTitleFont(42);
   Graph_Graph01398->GetZaxis()->SetLabelFont(42);
   Graph_Graph01398->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01398->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01398);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
