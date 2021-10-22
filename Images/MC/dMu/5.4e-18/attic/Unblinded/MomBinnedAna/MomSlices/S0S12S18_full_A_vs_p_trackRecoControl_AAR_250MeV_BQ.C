void S0S12S18_full_A_vs_p_trackRecoControl_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 11 12:01:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-118.7188,-0.6619997,3360.969,0.8761131);
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
   -0.1707066,
   0.1839536,
   0.08398846,
   0.08540665,
   0.1177484,
   0.1140462,
   0.1576646,
   0.3648858,
   0.06572766,
   0.06510878,
   0.1108544};
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
   0.234941,
   0.06724436,
   0.03489574,
   0.02683356,
   0.02659012,
   0.03317097,
   0.06573086,
   0.2548751,
   0.1059,
   0.04105301,
   0.06044616};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1130,Graph0_fy1130,Graph0_fex1130,Graph0_fey1130);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01130 = new TH1F("Graph_Graph01130","S0S12S18",100,0,3275);
   Graph_Graph01130->SetMinimum(-0.5081885);
   Graph_Graph01130->SetMaximum(0.7223018);
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
