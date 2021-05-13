void S12S18_ABz_vs_p_sym_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,0.1220492,7.25,0.1675206);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1328[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1328[6] = {
   0.145955,
   0.149073,
   0.1433311,
   0.1509564,
   0.148992,
   0.1426985};
   Double_t Graph0_fex1328[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1328[6] = {
   0.005625555,
   0.007931081,
   0.007987232,
   0.008868747,
   0.01094998,
   0.0130707};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1328,Graph0_fy1328,Graph0_fex1328,Graph0_fey1328);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01328 = new TH1F("Graph_Graph01328","S12S18",100,0.5,6.5);
   Graph_Graph01328->SetMinimum(0.1265964);
   Graph_Graph01328->SetMaximum(0.1629734);
   Graph_Graph01328->SetDirectory(0);
   Graph_Graph01328->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01328->SetLineColor(ci);
   Graph_Graph01328->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01328->GetXaxis()->CenterTitle(true);
   Graph_Graph01328->GetXaxis()->SetLabelFont(42);
   Graph_Graph01328->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01328->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01328->GetXaxis()->SetTitleFont(42);
   Graph_Graph01328->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01328->GetYaxis()->CenterTitle(true);
   Graph_Graph01328->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01328->GetYaxis()->SetLabelFont(42);
   Graph_Graph01328->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01328->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01328->GetYaxis()->SetTitleFont(42);
   Graph_Graph01328->GetZaxis()->SetLabelFont(42);
   Graph_Graph01328->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01328->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01328);
   
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
