void fit_ytot_vs_theta_10()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 21:15:56 2021) by ROOT version 6.22/06
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
   -0.006562985,
   -0.06206024,
   -0.0127903,
   0.02058143,
   0.003870004,
   -0.07405092,
   -0.102477,
   -0.1174621,
   -0.03883636,
   -0.07325296,
   -0.009276232,
   -0.01217671,
   -0.004751873,
   0.1194191,
   -0.02645731,
   0.06019055,
   0.02371367,
   -0.01542529,
   0.002887453,
   0.07978954,
   0.03078049,
   0.1239876,
   0.0446683,
   -0.06959394};
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
   0.03941483,
   0.04179225,
   0.04482726,
   0.04455844,
   0.0422236,
   0.04241968,
   0.04387671,
   0.04244206,
   0.04391941,
   0.0424273,
   0.04196058,
   0.03878665,
   0.03447418,
   0.03987117,
   0.03831296,
   0.04269219,
   0.04242621,
   0.03828801,
   0.03690439,
   0.04168359,
   0.04255553,
   0.04166702,
   0.04035714,
   0.03898679};
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
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.445 / 3");
   ptstats_LaTex = ptstats->AddText("p0       = -0.0005568 #pm 0.000908 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02415 #pm 0.0105 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04166 #pm 0.01071 ");
   ptstats_LaTex = ptstats->AddText("p3       = 0.01591 #pm 0.04643 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.05162 #pm 0.04611 ");
   ptstats_LaTex = ptstats->AddText("p5       = 6.163e-05 #pm 0.1059 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.3156 #pm 0.1056 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.1435 #pm 0.1898 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.4228 #pm 0.188 ");
   ptstats_LaTex = ptstats->AddText("p9       = 0.2047 #pm 0.2965 ");
   ptstats_LaTex = ptstats->AddText("p10      = 0.02927 #pm 0.2954 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.368 #pm 0.425 ");
   ptstats_LaTex = ptstats->AddText("p12      = -0.1738 #pm 0.4283 ");
   ptstats_LaTex = ptstats->AddText("p13      = -0.02795 #pm 0.581 ");
   ptstats_LaTex = ptstats->AddText("p14      = -0.103 #pm 0.5802 ");
   ptstats_LaTex = ptstats->AddText("p15      = 0.9759 #pm 0.7631 ");
   ptstats_LaTex = ptstats->AddText("p16      = -1.093 #pm 0.7542 ");
   ptstats_LaTex = ptstats->AddText("p17      = -0.9761 #pm 0.9624 ");
   ptstats_LaTex = ptstats->AddText("p18      = -2.238 #pm 0.9582 ");
   ptstats_LaTex = ptstats->AddText("p19      = 0.8199 #pm 1.193 ");
   ptstats_LaTex = ptstats->AddText("p20      = 0.5409 #pm 1.179 ");
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
   fCOD_101033->SetChisquare(4.444772);
   fCOD_101033->SetNDF(3);
   fCOD_101033->GetXaxis()->SetLabelFont(42);
   fCOD_101033->GetXaxis()->SetTitleOffset(1);
   fCOD_101033->GetXaxis()->SetTitleFont(42);
   fCOD_101033->GetYaxis()->SetLabelFont(42);
   fCOD_101033->GetYaxis()->SetTitleFont(42);
   fCOD_101033->SetParameter(0,-0.0005567912);
   fCOD_101033->SetParError(0,0.0009079646);
   fCOD_101033->SetParLimits(0,0,0);
   fCOD_101033->SetParameter(1,0.02415366);
   fCOD_101033->SetParError(1,0.01050353);
   fCOD_101033->SetParLimits(1,0,0);
   fCOD_101033->SetParameter(2,-0.04166363);
   fCOD_101033->SetParError(2,0.01070622);
   fCOD_101033->SetParLimits(2,0,0);
   fCOD_101033->SetParameter(3,0.01591002);
   fCOD_101033->SetParError(3,0.04642836);
   fCOD_101033->SetParLimits(3,0,0);
   fCOD_101033->SetParameter(4,0.05161596);
   fCOD_101033->SetParError(4,0.04610882);
   fCOD_101033->SetParLimits(4,0,0);
   fCOD_101033->SetParameter(5,6.16252e-05);
   fCOD_101033->SetParError(5,0.105851);
   fCOD_101033->SetParLimits(5,0,0);
   fCOD_101033->SetParameter(6,-0.3155627);
   fCOD_101033->SetParError(6,0.1055748);
   fCOD_101033->SetParLimits(6,0,0);
   fCOD_101033->SetParameter(7,0.1435141);
   fCOD_101033->SetParError(7,0.1897944);
   fCOD_101033->SetParLimits(7,0,0);
   fCOD_101033->SetParameter(8,-0.422786);
   fCOD_101033->SetParError(8,0.1880265);
   fCOD_101033->SetParLimits(8,0,0);
   fCOD_101033->SetParameter(9,0.2046827);
   fCOD_101033->SetParError(9,0.2964645);
   fCOD_101033->SetParLimits(9,0,0);
   fCOD_101033->SetParameter(10,0.02927472);
   fCOD_101033->SetParError(10,0.2953996);
   fCOD_101033->SetParLimits(10,0,0);
   fCOD_101033->SetParameter(11,-0.3680476);
   fCOD_101033->SetParError(11,0.4249599);
   fCOD_101033->SetParLimits(11,0,0);
   fCOD_101033->SetParameter(12,-0.173818);
   fCOD_101033->SetParError(12,0.4282976);
   fCOD_101033->SetParLimits(12,0,0);
   fCOD_101033->SetParameter(13,-0.02795456);
   fCOD_101033->SetParError(13,0.5809621);
   fCOD_101033->SetParLimits(13,0,0);
   fCOD_101033->SetParameter(14,-0.1029969);
   fCOD_101033->SetParError(14,0.5801574);
   fCOD_101033->SetParLimits(14,0,0);
   fCOD_101033->SetParameter(15,0.9759445);
   fCOD_101033->SetParError(15,0.7630554);
   fCOD_101033->SetParLimits(15,0,0);
   fCOD_101033->SetParameter(16,-1.093463);
   fCOD_101033->SetParError(16,0.7542326);
   fCOD_101033->SetParLimits(16,0,0);
   fCOD_101033->SetParameter(17,-0.9761432);
   fCOD_101033->SetParError(17,0.9624473);
   fCOD_101033->SetParLimits(17,0,0);
   fCOD_101033->SetParameter(18,-2.237681);
   fCOD_101033->SetParError(18,0.9582289);
   fCOD_101033->SetParLimits(18,0,0);
   fCOD_101033->SetParameter(19,0.8199414);
   fCOD_101033->SetParError(19,1.193475);
   fCOD_101033->SetParLimits(19,0,0);
   fCOD_101033->SetParameter(20,0.5408546);
   fCOD_101033->SetParError(20,1.178788);
   fCOD_101033->SetParLimits(20,0,0);
   fCOD_101033->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_101033);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
