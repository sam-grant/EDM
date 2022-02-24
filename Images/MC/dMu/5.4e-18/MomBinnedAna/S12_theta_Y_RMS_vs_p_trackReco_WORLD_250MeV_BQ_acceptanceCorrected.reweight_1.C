void S12_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4009,-5.310178,3406.808,58.71763);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[11] = {
   451.7715,
   653.353,
   880.3799,
   1123.143,
   1371.135,
   1620.306,
   1866.82,
   2115,
   2362.657,
   2614.209,
   2787.525};
   Double_t Graph0_fy1100[11] = {
   36.54761,
   33.9727,
   29.90555,
   25.05676,
   19.91956,
   15.59299,
   12.51231,
   10.00719,
   7.909623,
   6.021611,
   4.689575};
   Double_t Graph0_fex1100[11] = {
   0.110052,
   0.09282319,
   0.06723869,
   0.06570592,
   0.06990737,
   0.07732767,
   0.0901305,
   0.1129323,
   0.1472837,
   0.1813638,
   0.2204805};
   Double_t Graph0_fey1100[11] = {
   0.09741909,
   0.03444157,
   0.02030556,
   0.01624275,
   0.01369593,
   0.01186946,
   0.0111212,
   0.01113797,
   0.01150961,
   0.01108188,
   0.02486308};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S12_",100,218.053,3021.354);
   Graph_Graph01100->SetMinimum(1.092604);
   Graph_Graph01100->SetMaximum(52.31485);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01100->GetXaxis()->SetRange(0,101);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01100->GetYaxis()->CenterTitle(true);
   Graph_Graph01100->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01100->GetYaxis()->SetLabelFont(42);
   Graph_Graph01100->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01100->GetYaxis()->SetTitleFont(42);
   Graph_Graph01100->GetZaxis()->SetLabelFont(42);
   Graph_Graph01100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01100);
   
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
