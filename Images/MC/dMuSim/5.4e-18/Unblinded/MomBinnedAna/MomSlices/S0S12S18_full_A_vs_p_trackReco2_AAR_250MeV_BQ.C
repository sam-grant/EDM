void S0S12S18_full_A_vs_p_trackReco2_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 30 11:45:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-118.7188,-0.3314709,3360.969,0.4318102);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1130[11] = {
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
   Double_t Graph0_fy1130[11] = {
   0.1301575,
   0.1438841,
   0.1854466,
   0.1132019,
   0.150279,
   0.1495541,
   0.1581617,
   0.1198688,
   0.09283848,
   0.1225515,
   -0.144999};
   Double_t Graph0_fex1130[11] = {
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
   Double_t Graph0_fey1130[11] = {
   0.1744392,
   0.05829889,
   0.03354848,
   0.02750002,
   0.02520924,
   0.02396528,
   0.02396732,
   0.02506802,
   0.02668764,
   0.02627078,
   0.05925833};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1130,Graph0_fy1130,Graph0_fex1130,Graph0_fey1130);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01130 = new TH1F("Graph_Graph01130","S0S12S18",100,0,3275);
   Graph_Graph01130->SetMinimum(-0.2551428);
   Graph_Graph01130->SetMaximum(0.3554821);
   Graph_Graph01130->SetDirectory(0);
   Graph_Graph01130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01130->SetLineColor(ci);
   Graph_Graph01130->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01130->GetXaxis()->SetRange(8,92);
   Graph_Graph01130->GetXaxis()->CenterTitle(true);
   Graph_Graph01130->GetXaxis()->SetLabelFont(42);
   Graph_Graph01130->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01130->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01130->GetXaxis()->SetTitleFont(42);
   Graph_Graph01130->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01130->GetYaxis()->CenterTitle(true);
   Graph_Graph01130->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01130->GetYaxis()->SetLabelFont(42);
   Graph_Graph01130->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01130->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01130->GetYaxis()->SetTitleFont(42);
   Graph_Graph01130->GetZaxis()->SetLabelFont(42);
   Graph_Graph01130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01130->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01130);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
