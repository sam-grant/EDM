void S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3085,181.5886,3404.776,184.808);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1149[12] = {
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
   Double_t Graph0_fy1149[12] = {
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.3824,
   183.7507,
   182.6459};
   Double_t Graph0_fex1149[12] = {
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
   Double_t Graph0_fey1149[12] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1149,Graph0_fy1149,Graph0_fex1149,Graph0_fey1149);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01149 = new TH1F("Graph_Graph01149","S18_",100,0,3088.232);
   Graph_Graph01149->SetMinimum(181.9106);
   Graph_Graph01149->SetMaximum(184.486);
   Graph_Graph01149->SetDirectory(0);
   Graph_Graph01149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01149->SetLineColor(ci);
   Graph_Graph01149->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01149->GetXaxis()->SetRange(1,98);
   Graph_Graph01149->GetXaxis()->CenterTitle(true);
   Graph_Graph01149->GetXaxis()->SetLabelFont(42);
   Graph_Graph01149->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01149->GetXaxis()->SetTitleFont(42);
   Graph_Graph01149->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01149->GetYaxis()->CenterTitle(true);
   Graph_Graph01149->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01149->GetYaxis()->SetLabelFont(42);
   Graph_Graph01149->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01149->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01149->GetYaxis()->SetTitleFont(42);
   Graph_Graph01149->GetZaxis()->SetLabelFont(42);
   Graph_Graph01149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01149);
   
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
