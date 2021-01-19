void fit_ytot_vs_theta_9()
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
   
   Double_t Graph0_fx1028[24] = {
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
   Double_t Graph0_fy1028[24] = {
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
   Double_t Graph0_fex1028[24] = {
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
   Double_t Graph0_fey1028[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01003100410071010101310161019102210251028);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.611 / 7");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004333 #pm 0.001532 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.03254 #pm 0.01795 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.03586 #pm 0.01785 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.02266 #pm 0.07761 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.03619 #pm 0.07849 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.04491 #pm 0.1785 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.2068 #pm 0.1781 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.02617 #pm 0.3186 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.7127 #pm 0.3197 ");
   ptstats_LaTex = ptstats->AddText("p9       = -0.2521 #pm 0.4958 ");
   ptstats_LaTex = ptstats->AddText("p10      = -0.04941 #pm 0.5039 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.4972 #pm 0.6981 ");
   ptstats_LaTex = ptstats->AddText("p12      = -0.982 #pm 0.7412 ");
   ptstats_LaTex = ptstats->AddText("p13      = -1.034 #pm 0.9726 ");
   ptstats_LaTex = ptstats->AddText("p14      = -0.7132 #pm 0.9878 ");
   ptstats_LaTex = ptstats->AddText("p15      =  1.69 #pm 1.278 ");
   ptstats_LaTex = ptstats->AddText("p16      = -0.9873 #pm 1.284 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_91030 = new TF1("fCOD_9","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_91030->SetFillColor(19);
   fCOD_91030->SetFillStyle(0);
   fCOD_91030->SetLineColor(2);
   fCOD_91030->SetLineWidth(2);
   fCOD_91030->SetChisquare(4.611387);
   fCOD_91030->SetNDF(7);
   fCOD_91030->GetXaxis()->SetLabelFont(42);
   fCOD_91030->GetXaxis()->SetTitleOffset(1);
   fCOD_91030->GetXaxis()->SetTitleFont(42);
   fCOD_91030->GetYaxis()->SetLabelFont(42);
   fCOD_91030->GetYaxis()->SetTitleFont(42);
   fCOD_91030->SetParameter(0,0.004333461);
   fCOD_91030->SetParError(0,0.001532499);
   fCOD_91030->SetParLimits(0,0,0);
   fCOD_91030->SetParameter(1,0.03254496);
   fCOD_91030->SetParError(1,0.01794875);
   fCOD_91030->SetParLimits(1,0,0);
   fCOD_91030->SetParameter(2,-0.03586314);
   fCOD_91030->SetParError(2,0.01785139);
   fCOD_91030->SetParLimits(2,0,0);
   fCOD_91030->SetParameter(3,-0.02265754);
   fCOD_91030->SetParError(3,0.07761078);
   fCOD_91030->SetParLimits(3,0,0);
   fCOD_91030->SetParameter(4,0.0361885);
   fCOD_91030->SetParError(4,0.07849017);
   fCOD_91030->SetParLimits(4,0,0);
   fCOD_91030->SetParameter(5,-0.04490983);
   fCOD_91030->SetParError(5,0.1784785);
   fCOD_91030->SetParLimits(5,0,0);
   fCOD_91030->SetParameter(6,-0.2067644);
   fCOD_91030->SetParError(6,0.1780741);
   fCOD_91030->SetParLimits(6,0,0);
   fCOD_91030->SetParameter(7,0.02617337);
   fCOD_91030->SetParError(7,0.3186251);
   fCOD_91030->SetParLimits(7,0,0);
   fCOD_91030->SetParameter(8,-0.712657);
   fCOD_91030->SetParError(8,0.3196902);
   fCOD_91030->SetParLimits(8,0,0);
   fCOD_91030->SetParameter(9,-0.2520561);
   fCOD_91030->SetParError(9,0.4958092);
   fCOD_91030->SetParLimits(9,0,0);
   fCOD_91030->SetParameter(10,-0.04941454);
   fCOD_91030->SetParError(10,0.5039024);
   fCOD_91030->SetParLimits(10,0,0);
   fCOD_91030->SetParameter(11,-0.4972313);
   fCOD_91030->SetParError(11,0.6981156);
   fCOD_91030->SetParLimits(11,0,0);
   fCOD_91030->SetParameter(12,-0.9819607);
   fCOD_91030->SetParError(12,0.741193);
   fCOD_91030->SetParLimits(12,0,0);
   fCOD_91030->SetParameter(13,-1.034277);
   fCOD_91030->SetParError(13,0.9726438);
   fCOD_91030->SetParLimits(13,0,0);
   fCOD_91030->SetParameter(14,-0.7132066);
   fCOD_91030->SetParError(14,0.9877817);
   fCOD_91030->SetParLimits(14,0,0);
   fCOD_91030->SetParameter(15,1.690277);
   fCOD_91030->SetParError(15,1.277689);
   fCOD_91030->SetParLimits(15,0,0);
   fCOD_91030->SetParameter(16,-0.9873254);
   fCOD_91030->SetParError(16,1.284257);
   fCOD_91030->SetParLimits(16,0,0);
   fCOD_91030->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_91030);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
