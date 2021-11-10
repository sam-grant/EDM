void S12_Ag2_vs_DS_unblinded_750-2500MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-317.776,4.75,519.3558);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1019[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1019[4] = {
   233.6018,
   -53.84735,
   173.3121,
   30.50795};
   Double_t _fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1019[4] = {
   146.232,
   124.4066,
   102.9561,
   74.83947};
   TGraphErrors *gre = new TGraphErrors(4,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","S12",100,0.7,4.3);
   Graph_Graph1019->SetMinimum(-234.0628);
   Graph_Graph1019->SetMaximum(435.6426);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1019->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1019->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1019->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1019->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1019->GetXaxis()->CenterTitle(true);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph1019->GetYaxis()->CenterTitle(true);
   Graph_Graph1019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
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
