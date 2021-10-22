void S0_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:00 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.01972705,3468.85,0.2545595);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1086[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1086[15] = {
   0.1326764,
   0.1332117,
   0.1405851,
   0.1666122,
   0.1738466,
   0.1563041,
   0.160399,
   0.1781622,
   0.1877984,
   0.1767274,
   0.1550206,
   0.1364258,
   0.1065774,
   0.1005784,
   0.07105905};
   Double_t Graph0_fex1086[15] = {
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
   Double_t Graph0_fey1086[15] = {
   0.01801158,
   0.01801194,
   0.01796327,
   0.01767867,
   0.01747345,
   0.01752249,
   0.01783321,
   0.01846561,
   0.01946212,
   0.02099317,
   0.02323016,
   0.0264765,
   0.03148765,
   0.04014554,
   0.06250171};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1086,Graph0_fy1086,Graph0_fex1086,Graph0_fey1086);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01086 = new TH1F("Graph_Graph01086","S0",100,0,3080);
   Graph_Graph01086->SetMinimum(0.007701606);
   Graph_Graph01086->SetMaximum(0.2271309);
   Graph_Graph01086->SetDirectory(0);
   Graph_Graph01086->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01086->SetLineColor(ci);
   Graph_Graph01086->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01086->GetXaxis()->SetRange(0,100);
   Graph_Graph01086->GetXaxis()->CenterTitle(true);
   Graph_Graph01086->GetXaxis()->SetLabelFont(42);
   Graph_Graph01086->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01086->GetXaxis()->SetTitleFont(42);
   Graph_Graph01086->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01086->GetYaxis()->CenterTitle(true);
   Graph_Graph01086->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01086->GetYaxis()->SetLabelFont(42);
   Graph_Graph01086->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01086->GetYaxis()->SetTitleFont(42);
   Graph_Graph01086->GetZaxis()->SetLabelFont(42);
   Graph_Graph01086->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01086);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
