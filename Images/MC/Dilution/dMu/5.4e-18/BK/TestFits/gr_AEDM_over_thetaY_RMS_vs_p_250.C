void gr_AEDM_over_thetaY_RMS_vs_p_250()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 25 15:52:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->Range(0.1593946,-0.003125,0.8768201,0.028125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[11] = {
   0.1444744,
   0.2089161,
   0.2814974,
   0.3591325,
   0.4384704,
   0.5181275,
   0.5970599,
   0.6765344,
   0.7556617,
   0.8359338,
   0.8917156};
   Double_t _fy1005[11] = {
   -0.0005267959,
   0.0058969,
   0.005965593,
   0.007838268,
   0.009115272,
   0.0113244,
   0.01176223,
   0.01092228,
   0.008547314,
   0.01538675,
   -0.002954041};
   Double_t _fex1005[11] = {
   2.621648e-05,
   2.21047e-05,
   1.603147e-05,
   1.565345e-05,
   1.67024e-05,
   1.84633e-05,
   2.14743e-05,
   2.659886e-05,
   3.417968e-05,
   4.194012e-05,
   5.086203e-05};
   Double_t _fey1005[11] = {
   -0.003510842,
   0.001419016,
   0.0009921058,
   0.0009627833,
   0.001027824,
   0.001136747,
   0.001327046,
   0.001643769,
   0.002116699,
   0.002666267,
   -0.007593656};
   TGraphErrors *gre = new TGraphErrors(11,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [normalised units]; A_{EDM}/#sigma_{#theta_{y}} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,0.06971637,0.9664983);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.025);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Decay vertex momentum [normalised units]");
   Graph_Graph1005->GetXaxis()->SetRange(19,82);
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle(" A_{EDM}/#sigma_{#theta_{y}} / 250 MeV");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *fitAsym 1006 = new TF1("fitAsym ","",0.2398377,0.8, TF1::EAddToList::kNo);
   fitAsym 1006->SetFillColor(19);
   fitAsym 1006->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fitAsym 1006->SetLineColor(ci);
   fitAsym 1006->SetLineWidth(3);
   fitAsym 1006->SetChisquare(2.602627);
   fitAsym 1006->SetNDF(4);
   fitAsym 1006->GetXaxis()->SetLabelFont(42);
   fitAsym 1006->GetXaxis()->SetTitleOffset(1);
   fitAsym 1006->GetXaxis()->SetTitleFont(42);
   fitAsym 1006->GetYaxis()->SetLabelFont(42);
   fitAsym 1006->GetYaxis()->SetTitleFont(42);
   fitAsym 1006->SetParameter(0,2.395452);
   fitAsym 1006->SetParError(0,15.36122);
   fitAsym 1006->SetParLimits(0,0,0);
   fitAsym 1006->SetParameter(1,34.31367);
   fitAsym 1006->SetParError(1,152.6813);
   fitAsym 1006->SetParLimits(1,0,0);
   fitAsym 1006->SetParameter(2,1433.221);
   fitAsym 1006->SetParError(2,5603.138);
   fitAsym 1006->SetParLimits(2,0,0);
   fitAsym 1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fitAsym 1006);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.655,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.603 / 4");
   ptstats_LaTex = ptstats->AddText("p0       = 2.395 #pm 15.36 ");
   ptstats_LaTex = ptstats->AddText("p1       = 34.31 #pm 152.7 ");
   ptstats_LaTex = ptstats->AddText("p2       =  1433 #pm  5603 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
