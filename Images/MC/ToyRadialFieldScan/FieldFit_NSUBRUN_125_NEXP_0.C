void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 10 15:16:17 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-80.59678,75,100.8417);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1077[6] = {
   -49.53265,
   -26.09634,
   -3.173087,
   21.45721,
   47.23206,
   69.77768};
   Double_t Graph0_fex1077[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1077[6] = {
   0.8243757,
   0.8242896,
   0.8243327,
   0.8242838,
   0.8242409,
   0.8242804};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","125 sub-runs",100,-60,60);
   Graph_Graph01077->SetMinimum(-62.45293);
   Graph_Graph01077->SetMaximum(82.69786);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
   
   TF1 *mainFit1078 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1078->SetFillColor(19);
   mainFit1078->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1078->SetLineColor(ci);
   mainFit1078->SetLineWidth(2);
   mainFit1078->SetChisquare(5.044701);
   mainFit1078->SetNDF(4);
   mainFit1078->GetXaxis()->SetLabelFont(42);
   mainFit1078->GetXaxis()->SetTitleOffset(1);
   mainFit1078->GetXaxis()->SetTitleFont(42);
   mainFit1078->GetYaxis()->SetLabelFont(42);
   mainFit1078->GetYaxis()->SetTitleFont(42);
   mainFit1078->SetParameter(0,9.944166);
   mainFit1078->SetParError(0,0.3365192);
   mainFit1078->SetParLimits(0,0,0);
   mainFit1078->SetParameter(1,1.201669);
   mainFit1078->SetParError(1,0.009852405);
   mainFit1078->SetParLimits(1,0,0);
   mainFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1078);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.26");
   pt_LaTex = pt->AddText("  1.2#pm0.00985");
   pt_LaTex = pt->AddText(" 9.94#pm0.337");
   pt_LaTex = pt->AddText(" 8.28#pm0.288");
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
   TLine *line = new TLine(-60,0,-8.275298,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.275298,-62.45293,-8.275298,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1079 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1079->SetFillColor(19);
   mainFit1079->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1079->SetLineColor(ci);
   mainFit1079->SetLineWidth(2);
   mainFit1079->SetChisquare(5.044701);
   mainFit1079->SetNDF(4);
   mainFit1079->GetXaxis()->SetLabelFont(42);
   mainFit1079->GetXaxis()->SetTitleOffset(1);
   mainFit1079->GetXaxis()->SetTitleFont(42);
   mainFit1079->GetYaxis()->SetLabelFont(42);
   mainFit1079->GetYaxis()->SetTitleFont(42);
   mainFit1079->SetParameter(0,9.944166);
   mainFit1079->SetParError(0,0.3365192);
   mainFit1079->SetParLimits(0,0,0);
   mainFit1079->SetParameter(1,1.201669);
   mainFit1079->SetParError(1,0.009852405);
   mainFit1079->SetParLimits(1,0,0);
   mainFit1079->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("125 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
