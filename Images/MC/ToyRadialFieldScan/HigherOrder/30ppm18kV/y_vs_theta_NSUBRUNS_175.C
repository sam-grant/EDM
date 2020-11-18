void y_vs_theta_NSUBRUNS_175()
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
   
   Double_t Graph0_fx1031[24] = {
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
   Double_t Graph0_fy1031[24] = {
   2.519169,
   2.522613,
   2.575628,
   2.518671,
   2.506532,
   2.588149,
   2.461388,
   2.532837,
   2.524268,
   2.517288,
   2.479815,
   2.527948,
   2.56879,
   2.565784,
   2.49183,
   2.521504,
   2.550738,
   2.518362,
   2.470879,
   2.419067,
   2.569378,
   2.606821,
   2.584287,
   2.531617};
   Double_t Graph0_fex1031[24] = {
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
   Double_t Graph0_fey1031[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","175 sub-runs",100,0,394.5);
   Graph_Graph01031->SetMinimum(-1);
   Graph_Graph01031->SetMaximum(3.5);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1032[24] = {
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
   Double_t Graph0_fy1032[24] = {
   2.519169,
   2.522613,
   2.575628,
   2.518671,
   2.506532,
   2.588149,
   2.461388,
   2.532837,
   2.524268,
   2.517288,
   2.479815,
   2.527948,
   2.56879,
   2.565784,
   2.49183,
   2.521504,
   2.550738,
   2.518362,
   2.470879,
   2.419067,
   2.569378,
   2.606821,
   2.584287,
   2.531617};
   Double_t Graph0_fex1032[24] = {
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
   Double_t Graph0_fey1032[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010311032 = new TH1F("Graph_Graph_Graph010311032","175 sub-runs",100,0,394.5);
   Graph_Graph_Graph010311032->SetMinimum(-1);
   Graph_Graph_Graph010311032->SetMaximum(3.5);
   Graph_Graph_Graph010311032->SetDirectory(0);
   Graph_Graph_Graph010311032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010311032->SetLineColor(ci);
   Graph_Graph_Graph010311032->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010311032->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010311032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010311032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010311032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010311032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010311032->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010311032->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010311032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010311032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010311032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010311032->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010311032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010311032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010311032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010311032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010311032);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1033[24] = {
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
   Double_t Graph1_fy1033[24] = {
   -0.09191938,
   -0.1530696,
   -0.2411162,
   -0.2535816,
   -0.3130264,
   -0.4575469,
   -0.2786374,
   -0.2654955,
   -0.2247933,
   -0.2577355,
   0.03191182,
   -0.04930544,
   0.1226841,
   0.1343248,
   0.1112818,
   0.1778347,
   0.2230992,
   0.2208906,
   0.2682816,
   0.2360772,
   0.2084866,
   0.1149261,
   0.008851384,
   -0.03767198};
   Double_t Graph1_fex1033[24] = {
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
   Double_t Graph1_fey1033[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph1_fx1033,Graph1_fy1033,Graph1_fex1033,Graph1_fey1033);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11033 = new TH1F("Graph_Graph11033","Graph",100,0,394.5);
   Graph_Graph11033->SetMinimum(-0.5969997);
   Graph_Graph11033->SetMaximum(0.3979004);
   Graph_Graph11033->SetDirectory(0);
   Graph_Graph11033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11033->SetLineColor(ci);
   Graph_Graph11033->GetXaxis()->SetLabelFont(42);
   Graph_Graph11033->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11033->GetXaxis()->SetTitleFont(42);
   Graph_Graph11033->GetYaxis()->SetLabelFont(42);
   Graph_Graph11033->GetYaxis()->SetTitleFont(42);
   Graph_Graph11033->GetZaxis()->SetLabelFont(42);
   Graph_Graph11033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11033);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1034[24] = {
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
   Double_t Graph2_fy1034[24] = {
   0.07599726,
   -0.01430243,
   -0.03485882,
   -0.04064211,
   -0.01959051,
   0.04242598,
   0.07298433,
   0.1275648,
   0.1444092,
   0.0955179,
   0.1228805,
   -0.02282672,
   -0.06138035,
   -0.07911382,
   -0.03424807,
   -0.01443367,
   -0.08239703,
   0.03609528,
   0.009396761,
   -0.04343612,
   -0.01693858,
   0.1615967,
   0.006983018,
   -0.01028558};
   Double_t Graph2_fex1034[24] = {
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
   Double_t Graph2_fey1034[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph2_fx1034,Graph2_fy1034,Graph2_fex1034,Graph2_fey1034);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21034 = new TH1F("Graph_Graph21034","Graph",100,0,394.5);
   Graph_Graph21034->SetMinimum(-0.1722);
   Graph_Graph21034->SetMaximum(0.2567454);
   Graph_Graph21034->SetDirectory(0);
   Graph_Graph21034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21034->SetLineColor(ci);
   Graph_Graph21034->GetXaxis()->SetLabelFont(42);
   Graph_Graph21034->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21034->GetXaxis()->SetTitleFont(42);
   Graph_Graph21034->GetYaxis()->SetLabelFont(42);
   Graph_Graph21034->GetYaxis()->SetTitleFont(42);
   Graph_Graph21034->GetZaxis()->SetLabelFont(42);
   Graph_Graph21034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21034);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1035[24] = {
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
   Double_t Graph3_fy1035[24] = {
   2.503247,
   2.355241,
   2.299653,
   2.224447,
   2.173916,
   2.173028,
   2.255735,
   2.394906,
   2.443884,
   2.35507,
   2.634608,
   2.455816,
   2.630094,
   2.620995,
   2.568864,
   2.684905,
   2.691441,
   2.775348,
   2.748557,
   2.611708,
   2.760926,
   2.883344,
   2.600121,
   2.48366};
   Double_t Graph3_fex1035[24] = {
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
   Double_t Graph3_fey1035[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph3_fx1035,Graph3_fy1035,Graph3_fex1035,Graph3_fey1035);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31035 = new TH1F("Graph_Graph31035","Graph",100,0,394.5);
   Graph_Graph31035->SetMinimum(2.029012);
   Graph_Graph31035->SetMaximum(3.025814);
   Graph_Graph31035->SetDirectory(0);
   Graph_Graph31035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31035->SetLineColor(ci);
   Graph_Graph31035->GetXaxis()->SetLabelFont(42);
   Graph_Graph31035->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31035->GetXaxis()->SetTitleFont(42);
   Graph_Graph31035->GetYaxis()->SetLabelFont(42);
   Graph_Graph31035->GetYaxis()->SetTitleFont(42);
   Graph_Graph31035->GetZaxis()->SetLabelFont(42);
   Graph_Graph31035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31035);
   
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
   TText *pt_LaTex = pt->AddText("175 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
