void S0_c_vs_p_sym_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:05 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.1671741,7.25,-0.07384993);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1093[6] = {
   -0.1406063,
   -0.1312883,
   -0.1243356,
   -0.1027011,
   -0.1353376,
   -0.1264604};
   Double_t Graph0_fex1093[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1093[6] = {
   0.008440639,
   0.01190026,
   0.01204322,
   0.01329715,
   0.01628251,
   0.01925232};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S0",100,0.5,6.5);
   Graph_Graph01093->SetMinimum(-0.1578417);
   Graph_Graph01093->SetMaximum(-0.08318236);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
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
