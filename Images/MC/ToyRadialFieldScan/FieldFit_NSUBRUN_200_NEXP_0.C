void FieldFit_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 17 18:03:17 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-81.22077,75,101.4294);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1125[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1125[6] = {
   -50.12493,
   -26.49017,
   -2.010375,
   22.02258,
   46.07487,
   70.33544};
   Double_t Graph0_fex1125[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1125[6] = {
   0.6541455,
   0.6526647,
   0.6526568,
   0.6526558,
   0.6526657,
   0.6522671};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01125 = new TH1F("Graph_Graph01125","200 sub-runs",100,-60,60);
   Graph_Graph01125->SetMinimum(-62.95575);
   Graph_Graph01125->SetMaximum(83.16439);
   Graph_Graph01125->SetDirectory(0);
   Graph_Graph01125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01125->SetLineColor(ci);
   Graph_Graph01125->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01125->GetXaxis()->CenterTitle(true);
   Graph_Graph01125->GetXaxis()->SetLabelFont(42);
   Graph_Graph01125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01125->GetXaxis()->SetTitleFont(42);
   Graph_Graph01125->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01125->GetYaxis()->CenterTitle(true);
   Graph_Graph01125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01125->GetYaxis()->SetLabelFont(42);
   Graph_Graph01125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01125->GetYaxis()->SetTitleFont(42);
   Graph_Graph01125->GetZaxis()->SetLabelFont(42);
   Graph_Graph01125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01125);
   
   
   TF1 *mainFit1126 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1126->SetFillColor(19);
   mainFit1126->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1126->SetLineColor(ci);
   mainFit1126->SetLineWidth(2);
   mainFit1126->SetChisquare(0.3199043);
   mainFit1126->SetNDF(4);
   mainFit1126->GetXaxis()->SetLabelFont(42);
   mainFit1126->GetXaxis()->SetTitleOffset(1);
   mainFit1126->GetXaxis()->SetTitleFont(42);
   mainFit1126->GetYaxis()->SetLabelFont(42);
   mainFit1126->GetYaxis()->SetTitleFont(42);
   mainFit1126->SetParameter(0,9.967806);
   mainFit1126->SetParError(0,0.2665217);
   mainFit1126->SetParLimits(0,0,0);
   mainFit1126->SetParameter(1,1.205764);
   mainFit1126->SetParError(1,0.007805445);
   mainFit1126->SetParLimits(1,0,0);
   mainFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1126);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.08");
   pt_LaTex = pt->AddText(" 1.21#pm0.00781");
   pt_LaTex = pt->AddText(" 9.97#pm0.267");
   pt_LaTex = pt->AddText(" 8.27#pm0.227");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.266798,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.266798,-62.95575,-8.266798,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1127 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1127->SetFillColor(19);
   mainFit1127->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1127->SetLineColor(ci);
   mainFit1127->SetLineWidth(2);
   mainFit1127->SetChisquare(0.3199043);
   mainFit1127->SetNDF(4);
   mainFit1127->GetXaxis()->SetLabelFont(42);
   mainFit1127->GetXaxis()->SetTitleOffset(1);
   mainFit1127->GetXaxis()->SetTitleFont(42);
   mainFit1127->GetYaxis()->SetLabelFont(42);
   mainFit1127->GetYaxis()->SetTitleFont(42);
   mainFit1127->SetParameter(0,9.967806);
   mainFit1127->SetParError(0,0.2665217);
   mainFit1127->SetParLimits(0,0,0);
   mainFit1127->SetParameter(1,1.205764);
   mainFit1127->SetParError(1,0.007805445);
   mainFit1127->SetParLimits(1,0,0);
   mainFit1127->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("200 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
