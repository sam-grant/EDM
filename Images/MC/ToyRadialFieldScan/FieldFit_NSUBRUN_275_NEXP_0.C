void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:08 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-44.79273,45,64.30918);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1129[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1129[4] = {
   -25.81781,
   -1.44151,
   19.80705,
   45.33373};
   Double_t Graph0_fex1129[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1129[4] = {
   0.7912657,
   0.7912544,
   0.7912646,
   0.7917988};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1129,Graph0_fy1129,Graph0_fex1129,Graph0_fey1129);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01129 = new TH1F("Graph_Graph01129","275 sub-runs",100,-36,36);
   Graph_Graph01129->SetMinimum(-33.88254);
   Graph_Graph01129->SetMaximum(53.39899);
   Graph_Graph01129->SetDirectory(0);
   Graph_Graph01129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01129->SetLineColor(ci);
   Graph_Graph01129->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01129->GetXaxis()->CenterTitle(true);
   Graph_Graph01129->GetXaxis()->SetLabelFont(42);
   Graph_Graph01129->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01129->GetXaxis()->SetTitleFont(42);
   Graph_Graph01129->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01129->GetYaxis()->CenterTitle(true);
   Graph_Graph01129->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01129->GetYaxis()->SetLabelFont(42);
   Graph_Graph01129->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01129->GetYaxis()->SetTitleFont(42);
   Graph_Graph01129->GetZaxis()->SetLabelFont(42);
   Graph_Graph01129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01129);
   
   
   TF1 *mainFit1130 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1130->SetFillColor(19);
   mainFit1130->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1130->SetLineColor(ci);
   mainFit1130->SetLineWidth(2);
   mainFit1130->SetChisquare(4.90754);
   mainFit1130->SetNDF(2);
   mainFit1130->GetXaxis()->SetLabelFont(42);
   mainFit1130->GetXaxis()->SetTitleOffset(1);
   mainFit1130->GetXaxis()->SetTitleFont(42);
   mainFit1130->GetYaxis()->SetLabelFont(42);
   mainFit1130->GetYaxis()->SetTitleFont(42);
   mainFit1130->SetParameter(0,9.47015);
   mainFit1130->SetParError(0,0.3956979);
   mainFit1130->SetParLimits(0,0,0);
   mainFit1130->SetParameter(1,1.173502);
   mainFit1130->SetParError(1,0.01769859);
   mainFit1130->SetParLimits(1,0,0);
   mainFit1130->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1130);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.45");
   pt_LaTex = pt->AddText(" 1.17#pm0.0177");
   pt_LaTex = pt->AddText(" 9.47#pm0.396");
   pt_LaTex = pt->AddText(" 8.07#pm0.358");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.069988,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.069988,-33.88254,-8.069988,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1131 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1131->SetFillColor(19);
   mainFit1131->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1131->SetLineColor(ci);
   mainFit1131->SetLineWidth(2);
   mainFit1131->SetChisquare(4.90754);
   mainFit1131->SetNDF(2);
   mainFit1131->GetXaxis()->SetLabelFont(42);
   mainFit1131->GetXaxis()->SetTitleOffset(1);
   mainFit1131->GetXaxis()->SetTitleFont(42);
   mainFit1131->GetYaxis()->SetLabelFont(42);
   mainFit1131->GetYaxis()->SetTitleFont(42);
   mainFit1131->SetParameter(0,9.47015);
   mainFit1131->SetParError(0,0.3956979);
   mainFit1131->SetParLimits(0,0,0);
   mainFit1131->SetParameter(1,1.173502);
   mainFit1131->SetParError(1,0.01769859);
   mainFit1131->SetParLimits(1,0,0);
   mainFit1131->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("275 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
