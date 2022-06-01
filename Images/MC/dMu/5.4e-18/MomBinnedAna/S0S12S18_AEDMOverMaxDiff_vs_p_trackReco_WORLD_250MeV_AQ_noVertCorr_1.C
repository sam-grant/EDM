void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3995,-0.0001475532,3405.595,0.00350863);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1228[12] = {
   194.6922,
   428.6847,
   630.9386,
   875.1931,
   1123.964,
   1373.219,
   1622.316,
   1870.762,
   2119.242,
   2366.792,
   2612.599,
   2825.796};
   Double_t Graph0_fy1228[12] = {
   0.001560802,
   0.000662522,
   0.0006442319,
   0.0009328857,
   0.000837256,
   0.0009554958,
   0.0008452281,
   0.0008075679,
   0.0007094594,
   0.0005899312,
   0.0005064951,
   0.0003021372};
   Double_t Graph0_fex1228[12] = {
   0.1483758,
   0.02589663,
   0.0201489,
   0.01936183,
   0.01967197,
   0.02031215,
   0.02139941,
   0.02322305,
   0.02613862,
   0.03076314,
   0.03885924,
   0.04941833};
   Double_t Graph0_fey1228[12] = {
   0.001318508,
   0.0001278734,
   6.076184e-05,
   4.773855e-05,
   4.098779e-05,
   3.632306e-05,
   3.30681e-05,
   3.110741e-05,
   3.020985e-05,
   3.031906e-05,
   3.198149e-05,
   4.627781e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1228,Graph0_fy1228,Graph0_fex1228,Graph0_fey1228);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01228 = new TH1F("Graph_Graph01228","S0S12S18_",100,0,3088.975);
   Graph_Graph01228->SetMinimum(0.0002180651);
   Graph_Graph01228->SetMaximum(0.003143011);
   Graph_Graph01228->SetDirectory(0);
   Graph_Graph01228->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01228->SetLineColor(ci);
   Graph_Graph01228->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01228->GetXaxis()->SetRange(1,98);
   Graph_Graph01228->GetXaxis()->CenterTitle(true);
   Graph_Graph01228->GetXaxis()->SetLabelFont(42);
   Graph_Graph01228->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01228->GetXaxis()->SetTitleFont(42);
   Graph_Graph01228->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01228->GetYaxis()->CenterTitle(true);
   Graph_Graph01228->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01228->GetYaxis()->SetLabelFont(42);
   Graph_Graph01228->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01228->GetYaxis()->SetTitleFont(42);
   Graph_Graph01228->GetZaxis()->SetLabelFont(42);
   Graph_Graph01228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01228);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
