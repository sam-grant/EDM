void S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3085,-3.305321,3404.776,5.283299);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[12] = {
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
   Double_t Graph0_fy1137[12] = {
   3.582381,
   -1.847638,
   -0.6924226,
   -0.308313,
   -0.1965906,
   -0.1266004,
   -0.0935004,
   -0.0846128,
   -0.08761335,
   -0.07913555,
   -0.07906944,
   -0.03047615};
   Double_t Graph0_fex1137[12] = {
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
   Double_t Graph0_fey1137[12] = {
   0.269481,
   0.02624605,
   0.01244884,
   0.009767265,
   0.008397863,
   0.007442593,
   0.006803921,
   0.006448569,
   0.006369332,
   0.006601449,
   0.007323692,
   0.01174796};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","S18_",100,0,3088.232);
   Graph_Graph01137->SetMinimum(-2.446459);
   Graph_Graph01137->SetMaximum(4.424437);
   Graph_Graph01137->SetDirectory(0);
   Graph_Graph01137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01137->SetLineColor(ci);
   Graph_Graph01137->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01137->GetXaxis()->SetRange(1,98);
   Graph_Graph01137->GetXaxis()->CenterTitle(true);
   Graph_Graph01137->GetXaxis()->SetLabelFont(42);
   Graph_Graph01137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01137->GetXaxis()->SetTitleFont(42);
   Graph_Graph01137->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01137->GetYaxis()->CenterTitle(true);
   Graph_Graph01137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01137->GetYaxis()->SetLabelFont(42);
   Graph_Graph01137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01137->GetYaxis()->SetTitleFont(42);
   Graph_Graph01137->GetZaxis()->SetLabelFont(42);
   Graph_Graph01137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01137);
   
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
