void S12S18_full_c_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:36:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-4.111999,3411.2,16.99004);
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
   13.14797,
   2.432335,
   -0.5671163,
   -0.5297379,
   -0.4224178,
   -0.3355064,
   -0.3505443,
   -0.2495627,
   -0.1966003,
   -0.1669967,
   -0.1653348,
   -0.1418359,
   -0.1077523,
   -0.08300969};
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
   0.3250613,
   0.05747096,
   0.02787677,
   0.01944661,
   0.01666197,
   0.01539007,
   0.01476266,
   0.01438174,
   0.01476143,
   0.01561681,
   0.01682067,
   0.01792257,
   0.01920782,
   0.06853095};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1129,Graph0_fy1129,Graph0_fex1129,Graph0_fey1129);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01129 = new TH1F("Graph_Graph01129","S12S18",100,0,3280);
   Graph_Graph01129->SetMinimum(-2.001795);
   Graph_Graph01129->SetMaximum(14.87983);
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
