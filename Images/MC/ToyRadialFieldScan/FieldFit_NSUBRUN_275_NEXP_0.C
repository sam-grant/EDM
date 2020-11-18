void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 17 18:03:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-80.54065,75,99.71884);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1173[6] = {
   -49.94149,
   -26.51744,
   -2.00543,
   22.10716,
   45.76613,
   69.11968};
   Double_t Graph0_fex1173[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1173[6] = {
   0.5559163,
   0.5559492,
   0.5559164,
   0.5558897,
   0.5559162,
   0.5559035};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","275 sub-runs",100,-60,60);
   Graph_Graph01173->SetMinimum(-62.5147);
   Graph_Graph01173->SetMaximum(81.69289);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
   
   TF1 *mainFit1174 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1174->SetFillColor(19);
   mainFit1174->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1174->SetLineColor(ci);
   mainFit1174->SetLineWidth(2);
   mainFit1174->SetChisquare(1.788312);
   mainFit1174->SetNDF(4);
   mainFit1174->GetXaxis()->SetLabelFont(42);
   mainFit1174->GetXaxis()->SetTitleOffset(1);
   mainFit1174->GetXaxis()->SetTitleFont(42);
   mainFit1174->GetYaxis()->SetLabelFont(42);
   mainFit1174->GetYaxis()->SetTitleFont(42);
   mainFit1174->SetParameter(0,9.754783);
   mainFit1174->SetParError(0,0.2269514);
   mainFit1174->SetParLimits(0,0,0);
   mainFit1174->SetParameter(1,1.19467);
   mainFit1174->SetParError(1,0.006644459);
   mainFit1174->SetParLimits(1,0,0);
   mainFit1174->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1174);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.447");
   pt_LaTex = pt->AddText(" 1.19#pm0.00664");
   pt_LaTex = pt->AddText(" 9.75#pm0.227");
   pt_LaTex = pt->AddText(" 8.17#pm0.195");
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
   TLine *line = new TLine(-60,0,-8.165253,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.165253,-62.5147,-8.165253,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1175 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1175->SetFillColor(19);
   mainFit1175->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1175->SetLineColor(ci);
   mainFit1175->SetLineWidth(2);
   mainFit1175->SetChisquare(1.788312);
   mainFit1175->SetNDF(4);
   mainFit1175->GetXaxis()->SetLabelFont(42);
   mainFit1175->GetXaxis()->SetTitleOffset(1);
   mainFit1175->GetXaxis()->SetTitleFont(42);
   mainFit1175->GetYaxis()->SetLabelFont(42);
   mainFit1175->GetYaxis()->SetTitleFont(42);
   mainFit1175->SetParameter(0,9.754783);
   mainFit1175->SetParError(0,0.2269514);
   mainFit1175->SetParLimits(0,0,0);
   mainFit1175->SetParameter(1,1.19467);
   mainFit1175->SetParError(1,0.006644459);
   mainFit1175->SetParLimits(1,0,0);
   mainFit1175->Draw("same");
   
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
