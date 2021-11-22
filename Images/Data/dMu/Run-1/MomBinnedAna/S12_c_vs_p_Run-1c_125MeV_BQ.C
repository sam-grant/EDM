void S12_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,-3.353117,2731.307,14.15202);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   367.0259,
   456.9839,
   570.3007,
   695.1502,
   816.0454,
   938.5665,
   1062.78,
   1188.405,
   1312.663,
   1436.01,
   1561.941,
   1685.362,
   1810.625,
   1935.174,
   2060.292,
   2185.104,
   2309.112,
   2432.873,
   2559.58,
   2678.767,
   2780.783,
   2890.136};
   Double_t Graph0_fy1017[22] = {
   9.887619,
   0.07571832,
   0.02200358,
   0.08650658,
   0.04447176,
   0.08640571,
   0.08151015,
   0.03167412,
   -0.025247,
   -0.04216575,
   0.003880237,
   0.0273168,
   0.02684178,
   0.03387526,
   0.01714854,
   0.02589062,
   0.006031773,
   0.03625272,
   0.03393328,
   0.09902959,
   0.1466514,
   -0.04792315};
   Double_t Graph0_fex1017[22] = {
   0.22722,
   0.108819,
   0.0727687,
   0.04940617,
   0.03927278,
   0.03533284,
   0.03345619,
   0.03240199,
   0.03270933,
   0.03281037,
   0.03524654,
   0.03696425,
   0.04148184,
   0.04530472,
   0.05170377,
   0.05715965,
   0.06567884,
   0.07884463,
   0.09497755,
   0.1087666,
   0.2163104,
   1.498282};
   Double_t Graph0_fey1017[22] = {
   1.346882,
   0.1138024,
   0.05511068,
   0.03281949,
   0.02249175,
   0.01838993,
   0.01610431,
   0.01455134,
   0.01362858,
   0.01285394,
   0.01287864,
   0.01243281,
   0.01283311,
   0.01295542,
   0.01356644,
   0.01387217,
   0.01459656,
   0.01602047,
   0.01736319,
   0.01936429,
   0.04879453,
   0.3876699};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,114.3151,3144.118);
   Graph_Graph01017->SetMinimum(-1.602602);
   Graph_Graph01017->SetMaximum(12.40151);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,79);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
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
