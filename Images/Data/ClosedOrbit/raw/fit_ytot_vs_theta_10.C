void fit_ytot_vs_theta_10()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 18:41:46 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8601201,-0.40625,7.741081,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[24] = {
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
   Double_t Graph0_fy1031[24] = {
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
   Double_t Graph0_fex1031[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1031[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.869 / 3");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004348 #pm 0.001533 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.03274 #pm 0.01796 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.03602 #pm 0.01785 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.02329 #pm 0.07784 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04108 #pm 0.07869 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.03389 #pm 0.179 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.2081 #pm 0.1786 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.03423 #pm 0.3188 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.7101 #pm 0.3199 ");
   ptstats_LaTex = ptstats->AddText("p9       = -0.2318 #pm 0.4961 ");
   ptstats_LaTex = ptstats->AddText("p10      = -0.04875 #pm 0.504 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.5289 #pm 0.6995 ");
   ptstats_LaTex = ptstats->AddText("p12      = -0.9482 #pm 0.7419 ");
   ptstats_LaTex = ptstats->AddText("p13      = -1.013 #pm 0.9736 ");
   ptstats_LaTex = ptstats->AddText("p14      = -0.7397 #pm 0.9923 ");
   ptstats_LaTex = ptstats->AddText("p15      = 1.712 #pm 1.281 ");
   ptstats_LaTex = ptstats->AddText("p16      = -0.9066 #pm 1.286 ");
   ptstats_LaTex = ptstats->AddText("p17      = -1.898 #pm 1.626 ");
   ptstats_LaTex = ptstats->AddText("p18      = -0.8691 #pm 1.622 ");
   ptstats_LaTex = ptstats->AddText("p19      = -0.07068 #pm 1.997 ");
   ptstats_LaTex = ptstats->AddText("p20      = 0.4422 #pm 2.014 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_101033 = new TF1("fCOD_10","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) + ([17]*cos(9*x)+[18]*sin(9*x))/(81-0.108) + ([19]*cos(10*x)+[20]*sin(10*x))/(100-0.108))",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_101033->SetFillColor(19);
   fCOD_101033->SetFillStyle(0);
   fCOD_101033->SetLineColor(2);
   fCOD_101033->SetLineWidth(2);
   fCOD_101033->SetChisquare(2.868833);
   fCOD_101033->SetNDF(3);
   fCOD_101033->GetXaxis()->SetLabelFont(42);
   fCOD_101033->GetXaxis()->SetTitleOffset(1);
   fCOD_101033->GetXaxis()->SetTitleFont(42);
   fCOD_101033->GetYaxis()->SetLabelFont(42);
   fCOD_101033->GetYaxis()->SetTitleFont(42);
   fCOD_101033->SetParameter(0,0.004348204);
   fCOD_101033->SetParError(0,0.001533294);
   fCOD_101033->SetParLimits(0,0,0);
   fCOD_101033->SetParameter(1,0.0327398);
   fCOD_101033->SetParError(1,0.01795732);
   fCOD_101033->SetParLimits(1,0,0);
   fCOD_101033->SetParameter(2,-0.03601765);
   fCOD_101033->SetParError(2,0.01785421);
   fCOD_101033->SetParLimits(2,0,0);
   fCOD_101033->SetParameter(3,-0.02329354);
   fCOD_101033->SetParError(3,0.07783552);
   fCOD_101033->SetParLimits(3,0,0);
   fCOD_101033->SetParameter(4,0.04108432);
   fCOD_101033->SetParError(4,0.07868818);
   fCOD_101033->SetParLimits(4,0,0);
   fCOD_101033->SetParameter(5,-0.03389133);
   fCOD_101033->SetParError(5,0.1789929);
   fCOD_101033->SetParLimits(5,0,0);
   fCOD_101033->SetParameter(6,-0.2081246);
   fCOD_101033->SetParError(6,0.1786056);
   fCOD_101033->SetParLimits(6,0,0);
   fCOD_101033->SetParameter(7,0.03422625);
   fCOD_101033->SetParError(7,0.3187537);
   fCOD_101033->SetParLimits(7,0,0);
   fCOD_101033->SetParameter(8,-0.7100972);
   fCOD_101033->SetParError(8,0.3199199);
   fCOD_101033->SetParLimits(8,0,0);
   fCOD_101033->SetParameter(9,-0.2318058);
   fCOD_101033->SetParError(9,0.4960744);
   fCOD_101033->SetParLimits(9,0,0);
   fCOD_101033->SetParameter(10,-0.04874994);
   fCOD_101033->SetParError(10,0.503987);
   fCOD_101033->SetParLimits(10,0,0);
   fCOD_101033->SetParameter(11,-0.5288558);
   fCOD_101033->SetParError(11,0.6995038);
   fCOD_101033->SetParLimits(11,0,0);
   fCOD_101033->SetParameter(12,-0.9481543);
   fCOD_101033->SetParError(12,0.7418931);
   fCOD_101033->SetParLimits(12,0,0);
   fCOD_101033->SetParameter(13,-1.012774);
   fCOD_101033->SetParError(13,0.9735694);
   fCOD_101033->SetParLimits(13,0,0);
   fCOD_101033->SetParameter(14,-0.7397243);
   fCOD_101033->SetParError(14,0.992282);
   fCOD_101033->SetParLimits(14,0,0);
   fCOD_101033->SetParameter(15,1.712435);
   fCOD_101033->SetParError(15,1.280521);
   fCOD_101033->SetParLimits(15,0,0);
   fCOD_101033->SetParameter(16,-0.906552);
   fCOD_101033->SetParError(16,1.286081);
   fCOD_101033->SetParLimits(16,0,0);
   fCOD_101033->SetParameter(17,-1.898453);
   fCOD_101033->SetParError(17,1.62579);
   fCOD_101033->SetParLimits(17,0,0);
   fCOD_101033->SetParameter(18,-0.8691439);
   fCOD_101033->SetParError(18,1.622279);
   fCOD_101033->SetParLimits(18,0,0);
   fCOD_101033->SetParameter(19,-0.07068026);
   fCOD_101033->SetParError(19,1.99681);
   fCOD_101033->SetParLimits(19,0,0);
   fCOD_101033->SetParameter(20,0.4422073);
   fCOD_101033->SetParError(20,2.014031);
   fCOD_101033->SetParLimits(20,0,0);
   fCOD_101033->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_101033);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
