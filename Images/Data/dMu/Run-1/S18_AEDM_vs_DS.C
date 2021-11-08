void S18_AEDM_vs_DS()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 25 13:30:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,7.014504e-21,4.75,2.554224e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1009[4] = {
   7.760218e-19,
   1.293058e-18,
   1.871683e-18,
   1.622619e-18};
   Double_t _fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1009[4] = {
   3.444724e-19,
   2.999644e-19,
   2.580067e-19,
   1.971617e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","S18",100,0.7,4.3);
   Graph_Graph1009->SetMinimum(2.617355e-19);
   Graph_Graph1009->SetMaximum(2.299503e-18);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1009->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1009->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1009->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1009->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
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
