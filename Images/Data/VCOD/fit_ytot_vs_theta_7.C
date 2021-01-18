void fit_ytot_vs_theta_7()
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
   
   Double_t Graph0_fx1024[24] = {
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
   Double_t Graph0_fy1024[24] = {
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
   Double_t Graph0_fex1024[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1024[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024","",100,0,6.885324);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010051006100910121015101810211024);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 8.557 / 11");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004415 #pm 0.00153 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.0234 #pm 0.01777 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04227 #pm 0.01798 ");
   ptstats_LaTex = ptstats->AddText("p3       = 0.0001021 #pm 0.07768 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04279 #pm 0.07833 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.1769 #pm 0.1801 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.1152 #pm 0.1763 ");
   ptstats_LaTex = ptstats->AddText("p7       = -0.5801 #pm 0.3197 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.4291 #pm 0.3166 ");
   ptstats_LaTex = ptstats->AddText("p9       = -0.04669 #pm 0.5029 ");
   ptstats_LaTex = ptstats->AddText("p10      = 0.2713 #pm 0.4932 ");
   ptstats_LaTex = ptstats->AddText("p11      = -1.016 #pm 0.7408 ");
   ptstats_LaTex = ptstats->AddText("p12      = 0.4888 #pm 0.6974 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_71026 = new TF1("fCOD_7","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) )",0,6.283185, TF1::EAddToList::kNo);
   fCOD_71026->SetFillColor(19);
   fCOD_71026->SetFillStyle(0);
   fCOD_71026->SetLineColor(2);
   fCOD_71026->SetLineWidth(2);
   fCOD_71026->SetChisquare(8.557233);
   fCOD_71026->SetNDF(11);
   fCOD_71026->GetXaxis()->SetLabelFont(42);
   fCOD_71026->GetXaxis()->SetTitleOffset(1);
   fCOD_71026->GetXaxis()->SetTitleFont(42);
   fCOD_71026->GetYaxis()->SetLabelFont(42);
   fCOD_71026->GetYaxis()->SetTitleFont(42);
   fCOD_71026->SetParameter(0,0.004415314);
   fCOD_71026->SetParError(0,0.001529842);
   fCOD_71026->SetParLimits(0,0,0);
   fCOD_71026->SetParameter(1,0.02339817);
   fCOD_71026->SetParError(1,0.01777214);
   fCOD_71026->SetParLimits(1,0,0);
   fCOD_71026->SetParameter(2,-0.04226504);
   fCOD_71026->SetParError(2,0.01798494);
   fCOD_71026->SetParLimits(2,0,0);
   fCOD_71026->SetParameter(3,0.0001020725);
   fCOD_71026->SetParError(3,0.07768102);
   fCOD_71026->SetParLimits(3,0,0);
   fCOD_71026->SetParameter(4,0.04278545);
   fCOD_71026->SetParError(4,0.07833042);
   fCOD_71026->SetParLimits(4,0,0);
   fCOD_71026->SetParameter(5,-0.1769182);
   fCOD_71026->SetParError(5,0.1800752);
   fCOD_71026->SetParLimits(5,0,0);
   fCOD_71026->SetParameter(6,-0.115205);
   fCOD_71026->SetParError(6,0.1763339);
   fCOD_71026->SetParLimits(6,0,0);
   fCOD_71026->SetParameter(7,-0.5801247);
   fCOD_71026->SetParError(7,0.319711);
   fCOD_71026->SetParLimits(7,0,0);
   fCOD_71026->SetParameter(8,-0.4291208);
   fCOD_71026->SetParError(8,0.316603);
   fCOD_71026->SetParLimits(8,0,0);
   fCOD_71026->SetParameter(9,-0.04668698);
   fCOD_71026->SetParError(9,0.5028503);
   fCOD_71026->SetParLimits(9,0,0);
   fCOD_71026->SetParameter(10,0.2712925);
   fCOD_71026->SetParError(10,0.4932333);
   fCOD_71026->SetParLimits(10,0,0);
   fCOD_71026->SetParameter(11,-1.016446);
   fCOD_71026->SetParError(11,0.7407643);
   fCOD_71026->SetParLimits(11,0,0);
   fCOD_71026->SetParameter(12,0.4887591);
   fCOD_71026->SetParError(12,0.6974201);
   fCOD_71026->SetParLimits(12,0,0);
   fCOD_71026->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_71026);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
