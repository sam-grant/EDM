void S18_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:23:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-8.277808e-20,4.75,2.896804e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1011[4] = {
   3.20793e-20,
   1.227796e-19,
   1.856698e-19,
   1.384441e-19};
   Double_t _fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1011[4] = {
   5.278096e-20,
   4.778776e-20,
   4.193425e-20,
   3.562433e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,0.7,4.3);
   Graph_Graph1011->SetMinimum(-4.553223e-20);
   Graph_Graph1011->SetMaximum(2.524346e-19);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1011->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1011->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1011->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1011->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1011->GetXaxis()->CenterTitle(true);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->CenterTitle(true);
   Graph_Graph1011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
