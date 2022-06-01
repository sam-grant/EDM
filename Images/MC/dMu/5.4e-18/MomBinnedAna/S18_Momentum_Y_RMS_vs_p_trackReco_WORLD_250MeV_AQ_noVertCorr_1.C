void S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3085,12.80694,3404.776,24.63242);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1145[12] = {
   194.1149,
   428.653,
   630.9974,
   875.1308,
   1123.945,
   1373.169,
   1622.3,
   1870.684,
   2119.125,
   2366.648,
   2612.508,
   2825.031};
   Double_t Graph0_fy1145[12] = {
   17.08055,
   14.78602,
   17.38796,
   19.85439,
   21.46521,
   22.33301,
   22.65396,
   22.48769,
   21.83663,
   20.5753,
   18.44578,
   15.71116};
   Double_t Graph0_fex1145[12] = {
   0.2346933,
   0.04102879,
   0.03179942,
   0.03058041,
   0.03110312,
   0.03213786,
   0.03384836,
   0.03676223,
   0.04140748,
   0.04888111,
   0.06195605,
   0.07860513};
   Double_t Graph0_fey1145[12] = {
   0.06756962,
   0.008167732,
   0.005512875,
   0.005970759,
   0.006556382,
   0.007053271,
   0.007550495,
   0.008145066,
   0.008923146,
   0.009957533,
   0.0114013,
   0.01679386};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1145,Graph0_fy1145,Graph0_fex1145,Graph0_fey1145);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01145 = new TH1F("Graph_Graph01145","S18_",100,0,3088.232);
   Graph_Graph01145->SetMinimum(13.98948);
   Graph_Graph01145->SetMaximum(23.44987);
   Graph_Graph01145->SetDirectory(0);
   Graph_Graph01145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01145->SetLineColor(ci);
   Graph_Graph01145->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01145->GetXaxis()->SetRange(1,98);
   Graph_Graph01145->GetXaxis()->CenterTitle(true);
   Graph_Graph01145->GetXaxis()->SetLabelFont(42);
   Graph_Graph01145->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01145->GetXaxis()->SetTitleFont(42);
   Graph_Graph01145->GetYaxis()->CenterTitle(true);
   Graph_Graph01145->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01145->GetYaxis()->SetLabelFont(42);
   Graph_Graph01145->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01145->GetYaxis()->SetTitleFont(42);
   Graph_Graph01145->GetZaxis()->SetLabelFont(42);
   Graph_Graph01145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01145);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
