void y_vs_theta_NSUBRUNS_325()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 18 14:30:07 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-56.35714,-1.5625,507.2143,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[24] = {
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
   Double_t Graph0_fy1061[24] = {
   2.522166,
   2.600881,
   2.500534,
   2.517418,
   2.596307,
   2.570613,
   2.495298,
   2.540864,
   2.62042,
   2.616832,
   2.554042,
   2.538376,
   2.5454,
   2.539561,
   2.482761,
   2.575352,
   2.537521,
   2.529898,
   2.516941,
   2.54793,
   2.563022,
   2.546469,
   2.536901,
   2.53455};
   Double_t Graph0_fex1061[24] = {
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
   Double_t Graph0_fey1061[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","325 sub-runs",100,0,394.5);
   Graph_Graph01061->SetMinimum(-1);
   Graph_Graph01061->SetMaximum(3.5);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1062[24] = {
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
   Double_t Graph0_fy1062[24] = {
   2.522166,
   2.600881,
   2.500534,
   2.517418,
   2.596307,
   2.570613,
   2.495298,
   2.540864,
   2.62042,
   2.616832,
   2.554042,
   2.538376,
   2.5454,
   2.539561,
   2.482761,
   2.575352,
   2.537521,
   2.529898,
   2.516941,
   2.54793,
   2.563022,
   2.546469,
   2.536901,
   2.53455};
   Double_t Graph0_fex1062[24] = {
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
   Double_t Graph0_fey1062[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010611062 = new TH1F("Graph_Graph_Graph010611062","325 sub-runs",100,0,394.5);
   Graph_Graph_Graph010611062->SetMinimum(-1);
   Graph_Graph_Graph010611062->SetMaximum(3.5);
   Graph_Graph_Graph010611062->SetDirectory(0);
   Graph_Graph_Graph010611062->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010611062->SetLineColor(ci);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010611062->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010611062->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010611062->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010611062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010611062->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010611062->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010611062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010611062);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1063[24] = {
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
   Double_t Graph1_fy1063[24] = {
   -0.05655657,
   -0.182839,
   -0.208622,
   -0.3064192,
   -0.3274302,
   -0.3187529,
   -0.2778457,
   -0.240917,
   -0.1659272,
   -0.1648507,
   -0.07724392,
   0.01590988,
   0.02131014,
   0.1263618,
   0.2059865,
   0.1812708,
   0.3285507,
   0.2997123,
   0.3486139,
   0.2759605,
   0.1978252,
   0.09455062,
   0.02355615,
   5.93768e-05};
   Double_t Graph1_fex1063[24] = {
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
   Double_t Graph1_fey1063[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph1_fx1063,Graph1_fy1063,Graph1_fex1063,Graph1_fey1063);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11063 = new TH1F("Graph_Graph11063","Graph",100,0,394.5);
   Graph_Graph11063->SetMinimum(-0.448388);
   Graph_Graph11063->SetMaximum(0.4585057);
   Graph_Graph11063->SetDirectory(0);
   Graph_Graph11063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11063->SetLineColor(ci);
   Graph_Graph11063->GetXaxis()->SetLabelFont(42);
   Graph_Graph11063->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11063->GetXaxis()->SetTitleFont(42);
   Graph_Graph11063->GetYaxis()->SetLabelFont(42);
   Graph_Graph11063->GetYaxis()->SetTitleFont(42);
   Graph_Graph11063->GetZaxis()->SetLabelFont(42);
   Graph_Graph11063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11063);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1064[24] = {
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
   Double_t Graph2_fy1064[24] = {
   -0.06473865,
   -0.1349441,
   -0.00828146,
   -0.06597908,
   0.02915739,
   0.1207004,
   0.04120096,
   0.1170237,
   0.01498684,
   0.02312266,
   0.01928677,
   0.01669045,
   -0.06004819,
   -0.02070953,
   0.05095184,
   -0.02622219,
   -0.07899946,
   0.007351202,
   0.06975251,
   0.04648687,
   0.03641439,
   0.08605331,
   0.08380392,
   -0.01271067};
   Double_t Graph2_fex1064[24] = {
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
   Double_t Graph2_fey1064[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph2_fx1064,Graph2_fy1064,Graph2_fex1064,Graph2_fey1064);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21064 = new TH1F("Graph_Graph21064","Graph",100,0,394.5);
   Graph_Graph21064->SetMinimum(-0.2186441);
   Graph_Graph21064->SetMaximum(0.196769);
   Graph_Graph21064->SetDirectory(0);
   Graph_Graph21064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21064->SetLineColor(ci);
   Graph_Graph21064->GetXaxis()->SetLabelFont(42);
   Graph_Graph21064->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21064->GetXaxis()->SetTitleFont(42);
   Graph_Graph21064->GetYaxis()->SetLabelFont(42);
   Graph_Graph21064->GetYaxis()->SetTitleFont(42);
   Graph_Graph21064->GetZaxis()->SetLabelFont(42);
   Graph_Graph21064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21064);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1065[24] = {
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
   Double_t Graph3_fy1065[24] = {
   2.400871,
   2.283098,
   2.283631,
   2.14502,
   2.298034,
   2.372561,
   2.258653,
   2.416971,
   2.46948,
   2.475104,
   2.496085,
   2.570976,
   2.506662,
   2.645214,
   2.739699,
   2.7304,
   2.787073,
   2.836961,
   2.935308,
   2.870377,
   2.797261,
   2.727073,
   2.644261,
   2.521898};
   Double_t Graph3_fex1065[24] = {
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
   Double_t Graph3_fey1065[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph3_fx1065,Graph3_fy1065,Graph3_fex1065,Graph3_fey1065);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31065 = new TH1F("Graph_Graph31065","Graph",100,0,394.5);
   Graph_Graph31065->SetMinimum(2.016837);
   Graph_Graph31065->SetMaximum(3.056242);
   Graph_Graph31065->SetDirectory(0);
   Graph_Graph31065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31065->SetLineColor(ci);
   Graph_Graph31065->GetXaxis()->SetLabelFont(42);
   Graph_Graph31065->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31065->GetXaxis()->SetTitleFont(42);
   Graph_Graph31065->GetYaxis()->SetLabelFont(42);
   Graph_Graph31065->GetYaxis()->SetTitleFont(42);
   Graph_Graph31065->GetZaxis()->SetLabelFont(42);
   Graph_Graph31065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31065);
   
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
   TText *pt_LaTex = pt->AddText("325 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
