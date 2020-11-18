void y_vs_theta_NSUBRUNS_200()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 18 14:30:06 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-56.35714,-1.5625,507.2143,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1036[24] = {
   2.597592,
   2.489026,
   2.540121,
   2.593792,
   2.561856,
   2.593905,
   2.544119,
   2.477134,
   2.503308,
   2.564051,
   2.518486,
   2.601764,
   2.572687,
   2.567787,
   2.563337,
   2.503192,
   2.619398,
   2.576738,
   2.560032,
   2.564395,
   2.468092,
   2.565938,
   2.437309,
   2.599135};
   Double_t Graph0_fex1036[24] = {
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
   0,
   0,
   0};
   Double_t Graph0_fey1036[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","200 sub-runs",100,0,394.5);
   Graph_Graph01036->SetMinimum(-1);
   Graph_Graph01036->SetMaximum(3.5);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01036->GetYaxis()->CenterTitle(true);
   Graph_Graph01036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1037[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1037[24] = {
   2.597592,
   2.489026,
   2.540121,
   2.593792,
   2.561856,
   2.593905,
   2.544119,
   2.477134,
   2.503308,
   2.564051,
   2.518486,
   2.601764,
   2.572687,
   2.567787,
   2.563337,
   2.503192,
   2.619398,
   2.576738,
   2.560032,
   2.564395,
   2.468092,
   2.565938,
   2.437309,
   2.599135};
   Double_t Graph0_fex1037[24] = {
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
   0,
   0,
   0};
   Double_t Graph0_fey1037[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010361037 = new TH1F("Graph_Graph_Graph010361037","200 sub-runs",100,0,394.5);
   Graph_Graph_Graph010361037->SetMinimum(-1);
   Graph_Graph_Graph010361037->SetMaximum(3.5);
   Graph_Graph_Graph010361037->SetDirectory(0);
   Graph_Graph_Graph010361037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010361037->SetLineColor(ci);
   Graph_Graph_Graph010361037->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010361037->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010361037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010361037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010361037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010361037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010361037->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010361037->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010361037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010361037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010361037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010361037->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010361037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010361037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010361037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010361037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010361037);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1038[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph1_fy1038[24] = {
   -0.1207679,
   -0.1702756,
   -0.2258362,
   -0.217521,
   -0.30195,
   -0.3669646,
   -0.3274043,
   -0.3066767,
   -0.1507189,
   -0.2638843,
   -0.1392941,
   -0.02383377,
   0.08516096,
   0.2156773,
   0.2449332,
   0.2181794,
   0.3130672,
   0.2826977,
   0.3199057,
   0.2706548,
   0.1456135,
   0.1380611,
   0.1459603,
   0.01331808};
   Double_t Graph1_fex1038[24] = {
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
   0,
   0,
   0};
   Double_t Graph1_fey1038[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph1_fx1038,Graph1_fy1038,Graph1_fex1038,Graph1_fey1038);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11038 = new TH1F("Graph_Graph11038","Graph",100,0,394.5);
   Graph_Graph11038->SetMinimum(-0.498184);
   Graph_Graph11038->SetMaximum(0.4419627);
   Graph_Graph11038->SetDirectory(0);
   Graph_Graph11038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11038->SetLineColor(ci);
   Graph_Graph11038->GetXaxis()->SetLabelFont(42);
   Graph_Graph11038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11038->GetXaxis()->SetTitleFont(42);
   Graph_Graph11038->GetYaxis()->SetLabelFont(42);
   Graph_Graph11038->GetYaxis()->SetTitleFont(42);
   Graph_Graph11038->GetZaxis()->SetLabelFont(42);
   Graph_Graph11038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11038);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1039[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph2_fy1039[24] = {
   0.01657726,
   -0.06539276,
   -0.04499481,
   -0.007358542,
   -0.02202115,
   0.06037577,
   0.06735032,
   0.04836253,
   0.06206092,
   0.07039848,
   0.04459837,
   -0.01405885,
   0.03801683,
   -0.06856176,
   -0.1196769,
   0.04414937,
   -0.0670792,
   0.01280325,
   0.06583886,
   0.07828961,
   0.06577321,
   0.132261,
   0.08195951,
   -0.01335513};
   Double_t Graph2_fex1039[24] = {
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
   0,
   0,
   0};
   Double_t Graph2_fey1039[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph2_fx1039,Graph2_fy1039,Graph2_fex1039,Graph2_fey1039);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21039 = new TH1F("Graph_Graph21039","Graph",100,0,394.5);
   Graph_Graph21039->SetMinimum(-0.206563);
   Graph_Graph21039->SetMaximum(0.2236219);
   Graph_Graph21039->SetDirectory(0);
   Graph_Graph21039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21039->SetLineColor(ci);
   Graph_Graph21039->GetXaxis()->SetLabelFont(42);
   Graph_Graph21039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21039->GetXaxis()->SetTitleFont(42);
   Graph_Graph21039->GetYaxis()->SetLabelFont(42);
   Graph_Graph21039->GetYaxis()->SetTitleFont(42);
   Graph_Graph21039->GetZaxis()->SetLabelFont(42);
   Graph_Graph21039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21039);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1040[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph3_fy1040[24] = {
   2.493401,
   2.253358,
   2.26929,
   2.368912,
   2.237885,
   2.287316,
   2.284065,
   2.21882,
   2.41465,
   2.370565,
   2.42379,
   2.563872,
   2.695865,
   2.714903,
   2.688593,
   2.76552,
   2.865386,
   2.872239,
   2.945776,
   2.91334,
   2.679479,
   2.83626,
   2.665229,
   2.599097};
   Double_t Graph3_fex1040[24] = {
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
   0,
   0,
   0};
   Double_t Graph3_fey1040[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph3_fx1040,Graph3_fy1040,Graph3_fex1040,Graph3_fey1040);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31040 = new TH1F("Graph_Graph31040","Graph",100,0,394.5);
   Graph_Graph31040->SetMinimum(2.083267);
   Graph_Graph31040->SetMaximum(3.071849);
   Graph_Graph31040->SetDirectory(0);
   Graph_Graph31040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31040->SetLineColor(ci);
   Graph_Graph31040->GetXaxis()->SetLabelFont(42);
   Graph_Graph31040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31040->GetXaxis()->SetTitleFont(42);
   Graph_Graph31040->GetYaxis()->SetLabelFont(42);
   Graph_Graph31040->GetYaxis()->SetTitleFont(42);
   Graph_Graph31040->GetZaxis()->SetLabelFont(42);
   Graph_Graph31040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31040);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","1st order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","2nd order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","3rd order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Total","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("200 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
