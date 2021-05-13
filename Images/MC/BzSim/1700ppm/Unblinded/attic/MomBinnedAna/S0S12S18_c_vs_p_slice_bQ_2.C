void S0S12S18_c_vs_p_slice_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 10:23:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-410,-3.406393,3690,14.26168);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1235[14] = {
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
   Double_t Graph0_fy1235[14] = {
   10.97518,
   2.210469,
   -0.4309977,
   -0.4354095,
   -0.3546452,
   -0.3060443,
   -0.2824335,
   -0.2017568,
   -0.1539364,
   -0.06890351,
   -0.09474605,
   -0.07109695,
   -0.04186964,
   -0.1437597};
   Double_t Graph0_fex1235[14] = {
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
   Double_t Graph0_fey1235[14] = {
   0.3418172,
   0.06138884,
   0.03071689,
   0.02159127,
   0.01851438,
   0.01711594,
   0.01636486,
   0.01589658,
   0.01618174,
   0.01694435,
   0.01805986,
   0.01929272,
   0.02056291,
   0.06861807};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1235,Graph0_fy1235,Graph0_fex1235,Graph0_fey1235);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01235 = new TH1F("Graph_Graph01235","S0S12S18",100,0,3280);
   Graph_Graph01235->SetMinimum(-1.639586);
   Graph_Graph01235->SetMaximum(12.49487);
   Graph_Graph01235->SetDirectory(0);
   Graph_Graph01235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01235->SetLineColor(ci);
   Graph_Graph01235->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01235->GetXaxis()->CenterTitle(true);
   Graph_Graph01235->GetXaxis()->SetLabelFont(42);
   Graph_Graph01235->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01235->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01235->GetXaxis()->SetTitleFont(42);
   Graph_Graph01235->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01235->GetYaxis()->CenterTitle(true);
   Graph_Graph01235->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01235->GetYaxis()->SetLabelFont(42);
   Graph_Graph01235->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01235->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01235->GetYaxis()->SetTitleFont(42);
   Graph_Graph01235->GetZaxis()->SetLabelFont(42);
   Graph_Graph01235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01235);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
