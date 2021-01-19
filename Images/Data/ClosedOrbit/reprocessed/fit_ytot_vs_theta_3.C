void fit_ytot_vs_theta_3()
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
   
   Double_t Graph0_fx1010[24] = {
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
   Double_t Graph0_fy1010[24] = {
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
   Double_t Graph0_fex1010[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1010[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph01003100410071010 = new TH1F("Graph_Graph_Graph_Graph_Graph01003100410071010","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph01003100410071010);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 31.52 / 19");
   ptstats_LaTex = ptstats->AddText("p0       = -0.0007231 #pm 0.0009041 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02252 #pm 0.01045 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04119 #pm 0.01066 ");
   ptstats_LaTex = ptstats->AddText("p3       = 0.01981 #pm 0.04627 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04972 #pm 0.04587 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_31012 = new TF1("fCOD_3","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_31012->SetFillColor(19);
   fCOD_31012->SetFillStyle(0);
   fCOD_31012->SetLineColor(2);
   fCOD_31012->SetLineWidth(2);
   fCOD_31012->SetChisquare(31.51835);
   fCOD_31012->SetNDF(19);
   fCOD_31012->GetXaxis()->SetLabelFont(42);
   fCOD_31012->GetXaxis()->SetTitleOffset(1);
   fCOD_31012->GetXaxis()->SetTitleFont(42);
   fCOD_31012->GetYaxis()->SetLabelFont(42);
   fCOD_31012->GetYaxis()->SetTitleFont(42);
   fCOD_31012->SetParameter(0,-0.0007231192);
   fCOD_31012->SetParError(0,0.0009041482);
   fCOD_31012->SetParLimits(0,0,0);
   fCOD_31012->SetParameter(1,0.02252477);
   fCOD_31012->SetParError(1,0.01044952);
   fCOD_31012->SetParLimits(1,0,0);
   fCOD_31012->SetParameter(2,-0.04119232);
   fCOD_31012->SetParError(2,0.01066207);
   fCOD_31012->SetParLimits(2,0,0);
   fCOD_31012->SetParameter(3,0.01980765);
   fCOD_31012->SetParError(3,0.04626594);
   fCOD_31012->SetParLimits(3,0,0);
   fCOD_31012->SetParameter(4,0.04971888);
   fCOD_31012->SetParError(4,0.04587077);
   fCOD_31012->SetParLimits(4,0,0);
   fCOD_31012->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_31012);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
