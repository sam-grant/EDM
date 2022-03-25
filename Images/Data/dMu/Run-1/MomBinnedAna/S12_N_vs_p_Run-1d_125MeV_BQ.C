void S12_N_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8389,-342906.9,3033.522,3180248);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[22] = {
   367.2236,
   456.6639,
   570.2517,
   695.0627,
   815.9831,
   938.554,
   1062.655,
   1188.287,
   1312.788,
   1435.9,
   1561.968,
   1685.267,
   1810.602,
   1935.128,
   2060.285,
   2185.022,
   2309.141,
   2432.952,
   2559.541,
   2679.196,
   2781.12,
   2886.415};
   Double_t Graph0_fy1068[22] = {
   1521,
   152197,
   460511,
   995635,
   1604310,
   2010606,
   2210609,
   2356770,
   2345181,
   2290592,
   2011866,
   1805601,
   1451184,
   1199184,
   930497,
   759849,
   574429,
   395732,
   275772,
   189086,
   26552,
   101};
   Double_t Graph0_fex1068[22] = {
   0.15529,
   0.07767284,
   0.05215712,
   0.03528341,
   0.02828885,
   0.02549312,
   0.02417555,
   0.02334841,
   0.02364677,
   0.02371021,
   0.02546434,
   0.02672193,
   0.02997394,
   0.03283023,
   0.03742638,
   0.0412261,
   0.04755622,
   0.05709664,
   0.06850077,
   0.07809568,
   0.1560077,
   0.9305664};
   Double_t Graph0_fey1068[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S12",100,115.0406,3139.374);
   Graph_Graph01068->SetMinimum(9408.666);
   Graph_Graph01068->SetMaximum(2827933);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01068->GetXaxis()->SetRange(21,88);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01068->GetYaxis()->CenterTitle(true);
   Graph_Graph01068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01068->GetYaxis()->SetLabelFont(42);
   Graph_Graph01068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01068->GetYaxis()->SetTitleFont(42);
   Graph_Graph01068->GetZaxis()->SetLabelFont(42);
   Graph_Graph01068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01068);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
