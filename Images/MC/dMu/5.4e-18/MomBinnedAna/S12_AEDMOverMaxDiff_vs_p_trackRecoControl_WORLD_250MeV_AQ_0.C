void S12_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.542,-0.0006894196,3035.096,-0.0002524659);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[12] = {
   191.6982,
   422.9652,
   631.332,
   875.8592,
   1123.683,
   1372.848,
   1621.799,
   1870.495,
   2118.904,
   2366.462,
   2613.11,
   2825.561};
   Double_t Graph0_fy1063[12] = {
   4.131012e-05,
   -0.001337161,
   -0.0005540085,
   -0.0006402071,
   -0.0006937247,
   -0.0008084667,
   -0.0006873179,
   -0.0006675074,
   -0.0002463342,
   -0.0003518043,
   -0.0003911156,
   -0.0003279797};
   Double_t Graph0_fex1063[12] = {
   0.3423532,
   0.0824024,
   0.06338008,
   0.05944847,
   0.06042233,
   0.06274835,
   0.06651575,
   0.07252857,
   0.0827999,
   0.09819266,
   0.124545,
   0.1582636};
   Double_t Graph0_fey1063[12] = {
   0.003923874,
   -0.0005063695,
   -0.0002365116,
   -0.0001717999,
   -0.0001435208,
   -0.0001262099,
   -0.0001157082,
   -0.0001119918,
   -0.0001118753,
   -0.0001154073,
   -0.0001272935,
   -0.000203538};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S12_",100,0,3089.156);
   Graph_Graph01063->SetMinimum(-0.0006457242);
   Graph_Graph01063->SetMaximum(-0.0002961613);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(25,90);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
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
