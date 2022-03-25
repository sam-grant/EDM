void S0_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6244,-1.572381,3377.861,34.99747);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[11] = {
   451.6492,
   653.2572,
   879.9206,
   1123.044,
   1371.41,
   1620.722,
   1868.001,
   2116.576,
   2363.177,
   2615.301,
   2789.538};
   Double_t Graph0_fy1063[11] = {
   28.81666,
   23.80301,
   19.59554,
   16.54849,
   14.19662,
   12.22209,
   10.46414,
   8.861147,
   7.293991,
   5.721435,
   4.548783};
   Double_t Graph0_fex1063[11] = {
   0.1383671,
   0.1171129,
   0.08543187,
   0.08352476,
   0.08892344,
   0.09816877,
   0.1126998,
   0.1364134,
   0.1707334,
   0.2138205,
   0.2464947};
   Double_t Graph0_fey1063[11] = {
   0.08583157,
   0.02863729,
   0.01653464,
   0.01359127,
   0.01240706,
   0.01178993,
   0.01160247,
   0.01190591,
   0.01234257,
   0.01229845,
   0.02618919};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S0_",100,217.6834,3023.612);
   Graph_Graph01063->SetMinimum(2.084604);
   Graph_Graph01063->SetMaximum(31.34048);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(0,100);
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
