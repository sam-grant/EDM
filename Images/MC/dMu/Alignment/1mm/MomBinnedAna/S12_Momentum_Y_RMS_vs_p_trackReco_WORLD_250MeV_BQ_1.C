void S12_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.8782,2.601175,3407.489,28.27527);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1102[11] = {
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
   Double_t Graph0_fy1102[11] = {
   13.92283,
   16.64856,
   18.59047,
   20.13041,
   21.13523,
   21.42334,
   21.23821,
   20.31049,
   18.70572,
   16.29027,
   13.7189};
   Double_t Graph0_fex1102[11] = {
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
   Double_t Graph0_fey1102[11] = {
   0.05745002,
   0.02796643,
   0.02185414,
   0.02299017,
   0.02580781,
   0.02899831,
   0.03349568,
   0.0403383,
   0.04878664,
   0.05345929,
   0.1307095};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1102,Graph0_fy1102,Graph0_fex1102,Graph0_fey1102);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01102 = new TH1F("Graph_Graph01102","S12_",100,217.7007,3021.911);
   Graph_Graph01102->SetMinimum(5.168585);
   Graph_Graph01102->SetMaximum(25.70786);
   Graph_Graph01102->SetDirectory(0);
   Graph_Graph01102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01102->SetLineColor(ci);
   Graph_Graph01102->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01102->GetXaxis()->SetRange(0,101);
   Graph_Graph01102->GetXaxis()->CenterTitle(true);
   Graph_Graph01102->GetXaxis()->SetLabelFont(42);
   Graph_Graph01102->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01102->GetXaxis()->SetTitleFont(42);
   Graph_Graph01102->GetYaxis()->CenterTitle(true);
   Graph_Graph01102->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01102->GetYaxis()->SetLabelFont(42);
   Graph_Graph01102->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01102->GetYaxis()->SetTitleFont(42);
   Graph_Graph01102->GetZaxis()->SetLabelFont(42);
   Graph_Graph01102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01102);
   
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
