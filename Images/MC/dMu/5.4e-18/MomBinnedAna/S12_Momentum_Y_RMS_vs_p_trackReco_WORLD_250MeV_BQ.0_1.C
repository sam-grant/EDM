void S12_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4182,2.5073,3406.946,28.20785);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1102[11] = {
   451.9295,
   653.2541,
   880.1027,
   1123.321,
   1371.175,
   1620.3,
   1867.055,
   2114.96,
   2362.495,
   2614.658,
   2787.332};
   Double_t Graph0_fy1102[11] = {
   13.90392,
   16.66053,
   18.60539,
   20.14704,
   21.09449,
   21.36515,
   21.2335,
   20.25206,
   18.62628,
   16.23842,
   13.68343};
   Double_t Graph0_fex1102[11] = {
   0.2585753,
   0.2175793,
   0.1578323,
   0.1544094,
   0.1642786,
   0.1821068,
   0.2117136,
   0.2648624,
   0.3434608,
   0.4240096,
   0.523915};
   Double_t Graph0_fey1102[11] = {
   0.07684889,
   0.03732637,
   0.02904095,
   0.03049516,
   0.03406913,
   0.03828155,
   0.04429474,
   0.05292021,
   0.06336862,
   0.06964597,
   0.1696959};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1102,Graph0_fy1102,Graph0_fex1102,Graph0_fey1102);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01102 = new TH1F("Graph_Graph01102","S12_",100,218.0524,3021.475);
   Graph_Graph01102->SetMinimum(5.077355);
   Graph_Graph01102->SetMaximum(25.63779);
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
