void S18_AEDM_vs_DS_blinded_750-2750MeV_125MeV_BQ_noBr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 17 16:31:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,6.905165e-19,4.75,2.628305e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1002[4] = {
   1.358958e-18,
   1.239558e-18,
   2.084906e-18,
   1.715702e-18};
   Double_t _fex1002[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1002[4] = {
   2.623169e-19,
   2.260772e-19,
   2.204344e-19,
   1.700435e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","S18",100,0.7,4.3);
   Graph_Graph1002->SetMinimum(8.842954e-19);
   Graph_Graph1002->SetMaximum(2.434526e-18);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1002->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1002->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1002->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1002->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
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
