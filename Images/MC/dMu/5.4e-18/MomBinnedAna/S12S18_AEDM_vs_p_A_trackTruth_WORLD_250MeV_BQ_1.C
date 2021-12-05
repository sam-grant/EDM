void S12S18_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.1062,-1.881598e-06,3029.613,1.771724e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1084[11] = {
   451.995,
   653.3689,
   880.4532,
   1123.026,
   1371.063,
   1620.016,
   1866.622,
   2114.934,
   2362.94,
   2613.154,
   2791.843};
   Double_t Graph0_fy1084[11] = {
   -1.550177e-06,
   2.047001e-07,
   9.777757e-08,
   9.98063e-08,
   1.11749e-07,
   2.209024e-07,
   3.942895e-07,
   4.400909e-07,
   2.35244e-07,
   2.156889e-06,
   1.080142e-05};
   Double_t Graph0_fex1084[11] = {
   0.1000313,
   0.08429077,
   0.06088477,
   0.05944231,
   0.06349073,
   0.07027398,
   0.08235853,
   0.1031157,
   0.1349937,
   0.1638784,
   0.2409119};
   Double_t Graph0_fey1084[11] = {
   1.121804e-06,
   7.469873e-08,
   2.522689e-08,
   2.297891e-08,
   2.815497e-08,
   3.822371e-08,
   6.128579e-08,
   1.175681e-07,
   2.550224e-07,
   4.825387e-07,
   1.072095e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1084,Graph0_fy1084,Graph0_fex1084,Graph0_fey1084);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01084 = new TH1F("Graph_Graph01084","S12S18_",100,217.876,3026.103);
   Graph_Graph01084->SetMinimum(7.828593e-08);
   Graph_Graph01084->SetMaximum(1.575735e-05);
   Graph_Graph01084->SetDirectory(0);
   Graph_Graph01084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01084->SetLineColor(ci);
   Graph_Graph01084->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01084->GetXaxis()->SetRange(19,91);
   Graph_Graph01084->GetXaxis()->CenterTitle(true);
   Graph_Graph01084->GetXaxis()->SetLabelFont(42);
   Graph_Graph01084->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01084->GetXaxis()->SetTitleFont(42);
   Graph_Graph01084->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01084->GetYaxis()->CenterTitle(true);
   Graph_Graph01084->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01084->GetYaxis()->SetLabelFont(42);
   Graph_Graph01084->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01084->GetYaxis()->SetTitleFont(42);
   Graph_Graph01084->GetZaxis()->SetLabelFont(42);
   Graph_Graph01084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01084);
   
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
