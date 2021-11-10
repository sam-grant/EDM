void S18_Ag2_vs_DS_blinded_825-2375MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-17.66557,4.75,18.19447);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1038[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1038[4] = {
   3.78117,
   -4.471976,
   -1.057839,
   0.0292581};
   Double_t _fex1038[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1038[4] = {
   8.43663,
   7.216919,
   5.967846,
   4.397909};
   TGraphErrors *gre = new TGraphErrors(4,_fx1038,_fy1038,_fex1038,_fey1038);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","S18",100,0.7,4.3);
   Graph_Graph1038->SetMinimum(-14.07956);
   Graph_Graph1038->SetMaximum(14.60847);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1038->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1038->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1038->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1038->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1038->GetXaxis()->CenterTitle(true);
   Graph_Graph1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph1038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph1038->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph1038->GetYaxis()->CenterTitle(true);
   Graph_Graph1038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph1038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph1038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1038);
   
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
