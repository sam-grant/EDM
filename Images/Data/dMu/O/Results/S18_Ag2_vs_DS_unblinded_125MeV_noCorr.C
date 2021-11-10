void S18_Ag2_vs_DS_unblinded_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:41:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-20.01002,4.75,28.32256);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1056[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1056[4] = {
   8.879565,
   6.118636,
   -3.875517,
   -3.857876};
   Double_t _fex1056[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1056[4] = {
   11.38756,
   9.753346,
   8.079069,
   5.961831};
   TGraphErrors *gre = new TGraphErrors(4,_fx1056,_fy1056,_fex1056,_fey1056);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1056 = new TH1F("Graph_Graph1056","S18",100,0.7,4.3);
   Graph_Graph1056->SetMinimum(-15.17676);
   Graph_Graph1056->SetMaximum(23.4893);
   Graph_Graph1056->SetDirectory(0);
   Graph_Graph1056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1056->SetLineColor(ci);
   Graph_Graph1056->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1056->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1056->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1056->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1056->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1056->GetXaxis()->CenterTitle(true);
   Graph_Graph1056->GetXaxis()->SetLabelFont(42);
   Graph_Graph1056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1056->GetXaxis()->SetTitleFont(42);
   Graph_Graph1056->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph1056->GetYaxis()->CenterTitle(true);
   Graph_Graph1056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1056->GetYaxis()->SetLabelFont(42);
   Graph_Graph1056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1056->GetYaxis()->SetTitleFont(42);
   Graph_Graph1056->GetZaxis()->SetLabelFont(42);
   Graph_Graph1056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1056);
   
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
