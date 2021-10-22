void S12S18_full_c_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.61053,3378.375,0.3789783);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1167[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1167[6] = {
   -2.035135,
   -0.6071079,
   -0.2387002,
   -0.145395,
   -0.176149,
   -0.1892452};
   Double_t Graph0_fex1167[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1167[6] = {
   0.07714433,
   0.0269581,
   0.02322751,
   0.02612189,
   0.03536099,
   0.0409902};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1167,Graph0_fy1167,Graph0_fex1167,Graph0_fey1167);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01167 = new TH1F("Graph_Graph01167","S12S18",100,0,3300);
   Graph_Graph01167->SetMinimum(-2.311579);
   Graph_Graph01167->SetMaximum(0.08002746);
   Graph_Graph01167->SetDirectory(0);
   Graph_Graph01167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01167->SetLineColor(ci);
   Graph_Graph01167->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01167->GetXaxis()->SetRange(1,91);
   Graph_Graph01167->GetXaxis()->CenterTitle(true);
   Graph_Graph01167->GetXaxis()->SetLabelFont(42);
   Graph_Graph01167->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01167->GetXaxis()->SetTitleFont(42);
   Graph_Graph01167->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01167->GetYaxis()->CenterTitle(true);
   Graph_Graph01167->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01167->GetYaxis()->SetLabelFont(42);
   Graph_Graph01167->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01167->GetYaxis()->SetTitleFont(42);
   Graph_Graph01167->GetZaxis()->SetLabelFont(42);
   Graph_Graph01167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01167);
   
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
