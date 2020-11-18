void y_vs_theta_NSUBRUNS_275()
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
   
   Double_t Graph0_fx1051[24] = {
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
   Double_t Graph0_fy1051[24] = {
   2.567691,
   2.642079,
   2.619508,
   2.494205,
   2.577593,
   2.545217,
   2.53539,
   2.530391,
   2.567971,
   2.521995,
   2.50227,
   2.537195,
   2.588332,
   2.511864,
   2.567734,
   2.509693,
   2.564906,
   2.550862,
   2.504621,
   2.620838,
   2.569081,
   2.631963,
   2.5359,
   2.490056};
   Double_t Graph0_fex1051[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1051[24] = {
   0.03992089,
   0.05335305,
   0.04514373,
   0.045177,
   0.04931988,
   0.04507511,
   0.04389114,
   0.04533854,
   0.04780233,
   0.04403768,
   0.04130987,
   0.04001982,
   0.03667921,
   0.04175774,
   0.04347771,
   0.04514457,
   0.04309192,
   0.03970324,
   0.03729575,
   0.04286626,
   0.04580296,
   0.04731863,
   0.04248186,
   0.04390659};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1051,Graph0_fy1051,Graph0_fex1051,Graph0_fey1051);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01051 = new TH1F("Graph_Graph01051","275 sub-runs",100,0,394.5);
   Graph_Graph01051->SetMinimum(-1);
   Graph_Graph01051->SetMaximum(3.5);
   Graph_Graph01051->SetDirectory(0);
   Graph_Graph01051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01051->SetLineColor(ci);
   Graph_Graph01051->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01051->GetXaxis()->CenterTitle(true);
   Graph_Graph01051->GetXaxis()->SetLabelFont(42);
   Graph_Graph01051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01051->GetXaxis()->SetTitleFont(42);
   Graph_Graph01051->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01051->GetYaxis()->CenterTitle(true);
   Graph_Graph01051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01051->GetYaxis()->SetLabelFont(42);
   Graph_Graph01051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01051->GetYaxis()->SetTitleFont(42);
   Graph_Graph01051->GetZaxis()->SetLabelFont(42);
   Graph_Graph01051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01051);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1052[24] = {
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
   Double_t Graph0_fy1052[24] = {
   2.567691,
   2.642079,
   2.619508,
   2.494205,
   2.577593,
   2.545217,
   2.53539,
   2.530391,
   2.567971,
   2.521995,
   2.50227,
   2.537195,
   2.588332,
   2.511864,
   2.567734,
   2.509693,
   2.564906,
   2.550862,
   2.504621,
   2.620838,
   2.569081,
   2.631963,
   2.5359,
   2.490056};
   Double_t Graph0_fex1052[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1052[24] = {
   0.03992089,
   0.05335305,
   0.04514373,
   0.045177,
   0.04931988,
   0.04507511,
   0.04389114,
   0.04533854,
   0.04780233,
   0.04403768,
   0.04130987,
   0.04001982,
   0.03667921,
   0.04175774,
   0.04347771,
   0.04514457,
   0.04309192,
   0.03970324,
   0.03729575,
   0.04286626,
   0.04580296,
   0.04731863,
   0.04248186,
   0.04390659};
   gre = new TGraphErrors(24,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010511052 = new TH1F("Graph_Graph_Graph010511052","275 sub-runs",100,0,394.5);
   Graph_Graph_Graph010511052->SetMinimum(-1);
   Graph_Graph_Graph010511052->SetMaximum(3.5);
   Graph_Graph_Graph010511052->SetDirectory(0);
   Graph_Graph_Graph010511052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010511052->SetLineColor(ci);
   Graph_Graph_Graph010511052->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010511052->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010511052->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010511052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010511052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010511052->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010511052->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010511052->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010511052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010511052->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010511052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010511052->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010511052->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010511052->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010511052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010511052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010511052);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1053[24] = {
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
   Double_t Graph1_fy1053[24] = {
   -0.1294101,
   -0.06396003,
   -0.1794819,
   -0.3056059,
   -0.2713441,
   -0.4369836,
   -0.3396706,
   -0.2491245,
   -0.1904254,
   -0.1643702,
   -0.05265219,
   0.0377579,
   0.05317137,
   0.1820407,
   0.2363212,
   0.3136439,
   0.2761658,
   0.314055,
   0.3052306,
   0.2772431,
   0.1526292,
   0.2362982,
   0.08102979,
   -0.001691679};
   Double_t Graph1_fex1053[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1053[24] = {
   0.03992089,
   0.05335305,
   0.04514373,
   0.045177,
   0.04931988,
   0.04507511,
   0.04389114,
   0.04533854,
   0.04780233,
   0.04403768,
   0.04130987,
   0.04001982,
   0.03667921,
   0.04175774,
   0.04347771,
   0.04514457,
   0.04309192,
   0.03970324,
   0.03729575,
   0.04286626,
   0.04580296,
   0.04731863,
   0.04248186,
   0.04390659};
   gre = new TGraphErrors(24,Graph1_fx1053,Graph1_fy1053,Graph1_fex1053,Graph1_fey1053);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11053 = new TH1F("Graph_Graph11053","Graph",100,0,394.5);
   Graph_Graph11053->SetMinimum(-0.5661435);
   Graph_Graph11053->SetMaximum(0.4428731);
   Graph_Graph11053->SetDirectory(0);
   Graph_Graph11053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11053->SetLineColor(ci);
   Graph_Graph11053->GetXaxis()->SetLabelFont(42);
   Graph_Graph11053->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11053->GetXaxis()->SetTitleFont(42);
   Graph_Graph11053->GetYaxis()->SetLabelFont(42);
   Graph_Graph11053->GetYaxis()->SetTitleFont(42);
   Graph_Graph11053->GetZaxis()->SetLabelFont(42);
   Graph_Graph11053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11053);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1054[24] = {
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
   Double_t Graph2_fy1054[24] = {
   -0.05206541,
   -0.01266834,
   -0.06119591,
   -0.108498,
   -0.05110294,
   -0.03955186,
   0.03225547,
   0.05774002,
   0.04526746,
   0.04769966,
   0.03524168,
   -0.05491286,
   -0.04753398,
   -0.1098823,
   -0.06349277,
   -0.008028687,
   -0.0308485,
   0.007194328,
   0.01452292,
   0.1222015,
   0.08718789,
   0.06671928,
   0.004602731,
   -0.04092227};
   Double_t Graph2_fex1054[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1054[24] = {
   0.03992089,
   0.05335305,
   0.04514373,
   0.045177,
   0.04931988,
   0.04507511,
   0.04389114,
   0.04533854,
   0.04780233,
   0.04403768,
   0.04130987,
   0.04001982,
   0.03667921,
   0.04175774,
   0.04347771,
   0.04514457,
   0.04309192,
   0.03970324,
   0.03729575,
   0.04286626,
   0.04580296,
   0.04731863,
   0.04248186,
   0.04390659};
   gre = new TGraphErrors(24,Graph2_fx1054,Graph2_fy1054,Graph2_fex1054,Graph2_fey1054);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21054 = new TH1F("Graph_Graph21054","Graph",100,0,394.5);
   Graph_Graph21054->SetMinimum(-0.1855493);
   Graph_Graph21054->SetMaximum(0.1969421);
   Graph_Graph21054->SetDirectory(0);
   Graph_Graph21054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21054->SetLineColor(ci);
   Graph_Graph21054->GetXaxis()->SetLabelFont(42);
   Graph_Graph21054->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21054->GetXaxis()->SetTitleFont(42);
   Graph_Graph21054->GetYaxis()->SetLabelFont(42);
   Graph_Graph21054->GetYaxis()->SetTitleFont(42);
   Graph_Graph21054->GetZaxis()->SetLabelFont(42);
   Graph_Graph21054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21054);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1055[24] = {
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
   Double_t Graph3_fy1055[24] = {
   2.386215,
   2.56545,
   2.37883,
   2.080101,
   2.255146,
   2.068681,
   2.227975,
   2.339007,
   2.422813,
   2.405324,
   2.484859,
   2.52004,
   2.593969,
   2.584023,
   2.740562,
   2.815308,
   2.810223,
   2.872111,
   2.824375,
   3.020283,
   2.808898,
   2.93498,
   2.621533,
   2.447442};
   Double_t Graph3_fex1055[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1055[24] = {
   0.03992089,
   0.05335305,
   0.04514373,
   0.045177,
   0.04931988,
   0.04507511,
   0.04389114,
   0.04533854,
   0.04780233,
   0.04403768,
   0.04130987,
   0.04001982,
   0.03667921,
   0.04175774,
   0.04347771,
   0.04514457,
   0.04309192,
   0.03970324,
   0.03729575,
   0.04286626,
   0.04580296,
   0.04731863,
   0.04248186,
   0.04390659};
   gre = new TGraphErrors(24,Graph3_fx1055,Graph3_fy1055,Graph3_fex1055,Graph3_fey1055);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31055 = new TH1F("Graph_Graph31055","Graph",100,0,394.5);
   Graph_Graph31055->SetMinimum(1.919652);
   Graph_Graph31055->SetMaximum(3.167103);
   Graph_Graph31055->SetDirectory(0);
   Graph_Graph31055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31055->SetLineColor(ci);
   Graph_Graph31055->GetXaxis()->SetLabelFont(42);
   Graph_Graph31055->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31055->GetXaxis()->SetTitleFont(42);
   Graph_Graph31055->GetYaxis()->SetLabelFont(42);
   Graph_Graph31055->GetYaxis()->SetTitleFont(42);
   Graph_Graph31055->GetZaxis()->SetLabelFont(42);
   Graph_Graph31055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31055);
   
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
   TText *pt_LaTex = pt->AddText("275 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
