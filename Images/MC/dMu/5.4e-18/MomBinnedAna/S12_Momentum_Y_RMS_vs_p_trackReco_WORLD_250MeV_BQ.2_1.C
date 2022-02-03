void S12_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7352,2.839167,3407.155,28.21442);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1102[11] = {
   451.6049,
   653.2425,
   880.2476,
   1123.096,
   1371.206,
   1620.243,
   1866.857,
   2114.96,
   2362.593,
   2614.235,
   2787.651};
   Double_t Graph0_fy1102[11] = {
   14.01385,
   16.67978,
   18.57075,
   20.12033,
   21.08829,
   21.39771,
   21.23802,
   20.31489,
   18.64508,
   16.25816,
   13.68323};
   Double_t Graph0_fex1102[11] = {
   0.15967,
   0.1343891,
   0.09726887,
   0.09508309,
   0.1012556,
   0.1119375,
   0.1303914,
   0.1631604,
   0.21262,
   0.2621876,
   0.3235261};
   Double_t Graph0_fey1102[11] = {
   0.04764853,
   0.02302121,
   0.01786654,
   0.01878064,
   0.02098416,
   0.02358539,
   0.02731249,
   0.03267833,
   0.03918693,
   0.04317845,
   0.1050507};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1102,Graph0_fy1102,Graph0_fex1102,Graph0_fey1102);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01102 = new TH1F("Graph_Graph01102","S12_",100,217.7923,3021.628);
   Graph_Graph01102->SetMinimum(5.376692);
   Graph_Graph01102->SetMaximum(25.67689);
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
