void S18_AEDM_vs_DS_unblinded_900-2250MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.493141e-19,4.75,5.914439e-20);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1065[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1065[4] = {
   -7.012488e-20,
   -1.36013e-20,
   -3.362601e-20,
   -1.781465e-20};
   Double_t _fex1065[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1065[4] = {
   4.44461e-20,
   3.800261e-20,
   3.146644e-20,
   2.323903e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1065,_fy1065,_fex1065,_fey1065);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","S18",100,0.7,4.3);
   Graph_Graph1065->SetMinimum(-1.284682e-19);
   Graph_Graph1065->SetMaximum(3.829854e-20);
   Graph_Graph1065->SetDirectory(0);
   Graph_Graph1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1065->SetLineColor(ci);
   Graph_Graph1065->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1065->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1065->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1065->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1065->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1065->GetXaxis()->CenterTitle(true);
   Graph_Graph1065->GetXaxis()->SetLabelFont(42);
   Graph_Graph1065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1065->GetXaxis()->SetTitleFont(42);
   Graph_Graph1065->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph1065->GetYaxis()->CenterTitle(true);
   Graph_Graph1065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1065->GetYaxis()->SetLabelFont(42);
   Graph_Graph1065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1065->GetYaxis()->SetTitleFont(42);
   Graph_Graph1065->GetZaxis()->SetLabelFont(42);
   Graph_Graph1065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1065);
   
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
