void S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1445,2.916382,3406.661,28.21198);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1176[11] = {
   451.9321,
   653.3151,
   880.441,
   1123.088,
   1370.959,
   1620.001,
   1866.599,
   2114.953,
   2362.908,
   2613.197,
   2787.495};
   Double_t Graph0_fy1176[11] = {
   14.03308,
   16.66949,
   18.54475,
   20.06602,
   21.04255,
   21.40202,
   21.17863,
   20.26333,
   18.69998,
   16.28196,
   13.7989};
   Double_t Graph0_fex1176[11] = {
   0.08422585,
   0.07114437,
   0.05140669,
   0.05018896,
   0.05365579,
   0.05937024,
   0.06960067,
   0.08736012,
   0.1143839,
   0.1387502,
   0.1730443};
   Double_t Graph0_fey1176[11] = {
   0.02527379,
   0.01217319,
   0.009426506,
   0.009892081,
   0.01109604,
   0.01251605,
   0.01454394,
   0.01744275,
   0.02107896,
   0.0230188,
   0.05767394};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1176,Graph0_fy1176,Graph0_fex1176,Graph0_fey1176);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01176 = new TH1F("Graph_Graph01176","S12S18_",100,218.2659,3021.25);
   Graph_Graph01176->SetMinimum(5.445943);
   Graph_Graph01176->SetMaximum(25.68242);
   Graph_Graph01176->SetDirectory(0);
   Graph_Graph01176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01176->SetLineColor(ci);
   Graph_Graph01176->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01176->GetXaxis()->SetRange(0,101);
   Graph_Graph01176->GetXaxis()->CenterTitle(true);
   Graph_Graph01176->GetXaxis()->SetLabelFont(42);
   Graph_Graph01176->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01176->GetXaxis()->SetTitleFont(42);
   Graph_Graph01176->GetYaxis()->CenterTitle(true);
   Graph_Graph01176->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01176->GetYaxis()->SetLabelFont(42);
   Graph_Graph01176->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01176->GetYaxis()->SetTitleFont(42);
   Graph_Graph01176->GetZaxis()->SetLabelFont(42);
   Graph_Graph01176->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01176);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
