void y_vs_theta_NSUBRUNS_100()
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
   
   Double_t Graph0_fx1016[24] = {
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
   Double_t Graph0_fy1016[24] = {
   2.639674,
   2.580885,
   2.569143,
   2.658191,
   2.545806,
   2.580136,
   2.607213,
   2.497765,
   2.576884,
   2.420134,
   2.611349,
   2.55635,
   2.559621,
   2.450013,
   2.645893,
   2.427067,
   2.592199,
   2.655283,
   2.4045,
   2.566079,
   2.42133,
   2.345138,
   2.539752,
   2.531487};
   Double_t Graph0_fex1016[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1016[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","100 sub-runs",100,0,394.5);
   Graph_Graph01016->SetMinimum(-1);
   Graph_Graph01016->SetMaximum(3.5);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1017[24] = {
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
   Double_t Graph0_fy1017[24] = {
   2.639674,
   2.580885,
   2.569143,
   2.658191,
   2.545806,
   2.580136,
   2.607213,
   2.497765,
   2.576884,
   2.420134,
   2.611349,
   2.55635,
   2.559621,
   2.450013,
   2.645893,
   2.427067,
   2.592199,
   2.655283,
   2.4045,
   2.566079,
   2.42133,
   2.345138,
   2.539752,
   2.531487};
   Double_t Graph0_fex1017[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1017[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010161017 = new TH1F("Graph_Graph_Graph010161017","100 sub-runs",100,0,394.5);
   Graph_Graph_Graph010161017->SetMinimum(-1);
   Graph_Graph_Graph010161017->SetMaximum(3.5);
   Graph_Graph_Graph010161017->SetDirectory(0);
   Graph_Graph_Graph010161017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010161017->SetLineColor(ci);
   Graph_Graph_Graph010161017->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010161017->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010161017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010161017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010161017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010161017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010161017->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010161017->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010161017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010161017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010161017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010161017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010161017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010161017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010161017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010161017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010161017);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1018[24] = {
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
   Double_t Graph1_fy1018[24] = {
   0.02254322,
   -0.1827352,
   -0.1056975,
   -0.250565,
   -0.1986931,
   -0.2729267,
   -0.3208402,
   -0.227702,
   -0.3717974,
   -0.06292591,
   -0.1243435,
   0.0001492281,
   0.06504253,
   0.02533264,
   0.2613351,
   0.2142164,
   0.2729647,
   0.2586904,
   0.3764683,
   0.2434704,
   0.1498573,
   0.03113954,
   0.1166357,
   -0.02910381};
   Double_t Graph1_fex1018[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1018[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph1_fx1018,Graph1_fy1018,Graph1_fex1018,Graph1_fey1018);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11018 = new TH1F("Graph_Graph11018","Graph",100,0,394.5);
   Graph_Graph11018->SetMinimum(-0.5397885);
   Graph_Graph11018->SetMaximum(0.5272578);
   Graph_Graph11018->SetDirectory(0);
   Graph_Graph11018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11018->SetLineColor(ci);
   Graph_Graph11018->GetXaxis()->SetLabelFont(42);
   Graph_Graph11018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11018->GetXaxis()->SetTitleFont(42);
   Graph_Graph11018->GetYaxis()->SetLabelFont(42);
   Graph_Graph11018->GetYaxis()->SetTitleFont(42);
   Graph_Graph11018->GetZaxis()->SetLabelFont(42);
   Graph_Graph11018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11018);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1019[24] = {
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
   Double_t Graph2_fy1019[24] = {
   -0.07679791,
   0.01831207,
   -0.1193353,
   0.0308281,
   0.04362157,
   0.03462615,
   0.07249618,
   0.1419621,
   0.05906901,
   0.06275742,
   0.02893048,
   -0.07577885,
   0.06983216,
   -0.02191678,
   0.003942433,
   -0.05885862,
   -0.1074656,
   -0.05160151,
   -0.07254788,
   -0.01705615,
   0.03025679,
   0.08688708,
   -0.02219274,
   0.09237098};
   Double_t Graph2_fex1019[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1019[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph2_fx1019,Graph2_fy1019,Graph2_fex1019,Graph2_fey1019);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21019 = new TH1F("Graph_Graph21019","Graph",100,0,394.5);
   Graph_Graph21019->SetMinimum(-0.2355191);
   Graph_Graph21019->SetMaximum(0.2583159);
   Graph_Graph21019->SetDirectory(0);
   Graph_Graph21019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21019->SetLineColor(ci);
   Graph_Graph21019->GetXaxis()->SetLabelFont(42);
   Graph_Graph21019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21019->GetXaxis()->SetTitleFont(42);
   Graph_Graph21019->GetYaxis()->SetLabelFont(42);
   Graph_Graph21019->GetYaxis()->SetTitleFont(42);
   Graph_Graph21019->GetZaxis()->SetLabelFont(42);
   Graph_Graph21019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21019);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1020[24] = {
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
   Double_t Graph3_fy1020[24] = {
   2.58542,
   2.416462,
   2.34411,
   2.438454,
   2.390734,
   2.341836,
   2.358869,
   2.412026,
   2.264156,
   2.419966,
   2.515936,
   2.48072,
   2.694495,
   2.453429,
   2.911171,
   2.582424,
   2.757698,
   2.862372,
   2.70842,
   2.792493,
   2.601444,
   2.463165,
   2.634195,
   2.594754};
   Double_t Graph3_fex1020[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1020[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph3_fx1020,Graph3_fy1020,Graph3_fex1020,Graph3_fey1020);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31020 = new TH1F("Graph_Graph31020","Graph",100,0,394.5);
   Graph_Graph31020->SetMinimum(2.105263);
   Graph_Graph31020->SetMaximum(3.063121);
   Graph_Graph31020->SetDirectory(0);
   Graph_Graph31020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31020->SetLineColor(ci);
   Graph_Graph31020->GetXaxis()->SetLabelFont(42);
   Graph_Graph31020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31020->GetXaxis()->SetTitleFont(42);
   Graph_Graph31020->GetYaxis()->SetLabelFont(42);
   Graph_Graph31020->GetYaxis()->SetTitleFont(42);
   Graph_Graph31020->GetZaxis()->SetLabelFont(42);
   Graph_Graph31020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31020);
   
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
   TText *pt_LaTex = pt->AddText("100 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
