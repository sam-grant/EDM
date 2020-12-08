void y_vs_theta_overlay_NSUBRUNS_275()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 16:47:20 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-56.35714,-1.5625,507.2143,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
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
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077};
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","275 sub-runs",100,0,394.5);
   Graph_Graph01062->SetMinimum(-1);
   Graph_Graph01062->SetMaximum(3.5);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1063[24] = {
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
   Double_t Graph0_fy1063[24] = {
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077};
   Double_t Graph0_fex1063[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1063[24] = {
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
   gre = new TGraphErrors(24,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010621063 = new TH1F("Graph_Graph_Graph010621063","275 sub-runs",100,0,394.5);
   Graph_Graph_Graph010621063->SetMinimum(-1);
   Graph_Graph_Graph010621063->SetMaximum(3.5);
   Graph_Graph_Graph010621063->SetDirectory(0);
   Graph_Graph_Graph010621063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010621063->SetLineColor(ci);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010621063->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010621063->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010621063->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010621063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010621063->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010621063->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010621063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010621063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010621063);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1064[24] = {
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
   Double_t Graph1_fy1064[24] = {
   -0.07826103,
   -0.1511887,
   -0.2138131,
   -0.2618665,
   -0.2920741,
   -0.3023774,
   -0.2920741,
   -0.2618665,
   -0.2138131,
   -0.1511887,
   -0.07826103,
   -5.554583e-17,
   0.07826103,
   0.1511887,
   0.2138131,
   0.2618665,
   0.2920741,
   0.3023774,
   0.2920741,
   0.2618665,
   0.2138131,
   0.1511887,
   0.07826103,
   9.257638e-17};
   Double_t Graph1_fex1064[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1064[24] = {
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
   gre = new TGraphErrors(24,Graph1_fx1064,Graph1_fy1064,Graph1_fex1064,Graph1_fey1064);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11064 = new TH1F("Graph_Graph11064","Graph",100,0,394.5);
   Graph_Graph11064->SetMinimum(-0.4164058);
   Graph_Graph11064->SetMaximum(0.411034);
   Graph_Graph11064->SetDirectory(0);
   Graph_Graph11064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11064->SetLineColor(ci);
   Graph_Graph11064->GetXaxis()->SetLabelFont(42);
   Graph_Graph11064->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11064->GetXaxis()->SetTitleFont(42);
   Graph_Graph11064->GetYaxis()->SetLabelFont(42);
   Graph_Graph11064->GetYaxis()->SetTitleFont(42);
   Graph_Graph11064->GetZaxis()->SetLabelFont(42);
   Graph_Graph11064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11064);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1065[24] = {
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
   Double_t Graph2_fy1065[24] = {
   -0.03470364,
   -0.06010846,
   -0.06940728,
   -0.06010846,
   -0.03470364,
   -1.274991e-17,
   0.03470364,
   0.06010846,
   0.06940728,
   0.06010846,
   0.03470364,
   2.124985e-17,
   -0.03470364,
   -0.06010846,
   -0.06940728,
   -0.06010846,
   -0.03470364,
   -2.974979e-17,
   0.03470364,
   0.06010846,
   0.06940728,
   0.06010846,
   0.03470364,
   3.824973e-17};
   Double_t Graph2_fex1065[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1065[24] = {
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
   gre = new TGraphErrors(24,Graph2_fx1065,Graph2_fy1065,Graph2_fex1065,Graph2_fey1065);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21065 = new TH1F("Graph_Graph21065","Graph",100,0,394.5);
   Graph_Graph21065->SetMinimum(-0.1377271);
   Graph_Graph21065->SetMaximum(0.1403857);
   Graph_Graph21065->SetDirectory(0);
   Graph_Graph21065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21065->SetLineColor(ci);
   Graph_Graph21065->GetXaxis()->SetLabelFont(42);
   Graph_Graph21065->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21065->GetXaxis()->SetTitleFont(42);
   Graph_Graph21065->GetYaxis()->SetLabelFont(42);
   Graph_Graph21065->GetYaxis()->SetTitleFont(42);
   Graph_Graph21065->GetZaxis()->SetLabelFont(42);
   Graph_Graph21065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21065);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1066[24] = {
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
   Double_t Graph0_fy1066[24] = {
   2.447676,
   2.226179,
   2.254954,
   2.145588,
   2.276783,
   2.243331,
   2.329748,
   2.311862,
   2.395648,
   2.461121,
   2.500612,
   2.498492,
   2.597002,
   2.626087,
   2.763163,
   2.684721,
   2.723395,
   2.868277,
   2.923501,
   2.894294,
   2.873875,
   2.681511,
   2.630037,
   2.544809};
   Double_t Graph0_fex1066[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1066[24] = {
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
   gre = new TGraphErrors(24,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010611066 = new TH1F("Graph_Graph_Graph010611066","275 sub-runs",100,0,394.5);
   Graph_Graph_Graph010611066->SetMinimum(2.014373);
   Graph_Graph_Graph010611066->SetMaximum(3.046835);
   Graph_Graph_Graph010611066->SetDirectory(0);
   Graph_Graph_Graph010611066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010611066->SetLineColor(ci);
   Graph_Graph_Graph010611066->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010611066->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010611066->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010611066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010611066->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010611066->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010611066->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010611066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010611066->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010611066->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010611066->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010611066->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010611066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010611066);
   
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
   entry=leg->AddEntry("Graph0","Total","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
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
