void S18_full_c_vs_p_trackTruth_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 27 11:33:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-10.23032,3254.625,2.04371);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1087[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1087[12] = {
   -7.505844,
   -2.580256,
   -0.8399659,
   -0.3449145,
   -0.2748634,
   -0.2048511,
   -0.1648457,
   -0.1001432,
   -0.1174408,
   -0.07411466,
   -0.06043211,
   -0.03185689};
   Double_t Graph0_fex1087[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1087[12] = {
   0.6788011,
   0.05997627,
   0.02991683,
   0.02452012,
   0.02209681,
   0.02038034,
   0.01932798,
   0.01918996,
   0.01991531,
   0.02185779,
   0.02323281,
   0.02989563};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","S18",100,0,3300);
   Graph_Graph01087->SetMinimum(-9.002913);
   Graph_Graph01087->SetMaximum(0.8163071);
   Graph_Graph01087->SetDirectory(0);
   Graph_Graph01087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01087->SetLineColor(ci);
   Graph_Graph01087->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01087->GetXaxis()->SetRange(4,88);
   Graph_Graph01087->GetXaxis()->CenterTitle(true);
   Graph_Graph01087->GetXaxis()->SetLabelFont(42);
   Graph_Graph01087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01087->GetXaxis()->SetTitleFont(42);
   Graph_Graph01087->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01087->GetYaxis()->CenterTitle(true);
   Graph_Graph01087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01087->GetYaxis()->SetLabelFont(42);
   Graph_Graph01087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01087->GetYaxis()->SetTitleFont(42);
   Graph_Graph01087->GetZaxis()->SetLabelFont(42);
   Graph_Graph01087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01087);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
