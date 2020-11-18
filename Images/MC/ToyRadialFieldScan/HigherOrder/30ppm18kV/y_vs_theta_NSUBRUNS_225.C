void y_vs_theta_NSUBRUNS_225()
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
   
   Double_t Graph0_fx1041[24] = {
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
   Double_t Graph0_fy1041[24] = {
   2.559093,
   2.415229,
   2.481182,
   2.570911,
   2.566299,
   2.590754,
   2.529502,
   2.580639,
   2.581646,
   2.484782,
   2.518639,
   2.529289,
   2.577635,
   2.508343,
   2.582639,
   2.51581,
   2.513532,
   2.535488,
   2.527434,
   2.589232,
   2.666168,
   2.74035,
   2.578824,
   2.553894};
   Double_t Graph0_fex1041[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1041[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","225 sub-runs",100,0,394.5);
   Graph_Graph01041->SetMinimum(-1);
   Graph_Graph01041->SetMaximum(3.5);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1042[24] = {
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
   Double_t Graph0_fy1042[24] = {
   2.559093,
   2.415229,
   2.481182,
   2.570911,
   2.566299,
   2.590754,
   2.529502,
   2.580639,
   2.581646,
   2.484782,
   2.518639,
   2.529289,
   2.577635,
   2.508343,
   2.582639,
   2.51581,
   2.513532,
   2.535488,
   2.527434,
   2.589232,
   2.666168,
   2.74035,
   2.578824,
   2.553894};
   Double_t Graph0_fex1042[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1042[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010411042 = new TH1F("Graph_Graph_Graph010411042","225 sub-runs",100,0,394.5);
   Graph_Graph_Graph010411042->SetMinimum(-1);
   Graph_Graph_Graph010411042->SetMaximum(3.5);
   Graph_Graph_Graph010411042->SetDirectory(0);
   Graph_Graph_Graph010411042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010411042->SetLineColor(ci);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010411042->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010411042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010411042->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010411042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010411042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010411042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010411042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010411042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010411042);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1043[24] = {
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
   Double_t Graph1_fy1043[24] = {
   -0.1255395,
   -0.1436276,
   -0.2234126,
   -0.300985,
   -0.3712435,
   -0.3168483,
   -0.2529025,
   -0.2203504,
   -0.2293735,
   -0.1937898,
   0.003200601,
   -0.05743574,
   0.0324538,
   0.2214911,
   0.1872023,
   0.2118197,
   0.2718236,
   0.2711331,
   0.3460572,
   0.3135577,
   0.2027455,
   0.04405493,
   0.07317599,
   0.02703104};
   Double_t Graph1_fex1043[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1043[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph1_fx1043,Graph1_fy1043,Graph1_fex1043,Graph1_fey1043);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11043 = new TH1F("Graph_Graph11043","Graph",100,0,394.5);
   Graph_Graph11043->SetMinimum(-0.5070801);
   Graph_Graph11043->SetMaximum(0.4685454);
   Graph_Graph11043->SetDirectory(0);
   Graph_Graph11043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11043->SetLineColor(ci);
   Graph_Graph11043->GetXaxis()->SetLabelFont(42);
   Graph_Graph11043->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11043->GetXaxis()->SetTitleFont(42);
   Graph_Graph11043->GetYaxis()->SetLabelFont(42);
   Graph_Graph11043->GetYaxis()->SetTitleFont(42);
   Graph_Graph11043->GetZaxis()->SetLabelFont(42);
   Graph_Graph11043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11043);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1044[24] = {
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
   Double_t Graph2_fy1044[24] = {
   -0.00953073,
   0.03879399,
   -0.09265876,
   -0.03961977,
   -0.1115779,
   0.02638428,
   0.006188246,
   0.03916756,
   0.1708896,
   0.1268687,
   -0.02647188,
   0.01413835,
   -0.08476611,
   -0.1113917,
   -0.1048042,
   -0.006797539,
   -0.09452756,
   -0.004530587,
   0.06457494,
   0.08227602,
   0.1138726,
   0.05441468,
   -0.07530476,
   -0.01139007};
   Double_t Graph2_fex1044[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1044[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph2_fx1044,Graph2_fy1044,Graph2_fex1044,Graph2_fey1044);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21044 = new TH1F("Graph_Graph21044","Graph",100,0,394.5);
   Graph_Graph21044->SetMinimum(-0.2050896);
   Graph_Graph21044->SetMaximum(0.2626365);
   Graph_Graph21044->SetDirectory(0);
   Graph_Graph21044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21044->SetLineColor(ci);
   Graph_Graph21044->GetXaxis()->SetLabelFont(42);
   Graph_Graph21044->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21044->GetXaxis()->SetTitleFont(42);
   Graph_Graph21044->GetYaxis()->SetLabelFont(42);
   Graph_Graph21044->GetYaxis()->SetTitleFont(42);
   Graph_Graph21044->GetZaxis()->SetLabelFont(42);
   Graph_Graph21044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21044);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1045[24] = {
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
   Double_t Graph3_fy1045[24] = {
   2.424022,
   2.310396,
   2.16511,
   2.230307,
   2.083477,
   2.30029,
   2.282788,
   2.399456,
   2.523162,
   2.417861,
   2.495367,
   2.485991,
   2.525323,
   2.618442,
   2.665037,
   2.720832,
   2.690828,
   2.802091,
   2.938066,
   2.985066,
   2.982786,
   2.83882,
   2.576695,
   2.569535};
   Double_t Graph3_fex1045[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1045[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph3_fx1045,Graph3_fy1045,Graph3_fex1045,Graph3_fey1045);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31045 = new TH1F("Graph_Graph31045","Graph",100,0,394.5);
   Graph_Graph31045->SetMinimum(1.928496);
   Graph_Graph31045->SetMaximum(3.133854);
   Graph_Graph31045->SetDirectory(0);
   Graph_Graph31045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31045->SetLineColor(ci);
   Graph_Graph31045->GetXaxis()->SetLabelFont(42);
   Graph_Graph31045->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31045->GetXaxis()->SetTitleFont(42);
   Graph_Graph31045->GetYaxis()->SetLabelFont(42);
   Graph_Graph31045->GetYaxis()->SetTitleFont(42);
   Graph_Graph31045->GetZaxis()->SetLabelFont(42);
   Graph_Graph31045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31045);
   
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
   TText *pt_LaTex = pt->AddText("225 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
