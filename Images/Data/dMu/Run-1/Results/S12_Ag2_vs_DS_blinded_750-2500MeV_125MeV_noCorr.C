void S12_Ag2_vs_DS_blinded_750-2500MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-21.98741,4.75,14.25882);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1037[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1037[4] = {
   -8.257397,
   -1.434652,
   1.626103,
   4.291564};
   Double_t _fex1037[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1037[4] = {
   7.688975,
   6.556004,
   5.385475,
   3.926219};
   TGraphErrors *gre = new TGraphErrors(4,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","S12",100,0.7,4.3);
   Graph_Graph1037->SetMinimum(-18.36279);
   Graph_Graph1037->SetMaximum(10.6342);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1037->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1037->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1037->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1037->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1037->GetXaxis()->CenterTitle(true);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph1037->GetYaxis()->CenterTitle(true);
   Graph_Graph1037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
