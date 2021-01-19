void fit_ytot_vs_theta_7()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 18:58:37 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8601201,-0.40625,7.741081,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[24] = {
   0.5192355,
   0.7810348,
   1.042834,
   1.304634,
   1.566433,
   1.828232,
   2.090032,
   2.351831,
   2.613631,
   2.87543,
   3.137229,
   3.399029,
   3.660828,
   3.922627,
   4.184427,
   4.446226,
   4.708026,
   4.969825,
   5.231624,
   5.493424,
   5.755223,
   6.017023,
   6.278822,
   0.2574361};
   Double_t Graph0_fy1022[24] = {
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
   Double_t Graph0_fex1022[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1022[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 8.557 / 11");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004415 #pm 0.00153 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.03339 #pm 0.01793 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.03491 #pm 0.01783 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.02098 #pm 0.07755 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.03729 #pm 0.07846 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.04634 #pm 0.1784 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.206 #pm 0.1781 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.06904 #pm 0.3174 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.7183 #pm 0.3189 ");
   ptstats_LaTex = ptstats->AddText("p9       = -0.2735 #pm 0.4943 ");
   ptstats_LaTex = ptstats->AddText("p10      = 0.03109 #pm 0.5018 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.5152 #pm 0.6974 ");
   ptstats_LaTex = ptstats->AddText("p12      = -1.003 #pm 0.7407 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_71024 = new TF1("fCOD_7","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_71024->SetFillColor(19);
   fCOD_71024->SetFillStyle(0);
   fCOD_71024->SetLineColor(2);
   fCOD_71024->SetLineWidth(2);
   fCOD_71024->SetChisquare(8.557233);
   fCOD_71024->SetNDF(11);
   fCOD_71024->GetXaxis()->SetLabelFont(42);
   fCOD_71024->GetXaxis()->SetTitleOffset(1);
   fCOD_71024->GetXaxis()->SetTitleFont(42);
   fCOD_71024->GetYaxis()->SetLabelFont(42);
   fCOD_71024->GetYaxis()->SetTitleFont(42);
   fCOD_71024->SetParameter(0,0.004415315);
   fCOD_71024->SetParError(0,0.001529842);
   fCOD_71024->SetParLimits(0,0,0);
   fCOD_71024->SetParameter(1,0.03338761);
   fCOD_71024->SetParError(1,0.01793117);
   fCOD_71024->SetParLimits(1,0,0);
   fCOD_71024->SetParameter(2,-0.03491492);
   fCOD_71024->SetParError(2,0.01782639);
   fCOD_71024->SetParLimits(2,0,0);
   fCOD_71024->SetParameter(3,-0.02097938);
   fCOD_71024->SetParError(3,0.07754712);
   fCOD_71024->SetParLimits(3,0,0);
   fCOD_71024->SetParameter(4,0.03728657);
   fCOD_71024->SetParError(4,0.07846299);
   fCOD_71024->SetParLimits(4,0,0);
   fCOD_71024->SetParameter(5,-0.04633901);
   fCOD_71024->SetParError(5,0.1783779);
   fCOD_71024->SetParLimits(5,0,0);
   fCOD_71024->SetParameter(6,-0.2059742);
   fCOD_71024->SetParError(6,0.1780508);
   fCOD_71024->SetParLimits(6,0,0);
   fCOD_71024->SetParameter(7,0.06903966);
   fCOD_71024->SetParError(7,0.3174283);
   fCOD_71024->SetParLimits(7,0,0);
   fCOD_71024->SetParameter(8,-0.7182832);
   fCOD_71024->SetParError(8,0.3188916);
   fCOD_71024->SetParLimits(8,0,0);
   fCOD_71024->SetParameter(9,-0.2735113);
   fCOD_71024->SetParError(9,0.4943041);
   fCOD_71024->SetParLimits(9,0,0);
   fCOD_71024->SetParameter(10,0.03108806);
   fCOD_71024->SetParError(10,0.5017977);
   fCOD_71024->SetParLimits(10,0,0);
   fCOD_71024->SetParameter(11,-0.5152008);
   fCOD_71024->SetParError(11,0.6974494);
   fCOD_71024->SetParLimits(11,0,0);
   fCOD_71024->SetParameter(12,-1.003311);
   fCOD_71024->SetParError(12,0.7407366);
   fCOD_71024->SetParLimits(12,0,0);
   fCOD_71024->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_71024);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
