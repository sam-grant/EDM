void S0S12S18_full_c_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-3.952492,3411.2,16.88909);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1159[14] = {
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
   Double_t Graph0_fy1159[14] = {
   13.1465,
   2.478048,
   -0.4561829,
   -0.4511615,
   -0.3498904,
   -0.2754269,
   -0.292895,
   -0.2206681,
   -0.1658091,
   -0.1358526,
   -0.1187029,
   -0.1108515,
   -0.09430218,
   -0.1523277};
   Double_t Graph0_fex1159[14] = {
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
   Double_t Graph0_fey1159[14] = {
   0.2689968,
   0.04691764,
   0.0227117,
   0.0158809,
   0.01359429,
   0.01254233,
   0.0120064,
   0.01166827,
   0.01187665,
   0.01244605,
   0.01324396,
   0.01409746,
   0.01501747,
   0.04714507};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1159,Graph0_fy1159,Graph0_fex1159,Graph0_fey1159);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01159 = new TH1F("Graph_Graph01159","S0S12S18",100,0,3280);
   Graph_Graph01159->SetMinimum(-1.868334);
   Graph_Graph01159->SetMaximum(14.80493);
   Graph_Graph01159->SetDirectory(0);
   Graph_Graph01159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01159->SetLineColor(ci);
   Graph_Graph01159->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01159->GetXaxis()->SetRange(6,93);
   Graph_Graph01159->GetXaxis()->CenterTitle(true);
   Graph_Graph01159->GetXaxis()->SetLabelFont(42);
   Graph_Graph01159->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01159->GetXaxis()->SetTitleFont(42);
   Graph_Graph01159->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01159->GetYaxis()->CenterTitle(true);
   Graph_Graph01159->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01159->GetYaxis()->SetLabelFont(42);
   Graph_Graph01159->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01159->GetYaxis()->SetTitleFont(42);
   Graph_Graph01159->GetZaxis()->SetLabelFont(42);
   Graph_Graph01159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01159);
   
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
