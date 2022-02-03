void S0_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:31:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.7171,-5.305789,3409.979,62.54318);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[11] = {
   451.3795,
   653.2084,
   880.0107,
   1122.885,
   1371.272,
   1620.698,
   1868.122,
   2116.398,
   2362.901,
   2615.842,
   2789.677};
   Double_t Graph0_fy1063[11] = {
   31.44059,
   25.94091,
   21.3627,
   18.04948,
   15.4657,
   13.33877,
   11.41685,
   9.655591,
   7.968146,
   6.216735,
   4.959967};
   Double_t Graph0_fex1063[11] = {
   0.2570146,
   0.2168445,
   0.1578235,
   0.1543579,
   0.1647142,
   0.1816809,
   0.208312,
   0.2527105,
   0.3151618,
   0.3975541,
   0.4627629};
   Double_t Graph0_fey1063[11] = {
   0.1731167,
   0.05771349,
   0.03331429,
   0.02738084,
   0.02502782,
   0.02381224,
   0.02341428,
   0.02401888,
   0.02491457,
   0.02477947,
   0.05313979};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S0_",100,217.2208,3024.042);
   Graph_Graph01063->SetMinimum(1.479109);
   Graph_Graph01063->SetMaximum(55.75829);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(0,101);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
