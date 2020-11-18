void y_vs_theta_NSUBRUNS_250()
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
   
   Double_t Graph0_fx1046[24] = {
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
   Double_t Graph0_fy1046[24] = {
   2.507476,
   2.5722,
   2.581262,
   2.529555,
   2.594165,
   2.615378,
   2.577283,
   2.610957,
   2.58345,
   2.556245,
   2.529467,
   2.593875,
   2.549869,
   2.591874,
   2.587554,
   2.507782,
   2.564841,
   2.418553,
   2.556762,
   2.538234,
   2.521343,
   2.558329,
   2.636073,
   2.572139};
   Double_t Graph0_fex1046[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1046[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("250 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","250 sub-runs",100,0,394.5);
   Graph_Graph01046->SetMinimum(-1);
   Graph_Graph01046->SetMaximum(3.5);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1047[24] = {
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
   Double_t Graph0_fy1047[24] = {
   2.507476,
   2.5722,
   2.581262,
   2.529555,
   2.594165,
   2.615378,
   2.577283,
   2.610957,
   2.58345,
   2.556245,
   2.529467,
   2.593875,
   2.549869,
   2.591874,
   2.587554,
   2.507782,
   2.564841,
   2.418553,
   2.556762,
   2.538234,
   2.521343,
   2.558329,
   2.636073,
   2.572139};
   Double_t Graph0_fex1047[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1047[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("250 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010461047 = new TH1F("Graph_Graph_Graph010461047","250 sub-runs",100,0,394.5);
   Graph_Graph_Graph010461047->SetMinimum(-1);
   Graph_Graph_Graph010461047->SetMaximum(3.5);
   Graph_Graph_Graph010461047->SetDirectory(0);
   Graph_Graph_Graph010461047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010461047->SetLineColor(ci);
   Graph_Graph_Graph010461047->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010461047->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010461047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010461047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010461047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010461047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010461047->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010461047->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010461047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010461047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010461047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010461047->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010461047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010461047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010461047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010461047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010461047);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1048[24] = {
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
   Double_t Graph1_fy1048[24] = {
   -0.09471062,
   -0.1658774,
   -0.22942,
   -0.1978448,
   -0.2813344,
   -0.3167391,
   -0.3292652,
   -0.2162751,
   -0.168554,
   -0.1650299,
   -0.02293044,
   -0.04447305,
   0.05072238,
   0.1295794,
   0.2357186,
   0.222007,
   0.2822479,
   0.3113228,
   0.2558834,
   0.2042988,
   0.1751521,
   0.1119707,
   0.03956774,
   -0.04079991};
   Double_t Graph1_fex1048[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1048[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph1_fx1048,Graph1_fy1048,Graph1_fex1048,Graph1_fey1048);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11048 = new TH1F("Graph_Graph11048","Graph",100,0,394.5);
   Graph_Graph11048->SetMinimum(-0.4481709);
   Graph_Graph11048->SetMaximum(0.4257856);
   Graph_Graph11048->SetDirectory(0);
   Graph_Graph11048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11048->SetLineColor(ci);
   Graph_Graph11048->GetXaxis()->SetLabelFont(42);
   Graph_Graph11048->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11048->GetXaxis()->SetTitleFont(42);
   Graph_Graph11048->GetYaxis()->SetLabelFont(42);
   Graph_Graph11048->GetYaxis()->SetTitleFont(42);
   Graph_Graph11048->GetZaxis()->SetLabelFont(42);
   Graph_Graph11048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11048);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1049[24] = {
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
   Double_t Graph2_fy1049[24] = {
   -0.07261308,
   -0.0008900732,
   -0.0114089,
   -0.06141162,
   0.04188949,
   -0.02498752,
   0.07121778,
   0.1259513,
   -0.02063956,
   0.1867459,
   0.04239602,
   -0.02855504,
   0.004022873,
   -0.07984935,
   -0.1615655,
   -0.08087134,
   -0.05357094,
   0.0160389,
   0.002328016,
   0.09878182,
   0.05716064,
   0.1300799,
   0.003343276,
   -0.006608172};
   Double_t Graph2_fex1049[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1049[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph2_fx1049,Graph2_fy1049,Graph2_fex1049,Graph2_fey1049);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21049 = new TH1F("Graph_Graph21049","Graph",100,0,394.5);
   Graph_Graph21049->SetMinimum(-0.2511952);
   Graph_Graph21049->SetMaximum(0.2769336);
   Graph_Graph21049->SetDirectory(0);
   Graph_Graph21049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21049->SetLineColor(ci);
   Graph_Graph21049->GetXaxis()->SetLabelFont(42);
   Graph_Graph21049->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21049->GetXaxis()->SetTitleFont(42);
   Graph_Graph21049->GetYaxis()->SetLabelFont(42);
   Graph_Graph21049->GetYaxis()->SetTitleFont(42);
   Graph_Graph21049->GetZaxis()->SetLabelFont(42);
   Graph_Graph21049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21049);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1050[24] = {
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
   Double_t Graph3_fy1050[24] = {
   2.340152,
   2.405432,
   2.340433,
   2.270298,
   2.35472,
   2.273651,
   2.319236,
   2.520633,
   2.394256,
   2.577961,
   2.548933,
   2.520847,
   2.604614,
   2.641604,
   2.661707,
   2.648918,
   2.793518,
   2.745914,
   2.814974,
   2.841315,
   2.753655,
   2.800379,
   2.678984,
   2.524731};
   Double_t Graph3_fex1050[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1050[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph3_fx1050,Graph3_fy1050,Graph3_fex1050,Graph3_fey1050);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31050 = new TH1F("Graph_Graph31050","Graph",100,0,394.5);
   Graph_Graph31050->SetMinimum(2.156561);
   Graph_Graph31050->SetMaximum(2.952634);
   Graph_Graph31050->SetDirectory(0);
   Graph_Graph31050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31050->SetLineColor(ci);
   Graph_Graph31050->GetXaxis()->SetLabelFont(42);
   Graph_Graph31050->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31050->GetXaxis()->SetTitleFont(42);
   Graph_Graph31050->GetYaxis()->SetLabelFont(42);
   Graph_Graph31050->GetYaxis()->SetTitleFont(42);
   Graph_Graph31050->GetZaxis()->SetLabelFont(42);
   Graph_Graph31050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31050);
   
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
   TText *pt_LaTex = pt->AddText("250 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
