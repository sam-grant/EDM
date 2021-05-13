void S18_ABz_vs_p_sym_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,0.09974666,7.25,0.1971339);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1250[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1250[6] = {
   0.1378211,
   0.1383285,
   0.1430734,
   0.1382508,
   0.139513,
   0.1530387};
   Double_t Graph0_fex1250[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1250[6] = {
   0.01216303,
   0.01717722,
   0.01748018,
   0.01925965,
   0.02353511,
   0.02786392};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1250,Graph0_fy1250,Graph0_fex1250,Graph0_fey1250);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01250 = new TH1F("Graph_Graph01250","S18",100,0.5,6.5);
   Graph_Graph01250->SetMinimum(0.1094854);
   Graph_Graph01250->SetMaximum(0.1873951);
   Graph_Graph01250->SetDirectory(0);
   Graph_Graph01250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01250->SetLineColor(ci);
   Graph_Graph01250->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01250->GetXaxis()->CenterTitle(true);
   Graph_Graph01250->GetXaxis()->SetLabelFont(42);
   Graph_Graph01250->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01250->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01250->GetXaxis()->SetTitleFont(42);
   Graph_Graph01250->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01250->GetYaxis()->CenterTitle(true);
   Graph_Graph01250->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01250->GetYaxis()->SetLabelFont(42);
   Graph_Graph01250->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01250->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01250->GetYaxis()->SetTitleFont(42);
   Graph_Graph01250->GetZaxis()->SetLabelFont(42);
   Graph_Graph01250->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01250->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01250);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
