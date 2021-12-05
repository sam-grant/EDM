void S0_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:39:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(468.1968,-0.005546064,3029.484,0.008703554);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[11] = {
   453.2736,
   656.6675,
   884.0536,
   1123.281,
   1363.384,
   1601.719,
   1825.372,
   2101.358,
   2414.029,
   2640.443,
   2791.648};
   Double_t Graph0_fy1048[11] = {
   -0.001499633,
   -0.0008782718,
   -0.0004406026,
   -0.0007269606,
   -0.001132535,
   -0.001025937,
   -0.004998372,
   0.006120216,
   -0.005256609,
   -0.001266556,
   0.0007521684};
   Double_t Graph0_fex1048[11] = {
   0.2807713,
   0.2103466,
   0.1422069,
   0.130941,
   0.1513813,
   0.2158623,
   0.4409652,
   2.537895,
   1.001244,
   0.5214554,
   0.4195432};
   Double_t Graph0_fey1048[11] = {
   -0.002226938,
   -0.0006434017,
   -0.0003433899,
   -0.0002780769,
   -0.000307694,
   -0.0005686187,
   -0.001400252,
   0.008936259,
   -0.004086431,
   -0.001898957,
   0.003195086};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S0_",100,219.0854,3025.975);
   Graph_Graph01048->SetMinimum(-0.004121102);
   Graph_Graph01048->SetMaximum(0.007278592);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->SetRange(19,91);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
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
