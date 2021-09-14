void S12S18_full_A_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.3838621,3411.2,1.158607);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1130[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1130[14] = {
   0.4404355,
   -0.02285009,
   0.1947012,
   0.1019195,
   0.118032,
   0.1146941,
   0.1321135,
   0.1426193,
   0.156283,
   0.1093511,
   0.06317929,
   0.06564751,
   0.1082483,
   -0.05149892};
   Double_t Graph0_fex1130[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1130[14] = {
   0.4610931,
   0.08117796,
   0.03938733,
   0.02748281,
   0.02354563,
   0.02177235,
   0.02080451,
   0.02023465,
   0.02068739,
   0.02163318,
   0.02287693,
   0.02372118,
   0.02435825,
   0.07528501};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1130,Graph0_fy1130,Graph0_fex1130,Graph0_fey1130);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01130 = new TH1F("Graph_Graph01130","S12S18",100,0,3280);
   Graph_Graph01130->SetMinimum(-0.2296152);
   Graph_Graph01130->SetMaximum(1.00436);
   Graph_Graph01130->SetDirectory(0);
   Graph_Graph01130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01130->SetLineColor(ci);
   Graph_Graph01130->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01130->GetXaxis()->SetRange(6,93);
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
