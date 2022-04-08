void S12_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.1786,12.43272,3375.742,13.27724);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[11] = {
   451.6434,
   653.2791,
   880.0417,
   1123.23,
   1371.169,
   1620.035,
   1867.131,
   2114.768,
   2362.473,
   2614.547,
   2787.815};
   Double_t Graph0_fy1101[11] = {
   13.09923,
   13.00911,
   12.94987,
   12.89842,
   12.81094,
   12.76559,
   12.74471,
   12.67194,
   12.67366,
   12.67588,
   12.65581};
   Double_t Graph0_fex1101[11] = {
   0.1328533,
   0.1124893,
   0.08162341,
   0.07988011,
   0.085199,
   0.09418247,
   0.109743,
   0.1378075,
   0.179929,
   0.2210366,
   0.2769383};
   Double_t Graph0_fey1101[11] = {
   0.03725704,
   0.01503472,
   0.01045054,
   0.01010685,
   0.0107274,
   0.01183768,
   0.01377445,
   0.0171906,
   0.02251219,
   0.02837976,
   0.08234046};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","S12_",100,217.8525,3021.75);
   Graph_Graph01101->SetMinimum(12.51717);
   Graph_Graph01101->SetMaximum(13.19278);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01101->GetXaxis()->SetRange(0,100);
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
