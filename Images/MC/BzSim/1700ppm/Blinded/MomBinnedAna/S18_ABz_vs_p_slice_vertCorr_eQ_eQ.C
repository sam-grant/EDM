void S18_ABz_vs_p_slice_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 18:46:00 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.414172,3378.375,0.7758266);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[15] = {
   100,
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
   Double_t Graph0_fy1110[15] = {
   -0.8191729,
   -0.1042831,
   0.06681345,
   0.1344295,
   0.1819999,
   0.1722744,
   0.1617225,
   0.1431527,
   0.1398551,
   0.1319627,
   0.114148,
   0.1365346,
   0.1101815,
   0.04786025,
   0.004346341};
   Double_t Graph0_fex1110[15] = {
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
   100,
   100};
   Double_t Graph0_fey1110[15] = {
   1.063333,
   0.1565654,
   0.05474886,
   0.040983,
   0.03578683,
   0.03238903,
   0.02971526,
   0.02773032,
   0.02626092,
   0.02551019,
   0.02514394,
   0.02533294,
   0.02620495,
   0.02857696,
   0.04402873};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01110 = new TH1F("Graph_Graph01110","S18",100,0,3300);
   Graph_Graph01110->SetMinimum(-2.095172);
   Graph_Graph01110->SetMaximum(0.4568267);
   Graph_Graph01110->SetDirectory(0);
   Graph_Graph01110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01110->SetLineColor(ci);
   Graph_Graph01110->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01110->GetXaxis()->SetRange(1,91);
   Graph_Graph01110->GetXaxis()->CenterTitle(true);
   Graph_Graph01110->GetXaxis()->SetLabelFont(42);
   Graph_Graph01110->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01110->GetXaxis()->SetTitleFont(42);
   Graph_Graph01110->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01110->GetYaxis()->CenterTitle(true);
   Graph_Graph01110->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01110->GetYaxis()->SetLabelFont(42);
   Graph_Graph01110->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01110->GetYaxis()->SetTitleFont(42);
   Graph_Graph01110->GetZaxis()->SetLabelFont(42);
   Graph_Graph01110->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01110);
   
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
