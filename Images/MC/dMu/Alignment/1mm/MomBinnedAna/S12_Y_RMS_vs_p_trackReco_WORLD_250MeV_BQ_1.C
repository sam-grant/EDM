void S12_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.8782,9.350019,3407.489,16.84962);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[11] = {
   451.5772,
   653.0552,
   880.0811,
   1123.256,
   1371.053,
   1620.101,
   1866.93,
   2114.522,
   2362.279,
   2614.457,
   2787.823};
   Double_t Graph0_fy1101[11] = {
   13.09456,
   12.977,
   12.94384,
   12.88867,
   12.78463,
   12.7723,
   12.74373,
   12.69995,
   12.63097,
   12.62487,
   12.6565};
   Double_t Graph0_fex1101[11] = {
   0.1924069,
   0.1635947,
   0.1188262,
   0.1164574,
   0.124175,
   0.1375161,
   0.160136,
   0.20159,
   0.2639137,
   0.3238621,
   0.40328};
   Double_t Graph0_fey1101[11] = {
   0.05403229,
   0.02179891,
   0.0152162,
   0.01471965,
   0.01561092,
   0.01728814,
   0.02009837,
   0.02522285,
   0.03294302,
   0.04143066,
   0.1205873};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","S12_",100,217.7007,3021.911);
   Graph_Graph01101->SetMinimum(10.09998);
   Graph_Graph01101->SetMaximum(16.09966);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01101->GetXaxis()->SetRange(0,101);
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
