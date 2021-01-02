void y_vs_theta_overlay_NSUBRUNS_150()
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
   0.0540224,
   0.0722305,
   0.06125516,
   0.0612271,
   0.06684168,
   0.06106114,
   0.05966914,
   0.06145237,
   0.06457349,
   0.05959788,
   0.05594444,
   0.05424307,
   0.04964716,
   0.0566038,
   0.05890617,
   0.0611397,
   0.05844254,
   0.05370264,
   0.05047626,
   0.05815381,
   0.0620829,
   0.06413895,
   0.05749749,
   0.05944987};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","150 sub-runs",100,0,394.5);
   Graph_Graph01032->SetMinimum(-1);
   Graph_Graph01032->SetMaximum(3.5);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1033[24] = {
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
   Double_t Graph0_fy1033[24] = {
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
   Double_t Graph0_fex1033[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1033[24] = {
   0.0540224,
   0.0722305,
   0.06125516,
   0.0612271,
   0.06684168,
   0.06106114,
   0.05966914,
   0.06145237,
   0.06457349,
   0.05959788,
   0.05594444,
   0.05424307,
   0.04964716,
   0.0566038,
   0.05890617,
   0.0611397,
   0.05844254,
   0.05370264,
   0.05047626,
   0.05815381,
   0.0620829,
   0.06413895,
   0.05749749,
   0.05944987};
   gre = new TGraphErrors(24,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010321033 = new TH1F("Graph_Graph_Graph010321033","150 sub-runs",100,0,394.5);
   Graph_Graph_Graph010321033->SetMinimum(-1);
   Graph_Graph_Graph010321033->SetMaximum(3.5);
   Graph_Graph_Graph010321033->SetDirectory(0);
   Graph_Graph_Graph010321033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010321033->SetLineColor(ci);
   Graph_Graph_Graph010321033->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010321033->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010321033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010321033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010321033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010321033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010321033->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010321033->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010321033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010321033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010321033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010321033->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010321033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010321033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010321033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010321033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010321033);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1034[24] = {
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
   Double_t Graph1_fy1034[24] = {
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
   Double_t Graph1_fex1034[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1034[24] = {
   0.0540224,
   0.0722305,
   0.06125516,
   0.0612271,
   0.06684168,
   0.06106114,
   0.05966914,
   0.06145237,
   0.06457349,
   0.05959788,
   0.05594444,
   0.05424307,
   0.04964716,
   0.0566038,
   0.05890617,
   0.0611397,
   0.05844254,
   0.05370264,
   0.05047626,
   0.05815381,
   0.0620829,
   0.06413895,
   0.05749749,
   0.05944987};
   gre = new TGraphErrors(24,Graph1_fx1034,Graph1_fy1034,Graph1_fex1034,Graph1_fey1034);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11034 = new TH1F("Graph_Graph11034","Graph",100,0,394.5);
   Graph_Graph11034->SetMinimum(-0.4353904);
   Graph_Graph11034->SetMaximum(0.4280319);
   Graph_Graph11034->SetDirectory(0);
   Graph_Graph11034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11034->SetLineColor(ci);
   Graph_Graph11034->GetXaxis()->SetLabelFont(42);
   Graph_Graph11034->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11034->GetXaxis()->SetTitleFont(42);
   Graph_Graph11034->GetYaxis()->SetLabelFont(42);
   Graph_Graph11034->GetYaxis()->SetTitleFont(42);
   Graph_Graph11034->GetZaxis()->SetLabelFont(42);
   Graph_Graph11034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11034);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1035[24] = {
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
   Double_t Graph2_fy1035[24] = {
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
   Double_t Graph2_fex1035[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1035[24] = {
   0.0540224,
   0.0722305,
   0.06125516,
   0.0612271,
   0.06684168,
   0.06106114,
   0.05966914,
   0.06145237,
   0.06457349,
   0.05959788,
   0.05594444,
   0.05424307,
   0.04964716,
   0.0566038,
   0.05890617,
   0.0611397,
   0.05844254,
   0.05370264,
   0.05047626,
   0.05815381,
   0.0620829,
   0.06413895,
   0.05749749,
   0.05944987};
   gre = new TGraphErrors(24,Graph2_fx1035,Graph2_fy1035,Graph2_fex1035,Graph2_fey1035);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21035 = new TH1F("Graph_Graph21035","Graph",100,0,394.5);
   Graph_Graph21035->SetMinimum(-0.1589709);
   Graph_Graph21035->SetMaximum(0.1606127);
   Graph_Graph21035->SetDirectory(0);
   Graph_Graph21035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21035->SetLineColor(ci);
   Graph_Graph21035->GetXaxis()->SetLabelFont(42);
   Graph_Graph21035->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21035->GetXaxis()->SetTitleFont(42);
   Graph_Graph21035->GetYaxis()->SetLabelFont(42);
   Graph_Graph21035->GetYaxis()->SetTitleFont(42);
   Graph_Graph21035->GetZaxis()->SetLabelFont(42);
   Graph_Graph21035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21035);
   
   gre->Draw("p ");
   
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
   2.515294,
   2.300422,
   2.192785,
   2.377759,
   2.331076,
   2.326561,
   2.260276,
   2.416651,
   2.306127,
   2.455633,
   2.532054,
   2.526717,
   2.606999,
   2.68609,
   2.616932,
   2.817891,
   2.782284,
   2.918804,
   2.931618,
   2.8668,
   2.752248,
   2.872805,
   2.72242,
   2.523397};
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
   0.0540224,
   0.0722305,
   0.06125516,
   0.0612271,
   0.06684168,
   0.06106114,
   0.05966914,
   0.06145237,
   0.06457349,
   0.05959788,
   0.05594444,
   0.05424307,
   0.04964716,
   0.0566038,
   0.05890617,
   0.0611397,
   0.05844254,
   0.05370264,
   0.05047626,
   0.05815381,
   0.0620829,
   0.06413895,
   0.05749749,
   0.05944987};
   gre = new TGraphErrors(24,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010311036 = new TH1F("Graph_Graph_Graph010311036","150 sub-runs",100,0,394.5);
   Graph_Graph_Graph010311036->SetMinimum(2.046473);
   Graph_Graph_Graph010311036->SetMaximum(3.06715);
   Graph_Graph_Graph010311036->SetDirectory(0);
   Graph_Graph_Graph010311036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010311036->SetLineColor(ci);
   Graph_Graph_Graph010311036->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010311036->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010311036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010311036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010311036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010311036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010311036->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010311036->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010311036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010311036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010311036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010311036->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010311036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010311036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010311036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010311036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010311036);
   
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
   TText *pt_LaTex = pt->AddText("150 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
