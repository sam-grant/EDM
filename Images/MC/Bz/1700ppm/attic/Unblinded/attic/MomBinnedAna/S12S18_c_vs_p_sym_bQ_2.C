void S12S18_c_vs_p_sym_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:22 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.4195745,7.25,-0.1888371);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1327[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1327[6] = {
   -0.3750568,
   -0.3604708,
   -0.315972,
   -0.2945454,
   -0.2670187,
   -0.2411346};
   Double_t Graph0_fex1327[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1327[6] = {
   0.006061489,
   0.008557888,
   0.008695854,
   0.009570357,
   0.01169159,
   0.01384132};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1327,Graph0_fy1327,Graph0_fex1327,Graph0_fey1327);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01327 = new TH1F("Graph_Graph01327","S12S18",100,0.5,6.5);
   Graph_Graph01327->SetMinimum(-0.3965008);
   Graph_Graph01327->SetMaximum(-0.2119108);
   Graph_Graph01327->SetDirectory(0);
   Graph_Graph01327->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01327->SetLineColor(ci);
   Graph_Graph01327->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01327->GetXaxis()->CenterTitle(true);
   Graph_Graph01327->GetXaxis()->SetLabelFont(42);
   Graph_Graph01327->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01327->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01327->GetXaxis()->SetTitleFont(42);
   Graph_Graph01327->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01327->GetYaxis()->CenterTitle(true);
   Graph_Graph01327->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01327->GetYaxis()->SetLabelFont(42);
   Graph_Graph01327->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01327->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01327->GetYaxis()->SetTitleFont(42);
   Graph_Graph01327->GetZaxis()->SetLabelFont(42);
   Graph_Graph01327->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01327->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01327);
   
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
