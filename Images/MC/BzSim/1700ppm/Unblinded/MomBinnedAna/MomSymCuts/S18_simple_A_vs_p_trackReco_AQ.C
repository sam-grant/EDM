void S18_simple_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,0.04930321,8.5,0.2997314);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1214[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1214[7] = {
   0.109366,
   0.1283152,
   0.1551994,
   0.1469255,
   0.156138,
   0.1745195,
   0.2146128};
   Double_t Graph0_fex1214[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1214[7] = {
   0.01832478,
   0.01815671,
   0.01834444,
   0.01914295,
   0.02107699,
   0.02579221,
   0.04338056};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1214,Graph0_fy1214,Graph0_fex1214,Graph0_fey1214);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01214 = new TH1F("Graph_Graph01214","S18",100,0.4,7.6);
   Graph_Graph01214->SetMinimum(0.07434604);
   Graph_Graph01214->SetMaximum(0.2746886);
   Graph_Graph01214->SetDirectory(0);
   Graph_Graph01214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01214->SetLineColor(ci);
   Graph_Graph01214->GetXaxis()->SetTitle("Symmetric cut");
   Graph_Graph01214->GetXaxis()->CenterTitle(true);
   Graph_Graph01214->GetXaxis()->SetLabelFont(42);
   Graph_Graph01214->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01214->GetXaxis()->SetTitleFont(42);
   Graph_Graph01214->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01214->GetYaxis()->CenterTitle(true);
   Graph_Graph01214->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01214->GetYaxis()->SetLabelFont(42);
   Graph_Graph01214->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01214->GetYaxis()->SetTitleFont(42);
   Graph_Graph01214->GetZaxis()->SetLabelFont(42);
   Graph_Graph01214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01214);
   
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
