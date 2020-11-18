void y_vs_theta_NSUBRUNS_50()
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
   
   Double_t Graph0_fx1006[24] = {
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
   Double_t Graph0_fy1006[24] = {
   2.682247,
   2.510739,
   2.380398,
   2.665249,
   2.52964,
   2.768334,
   2.56054,
   2.513108,
   2.645012,
   2.636189,
   2.612055,
   2.516099,
   2.544752,
   2.600407,
   2.337327,
   2.50041,
   2.701964,
   2.78027,
   2.505437,
   2.548539,
   2.585923,
   2.674446,
   2.663552,
   2.73194};
   Double_t Graph0_fex1006[24] = {
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
   Double_t Graph0_fey1006[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("50 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","50 sub-runs",100,0,394.5);
   Graph_Graph01006->SetMinimum(-1);
   Graph_Graph01006->SetMaximum(3.5);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01006->GetXaxis()->CenterTitle(true);
   Graph_Graph01006->GetXaxis()->SetLabelFont(42);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetXaxis()->SetTitleFont(42);
   Graph_Graph01006->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01006->GetYaxis()->CenterTitle(true);
   Graph_Graph01006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01006->GetYaxis()->SetLabelFont(42);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetYaxis()->SetTitleFont(42);
   Graph_Graph01006->GetZaxis()->SetLabelFont(42);
   Graph_Graph01006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01006);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1007[24] = {
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
   Double_t Graph0_fy1007[24] = {
   2.682247,
   2.510739,
   2.380398,
   2.665249,
   2.52964,
   2.768334,
   2.56054,
   2.513108,
   2.645012,
   2.636189,
   2.612055,
   2.516099,
   2.544752,
   2.600407,
   2.337327,
   2.50041,
   2.701964,
   2.78027,
   2.505437,
   2.548539,
   2.585923,
   2.674446,
   2.663552,
   2.73194};
   Double_t Graph0_fex1007[24] = {
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
   Double_t Graph0_fey1007[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("50 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010061007 = new TH1F("Graph_Graph_Graph010061007","50 sub-runs",100,0,394.5);
   Graph_Graph_Graph010061007->SetMinimum(-1);
   Graph_Graph_Graph010061007->SetMaximum(3.5);
   Graph_Graph_Graph010061007->SetDirectory(0);
   Graph_Graph_Graph010061007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010061007->SetLineColor(ci);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010061007->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010061007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010061007->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010061007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010061007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010061007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010061007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010061007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010061007);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1008[24] = {
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
   Double_t Graph1_fy1008[24] = {
   0.0975466,
   -0.04793953,
   -0.1422888,
   -0.2386644,
   -0.5747081,
   -0.3346919,
   -0.1763266,
   -0.271815,
   -0.299075,
   -0.06826374,
   -0.02606474,
   0.004316521,
   0.2098391,
   0.1652747,
   0.2108069,
   0.1638332,
   0.2466841,
   0.4605206,
   0.3975925,
   0.3187155,
   0.3103487,
   0.1149179,
   0.07953813,
   0.1166737};
   Double_t Graph1_fex1008[24] = {
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
   Double_t Graph1_fey1008[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Graph",100,0,394.5);
   Graph_Graph11008->SetMinimum(-0.8146758);
   Graph_Graph11008->SetMaximum(0.6777991);
   Graph_Graph11008->SetDirectory(0);
   Graph_Graph11008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11008->SetLineColor(ci);
   Graph_Graph11008->GetXaxis()->SetLabelFont(42);
   Graph_Graph11008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetXaxis()->SetTitleFont(42);
   Graph_Graph11008->GetYaxis()->SetLabelFont(42);
   Graph_Graph11008->GetYaxis()->SetTitleFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelFont(42);
   Graph_Graph11008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11008);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1009[24] = {
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
   Double_t Graph2_fy1009[24] = {
   -0.05340574,
   -0.1770831,
   -0.06468284,
   -0.2596546,
   0.1158929,
   -0.08283532,
   -0.04762993,
   0.07838934,
   0.04530954,
   0.007043234,
   0.03381537,
   -0.01706447,
   0.06864214,
   -0.07654093,
   0.009500733,
   -0.2189186,
   -0.1473003,
   0.1291193,
   -0.09166703,
   0.02783183,
   -0.06090504,
   0.2091385,
   -0.08527276,
   -0.03569145};
   Double_t Graph2_fex1009[24] = {
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
   Double_t Graph2_fey1009[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph2_fx1009,Graph2_fy1009,Graph2_fex1009,Graph2_fey1009);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Graph",100,0,394.5);
   Graph_Graph21009->SetMinimum(-0.4341427);
   Graph_Graph21009->SetMaximum(0.3882937);
   Graph_Graph21009->SetDirectory(0);
   Graph_Graph21009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21009->SetLineColor(ci);
   Graph_Graph21009->GetXaxis()->SetLabelFont(42);
   Graph_Graph21009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetXaxis()->SetTitleFont(42);
   Graph_Graph21009->GetYaxis()->SetLabelFont(42);
   Graph_Graph21009->GetYaxis()->SetTitleFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelFont(42);
   Graph_Graph21009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21009);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1010[24] = {
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
   Double_t Graph3_fy1010[24] = {
   2.726388,
   2.285717,
   2.173427,
   2.16693,
   2.070825,
   2.350807,
   2.336584,
   2.319682,
   2.391247,
   2.574969,
   2.619806,
   2.503351,
   2.823233,
   2.689141,
   2.557635,
   2.445324,
   2.801348,
   3.36991,
   2.811363,
   2.895086,
   2.835366,
   2.998503,
   2.657818,
   2.812923};
   Double_t Graph3_fex1010[24] = {
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
   Double_t Graph3_fey1010[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph3_fx1010,Graph3_fy1010,Graph3_fex1010,Graph3_fey1010);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31010 = new TH1F("Graph_Graph31010","Graph",100,0,394.5);
   Graph_Graph31010->SetMinimum(1.804472);
   Graph_Graph31010->SetMaximum(3.613574);
   Graph_Graph31010->SetDirectory(0);
   Graph_Graph31010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31010->SetLineColor(ci);
   Graph_Graph31010->GetXaxis()->SetLabelFont(42);
   Graph_Graph31010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31010->GetXaxis()->SetTitleFont(42);
   Graph_Graph31010->GetYaxis()->SetLabelFont(42);
   Graph_Graph31010->GetYaxis()->SetTitleFont(42);
   Graph_Graph31010->GetZaxis()->SetLabelFont(42);
   Graph_Graph31010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31010);
   
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
   
   TPaveText *pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("50 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
