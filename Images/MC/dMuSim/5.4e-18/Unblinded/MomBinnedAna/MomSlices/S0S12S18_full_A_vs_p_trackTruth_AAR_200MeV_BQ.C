void S0S12S18_full_A_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.3177425,3411.2,0.8324583);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1160[14] = {
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
   Double_t Graph0_fy1160[14] = {
   0.2596871,
   0.0368382,
   0.1663988,
   0.1164335,
   0.1224488,
   0.1465145,
   0.1375303,
   0.1692841,
   0.1387347,
   0.1107206,
   0.07060868,
   0.06017833,
   0.08849979,
   -0.06860107};
   Double_t Graph0_fex1160[14] = {
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
   Double_t Graph0_fey1160[14] = {
   0.381071,
   0.0662765,
   0.03214136,
   0.02250663,
   0.01926818,
   0.01780274,
   0.01699247,
   0.01648165,
   0.01670737,
   0.01734772,
   0.01809981,
   0.01875746,
   0.01911548,
   0.05744133};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1160,Graph0_fy1160,Graph0_fex1160,Graph0_fey1160);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01160 = new TH1F("Graph_Graph01160","S0S12S18",100,0,3280);
   Graph_Graph01160->SetMinimum(-0.2027225);
   Graph_Graph01160->SetMaximum(0.7174382);
   Graph_Graph01160->SetDirectory(0);
   Graph_Graph01160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01160->SetLineColor(ci);
   Graph_Graph01160->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01160->GetXaxis()->SetRange(6,93);
   Graph_Graph01160->GetXaxis()->CenterTitle(true);
   Graph_Graph01160->GetXaxis()->SetLabelFont(42);
   Graph_Graph01160->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01160->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01160->GetXaxis()->SetTitleFont(42);
   Graph_Graph01160->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01160->GetYaxis()->CenterTitle(true);
   Graph_Graph01160->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01160->GetYaxis()->SetLabelFont(42);
   Graph_Graph01160->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01160->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01160->GetYaxis()->SetTitleFont(42);
   Graph_Graph01160->GetZaxis()->SetLabelFont(42);
   Graph_Graph01160->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01160->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01160);
   
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
