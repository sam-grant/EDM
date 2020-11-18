void y_vs_theta_NSUBRUNS_150()
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
   
   Double_t Graph0_fx1026[24] = {
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
   Double_t Graph0_fy1026[24] = {
   2.629272,
   2.564448,
   2.444373,
   2.680754,
   2.362284,
   2.566314,
   2.587752,
   2.650159,
   2.464032,
   2.549115,
   2.553421,
   2.598188,
   2.560193,
   2.553547,
   2.529249,
   2.583114,
   2.575917,
   2.472232,
   2.528747,
   2.507184,
   2.545311,
   2.465107,
   2.508609,
   2.533539};
   Double_t Graph0_fex1026[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1026[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","150 sub-runs",100,0,394.5);
   Graph_Graph01026->SetMinimum(-1);
   Graph_Graph01026->SetMaximum(3.5);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1027[24] = {
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
   Double_t Graph0_fy1027[24] = {
   2.629272,
   2.564448,
   2.444373,
   2.680754,
   2.362284,
   2.566314,
   2.587752,
   2.650159,
   2.464032,
   2.549115,
   2.553421,
   2.598188,
   2.560193,
   2.553547,
   2.529249,
   2.583114,
   2.575917,
   2.472232,
   2.528747,
   2.507184,
   2.545311,
   2.465107,
   2.508609,
   2.533539};
   Double_t Graph0_fex1027[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1027[24] = {
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
   gre = new TGraphErrors(24,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010261027 = new TH1F("Graph_Graph_Graph010261027","150 sub-runs",100,0,394.5);
   Graph_Graph_Graph010261027->SetMinimum(-1);
   Graph_Graph_Graph010261027->SetMaximum(3.5);
   Graph_Graph_Graph010261027->SetDirectory(0);
   Graph_Graph_Graph010261027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010261027->SetLineColor(ci);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010261027->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010261027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010261027->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010261027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010261027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010261027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010261027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010261027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010261027);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1028[24] = {
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
   Double_t Graph1_fy1028[24] = {
   -0.06365115,
   -0.1324977,
   -0.2523603,
   -0.3354421,
   -0.2995392,
   -0.3336227,
   -0.261852,
   -0.3638085,
   -0.3418064,
   -0.1697766,
   0.03430194,
   -0.01450096,
   0.02460254,
   0.06078079,
   0.122749,
   0.1642216,
   0.3143727,
   0.2872646,
   0.3261524,
   0.3694415,
   0.2695139,
   0.1136897,
   0.01073383,
   -0.036336};
   Double_t Graph1_fex1028[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1028[24] = {
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
   gre = new TGraphErrors(24,Graph1_fx1028,Graph1_fy1028,Graph1_fex1028,Graph1_fey1028);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11028 = new TH1F("Graph_Graph11028","Graph",100,0,394.5);
   Graph_Graph11028->SetMinimum(-0.5105465);
   Graph_Graph11028->SetMaximum(0.5128809);
   Graph_Graph11028->SetDirectory(0);
   Graph_Graph11028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11028->SetLineColor(ci);
   Graph_Graph11028->GetXaxis()->SetLabelFont(42);
   Graph_Graph11028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetXaxis()->SetTitleFont(42);
   Graph_Graph11028->GetYaxis()->SetLabelFont(42);
   Graph_Graph11028->GetYaxis()->SetTitleFont(42);
   Graph_Graph11028->GetZaxis()->SetLabelFont(42);
   Graph_Graph11028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11028);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1029[24] = {
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
   Double_t Graph2_fy1029[24] = {
   -0.05269718,
   -0.01806949,
   -0.0832136,
   -0.05756302,
   -0.02371612,
   -0.05752968,
   0.08908835,
   0.1521747,
   0.1859542,
   -0.07702786,
   0.05923039,
   0.1243665,
   -0.02183485,
   -0.03273851,
   -0.1274558,
   -0.08131145,
   0.01087088,
   0.0195668,
   0.04726218,
   -0.01905594,
   0.07460701,
   0.1319198,
   0.04061524,
   -0.01565868};
   Double_t Graph2_fex1029[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1029[24] = {
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
   gre = new TGraphErrors(24,Graph2_fx1029,Graph2_fy1029,Graph2_fex1029,Graph2_fey1029);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21029 = new TH1F("Graph_Graph21029","Graph",100,0,394.5);
   Graph_Graph21029->SetMinimum(-0.2300509);
   Graph_Graph21029->SetMaximum(0.2942167);
   Graph_Graph21029->SetDirectory(0);
   Graph_Graph21029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21029->SetLineColor(ci);
   Graph_Graph21029->GetXaxis()->SetLabelFont(42);
   Graph_Graph21029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetXaxis()->SetTitleFont(42);
   Graph_Graph21029->GetYaxis()->SetLabelFont(42);
   Graph_Graph21029->GetYaxis()->SetTitleFont(42);
   Graph_Graph21029->GetZaxis()->SetLabelFont(42);
   Graph_Graph21029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21029);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1030[24] = {
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
   Double_t Graph3_fy1030[24] = {
   2.512924,
   2.413881,
   2.108799,
   2.287749,
   2.039028,
   2.175161,
   2.414989,
   2.438526,
   2.308179,
   2.302311,
   2.646953,
   2.708054,
   2.56296,
   2.58159,
   2.524542,
   2.666025,
   2.901161,
   2.779063,
   2.902162,
   2.85757,
   2.889432,
   2.710716,
   2.559958,
   2.481545};
   Double_t Graph3_fex1030[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1030[24] = {
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
   gre = new TGraphErrors(24,Graph3_fx1030,Graph3_fy1030,Graph3_fex1030,Graph3_fey1030);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31030 = new TH1F("Graph_Graph31030","Graph",100,0,394.5);
   Graph_Graph31030->SetMinimum(1.873445);
   Graph_Graph31030->SetMaximum(3.058345);
   Graph_Graph31030->SetDirectory(0);
   Graph_Graph31030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31030->SetLineColor(ci);
   Graph_Graph31030->GetXaxis()->SetLabelFont(42);
   Graph_Graph31030->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31030->GetXaxis()->SetTitleFont(42);
   Graph_Graph31030->GetYaxis()->SetLabelFont(42);
   Graph_Graph31030->GetYaxis()->SetTitleFont(42);
   Graph_Graph31030->GetZaxis()->SetLabelFont(42);
   Graph_Graph31030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31030);
   
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
   TText *pt_LaTex = pt->AddText("150 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
