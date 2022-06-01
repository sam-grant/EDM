void S12S18_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 11:51:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6724,-0.001283186,3380.572,0.004290096);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[11] = {
   452.0109,
   653.3666,
   880.43,
   1123.084,
   1371.063,
   1619.993,
   1866.796,
   2114.997,
   2363.005,
   2613.127,
   2791.874};
   Double_t Graph0_fy1181[11] = {
   0.0001606284,
   0.0008866296,
   0.0009496903,
   0.001199229,
   0.001530362,
   0.001964124,
   0.002241825,
   0.001891112,
   0.002208999,
   0.002952669,
   0.001302513};
   Double_t Graph0_fex1181[11] = {
   0.06819885,
   0.05757163,
   0.04157158,
   0.04058758,
   0.04335803,
   0.04795859,
   0.05629018,
   0.07044358,
   0.09237263,
   0.112246,
   0.1640369};
   Double_t Graph0_fey1181[11] = {
   0.0005149343,
   0.0001973663,
   0.0001433059,
   0.0001423999,
   0.0001552362,
   0.0001749734,
   0.0002029646,
   0.0002499872,
   0.0003318176,
   0.0004085467,
   0.001261628};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18_",100,217.9332,3026.047);
   Graph_Graph01181->SetMinimum(-0.000725858);
   Graph_Graph01181->SetMaximum(0.003732768);
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
