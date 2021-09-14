void S12S18_full_c_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-4.048149,3411.2,16.76229);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1129[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1129[14] = {
   12.96716,
   2.434008,
   -0.5519211,
   -0.5382999,
   -0.4247614,
   -0.3500006,
   -0.3528157,
   -0.2524534,
   -0.2033566,
   -0.1799915,
   -0.1633499,
   -0.1494847,
   -0.1127825,
   -0.1912993};
   Double_t Graph0_fex1129[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1129[14] = {
   0.3267272,
   0.05742361,
   0.0278207,
   0.01939189,
   0.01660834,
   0.01532878,
   0.01470241,
   0.0143318,
   0.01470229,
   0.0155343,
   0.01674949,
   0.01780258,
   0.01908793,
   0.06132037};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1129,Graph0_fy1129,Graph0_fex1129,Graph0_fey1129);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01129 = new TH1F("Graph_Graph01129","S12S18",100,0,3280);
   Graph_Graph01129->SetMinimum(-1.967105);
   Graph_Graph01129->SetMaximum(14.68125);
   Graph_Graph01129->SetDirectory(0);
   Graph_Graph01129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01129->SetLineColor(ci);
   Graph_Graph01129->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01129->GetXaxis()->SetRange(6,93);
   Graph_Graph01129->GetXaxis()->CenterTitle(true);
   Graph_Graph01129->GetXaxis()->SetLabelFont(42);
   Graph_Graph01129->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01129->GetXaxis()->SetTitleFont(42);
   Graph_Graph01129->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01129->GetYaxis()->CenterTitle(true);
   Graph_Graph01129->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01129->GetYaxis()->SetLabelFont(42);
   Graph_Graph01129->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01129->GetYaxis()->SetTitleFont(42);
   Graph_Graph01129->GetZaxis()->SetLabelFont(42);
   Graph_Graph01129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01129);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
