void S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.0403,-0.001855959,3376.103,0.007828934);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[11] = {
   451.7906,
   653.3381,
   880.3133,
   1123.171,
   1371.103,
   1619.829,
   1866.886,
   2114.711,
   2362.816,
   2613.58,
   2788.198};
   Double_t Graph0_fy1181[11] = {
   -0.0002418104,
   0.001138258,
   0.0008447619,
   0.001022979,
   0.001508343,
   0.001654885,
   0.001831367,
   0.001065184,
   0.001118953,
   0.002550406,
   0.004314247};
   Double_t Graph0_fex1181[11] = {
   0.1029682,
   0.08713116,
   0.06318328,
   0.06178875,
   0.06609423,
   0.07323922,
   0.08581312,
   0.1078003,
   0.1415249,
   0.1715609,
   0.2183682};
   Double_t Graph0_fey1181[11] = {
   -0.0007625659,
   0.0002807338,
   0.0001810954,
   0.0001800002,
   0.0002036532,
   0.0002370514,
   0.0002654005,
   0.0003031131,
   0.0003045386,
   0.0005409034,
   0.001900539};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18_",100,218.0148,3022.089);
   Graph_Graph01181->SetMinimum(-0.00088747);
   Graph_Graph01181->SetMaximum(0.006860445);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(0,100);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
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
