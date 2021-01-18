void fit_ytot_vs_theta_10()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 20:33:55 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8606656,-0.40625,7.745989,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[24] = {
   0.2617994,
   0.5235988,
   0.7853982,
   1.047198,
   1.308997,
   1.570796,
   1.832596,
   2.094395,
   2.356194,
   2.617994,
   2.879793,
   3.141593,
   3.403392,
   3.665191,
   3.926991,
   4.18879,
   4.45059,
   4.712389,
   4.974188,
   5.235988,
   5.497787,
   5.759587,
   6.021386,
   6.283185};
   Double_t Graph0_fy1033[24] = {
   0.06431844,
   0.04571288,
   0.0574694,
   0.02320447,
   0.09737396,
   -0.04730134,
   -0.07321681,
   -0.03564204,
   -0.0215555,
   -0.004939567,
   0.05522279,
   -0.02321811,
   -0.04120692,
   0.1754205,
   0.03084537,
   0.1168879,
   0.06479253,
   0.06042593,
   0.03377229,
   0.09275861,
   0.1275873,
   0.2019298,
   0.03399435,
   -0.06200423};
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
   0.06750719,
   0.0696,
   0.06839265,
   0.06852024,
   0.06050222,
   0.06989095,
   0.07519053,
   0.07588556,
   0.07318344,
   0.07644342,
   0.06727056,
   0.06953546,
   0.06115408,
   0.06806312,
   0.06468399,
   0.07176898,
   0.07328096,
   0.06929159,
   0.06546657,
   0.07487799,
   0.06811331,
   0.06657699,
   0.06455784,
   0.07879607};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033","",100,0,6.885324);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024102710301033);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.869 / 3");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004348 #pm 0.001533 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02249 #pm 0.0178 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04317 #pm 0.01801 ");
   ptstats_LaTex = ptstats->AddText("p3       = -4.178e-05 #pm 0.07804 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04723 #pm 0.07849 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.1695 #pm 0.1809 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.1254 #pm 0.1767 ");
   ptstats_LaTex = ptstats->AddText("p7       = -0.591 #pm 0.3209 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.3951 #pm 0.3177 ");
   ptstats_LaTex = ptstats->AddText("p9       = -0.1117 #pm 0.5045 ");
   ptstats_LaTex = ptstats->AddText("p10      = 0.2089 #pm 0.4955 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.9617 #pm 0.7419 ");
   ptstats_LaTex = ptstats->AddText("p12      = 0.5039 #pm 0.6995 ");
   ptstats_LaTex = ptstats->AddText("p13      = -0.4879 #pm 0.993 ");
   ptstats_LaTex = ptstats->AddText("p14      = 1.155 #pm 0.9729 ");
   ptstats_LaTex = ptstats->AddText("p15      = -1.604 #pm  1.29 ");
   ptstats_LaTex = ptstats->AddText("p16      = -1.086 #pm 1.276 ");
   ptstats_LaTex = ptstats->AddText("p17      = 0.6505 #pm 1.643 ");
   ptstats_LaTex = ptstats->AddText("p18      = 1.984 #pm 1.605 ");
   ptstats_LaTex = ptstats->AddText("p19      = 0.2972 #pm 2.002 ");
   ptstats_LaTex = ptstats->AddText("p20      = -0.335 #pm 2.009 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_101035 = new TF1("fCOD_10","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) + ([17]*cos(9*x)+[18]*sin(9*x))/(81-0.108) + ([19]*cos(10*x)+[20]*sin(10*x))/(100-0.108))",0,6.283185, TF1::EAddToList::kNo);
   fCOD_101035->SetFillColor(19);
   fCOD_101035->SetFillStyle(0);
   fCOD_101035->SetLineColor(2);
   fCOD_101035->SetLineWidth(2);
   fCOD_101035->SetChisquare(2.868833);
   fCOD_101035->SetNDF(3);
   fCOD_101035->GetXaxis()->SetLabelFont(42);
   fCOD_101035->GetXaxis()->SetTitleOffset(1);
   fCOD_101035->GetXaxis()->SetTitleFont(42);
   fCOD_101035->GetYaxis()->SetLabelFont(42);
   fCOD_101035->GetYaxis()->SetTitleFont(42);
   fCOD_101035->SetParameter(0,0.004348224);
   fCOD_101035->SetParError(0,0.001533294);
   fCOD_101035->SetParLimits(0,0,0);
   fCOD_101035->SetParameter(1,0.02249079);
   fCOD_101035->SetParError(1,0.0177999);
   fCOD_101035->SetParLimits(1,0,0);
   fCOD_101035->SetParameter(2,-0.0431665);
   fCOD_101035->SetParError(2,0.01801116);
   fCOD_101035->SetParLimits(2,0,0);
   fCOD_101035->SetParameter(3,-4.178411e-05);
   fCOD_101035->SetParError(3,0.07803823);
   fCOD_101035->SetParLimits(3,0,0);
   fCOD_101035->SetParameter(4,0.04722816);
   fCOD_101035->SetParError(4,0.07848715);
   fCOD_101035->SetParLimits(4,0,0);
   fCOD_101035->SetParameter(5,-0.1695046);
   fCOD_101035->SetParError(5,0.1809111);
   fCOD_101035->SetParLimits(5,0,0);
   fCOD_101035->SetParameter(6,-0.1254335);
   fCOD_101035->SetParError(6,0.1766624);
   fCOD_101035->SetParLimits(6,0,0);
   fCOD_101035->SetParameter(7,-0.5910426);
   fCOD_101035->SetParError(7,0.3209257);
   fCOD_101035->SetParLimits(7,0,0);
   fCOD_101035->SetParameter(8,-0.3950637);
   fCOD_101035->SetParError(8,0.317741);
   fCOD_101035->SetParLimits(8,0,0);
   fCOD_101035->SetParameter(9,-0.1116704);
   fCOD_101035->SetParError(9,0.5045388);
   fCOD_101035->SetParLimits(9,0,0);
   fCOD_101035->SetParameter(10,0.2088969);
   fCOD_101035->SetParError(10,0.4955131);
   fCOD_101035->SetParLimits(10,0,0);
   fCOD_101035->SetParameter(11,-0.9616802);
   fCOD_101035->SetParError(11,0.7419042);
   fCOD_101035->SetParLimits(11,0,0);
   fCOD_101035->SetParameter(12,0.503857);
   fCOD_101035->SetParError(12,0.699492);
   fCOD_101035->SetParLimits(12,0,0);
   fCOD_101035->SetParameter(13,-0.4879024);
   fCOD_101035->SetParError(13,0.9929848);
   fCOD_101035->SetParLimits(13,0,0);
   fCOD_101035->SetParameter(14,1.155341);
   fCOD_101035->SetParError(14,0.9728526);
   fCOD_101035->SetParLimits(14,0,0);
   fCOD_101035->SetParameter(15,-1.604389);
   fCOD_101035->SetParError(15,1.290281);
   fCOD_101035->SetParLimits(15,0,0);
   fCOD_101035->SetParameter(16,-1.086383);
   fCOD_101035->SetParError(16,1.276289);
   fCOD_101035->SetParLimits(16,0,0);
   fCOD_101035->SetParameter(17,0.6504506);
   fCOD_101035->SetParError(17,1.642551);
   fCOD_101035->SetParLimits(17,0,0);
   fCOD_101035->SetParameter(18,1.984037);
   fCOD_101035->SetParError(18,1.605306);
   fCOD_101035->SetParLimits(18,0,0);
   fCOD_101035->SetParameter(19,0.2971894);
   fCOD_101035->SetParError(19,2.001935);
   fCOD_101035->SetParLimits(19,0,0);
   fCOD_101035->SetParameter(20,-0.3349682);
   fCOD_101035->SetParError(20,2.008938);
   fCOD_101035->SetParLimits(20,0,0);
   fCOD_101035->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_101035);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
