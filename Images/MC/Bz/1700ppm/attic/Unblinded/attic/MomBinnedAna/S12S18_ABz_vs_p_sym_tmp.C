void S12S18_ABz_vs_p_sym_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,0.05937928,7.25,0.2995363);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1400[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1400[6] = {
   0.1637239,
   0.1836622,
   0.1767257,
   0.1863839,
   0.1663799,
   0.1794578};
   Double_t Graph0_fex1400[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1400[6] = {
   0.03288256,
   0.03308574,
   0.03461332,
   0.03833985,
   0.04729184,
   0.08005234};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1400,Graph0_fy1400,Graph0_fex1400,Graph0_fey1400);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01400 = new TH1F("Graph_Graph01400","S12S18",100,0.5,6.5);
   Graph_Graph01400->SetMinimum(0.08339498);
   Graph_Graph01400->SetMaximum(0.2755206);
   Graph_Graph01400->SetDirectory(0);
   Graph_Graph01400->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01400->SetLineColor(ci);
   Graph_Graph01400->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01400->GetXaxis()->CenterTitle(true);
   Graph_Graph01400->GetXaxis()->SetLabelFont(42);
   Graph_Graph01400->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01400->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01400->GetXaxis()->SetTitleFont(42);
   Graph_Graph01400->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01400->GetYaxis()->CenterTitle(true);
   Graph_Graph01400->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01400->GetYaxis()->SetLabelFont(42);
   Graph_Graph01400->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01400->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01400->GetYaxis()->SetTitleFont(42);
   Graph_Graph01400->GetZaxis()->SetLabelFont(42);
   Graph_Graph01400->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01400->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01400);
   
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
