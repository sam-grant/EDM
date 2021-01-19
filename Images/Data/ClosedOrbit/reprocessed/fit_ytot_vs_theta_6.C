void fit_ytot_vs_theta_6()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 18:59:00 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8601201,-0.40625,7.741081,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[24] = {
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
   Double_t Graph0_fy1019[24] = {
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
   Double_t Graph0_fex1019[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1019[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 16.64 / 13");
   ptstats_LaTex = ptstats->AddText("p0       = -0.000626 #pm 0.000907 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.0249 #pm 0.01049 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04057 #pm 0.01069 ");
   ptstats_LaTex = ptstats->AddText("p3       = 0.01678 #pm 0.04633 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.05017 #pm 0.046 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.005373 #pm 0.1057 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.3178 #pm 0.1053 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.1232 #pm 0.1895 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.4274 #pm 0.1874 ");
   ptstats_LaTex = ptstats->AddText("p9       = 0.1818 #pm 0.2954 ");
   ptstats_LaTex = ptstats->AddText("p10      = 0.02208 #pm 0.2944 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_61021 = new TF1("fCOD_6","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_61021->SetFillColor(19);
   fCOD_61021->SetFillStyle(0);
   fCOD_61021->SetLineColor(2);
   fCOD_61021->SetLineWidth(2);
   fCOD_61021->SetChisquare(16.64372);
   fCOD_61021->SetNDF(13);
   fCOD_61021->GetXaxis()->SetLabelFont(42);
   fCOD_61021->GetXaxis()->SetTitleOffset(1);
   fCOD_61021->GetXaxis()->SetTitleFont(42);
   fCOD_61021->GetYaxis()->SetLabelFont(42);
   fCOD_61021->GetYaxis()->SetTitleFont(42);
   fCOD_61021->SetParameter(0,-0.0006259934);
   fCOD_61021->SetParError(0,0.0009070357);
   fCOD_61021->SetParLimits(0,0,0);
   fCOD_61021->SetParameter(1,0.02490416);
   fCOD_61021->SetParError(1,0.01049247);
   fCOD_61021->SetParLimits(1,0,0);
   fCOD_61021->SetParameter(2,-0.04056952);
   fCOD_61021->SetParError(2,0.01069044);
   fCOD_61021->SetParLimits(2,0,0);
   fCOD_61021->SetParameter(3,0.01678008);
   fCOD_61021->SetParError(3,0.04632924);
   fCOD_61021->SetParLimits(3,0,0);
   fCOD_61021->SetParameter(4,0.0501687);
   fCOD_61021->SetParError(4,0.04600206);
   fCOD_61021->SetParLimits(4,0,0);
   fCOD_61021->SetParameter(5,-0.005373309);
   fCOD_61021->SetParError(5,0.1056601);
   fCOD_61021->SetParLimits(5,0,0);
   fCOD_61021->SetParameter(6,-0.3178047);
   fCOD_61021->SetParError(6,0.1052938);
   fCOD_61021->SetParLimits(6,0,0);
   fCOD_61021->SetParameter(7,0.1232049);
   fCOD_61021->SetParError(7,0.1894923);
   fCOD_61021->SetParLimits(7,0,0);
   fCOD_61021->SetParameter(8,-0.4274047);
   fCOD_61021->SetParError(8,0.1874003);
   fCOD_61021->SetParLimits(8,0,0);
   fCOD_61021->SetParameter(9,0.18183);
   fCOD_61021->SetParError(9,0.2953711);
   fCOD_61021->SetParLimits(9,0,0);
   fCOD_61021->SetParameter(10,0.02207847);
   fCOD_61021->SetParError(10,0.2943935);
   fCOD_61021->SetParLimits(10,0,0);
   fCOD_61021->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_61021);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
