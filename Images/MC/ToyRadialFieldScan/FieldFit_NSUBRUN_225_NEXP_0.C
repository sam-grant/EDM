void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:04 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-44.92035,45,64.39902);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1105[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1105[4] = {
   -25.82506,
   -4.153969,
   21.88566,
   45.30372};
   Double_t Graph0_fex1105[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1105[4] = {
   0.8753955,
   0.8753957,
   0.875396,
   0.8754062};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1105,Graph0_fy1105,Graph0_fex1105,Graph0_fey1105);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01105 = new TH1F("Graph_Graph01105","225 sub-runs",100,-36,36);
   Graph_Graph01105->SetMinimum(-33.98841);
   Graph_Graph01105->SetMaximum(53.46708);
   Graph_Graph01105->SetDirectory(0);
   Graph_Graph01105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01105->SetLineColor(ci);
   Graph_Graph01105->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01105->GetXaxis()->CenterTitle(true);
   Graph_Graph01105->GetXaxis()->SetLabelFont(42);
   Graph_Graph01105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01105->GetXaxis()->SetTitleFont(42);
   Graph_Graph01105->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01105->GetYaxis()->CenterTitle(true);
   Graph_Graph01105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01105->GetYaxis()->SetLabelFont(42);
   Graph_Graph01105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01105->GetYaxis()->SetTitleFont(42);
   Graph_Graph01105->GetZaxis()->SetLabelFont(42);
   Graph_Graph01105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01105);
   
   
   TF1 *mainFit1106 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1106->SetFillColor(19);
   mainFit1106->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1106->SetLineColor(ci);
   mainFit1106->SetLineWidth(2);
   mainFit1106->SetChisquare(4.183721);
   mainFit1106->SetNDF(2);
   mainFit1106->GetXaxis()->SetLabelFont(42);
   mainFit1106->GetXaxis()->SetTitleOffset(1);
   mainFit1106->GetXaxis()->SetTitleFont(42);
   mainFit1106->GetYaxis()->SetLabelFont(42);
   mainFit1106->GetYaxis()->SetTitleFont(42);
   mainFit1106->SetParameter(0,9.302587);
   mainFit1106->SetParError(0,0.4376992);
   mainFit1106->SetParLimits(0,0,0);
   mainFit1106->SetParameter(1,1.19713);
   mainFit1106->SetParError(1,0.01957455);
   mainFit1106->SetParLimits(1,0,0);
   mainFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1106);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.09");
   pt_LaTex = pt->AddText("  1.2#pm0.0196");
   pt_LaTex = pt->AddText("  9.3#pm0.438");
   pt_LaTex = pt->AddText(" 7.77#pm0.387");
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
   TLine *line = new TLine(-36,0,-7.770743,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.770743,-33.98841,-7.770743,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1107 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1107->SetFillColor(19);
   mainFit1107->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1107->SetLineColor(ci);
   mainFit1107->SetLineWidth(2);
   mainFit1107->SetChisquare(4.183721);
   mainFit1107->SetNDF(2);
   mainFit1107->GetXaxis()->SetLabelFont(42);
   mainFit1107->GetXaxis()->SetTitleOffset(1);
   mainFit1107->GetXaxis()->SetTitleFont(42);
   mainFit1107->GetYaxis()->SetLabelFont(42);
   mainFit1107->GetYaxis()->SetTitleFont(42);
   mainFit1107->SetParameter(0,9.302587);
   mainFit1107->SetParError(0,0.4376992);
   mainFit1107->SetParLimits(0,0,0);
   mainFit1107->SetParameter(1,1.19713);
   mainFit1107->SetParError(1,0.01957455);
   mainFit1107->SetParLimits(1,0,0);
   mainFit1107->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("225 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
