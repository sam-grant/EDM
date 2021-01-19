void fit_ytot_vs_theta_4()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 18:40:04 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8601201,-0.40625,7.741081,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[24] = {
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
   Double_t Graph0_fy1013[24] = {
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
   Double_t Graph0_fex1013[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1013[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 22.51 / 17");
   ptstats_LaTex = ptstats->AddText("p0       = -0.0007627 #pm 0.0009042 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02486 #pm 0.01048 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04035 #pm 0.01067 ");
   ptstats_LaTex = ptstats->AddText("p3       = 0.01531 #pm 0.04629 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04663 #pm 0.04597 ");
   ptstats_LaTex = ptstats->AddText("p5       = 0.01113 #pm 0.1054 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.3154 #pm 0.1052 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_41015 = new TF1("fCOD_4","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_41015->SetFillColor(19);
   fCOD_41015->SetFillStyle(0);
   fCOD_41015->SetLineColor(2);
   fCOD_41015->SetLineWidth(2);
   fCOD_41015->SetChisquare(22.50818);
   fCOD_41015->SetNDF(17);
   fCOD_41015->GetXaxis()->SetLabelFont(42);
   fCOD_41015->GetXaxis()->SetTitleOffset(1);
   fCOD_41015->GetXaxis()->SetTitleFont(42);
   fCOD_41015->GetYaxis()->SetLabelFont(42);
   fCOD_41015->GetYaxis()->SetTitleFont(42);
   fCOD_41015->SetParameter(0,-0.0007626543);
   fCOD_41015->SetParError(0,0.0009042462);
   fCOD_41015->SetParLimits(0,0,0);
   fCOD_41015->SetParameter(1,0.02485914);
   fCOD_41015->SetParError(1,0.0104796);
   fCOD_41015->SetParLimits(1,0,0);
   fCOD_41015->SetParameter(2,-0.04035158);
   fCOD_41015->SetParError(2,0.01066985);
   fCOD_41015->SetParLimits(2,0,0);
   fCOD_41015->SetParameter(3,0.01530979);
   fCOD_41015->SetParError(3,0.04629334);
   fCOD_41015->SetParLimits(3,0,0);
   fCOD_41015->SetParameter(4,0.04663239);
   fCOD_41015->SetParError(4,0.0459685);
   fCOD_41015->SetParLimits(4,0,0);
   fCOD_41015->SetParameter(5,0.01113463);
   fCOD_41015->SetParError(5,0.1054047);
   fCOD_41015->SetParLimits(5,0,0);
   fCOD_41015->SetParameter(6,-0.3154021);
   fCOD_41015->SetParError(6,0.1051549);
   fCOD_41015->SetParLimits(6,0,0);
   fCOD_41015->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_41015);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
