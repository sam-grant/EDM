void dBr_vs_N_1_test()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  7 17:33:36 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1375,-0.1375,1.2375,1.2375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fy1083[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fex1083[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1083[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle(";Sub-runs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","",100,0,1.1);
   Graph_Graph01083->SetMinimum(0);
   Graph_Graph01083->SetMaximum(1.1);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("Sub-runs");
   Graph_Graph01083->GetXaxis()->SetRange(1,100);
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
